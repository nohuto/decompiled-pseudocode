/*
 * XREFs of CmpDisableLazyFlush @ 0x140131CEC
 * Callers:
 *     CmSetLazyFlushState @ 0x140564EB0 (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x140659CF0 (CmFreezeRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
