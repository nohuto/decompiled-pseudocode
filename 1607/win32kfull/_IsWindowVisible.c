/*
 * XREFs of _IsWindowVisible @ 0x1C012641C
 * Callers:
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C00A1758 (xxxSetWindowStyle.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0144604 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
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
