/*
 * XREFs of ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x180008B24
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001BB64 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x18002153C (-SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x180075EAC (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18002B678 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     floor_0 @ 0x18005056A (floor_0.c)
 */

void __fastcall CAtlasedImage::SetOpacity(CAtlasedImage *this, float a2)
{
  int v3; // ecx
  unsigned __int8 v4; // al
  int v5; // edi

  v3 = (int)floor_0((float)(a2 * 255.0) + 0.5);
  v4 = -1;
  if ( v3 <= 255 )
  {
    v4 = 0;
    if ( v3 >= 0 )
      v4 = v3;
  }
  v5 = 16843009 * v4;
  if ( v5 != *((_DWORD *)this + 17) )
  {
    CAtlasedImage::SetDirtyFlags(this, 2u, 0x2000u);
    *((_DWORD *)this + 17) = v5;
  }
}
