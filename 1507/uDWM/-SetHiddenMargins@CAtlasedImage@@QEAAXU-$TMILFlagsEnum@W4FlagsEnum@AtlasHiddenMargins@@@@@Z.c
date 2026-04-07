/*
 * XREFs of ?SetHiddenMargins@CAtlasedImage@@QEAAXU?$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z @ 0x180028DB0
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023350 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180035DD0 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJQEAUMIL_CHANNEL__@@_N@Z @ 0x18007B620 (-Initialize@CAnimatedGlassSheet@@MEAAJQEAUMIL_CHANNEL__@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180028D08 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 */

void __fastcall CAtlasedImage::SetHiddenMargins(CAtlasedImage *a1, int a2)
{
  if ( *((_DWORD *)a1 + 16) != a2 )
  {
    *((_DWORD *)a1 + 16) = a2;
    CAtlasedImage::SetDirtyFlags(a1, 1, 0x2000u);
  }
}
