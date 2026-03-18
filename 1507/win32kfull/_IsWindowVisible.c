/*
 * XREFs of _IsWindowVisible @ 0x1C00FA288
 * Callers:
 *     xxxSetWindowStyle @ 0x1C0068470 (xxxSetWindowStyle.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0114054 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowVisible(__int64 a1)
{
  if ( !a1 )
    return 1LL;
  while ( (*(_BYTE *)(a1 + 55) & 0x10) != 0 || (*(_BYTE *)(a1 + 49) & 8) != 0 )
  {
    if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x29D )
      return 1LL;
    a1 = *(_QWORD *)(a1 + 88);
  }
  return 0LL;
}
