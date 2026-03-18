/*
 * XREFs of CMFAllocFn @ 0x140675D10
 * Callers:
 *     XpressDecodeCreate @ 0x140222A48 (XpressDecodeCreate.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CMFAllocFn(__int64 a1, int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x636D6650u);
}
