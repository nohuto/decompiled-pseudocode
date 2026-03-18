/*
 * XREFs of ZwEnumerateDriverEntries @ 0x1401809F0
 * Callers:
 *     VfZwEnumerateDriverEntries @ 0x140755EAC (VfZwEnumerateDriverEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwEnumerateDriverEntries(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
