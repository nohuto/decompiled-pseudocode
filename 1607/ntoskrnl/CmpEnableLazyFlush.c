/*
 * XREFs of CmpEnableLazyFlush @ 0x140132070
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x140127000 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x1401B5090 (CmpCoalescingCallback.c)
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     CmSetLazyFlushState @ 0x14052F358 (CmSetLazyFlushState.c)
 *     CmThawRegistry @ 0x140602E94 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1400EDFB0 (CmpArmLazyWriter.c)
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
