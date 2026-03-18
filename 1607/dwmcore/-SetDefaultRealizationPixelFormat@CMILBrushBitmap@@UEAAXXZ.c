/*
 * XREFs of ?SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ @ 0x180084890
 * Callers:
 *     ?SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z @ 0x18002E9F4 (-SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180072730 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180083604 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ @ 0x180083630 (-SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ.c)
 *     ?GetColorSpace@CBitmap@@UEAA?AW4ColorSpace@@XZ @ 0x180085130 (-GetColorSpace@CBitmap@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180085190 (-GetAlphaMode@CBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800851F0 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMILBrushBitmap::SetDefaultRealizationPixelFormat(CMILBrushBitmap *this)
{
  enum DXGI_FORMAT *v1; // rdi
  CBitmap *v3; // rcx
  __int64 (__fastcall *v4)(CBitmap *__hidden, enum DXGI_FORMAT *); // rax
  int PixelFormat; // eax
  float v6; // xmm1_4
  int v7; // eax
  CBitmap *v8; // rcx
  enum DXGI_ALPHA_MODE (__fastcall *v9)(CBitmap *__hidden); // rax
  enum DXGI_ALPHA_MODE v10; // eax
  CBitmap *v11; // rcx
  __int64 (*v12)(void); // rax
  enum DXGI_ALPHA_MODE AlphaMode; // eax
  __int64 v14; // rcx
  __int64 (*v15)(void); // rax
  int ColorSpace; // eax

  v1 = (enum DXGI_FORMAT *)((char *)this + 8);
  v3 = (CBitmap *)*((_QWORD *)this + 22);
  v4 = *(__int64 (__fastcall **)(CBitmap *__hidden, enum DXGI_FORMAT *))(*(_QWORD *)v3 + 24LL);
  if ( v4 == CBitmap::GetPixelFormat )
    PixelFormat = CBitmap::GetPixelFormat(v3, v1);
  else
    PixelFormat = v4(v3, v1);
  if ( PixelFormat < 0 )
  {
    CMILBrush::SetDefaultRealizationPixelFormat(this);
  }
  else
  {
    v6 = *((float *)this + 61);
    if ( v6 < 1.0000001
      && v6 > 0.99999988
      && ((v7 = *((_DWORD *)this + 60), (v7 & 1) != 0)
       || (v7 & 2) == 0
       && ((v8 = (CBitmap *)*((_QWORD *)this + 22),
            v9 = *(enum DXGI_ALPHA_MODE (__fastcall **)(CBitmap *__hidden))(*(_QWORD *)v8 + 32LL),
            v9 != CBitmap::GetAlphaMode)
         ? (v10 = ((unsigned int (*)(void))v9)())
         : (v10 = CBitmap::GetAlphaMode(v8)),
           v10 == DXGI_ALPHA_MODE_IGNORE))
      || !HasAlphaChannel(*v1) )
    {
      *((_DWORD *)this + 3) = 3;
    }
    else
    {
      v11 = (CBitmap *)*((_QWORD *)this + 22);
      v12 = *(__int64 (**)(void))(*(_QWORD *)v11 + 32LL);
      if ( (char *)v12 == (char *)CBitmap::GetAlphaMode )
        AlphaMode = CBitmap::GetAlphaMode(v11);
      else
        AlphaMode = (unsigned int)v12();
      *((_DWORD *)this + 3) = AlphaMode;
    }
    v14 = *((_QWORD *)this + 22);
    v15 = *(__int64 (**)(void))(*(_QWORD *)v14 + 40LL);
    if ( (char *)v15 == (char *)CBitmap::GetColorSpace )
      ColorSpace = CBitmap::GetColorSpace(v14);
    else
      ColorSpace = v15();
    *((_QWORD *)this + 3) = 0LL;
    *((_DWORD *)this + 4) = ColorSpace;
  }
}
