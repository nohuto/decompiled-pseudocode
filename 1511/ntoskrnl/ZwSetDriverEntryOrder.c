/*
 * XREFs of ZwSetDriverEntryOrder @ 0x140153500
 * Callers:
 *     VfZwSetDriverEntryOrder @ 0x1406D422C (VfZwSetDriverEntryOrder.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetDriverEntryOrder(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
