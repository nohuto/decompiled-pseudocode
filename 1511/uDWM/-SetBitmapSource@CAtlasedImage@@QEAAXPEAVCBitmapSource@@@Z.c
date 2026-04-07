/*
 * XREFs of ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x18006FFA4
 * Callers:
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJQEAUMIL_CHANNEL__@@_N@Z @ 0x180083050 (-Initialize@CAnimatedGlassSheet@@MEAAJQEAUMIL_CHANNEL__@@_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18002BD18 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 */

void __fastcall CAtlasedImage::SetBitmapSource(CAtlasedImage *this, struct CBitmapSource *a2)
{
  CBaseObject *v4; // rcx

  v4 = (CBaseObject *)*((_QWORD *)this + 9);
  if ( v4 != a2 )
  {
    if ( v4 )
      CBaseObject::Release(v4);
    *((_QWORD *)this + 9) = a2;
    if ( a2 )
      _InterlockedAdd((volatile signed __int32 *)a2 + 2, 1u);
    CAtlasedImage::SetDirtyFlags(this, 1, 0x2000u);
  }
}
