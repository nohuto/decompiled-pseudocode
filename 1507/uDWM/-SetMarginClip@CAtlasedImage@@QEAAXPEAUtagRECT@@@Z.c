/*
 * XREFs of ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x180003B38
 * Callers:
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001AE80 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180028D08 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 */

void __fastcall CAtlasedImage::SetMarginClip(CAtlasedImage *this, struct tagRECT *a2)
{
  if ( !a2 )
  {
    if ( !*((_BYTE *)this + 128) )
      return;
    *((_BYTE *)this + 128) = 0;
LABEL_8:
    CAtlasedImage::SetDirtyFlags(this, 1u, 0x2000u);
    return;
  }
  if ( !*((_BYTE *)this + 128) || !EqualRect((const RECT *)this + 7, a2) )
  {
    *((_BYTE *)this + 128) = 1;
    *((struct tagRECT *)this + 7) = *a2;
    goto LABEL_8;
  }
}
