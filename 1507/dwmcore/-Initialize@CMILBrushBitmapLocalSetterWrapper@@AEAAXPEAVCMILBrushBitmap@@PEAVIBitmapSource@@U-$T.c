/*
 * XREFs of ?Initialize@CMILBrushBitmapLocalSetterWrapper@@AEAAXPEAVCMILBrushBitmap@@PEAVIBitmapSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@W4Enum@MilBitmapWrapMode@@PEBVCBaseMatrix@@W4XSpaceDefinition@@@Z @ 0x1800161F4
 * Callers:
 *     ??0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@W4Enum@MilBitmapWrapMode@@PEBVCBaseMatrix@@W4XSpaceDefinition@@@Z @ 0x1800161AC (--0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U-$TMILFlagsE.c)
 *     ??0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@W4Enum@MilBitmapWrapMode@@PEBVCBaseMatrix@@W4XSpaceDefinition@@@Z @ 0x18013A1F4 (--0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@W4Enum@MilBit.c)
 * Callees:
 *     ?GetColorSpace@CBitmap@@UEAA?AW4ColorSpace@@XZ @ 0x180080C90 (-GetColorSpace@CBitmap@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180080CF0 (-GetAlphaMode@CBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180080D50 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CMILBrushBitmapLocalSetterWrapper::Initialize(
        __int64 *a1,
        __int64 a2,
        CBitmap *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        _OWORD *a7)
{
  int v7; // eax
  bool v9; // zf
  int v10; // eax
  __int64 (__fastcall *v12)(CBitmap *__hidden, enum DXGI_FORMAT *); // rsi
  enum DXGI_ALPHA_MODE (__fastcall *v13)(CBitmap *__hidden); // rsi
  enum DXGI_ALPHA_MODE AlphaMode; // eax
  __int64 (__fastcall *v15)(CBitmap *); // rsi
  enum DXGI_FORMAT ColorSpace; // eax
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __int128 v20; // xmm3
  _OWORD *v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  __int64 result; // rax
  enum DXGI_FORMAT v25[14]; // [rsp+20h] [rbp-40h] BYREF
  int v26; // [rsp+58h] [rbp-8h]

  *a1 = a2;
  v7 = *(_DWORD *)(a2 + 120);
  v9 = v7 == -1;
  v10 = v7 + 1;
  if ( v9 )
    v10 = 1;
  *(_DWORD *)(a2 + 120) = v10;
  *(_QWORD *)(*a1 + 192) = a3;
  *(_DWORD *)(*a1 + 200) = a6;
  memset(v25, 0, 24);
  v12 = *(__int64 (__fastcall **)(CBitmap *__hidden, enum DXGI_FORMAT *))(*(_QWORD *)a3 + 24LL);
  if ( v12 == CBitmap::GetPixelFormat )
    CBitmap::GetPixelFormat(a3, v25);
  else
    v12(a3, v25);
  v13 = *(enum DXGI_ALPHA_MODE (__fastcall **)(CBitmap *__hidden))(*(_QWORD *)a3 + 32LL);
  if ( v13 == CBitmap::GetAlphaMode )
    AlphaMode = CBitmap::GetAlphaMode(a3);
  else
    AlphaMode = v13(a3);
  v25[1] = AlphaMode;
  v15 = *(__int64 (__fastcall **)(CBitmap *))(*(_QWORD *)a3 + 40LL);
  if ( (char *)v15 == (char *)CBitmap::GetColorSpace )
    ColorSpace = (unsigned int)CBitmap::GetColorSpace(a3);
  else
    ColorSpace = (unsigned int)v15(a3);
  v25[2] = ColorSpace;
  v17 = *a1;
  *(_OWORD *)(v17 + 32) = *(_OWORD *)v25;
  *(_QWORD *)(v17 + 48) = *(_QWORD *)&v25[4];
  v18 = a7[1];
  v19 = a7[2];
  v20 = a7[3];
  v21 = (_OWORD *)*a1;
  v21[8] = *a7;
  v21[9] = v18;
  v21[10] = v19;
  v21[11] = v20;
  *(_DWORD *)(*a1 + 124) = 1;
  v22 = *a1;
  if ( a5 )
  {
    *(_OWORD *)(v22 + 220) = *(_OWORD *)a5;
    *(_OWORD *)(v22 + 236) = *(_OWORD *)(a5 + 16);
    v23 = *(_DWORD *)(a5 + 32);
  }
  else
  {
    LOBYTE(v26) = 0;
    v23 = v26;
    *(_OWORD *)(v22 + 220) = _xmm;
    *(_OWORD *)(v22 + 236) = 0LL;
  }
  *(_DWORD *)(v22 + 252) = v23;
  result = a4;
  *(_DWORD *)(*a1 + 256) = a4;
  return result;
}
