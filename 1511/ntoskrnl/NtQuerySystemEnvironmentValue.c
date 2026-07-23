/*
 * XREFs of NtQuerySystemEnvironmentValue @ 0x140672028
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitString @ 0x1400E561C (RtlInitString.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403B8140 (RtlUnicodeStringToAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403E1384 (RtlAnsiStringToUnicodeString.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     RtlxUnicodeStringToOemSize @ 0x140644BE0 (RtlxUnicodeStringToOemSize.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQuerySystemEnvironmentValue(PUNICODE_STRING Name, PWSTR Value, ULONG Length, PULONG ReturnLength)
{
  unsigned __int16 v5; // r14
  unsigned __int16 v7; // bx
  wchar_t *v9; // rdx
  _WORD *v10; // rcx
  unsigned __int64 v11; // rbx
  int v12; // ebx
  PVOID PoolWithTag; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int EnvironmentVariable; // ebx
  NTSTATUS v16; // ebx
  char PreviousMode; // [rsp+21h] [rbp-67h]
  UNICODE_STRING UnicodeString; // [rsp+28h] [rbp-60h] BYREF
  _STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  int v20; // [rsp+48h] [rbp-40h]
  int v21; // [rsp+4Ch] [rbp-3Ch]
  PVOID P; // [rsp+60h] [rbp-28h]

  v5 = Length;
  DestinationString.Buffer = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)Name & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    UnicodeString = *Name;
    v7 = _mm_cvtsi128_si32((__m128i)UnicodeString);
    if ( !v7 )
      return -1073741819;
    if ( ((__int64)UnicodeString.Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (wchar_t *)((char *)UnicodeString.Buffer + v7);
    if ( (unsigned __int64)v9 > MmUserProbeAddress || v9 < UnicodeString.Buffer )
      *(_BYTE *)MmUserProbeAddress = 0;
    ProbeForWrite(Value, (unsigned __int16)Length, 2u);
    if ( ReturnLength )
    {
      v10 = ReturnLength;
      if ( (unsigned __int64)ReturnLength >= MmUserProbeAddress )
        v10 = (_WORD *)MmUserProbeAddress;
      *v10 = *v10;
      v7 = UnicodeString.Length;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    UnicodeString = *Name;
    v7 = UnicodeString.Length;
  }
  if ( (_BYTE)NlsMbCodePageTag )
    LODWORD(v11) = RtlxUnicodeStringToOemSize(&UnicodeString);
  else
    v11 = ((unsigned __int64)v7 + 2) >> 1;
  v21 = v11;
  DestinationString.Buffer = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v11, 0x72766E45u);
  if ( !DestinationString.Buffer )
    return -1073741670;
  DestinationString.MaximumLength = v11;
  v12 = RtlUnicodeStringToAnsiString(&DestinationString, &UnicodeString, 0);
  v20 = v12;
  if ( v12 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x72766E45u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
      EnvironmentVariable = HalGetEnvironmentVariable(DestinationString.Buffer, 1024LL, PoolWithTag);
      ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      if ( EnvironmentVariable )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        return -1073741823;
      }
      else
      {
        RtlInitString(&DestinationString, (PCSZ)PoolWithTag);
        UnicodeString.Buffer = Value;
        UnicodeString.MaximumLength = v5;
        UnicodeString.Length = 0;
        v16 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 0);
        v20 = v16;
        if ( ReturnLength )
          *(_WORD *)ReturnLength = UnicodeString.Length;
        ExFreePoolWithTag(PoolWithTag, 0);
        return v16;
      }
    }
    else
    {
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      return -1073741670;
    }
  }
  else
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    return v12;
  }
}
