/*
 * XREFs of NtSetSystemEnvironmentValue @ 0x140672934
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403B8140 (RtlUnicodeStringToAnsiString.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     RtlxUnicodeStringToOemSize @ 0x140644BE0 (RtlxUnicodeStringToOemSize.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetSystemEnvironmentValue(PUNICODE_STRING VariableName, PUNICODE_STRING Value)
{
  unsigned __int16 v2; // ax
  wchar_t *v4; // r9
  unsigned __int16 Length; // di
  wchar_t *v6; // rdx
  unsigned __int64 v7; // rbx
  int v8; // ebx
  unsigned __int64 v9; // rbx
  int v10; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v12; // ebx
  _STRING DestinationString; // [rsp+28h] [rbp-60h] BYREF
  int v14; // [rsp+38h] [rbp-50h]
  _STRING v15; // [rsp+40h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-38h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-28h] BYREF
  int v18; // [rsp+78h] [rbp-10h]
  int v19; // [rsp+7Ch] [rbp-Ch]
  char PreviousMode; // [rsp+A0h] [rbp+18h]

  DestinationString.Buffer = 0LL;
  v15.Buffer = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)VariableName & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    UnicodeString = *VariableName;
    v2 = _mm_cvtsi128_si32((__m128i)UnicodeString);
    if ( !v2 )
      return -1073741670;
    if ( ((__int64)UnicodeString.Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v4 = (wchar_t *)((char *)UnicodeString.Buffer + v2);
    if ( (unsigned __int64)v4 > MmUserProbeAddress || v4 < UnicodeString.Buffer )
      *(_BYTE *)MmUserProbeAddress = 0;
    if ( ((unsigned __int8)Value & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    SourceString = *Value;
    Length = _mm_cvtsi128_si32((__m128i)SourceString);
    if ( !Length )
      return -1073741670;
    if ( ((__int64)SourceString.Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = (wchar_t *)((char *)SourceString.Buffer + Length);
    if ( (unsigned __int64)v6 > MmUserProbeAddress || v6 < SourceString.Buffer )
      *(_BYTE *)MmUserProbeAddress = 0;
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    UnicodeString = *VariableName;
    SourceString = *Value;
    Length = SourceString.Length;
  }
  if ( (_BYTE)NlsMbCodePageTag )
    LODWORD(v7) = RtlxUnicodeStringToOemSize(&UnicodeString);
  else
    v7 = ((unsigned __int64)UnicodeString.Length + 2) >> 1;
  v19 = v7;
  DestinationString.Buffer = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v7, 0x72766E45u);
  if ( !DestinationString.Buffer )
    return -1073741670;
  DestinationString.MaximumLength = v7;
  v8 = RtlUnicodeStringToAnsiString(&DestinationString, &UnicodeString, 0);
  v14 = v8;
  if ( v8 >= 0 )
  {
    if ( (_BYTE)NlsMbCodePageTag )
      LODWORD(v9) = RtlxUnicodeStringToOemSize(&SourceString);
    else
      v9 = ((unsigned __int64)Length + 2) >> 1;
    v18 = v9;
    v15.Buffer = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v9, 0x72766E45u);
    if ( v15.Buffer )
    {
      v15.MaximumLength = v9;
      v10 = RtlUnicodeStringToAnsiString(&v15, &SourceString, 0);
      v14 = v10;
      if ( v10 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
        v12 = HalSetEnvironmentVariable(DestinationString.Buffer, v15.Buffer);
        ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        ExFreePoolWithTag(v15.Buffer, 0);
        return v12 != 0 ? 0xC000009A : 0;
      }
      else
      {
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        ExFreePoolWithTag(v15.Buffer, 0);
        return v10;
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
    return v8;
  }
}
