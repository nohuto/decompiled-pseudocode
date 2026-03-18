/*
 * XREFs of KxWaitForSpinLockAndAcquire @ 0x140038DE0
 * Callers:
 *     KiTimer2Expiration @ 0x1400332A0 (KiTimer2Expiration.c)
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopQueueThreadIrp @ 0x140043B00 (IopQueueThreadIrp.c)
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 *     KiExecuteAllDpcs @ 0x140044870 (KiExecuteAllDpcs.c)
 *     PpmCheckSnapAllUtility @ 0x140045F00 (PpmCheckSnapAllUtility.c)
 *     PpmIdleExecuteTransition @ 0x1400474D0 (PpmIdleExecuteTransition.c)
 *     PpmUpdatePerformanceFeedback @ 0x140049800 (PpmUpdatePerformanceFeedback.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     IopDequeueIrpFromThread @ 0x14007E560 (IopDequeueIrpFromThread.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     IopQueueIrpToFileObject @ 0x14008F8D0 (IopQueueIrpToFileObject.c)
 *     KiCallInterruptServiceRoutine @ 0x1400F6730 (KiCallInterruptServiceRoutine.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401C4B24 (KiAcquireSpinLockInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KxWaitForSpinLockAndAcquire(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx

  v4 = 0;
  do
  {
    if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v4, a2, a3);
  }
  while ( *(_QWORD *)a1 || _interlockedbittestandset64(a1, 0LL) );
  return v4;
}
