/*
 * XREFs of ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x180003A28
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x18001A750 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x1800039C4 (-ComputeFadeValues@CButton@@AEAAXPEAM0@Z.c)
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x180003B70 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x180019DF0 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CButton::UpdateCrossfade(CButton *this)
{
  __int64 v2; // rcx
  float v3; // [rsp+30h] [rbp+8h] BYREF
  float v4; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)this + 52) + 72LL) || (*((_BYTE *)this + 304) & 0x40) != 0 )
  {
    *((_BYTE *)this + 304) &= ~0x40u;
    CButton::DeactivateTimeline(this);
    CVisual::SetDirtyFlags(this, 0x8000u);
  }
  else
  {
    CButton::ComputeFadeValues(this, &v3, &v4);
    CAtlasedImage::SetOpacity(*(CAtlasedImage **)(v2 + 312), v3);
    CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 40), v4);
  }
}
