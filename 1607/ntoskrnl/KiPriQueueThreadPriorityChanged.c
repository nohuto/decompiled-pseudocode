/*
 * XREFs of KiPriQueueThreadPriorityChanged @ 0x1400A6028
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x14007EAE4 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x14007EE14 (KeSetBasePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400D06E0 (KeSetActualBasePriorityThread.c)
 * Callees:
 *     KiActivateWaiterQueueWithNoLocks @ 0x14007E678 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterPriQueue @ 0x14007E814 (KiActivateWaiterPriQueue.c)
 *     KiProcessThreadWaitList @ 0x14008D420 (KiProcessThreadWaitList.c)
 */

void __fastcall KiPriQueueThreadPriorityChanged(volatile signed __int32 *a1, __int64 a2)
{
  bool v3; // r11
  __int64 v5; // r10
  __int64 v6; // rbx
  int v7; // r8d
  __int64 v8; // rcx
  signed __int8 v9; // cf
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = 0;
  v5 = *(char *)(a2 + 563);
  v6 = (unsigned __int8)*(_DWORD *)(a2 + 540);
  if ( (_DWORD)v6 == (_DWORD)v5 )
    goto LABEL_2;
  v7 = *(_DWORD *)(a2 + 540) & 0x100;
  if ( !v7 )
  {
    v8 = *(_QWORD *)(a2 + 232);
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 4 * v6 + 536));
    _InterlockedAdd((volatile signed __int32 *)(v8 + 4 * v5 + 536), 1u);
    v3 = (int)v5 < (int)v6;
  }
  *(_DWORD *)(a2 + 540) = v7 | (unsigned __int8)v5;
  if ( !v3 )
  {
LABEL_2:
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  else
  {
    v9 = _interlockedbittestandset(a1, 7u);
    *(_QWORD *)(a2 + 64) = 0LL;
    if ( v9 )
      KiActivateWaiterQueueWithNoLocks(a2, (unsigned __int64)a1, 0LL);
    else
      KiActivateWaiterPriQueue((ULONG_PTR)a1, (unsigned int)a1);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->DeferredReadyListHead.Next )
      KiProcessThreadWaitList((__int64)CurrentPrcb, 1u, 0LL, 0LL);
  }
}
