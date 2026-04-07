/*
 * XREFs of ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x180075EAC
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x18001C130 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x180007174 (-ComputeFadeValues@CButton@@AEAAXPEAM0@Z.c)
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x180008B24 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x18001B958 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 */

void __fastcall CButton::UpdateCrossfade(CButton *this)
{
  __int64 v2; // rcx
  float v3; // [rsp+30h] [rbp+8h] BYREF
  float v4; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)this + 52) + 72LL) || (*((_BYTE *)this + 304) & 0x40) != 0 )
  {
    *((_BYTE *)this + 304) &= ~0x40u;
    CButton::DeactivateTimeline(this, (__int64 *)this + 52);
    CVisual::SetDirtyFlags(this, 0x8000);
  }
  else
  {
    CButton::ComputeFadeValues(this, &v3, &v4);
    CAtlasedImage::SetOpacity(*(CAtlasedImage **)(v2 + 312), v3);
    CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 40), v4);
  }
}
