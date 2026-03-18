/*
 * XREFs of ZwSetDriverEntryOrder @ 0x140181E70
 * Callers:
 *     VfZwSetDriverEntryOrder @ 0x140757DF4 (VfZwSetDriverEntryOrder.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetDriverEntryOrder(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
