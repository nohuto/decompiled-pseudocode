/*
 * XREFs of ?UpdateTransition@CRippleEffect@@AEAAJXZ @ 0x180084340
 * Callers:
 *     ?ValidateVisual@CRippleEffect@@UEAAJXZ @ 0x1800843D0 (-ValidateVisual@CRippleEffect@@UEAAJXZ.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18003C890 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     TemplateEventDescriptor @ 0x180073BC8 (TemplateEventDescriptor.c)
 *     ?Stop@CRippleEffect@@QEAAJXZ @ 0x1800842D8 (-Stop@CRippleEffect@@QEAAJXZ.c)
 */

__int64 __fastcall CRippleEffect::UpdateTransition(CRippleEffect *this)
{
  __int64 v1; // rax
  int v3; // edx
  __int64 v4; // rcx

  v1 = *((_QWORD *)this + 36);
  if ( v1 )
  {
    v3 = (int)(float)((float)*(double *)(v1 + 48) * 12.0);
    if ( (unsigned __int64)v3 >= 0xC )
      v3 = 11;
    CImage::SetBitmapSource(*((CImage **)this + 38), *((struct CBitmapSource **)this + v3 + 39));
    if ( *(_BYTE *)(*((_QWORD *)this + 36) + 72LL) )
    {
      CRippleEffect::Stop(this);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        TemplateEventDescriptor(v4, (__int64)&UdwmRippleAnimation_End);
    }
  }
  return 0LL;
}
