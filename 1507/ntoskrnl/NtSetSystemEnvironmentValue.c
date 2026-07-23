/*
 * XREFs of NtSetSystemEnvironmentValue @ 0x1406F6D78
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404FF2E0 (RtlUnicodeStringToAnsiString.c)
 *     RtlxUnicodeStringToOemSize @ 0x1406C7C6C (RtlxUnicodeStringToOemSize.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetSystemEnvironmentValue(PUNICODE_STRING VariableName, PUNICODE_STRING Value)
{
  unsigned __int16 v2; // ax
  wchar_t *v4; // r8
  unsigned __int16 Length; // si
  wchar_t *v6; // rdx
  unsigned __int64 v7; // rbx
  int v8; // ebx
  unsigned __int64 v9; // rbx
  int v10; // ebx
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // ebx
  signed __int32 v17; // eax
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  _STRING DestinationString; // [rsp+28h] [rbp-70h] BYREF
  int v21; // [rsp+38h] [rbp-60h]
  _STRING v22; // [rsp+40h] [rbp-58h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-48h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-38h] BYREF
  int v25; // [rsp+78h] [rbp-20h]
  int v26; // [rsp+7Ch] [rbp-1Ch]
  char PreviousMode; // [rsp+B0h] [rbp+18h]

  DestinationString.Buffer = 0LL;
  v22.Buffer = 0LL;
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
  v26 = v7;
  DestinationString.Buffer = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v7, 0x72766E45u);
  if ( !DestinationString.Buffer )
    return -1073741670;
  DestinationString.MaximumLength = v7;
  v8 = RtlUnicodeStringToAnsiString(&DestinationString, &UnicodeString, 0);
  v21 = v8;
  if ( v8 >= 0 )
  {
    if ( (_BYTE)NlsMbCodePageTag )
      LODWORD(v9) = RtlxUnicodeStringToOemSize(&SourceString);
    else
      v9 = ((unsigned __int64)Length + 2) >> 1;
    v25 = v9;
    v22.Buffer = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v9, 0x72766E45u);
    if ( v22.Buffer )
    {
      v22.MaximumLength = v9;
      v10 = RtlUnicodeStringToAnsiString(&v22, &SourceString, 0);
      v21 = v10;
      if ( v10 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v13 = KeGetCurrentThread();
        v14 = KeAbPreAcquire((ULONG_PTR)&ExpEnvironmentLock, 0LL, 0LL, v11);
        v15 = v14;
        if ( !_interlockedbittestandreset((volatile signed __int32 *)&ExpEnvironmentLock, 0) )
          ExpAcquireFastMutexContended((ULONG_PTR)&ExpEnvironmentLock, v14);
        if ( v15 )
          *(_BYTE *)(v15 + 26) |= 1u;
        qword_140325228 = (__int64)v13;
        v16 = HalSetEnvironmentVariable(DestinationString.Buffer, v22.Buffer);
        qword_140325228 = 0LL;
        v17 = _InterlockedCompareExchange((volatile signed __int32 *)&ExpEnvironmentLock, 1, 0);
        if ( v17 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&ExpEnvironmentLock, v17);
        KeAbPostRelease((ULONG_PTR)&ExpEnvironmentLock);
        v18 = KeGetCurrentThread();
        v19 = v18->KernelApcDisable + 1;
        v18->KernelApcDisable = v19;
        if ( !v19
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
          && !v18->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        ExFreePoolWithTag(v22.Buffer, 0);
        return v16 != 0 ? 0xC000009A : 0;
      }
      else
      {
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        ExFreePoolWithTag(v22.Buffer, 0);
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
