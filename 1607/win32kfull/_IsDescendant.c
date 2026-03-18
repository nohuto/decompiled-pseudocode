/*
 * XREFs of _IsDescendant @ 0x1C0063558
 * Callers:
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C00634F4 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0075160 (GreUpdateSpriteVisRgn.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxScrollWindowEx @ 0x1C00ADA68 (xxxScrollWindowEx.c)
 *     CalcVisRgn @ 0x1C00D5A60 (CalcVisRgn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDescendant(__int64 a1, __int64 a2)
{
  while ( a1 != a2 )
  {
    if ( (*(_WORD *)(a2 + 66) & 0x3FFF) == 0x29D )
      return 0LL;
    a2 = *(_QWORD *)(a2 + 88);
  }
  return 1LL;
}
