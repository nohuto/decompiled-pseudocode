/*
 * XREFs of CMFAllocFn @ 0x1406B866C
 * Callers:
 *     XpressDecodeCreate @ 0x14023E4E8 (XpressDecodeCreate.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CMFAllocFn(__int64 a1, int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x636D6650u);
}
