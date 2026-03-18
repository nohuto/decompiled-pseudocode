/*
 * XREFs of CmpEnableLazyFlush @ 0x1400D2744
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x140133AE4 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x1401DFE7C (CmpCoalescingCallback.c)
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 *     CmSetLazyFlushState @ 0x140564EB0 (CmSetLazyFlushState.c)
 *     CmThawRegistry @ 0x14065A074 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140062190 (CmpArmLazyWriter.c)
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
