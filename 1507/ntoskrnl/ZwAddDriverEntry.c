/*
 * XREFs of ZwAddDriverEntry @ 0x14017FD10
 * Callers:
 *     VfZwAddDriverEntry @ 0x140754CB4 (VfZwAddDriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAddDriverEntry(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
