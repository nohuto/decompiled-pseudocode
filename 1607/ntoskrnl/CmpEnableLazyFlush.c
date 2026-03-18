/*
 * XREFs of CmpEnableLazyFlush @ 0x140131B00
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x140126A90 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x1401B51AC (CmpCoalescingCallback.c)
 *     NtUnloadKeyEx @ 0x14049A1D4 (NtUnloadKeyEx.c)
 *     CmSetLazyFlushState @ 0x14052EE18 (CmSetLazyFlushState.c)
 *     CmThawRegistry @ 0x140602DE0 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1400F0130 (CmpArmLazyWriter.c)
 */

void __fastcall CmpEnableLazyFlush(int a1)
{
  unsigned int i; // ebx

  _m_prefetchw(&CmpHoldLazyFlush);
  if ( _InterlockedAnd(&CmpHoldLazyFlush, ~a1) == a1 )
  {
    for ( i = 0; i < 2; ++i )
      CmpArmLazyWriter(i, 0LL, 1);
  }
}
