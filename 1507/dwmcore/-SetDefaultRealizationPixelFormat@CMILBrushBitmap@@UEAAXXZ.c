/*
 * XREFs of ?SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ @ 0x180081100
 * Callers:
 *     ?SetRealizedBrush@CBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z @ 0x18008138C (-SetRealizedBrush@CBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?GetColorSpace@CBitmap@@UEAA?AW4ColorSpace@@XZ @ 0x180080C90 (-GetColorSpace@CBitmap@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180080CF0 (-GetAlphaMode@CBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180080D50 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ @ 0x1800815F0 (-SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CMILBrushBitmap::SetDefaultRealizationPixelFormat(CMILBrushBitmap *this)
{
  CBitmap *v1; // rdi
  int *v2; // rbp
  __int64 (__fastcall *v4)(CBitmap *, enum DXGI_FORMAT *); // rsi
  int PixelFormat; // eax
  float v6; // xmm1_4
  int v7; // eax
  CBitmap *v8; // rdi
  __int64 (__fastcall *v9)(CBitmap *); // rsi
  int v10; // eax
  bool v11; // zf
  CBitmap *v12; // rdi
  __int64 (__fastcall *v13)(CBitmap *); // rsi
  int AlphaMode; // eax
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64); // rsi
  int ColorSpace; // eax

  v1 = (CBitmap *)*((_QWORD *)this + 21);
  v2 = (int *)((char *)this + 8);
  v4 = *(__int64 (__fastcall **)(CBitmap *, enum DXGI_FORMAT *))(*(_QWORD *)v1 + 24LL);
  if ( v4 == CBitmap::GetPixelFormat )
    PixelFormat = CBitmap::GetPixelFormat(v1, (enum DXGI_FORMAT *)this + 2);
  else
    PixelFormat = v4(*((CBitmap **)this + 21), (enum DXGI_FORMAT *)this + 2);
  if ( PixelFormat < 0 )
  {
    CMILBrush::SetDefaultRealizationPixelFormat(this);
    return;
  }
  v6 = *((float *)this + 59);
  if ( v6 < 1.0000001 && v6 > 0.99999988 )
  {
    v7 = *((_DWORD *)this + 58);
    if ( (v7 & 1) != 0 )
      goto LABEL_25;
    if ( (v7 & 2) == 0 )
    {
      v8 = (CBitmap *)*((_QWORD *)this + 21);
      v9 = *(__int64 (__fastcall **)(CBitmap *))(*(_QWORD *)v8 + 32LL);
      v10 = v9 == CBitmap::GetAlphaMode ? CBitmap::GetAlphaMode(v8) : v9(*((CBitmap **)this + 21));
      if ( v10 == 3 )
        goto LABEL_25;
    }
  }
  if ( *v2 > 61 )
  {
    if ( *v2 != 65 )
    {
      v11 = *v2 == 87;
      goto LABEL_14;
    }
LABEL_15:
    v12 = (CBitmap *)*((_QWORD *)this + 21);
    v13 = *(__int64 (__fastcall **)(CBitmap *))(*(_QWORD *)v12 + 32LL);
    if ( v13 == CBitmap::GetAlphaMode )
      AlphaMode = CBitmap::GetAlphaMode(v12);
    else
      AlphaMode = v13(*((CBitmap **)this + 21));
    *((_DWORD *)this + 3) = AlphaMode;
    goto LABEL_18;
  }
  if ( *v2 == 61 || !*v2 )
    goto LABEL_25;
  if ( *v2 == 2 )
    goto LABEL_15;
  if ( *v2 <= 9 )
    goto LABEL_25;
  if ( *v2 <= 11 || *v2 == 24 )
    goto LABEL_15;
  v11 = *v2 == 28;
LABEL_14:
  if ( v11 )
    goto LABEL_15;
LABEL_25:
  *((_DWORD *)this + 3) = 3;
LABEL_18:
  v15 = *((_QWORD *)this + 21);
  v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 40LL);
  if ( v16 == CBitmap::GetColorSpace )
    ColorSpace = CBitmap::GetColorSpace(v15);
  else
    ColorSpace = v16(*((_QWORD *)this + 21));
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 4) = ColorSpace;
}
