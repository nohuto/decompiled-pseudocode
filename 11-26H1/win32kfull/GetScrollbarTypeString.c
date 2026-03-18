/*
 * XREFs of GetScrollbarTypeString @ 0x14012905C
 * Callers:
 *     xxxSetScrollBar @ 0x140127BBC (xxxSetScrollBar.c)
 *     _SBGetParms @ 0x140128C2C (_SBGetParms.c)
 *     xxxShowScrollBar @ 0x1401DA46C (xxxShowScrollBar.c)
 *     GetWndSBParmsCrossProcess @ 0x140262F90 (GetWndSBParmsCrossProcess.c)
 *     NtUserSBGetParms @ 0x1402BAFF0 (NtUserSBGetParms.c)
 *     xxxSBTrackInit @ 0x1402F8934 (xxxSBTrackInit.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetScrollbarTypeString(int a1)
{
  int v1; // ecx
  int v3; // ecx

  if ( !a1 )
    return "SB_HORZ";
  v1 = a1 - 1;
  if ( !v1 )
    return "SB_VERT";
  v3 = v1 - 1;
  if ( !v3 )
    return "SB_CTL";
  if ( v3 == 1 )
    return "SB_BOTH";
  return "UNKNOWN";
}
