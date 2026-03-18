/*
 * XREFs of ?SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ @ 0x180089980
 * Callers:
 *     ?SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z @ 0x18008A4AC (-SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetColorSpace@CBitmap@@UEAA?AW4ColorSpace@@XZ @ 0x180088EC0 (-GetColorSpace@CBitmap@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180088F20 (-GetAlphaMode@CBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180088F80 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ @ 0x18008A370 (-SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18008A730 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 */

void __fastcall CMILBrushBitmap::SetDefaultRealizationPixelFormat(CMILBrushBitmap *this)
{
  CBitmap *v1; // rdi
  enum DXGI_FORMAT *v2; // r14
  __int64 (__fastcall *v4)(CBitmap *, enum DXGI_FORMAT *); // rsi
  int PixelFormat; // eax
  float v6; // xmm1_4
  int v7; // eax
  CBitmap *v8; // rdi
  __int64 (__fastcall *v9)(CBitmap *); // rsi
  int v10; // eax
  CBitmap *v11; // rdi
  __int64 (__fastcall *v12)(CBitmap *); // rsi
  int AlphaMode; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64); // rsi
  int ColorSpace; // eax

  v1 = (CBitmap *)*((_QWORD *)this + 21);
  v2 = (enum DXGI_FORMAT *)((char *)this + 8);
  v4 = *(__int64 (__fastcall **)(CBitmap *, enum DXGI_FORMAT *))(*(_QWORD *)v1 + 24LL);
  if ( v4 == CBitmap::GetPixelFormat )
    PixelFormat = CBitmap::GetPixelFormat(v1, (enum DXGI_FORMAT *)this + 2);
  else
    PixelFormat = v4(*((CBitmap **)this + 21), (enum DXGI_FORMAT *)this + 2);
  if ( PixelFormat < 0 )
  {
    CMILBrush::SetDefaultRealizationPixelFormat(this);
  }
  else
  {
    v6 = *((float *)this + 59);
    if ( v6 < 1.0000001
      && v6 > 0.99999988
      && ((v7 = *((_DWORD *)this + 58), (v7 & 1) != 0)
       || (v7 & 2) == 0
       && ((v8 = (CBitmap *)*((_QWORD *)this + 21),
            v9 = *(__int64 (__fastcall **)(CBitmap *))(*(_QWORD *)v8 + 32LL),
            v9 != CBitmap::GetAlphaMode)
         ? (v10 = v9(*((CBitmap **)this + 21)))
         : (v10 = CBitmap::GetAlphaMode(v8)),
           v10 == 3))
      || !(unsigned int)HasAlphaChannel(*v2) )
    {
      *((_DWORD *)this + 3) = 3;
    }
    else
    {
      v11 = (CBitmap *)*((_QWORD *)this + 21);
      v12 = *(__int64 (__fastcall **)(CBitmap *))(*(_QWORD *)v11 + 32LL);
      if ( v12 == CBitmap::GetAlphaMode )
        AlphaMode = CBitmap::GetAlphaMode(v11);
      else
        AlphaMode = v12(*((CBitmap **)this + 21));
      *((_DWORD *)this + 3) = AlphaMode;
    }
    v14 = *((_QWORD *)this + 21);
    v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 40LL);
    if ( v15 == CBitmap::GetColorSpace )
      ColorSpace = CBitmap::GetColorSpace(v14);
    else
      ColorSpace = v15(*((_QWORD *)this + 21));
    *((_QWORD *)this + 3) = 0LL;
    *((_DWORD *)this + 4) = ColorSpace;
  }
}
