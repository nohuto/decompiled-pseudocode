/*
 * XREFs of PspGetJobLockHierarchyForDeletion @ 0x14053CC68
 * Callers:
 *     PspJobDelete @ 0x140120A58 (PspJobDelete.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall PspGetJobLockHierarchyForDeletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v7; // rax
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int16 v14; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&PspJobAssignmentLock, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&PspJobAssignmentLock, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&PspJobAssignmentLock, v7, (ULONG_PTR)&PspJobAssignmentLock, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = *(_QWORD *)(a1 + 1064);
  v12 = 0;
  if ( v11 )
  {
    *(_QWORD *)(a2 + 8) = v11;
    v12 = 1;
    *(_BYTE *)(a2 + 16) = 0;
  }
  v13 = 2LL * v12;
  *(_QWORD *)(a2 + 8 * v13 + 8) = a1;
  *(_BYTE *)(a2 + 8 * v13 + 16) = 0;
  *(_DWORD *)a2 = v12 + 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobAssignmentLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspJobAssignmentLock);
  KeAbPostRelease((ULONG_PTR)&PspJobAssignmentLock);
  v14 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v14;
  if ( !v14 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
}
