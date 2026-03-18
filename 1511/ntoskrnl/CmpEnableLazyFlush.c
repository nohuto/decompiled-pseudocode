/*
 * XREFs of CmpEnableLazyFlush @ 0x140126C94
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x1400F2AA8 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x1401A9F98 (CmpCoalescingCallback.c)
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 *     CmSetLazyFlushState @ 0x1404F5D54 (CmSetLazyFlushState.c)
 *     CmThawRegistry @ 0x140519210 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140038EB0 (CmpArmLazyWriter.c)
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
