/*
 * XREFs of NtSetSystemEnvironmentValue @ 0x1406B577C
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403F6230 (RtlUnicodeStringToAnsiString.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     RtlxUnicodeStringToOemSize @ 0x1406858F8 (RtlxUnicodeStringToOemSize.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetSystemEnvironmentValue(PUNICODE_STRING VariableName, PUNICODE_STRING Value)
{
  unsigned __int16 v2; // ax
  wchar_t *v4; // r8
  unsigned __int16 Length; // di
  wchar_t *v6; // rdx
  unsigned __int64 v7; // rbx
  int v8; // ebx
  unsigned __int64 v9; // rbx
  int v10; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _STRING DestinationString; // [rsp+28h] [rbp-60h] BYREF
  int v17; // [rsp+38h] [rbp-50h]
  _STRING v18; // [rsp+40h] [rbp-48h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-38h] BYREF
  UNICODE_STRING SourceString; // [rsp+60h] [rbp-28h] BYREF
  int v21; // [rsp+70h] [rbp-18h]
  int v22; // [rsp+74h] [rbp-14h]
  char PreviousMode; // [rsp+A0h] [rbp+18h]

  DestinationString.Buffer = 0LL;
  v18.Buffer = 0LL;
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
    if ( (unsigned __int64)v4 > 0x7FFFFFFF0000LL || v4 < UnicodeString.Buffer )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( ((unsigned __int8)Value & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    SourceString = *Value;
    Length = _mm_cvtsi128_si32((__m128i)SourceString);
    if ( !Length )
      return -1073741670;
    if ( ((__int64)SourceString.Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = (wchar_t *)((char *)SourceString.Buffer + Length);
    if ( (unsigned __int64)v6 > 0x7FFFFFFF0000LL || v6 < SourceString.Buffer )
      MEMORY[0x7FFFFFFF0000] = 0;
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
  v21 = v7;
  DestinationString.Buffer = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v7, 0x72766E45u);
  if ( !DestinationString.Buffer )
    return -1073741670;
  DestinationString.MaximumLength = v7;
  v8 = RtlUnicodeStringToAnsiString(&DestinationString, &UnicodeString, 0);
  v17 = v8;
  if ( v8 >= 0 )
  {
    if ( (_BYTE)NlsMbCodePageTag )
      LODWORD(v9) = RtlxUnicodeStringToOemSize(&SourceString);
    else
      v9 = ((unsigned __int64)Length + 2) >> 1;
    v22 = v9;
    v18.Buffer = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v9, 0x72766E45u);
    if ( v18.Buffer )
    {
      v18.MaximumLength = v9;
      v10 = RtlUnicodeStringToAnsiString(&v18, &SourceString, 0);
      v17 = v10;
      if ( v10 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
        v12 = HalSetEnvironmentVariable(DestinationString.Buffer, v18.Buffer);
        ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        ExFreePoolWithTag(v18.Buffer, 0);
        return v12 != 0 ? 0xC000009A : 0;
      }
      else
      {
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        ExFreePoolWithTag(v18.Buffer, 0);
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
