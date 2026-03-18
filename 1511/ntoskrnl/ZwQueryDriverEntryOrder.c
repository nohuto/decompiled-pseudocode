/*
 * XREFs of ZwQueryDriverEntryOrder @ 0x140152C00
 * Callers:
 *     VfZwQueryDriverEntryOrder @ 0x1406D34E4 (VfZwQueryDriverEntryOrder.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDriverEntryOrder(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
