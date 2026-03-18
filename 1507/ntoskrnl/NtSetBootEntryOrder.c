/*
 * XREFs of NtSetBootEntryOrder @ 0x1406F65CC
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
 *     IoSetEnvironmentVariableEx @ 0x140678BA8 (IoSetEnvironmentVariableEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetBootEntryOrder(PULONG Ids, PULONG Count)
{
  __int64 v2; // r9
  __int64 v3; // rsi
  PVOID PoolWithTag; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  unsigned int v9; // r15d
  char *v10; // rcx
  unsigned int i; // ecx
  struct _KTHREAD *v12; // rax
  struct _KTHREAD *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdi
  NTSTATUS v16; // edi
  signed __int32 v17; // eax
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax

  v3 = (unsigned int)Count;
  PoolWithTag = 0LL;
  if ( dword_1403254D0 != 2 )
    return -1073741822;
  if ( (unsigned int)Count > 0x3FFFFFFF )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, CurrentThread->PreviousMode) )
    return -1073741727;
  if ( (_DWORD)v3 )
  {
    v9 = v3;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 2 * v3, 0x72766E45u);
    if ( !PoolWithTag )
      return -1073741670;
    if ( PreviousMode && v9 * 4 )
    {
      if ( ((unsigned __int8)Ids & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = (char *)&Ids[v9];
      if ( (unsigned __int64)v10 > MmUserProbeAddress || v10 < (char *)Ids )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    for ( i = 0; i < (unsigned int)v3; ++i )
    {
      if ( Ids[i] > 0xFFFF )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        return -1073741811;
      }
      *((_WORD *)PoolWithTag + i) = Ids[i];
    }
  }
  v12 = KeGetCurrentThread();
  --v12->KernelApcDisable;
  v13 = KeGetCurrentThread();
  v14 = KeAbPreAcquire((ULONG_PTR)&ExpEnvironmentLock, 0LL, 0LL, v2);
  v15 = v14;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&ExpEnvironmentLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&ExpEnvironmentLock, v14);
  if ( v15 )
    *(_BYTE *)(v15 + 26) |= 1u;
  qword_140325228 = (__int64)v13;
  v16 = IoSetEnvironmentVariableEx(
          (__int64)L"BootOrder",
          (__int64)&EfiBootVariablesGuid,
          (__int64)PoolWithTag,
          2 * (int)v3,
          1);
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
  if ( v16 == -1073741568 )
    v16 = 0;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v16;
}
