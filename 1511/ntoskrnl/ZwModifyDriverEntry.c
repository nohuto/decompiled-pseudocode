/*
 * XREFs of ZwModifyDriverEntry @ 0x1401526E0
 * Callers:
 *     VfZwModifyDriverEntry @ 0x1406D27DC (VfZwModifyDriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwModifyDriverEntry(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
