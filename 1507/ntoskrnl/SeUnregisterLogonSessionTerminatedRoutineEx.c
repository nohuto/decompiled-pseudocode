/*
 * XREFs of SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1406D6110
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeUnregisterLogonSessionTerminatedRoutineEx(PVOID a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v8; // rbp
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rdi
  PVOID *v12; // rdi
  PVOID *v13; // rcx
  signed __int32 v14; // eax
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  signed __int32 v17; // eax
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax

  v4 = 0;
  if ( !a1 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = KeGetCurrentThread();
  v9 = KeAbPreAcquire((ULONG_PTR)&SepRmNotifyMutex, 0LL, 0LL, a4);
  v10 = _interlockedbittestandreset((volatile signed __int32 *)&SepRmNotifyMutex, 0);
  v11 = v9;
  if ( !v10 )
    ExpAcquireFastMutexContended((ULONG_PTR)&SepRmNotifyMutex, v9);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = (PVOID *)SeFileSystemNotifyRoutinesExHead;
  v13 = &SeFileSystemNotifyRoutinesExHead;
  qword_14036A8E0 = (__int64)v8;
  if ( !SeFileSystemNotifyRoutinesExHead )
    goto LABEL_18;
  do
  {
    if ( v12[1] == a1 )
      break;
    v13 = v12;
    v12 = (PVOID *)*v12;
  }
  while ( v12 );
  if ( v12 )
  {
    *v13 = *v12;
    qword_14036A8E0 = 0LL;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)&SepRmNotifyMutex, 1, 0);
    if ( v14 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&SepRmNotifyMutex, v14);
    KeAbPostRelease((ULONG_PTR)&SepRmNotifyMutex);
    v15 = KeGetCurrentThread();
    v16 = v15->KernelApcDisable + 1;
    v15->KernelApcDisable = v16;
    if ( !v16
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
      && !v15->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ExFreePoolWithTag(v12, 0);
  }
  else
  {
LABEL_18:
    qword_14036A8E0 = 0LL;
    v17 = _InterlockedCompareExchange((volatile signed __int32 *)&SepRmNotifyMutex, 1, 0);
    if ( v17 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&SepRmNotifyMutex, v17);
    KeAbPostRelease((ULONG_PTR)&SepRmNotifyMutex);
    v18 = KeGetCurrentThread();
    v19 = v18->KernelApcDisable + 1;
    v18->KernelApcDisable = v19;
    if ( !v19
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
      && !v18->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return (unsigned int)-1073741275;
  }
  return v4;
}
