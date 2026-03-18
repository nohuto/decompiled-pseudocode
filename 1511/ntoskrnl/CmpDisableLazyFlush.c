/*
 * XREFs of CmpDisableLazyFlush @ 0x1400F46E8
 * Callers:
 *     CmSetLazyFlushState @ 0x1404F5D54 (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x1405188CC (CmFreezeRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
