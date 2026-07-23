/*
 * XREFs of NtQuerySystemEnvironmentValue @ 0x1406F61FC
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     RtlInitString @ 0x14011A9A4 (RtlInitString.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404FF2E0 (RtlUnicodeStringToAnsiString.c)
 *     RtlxUnicodeStringToOemSize @ 0x1406C7C6C (RtlxUnicodeStringToOemSize.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQuerySystemEnvironmentValue(PUNICODE_STRING Name, PWSTR Value, ULONG Length, PULONG ReturnLength)
{
  unsigned __int16 v5; // r12
  unsigned __int16 v7; // bx
  wchar_t *v9; // rdx
  _WORD *v10; // rcx
  unsigned __int64 v11; // rbx
  int v12; // ebx
  PVOID PoolWithTag; // rbx
  __int64 v14; // r9
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdi
  int EnvironmentVariable; // edi
  signed __int32 v20; // eax
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  NTSTATUS v23; // edi
  char PreviousMode; // [rsp+21h] [rbp-67h]
  UNICODE_STRING UnicodeString; // [rsp+28h] [rbp-60h] BYREF
  _STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  int v27; // [rsp+48h] [rbp-40h]
  int v28; // [rsp+4Ch] [rbp-3Ch]
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
  v28 = v11;
  DestinationString.Buffer = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v11, 0x72766E45u);
  if ( !DestinationString.Buffer )
    return -1073741670;
  DestinationString.MaximumLength = v11;
  v12 = RtlUnicodeStringToAnsiString(&DestinationString, &UnicodeString, 0);
  v27 = v12;
  if ( v12 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x72766E45u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v16 = KeGetCurrentThread();
      v17 = KeAbPreAcquire((ULONG_PTR)&ExpEnvironmentLock, 0LL, 0LL, v14);
      v18 = v17;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&ExpEnvironmentLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&ExpEnvironmentLock, v17);
      if ( v18 )
        *(_BYTE *)(v18 + 26) |= 1u;
      qword_140325228 = (__int64)v16;
      EnvironmentVariable = HalGetEnvironmentVariable(DestinationString.Buffer, 1024LL, PoolWithTag);
      qword_140325228 = 0LL;
      v20 = _InterlockedCompareExchange((volatile signed __int32 *)&ExpEnvironmentLock, 1, 0);
      if ( v20 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&ExpEnvironmentLock, v20);
      KeAbPostRelease((ULONG_PTR)&ExpEnvironmentLock);
      v21 = KeGetCurrentThread();
      v22 = v21->KernelApcDisable + 1;
      v21->KernelApcDisable = v22;
      if ( !v22
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
        && !v21->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
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
        v23 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 0);
        v27 = v23;
        if ( ReturnLength )
          *(_WORD *)ReturnLength = UnicodeString.Length;
        ExFreePoolWithTag(PoolWithTag, 0);
        return v23;
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
