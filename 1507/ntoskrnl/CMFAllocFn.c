/*
 * XREFs of CMFAllocFn @ 0x1406FA4E0
 * Callers:
 *     XpressDecodeCreate @ 0x140272920 (XpressDecodeCreate.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CMFAllocFn(__int64 a1, int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x636D6650u);
}
