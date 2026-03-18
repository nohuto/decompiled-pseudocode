/*
 * XREFs of ZwSetCachedSigningLevel @ 0x140181DB0
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetCachedSigningLevel(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
