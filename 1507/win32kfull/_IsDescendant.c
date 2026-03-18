/*
 * XREFs of _IsDescendant @ 0x1C0012B34
 * Callers:
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C0012AD0 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     CalcVisRgn @ 0x1C005D6D0 (CalcVisRgn.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0061170 (GreUpdateSpriteVisRgn.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxScrollWindowEx @ 0x1C0112924 (xxxScrollWindowEx.c)
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
