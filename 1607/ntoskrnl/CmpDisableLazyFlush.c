/*
 * XREFs of CmpDisableLazyFlush @ 0x1400B5FC0
 * Callers:
 *     CmSetLazyFlushState @ 0x14052EE18 (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x140602BC0 (CmFreezeRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
