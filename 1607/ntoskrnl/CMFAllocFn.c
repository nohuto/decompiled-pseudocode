/*
 * XREFs of CMFAllocFn @ 0x1406B87A4
 * Callers:
 *     XpressDecodeCreate @ 0x14023E3CC (XpressDecodeCreate.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CMFAllocFn(__int64 a1, int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x636D6650u);
}
