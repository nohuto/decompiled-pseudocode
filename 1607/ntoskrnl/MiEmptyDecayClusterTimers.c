/*
 * XREFs of MiEmptyDecayClusterTimers @ 0x1400BC1A0
 * Callers:
 *     MiWorkingSetManager @ 0x1400BBD98 (MiWorkingSetManager.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiRemoveDecayClusterTimer @ 0x1400963B8 (MiRemoveDecayClusterTimer.c)
 *     MiRelinkStandbyPage @ 0x1400BC3A4 (MiRelinkStandbyPage.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiEmptyDecayClusterTimers(__int64 a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  char v3; // r15
  __int64 v4; // r15
  __int64 v5; // r12
  volatile __int64 *v6; // rsi
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned int v14; // ebx
  volatile signed __int64 *v15[4]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+80h] [rbp+8h]

  v16 = a1;
  v1 = a1;
  LOBYTE(a1) = 1;
  result = KiQueryUnbiasedInterruptTime(a1);
  if ( (unsigned __int64)(result - *(_QWORD *)(v1 + 4272)) < 0x989680 )
    return result;
  v3 = *(_DWORD *)(v1 + 4264) + 1;
  *(_QWORD *)(v1 + 4272) = result;
  v4 = v3 & 3;
  v5 = v1 + 8 * v4;
  result = *(_QWORD *)(v5 + 4232) >> 33;
  if ( result == 0x7FFFFFFF )
    goto LABEL_15;
  v6 = (volatile __int64 *)(v1 + 2216);
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v15[1] = (volatile signed __int64 *)(v1 + 2216);
    v15[0] = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v15, v6);
    }
    else
    {
      v8 = (_QWORD *)_InterlockedExchange64(v6, (__int64)v15);
      if ( v8 )
        KxWaitForLockOwnerShip((__int64)v15, v8);
    }
    v9 = *(_QWORD *)(v5 + 4232) >> 33;
    if ( v9 == 0x7FFFFFFF )
      break;
    v10 = 48 * (v9 + qword_1403273A0) - 0x58000000000LL;
    v11 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v10 + 16);
    if ( v11 == v12 )
    {
      MiUnlinkPageFromList(v10, 1);
      *(_BYTE *)(v10 + 35) &= ~8u;
      MiRemoveDecayClusterTimer(v10);
      goto LABEL_11;
    }
    v13 = 48 * v11 - 0x58000000000LL;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
LABEL_11:
      KxReleaseQueuedSpinLock(v15);
      __writecr8(CurrentIrql);
    }
    else
    {
      v14 = *(_BYTE *)(v13 + 35) & 7;
      KxReleaseQueuedSpinLock(v15);
      MiRelinkStandbyPage(v13, v14, 1022LL);
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
    }
  }
  KxReleaseQueuedSpinLock(v15);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  v1 = v16;
LABEL_15:
  *(_DWORD *)(v1 + 4264) = v4;
  return result;
}
