/*
 * XREFs of ZwEnumerateDriverEntries @ 0x140152040
 * Callers:
 *     VfZwEnumerateDriverEntries @ 0x1406D22E4 (VfZwEnumerateDriverEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwEnumerateDriverEntries(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
