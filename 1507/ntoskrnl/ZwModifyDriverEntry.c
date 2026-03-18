/*
 * XREFs of ZwModifyDriverEntry @ 0x140181050
 * Callers:
 *     VfZwModifyDriverEntry @ 0x1407563A4 (VfZwModifyDriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwModifyDriverEntry(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
