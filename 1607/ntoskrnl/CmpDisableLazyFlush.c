/*
 * XREFs of CmpDisableLazyFlush @ 0x1400B3DE8
 * Callers:
 *     CmSetLazyFlushState @ 0x14052F358 (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x140602C74 (CmFreezeRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
