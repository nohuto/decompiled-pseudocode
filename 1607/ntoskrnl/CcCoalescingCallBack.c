/*
 * XREFs of CcCoalescingCallBack @ 0x1401B147C
 * Callers:
 *     <none>
 * Callees:
 *     CcRescheduleLazyWriteScan @ 0x14006E458 (CcRescheduleLazyWriteScan.c)
 *     CcScheduleLazyWriteScan @ 0x14007049C (CcScheduleLazyWriteScan.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
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
    byte_1403231E0 = 0;
    if ( (unsigned __int64)CcGlobalDirtyPageStatistics >= 0x2000 )
LABEL_7:
      CcScheduleLazyWriteScan(1, 0);
  }
  KeReleaseQueuedSpinLock(5uLL, v4);
}
