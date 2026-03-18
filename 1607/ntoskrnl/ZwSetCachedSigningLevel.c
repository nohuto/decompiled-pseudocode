/*
 * XREFs of ZwSetCachedSigningLevel @ 0x14015CB40
 * Callers:
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetCachedSigningLevel(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
