/*
 * XREFs of KiSwapToUmsThreadContinue @ 0x1401DC4BC
 * Callers:
 *     KiUmsTrapEntryContinue @ 0x140170F00 (KiUmsTrapEntryContinue.c)
 *     KiUmsCallEntryContinue @ 0x1401710C0 (KiUmsCallEntryContinue.c)
 *     KeSynchronizeUmsThread @ 0x140650770 (KeSynchronizeUmsThread.c)
 * Callees:
 *     KeInsertQueue @ 0x140087860 (KeInsertQueue.c)
 *     KiSwitchQueue @ 0x1400A65EC (KiSwitchQueue.c)
 */

__int64 KiSwapToUmsThreadContinue()
{
  struct _KTHREAD *CurrentThread; // rbx
  PVOID Object; // rdi
  int v2; // eax
  struct _KQUEUE *v3; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 Queue; // r8

  CurrentThread = KeGetCurrentThread();
  Object = CurrentThread->WaitBlock[3].Object;
  v2 = *((_DWORD *)Object + 20);
  if ( (v2 & 2) == 0 )
  {
    *((_DWORD *)Object + 20) = v2 | 2;
    CurrentThread->MiscFlags ^= (CurrentThread->MiscFlags ^ (((*((_BYTE *)CurrentThread->WaitBlock[3].SparePtr + 72) & 1) == 0) << 16)) & 0x10000;
    v3 = (struct _KQUEUE *)*((_QWORD *)Object + 4);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    Queue = (unsigned __int64)CurrentThread->Queue;
    if ( v3 != (struct _KQUEUE *)Queue )
      KiSwitchQueue((__int64)CurrentThread, (__int64)v3, Queue);
    KeInsertQueue(v3, *((PLIST_ENTRY *)Object + 5));
    __writecr8(CurrentIrql);
  }
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
