/*
 * XREFs of _GetParent @ 0x1C00D9E20
 * Callers:
 *     _GetAncestor @ 0x1C00D0504 (_GetAncestor.c)
 *     NtUserGetAncestor @ 0x1C00D9D10 (NtUserGetAncestor.c)
 *     xxxHelpLoop @ 0x1C023D09C (xxxHelpLoop.c)
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
