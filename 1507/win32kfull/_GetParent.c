/*
 * XREFs of _GetParent @ 0x1C00C6EDC
 * Callers:
 *     NtUserGetAncestor @ 0x1C00C6DD0 (NtUserGetAncestor.c)
 *     _GetAncestor @ 0x1C00E9F5C (_GetAncestor.c)
 *     xxxHelpLoop @ 0x1C023CECC (xxxHelpLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetParent(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 55) & 0xC0) == 0 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 55) & 0xC0) == 0x40 )
    return *(_QWORD *)(a1 + 88);
  return *(_QWORD *)(a1 + 104);
}
