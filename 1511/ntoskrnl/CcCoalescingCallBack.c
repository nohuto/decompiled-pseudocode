/*
 * XREFs of CcCoalescingCallBack @ 0x1401A89B4
 * Callers:
 *     <none>
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x1400AF9F0 (CcScheduleLazyWriteScan.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcRescheduleLazyWriteScan @ 0x140101E20 (CcRescheduleLazyWriteScan.c)
 */

void __fastcall CcCoalescingCallBack(int a1)
{
  int v1; // ecx
  int v2; // ecx
  KIRQL v3; // al
  KIRQL v4; // bl
  KIRQL v5; // al
  KIRQL v6; // al

  v1 = a1 - 1;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      if ( v2 != 1 )
        return;
      v3 = KeAcquireQueuedSpinLock(5uLL);
      ++CcDbgCoalescingCmdFlushReceived;
      v4 = v3;
      goto LABEL_7;
    }
    v5 = KeAcquireQueuedSpinLock(5uLL);
    ++CcDbgCoalescingCmdOffReceived;
    v4 = v5;
    CcCoalescingState = 0;
    CcRescheduleLazyWriteScan(0LL);
  }
  else
  {
    v6 = KeAcquireQueuedSpinLock(5uLL);
    ++CcDbgCoalescingCmdOnReceived;
    v4 = v6;
    CcCoalescingState = 1;
    byte_1402FDBA0 = 0;
    if ( (unsigned __int64)CcGlobalDirtyPageStatistics >= 0x2000 )
LABEL_7:
      CcScheduleLazyWriteScan(1, 0);
  }
  KeReleaseQueuedSpinLock(5uLL, v4);
}
