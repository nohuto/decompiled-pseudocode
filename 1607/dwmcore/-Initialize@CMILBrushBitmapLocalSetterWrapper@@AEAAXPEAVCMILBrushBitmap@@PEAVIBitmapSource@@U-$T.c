/*
 * XREFs of ?Initialize@CMILBrushBitmapLocalSetterWrapper@@AEAAXPEAVCMILBrushBitmap@@PEAVIBitmapSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@W4Enum@MilBitmapWrapMode@@PEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x18002275C
 * Callers:
 *     ??0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@W4Enum@MilBitmapWrapMode@@PEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x18002271C (--0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U-$TMILFlagsE.c)
 *     ??0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@W4Enum@MilBitmapWrapMode@@PEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x180110E94 (--0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@W4Enum@MilBit.c)
 * Callees:
 *     ?GetColorSpace@CBitmap@@UEAA?AW4ColorSpace@@XZ @ 0x180085130 (-GetColorSpace@CBitmap@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180085190 (-GetAlphaMode@CBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800851F0 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILBrushBitmapLocalSetterWrapper::Initialize(
        __int64 *a1,
        __int64 a2,
        CBitmap *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // eax
  bool v9; // zf
  int v10; // eax
  __int64 (__fastcall *v12)(CBitmap *__hidden, enum DXGI_FORMAT *); // rax
  enum DXGI_ALPHA_MODE (__fastcall *v13)(CBitmap *__hidden); // rax
  enum DXGI_ALPHA_MODE AlphaMode; // eax
  __int64 (__fastcall *v15)(CBitmap *); // rax
  enum DXGI_FORMAT ColorSpace; // eax
  __int64 v17; // rax
  int v18; // ecx
  __int128 v19; // xmm3
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  __int64 result; // rax
  enum DXGI_FORMAT v26[14]; // [rsp+20h] [rbp-40h] BYREF
  int v27; // [rsp+58h] [rbp-8h]

  *a1 = a2;
  v7 = *(_DWORD *)(a2 + 120);
  v9 = v7 == -1;
  v10 = v7 + 1;
  if ( v9 )
    v10 = 1;
  *(_DWORD *)(a2 + 120) = v10;
  *(_QWORD *)(*a1 + 200) = a3;
  *(_DWORD *)(*a1 + 208) = 0;
  memset(v26, 0, 24);
  v12 = *(__int64 (__fastcall **)(CBitmap *__hidden, enum DXGI_FORMAT *))(*(_QWORD *)a3 + 24LL);
  if ( v12 == CBitmap::GetPixelFormat )
    CBitmap::GetPixelFormat(a3, v26);
  else
    v12(a3, v26);
  v13 = *(enum DXGI_ALPHA_MODE (__fastcall **)(CBitmap *__hidden))(*(_QWORD *)a3 + 32LL);
  if ( v13 == CBitmap::GetAlphaMode )
    AlphaMode = CBitmap::GetAlphaMode(a3);
  else
    AlphaMode = v13(a3);
  v26[1] = AlphaMode;
  v15 = *(__int64 (__fastcall **)(CBitmap *))(*(_QWORD *)a3 + 40LL);
  if ( (char *)v15 == (char *)CBitmap::GetColorSpace )
    ColorSpace = (unsigned int)CBitmap::GetColorSpace(a3);
  else
    ColorSpace = (unsigned int)v15(a3);
  v26[2] = ColorSpace;
  v17 = *a1;
  *(_OWORD *)(v17 + 32) = *(_OWORD *)v26;
  *(_QWORD *)(v17 + 48) = *(_QWORD *)&v26[4];
  v18 = *(_DWORD *)(a7 + 64);
  v19 = *(_OWORD *)(a7 + 16);
  v20 = *(_OWORD *)(a7 + 32);
  v21 = *(_OWORD *)(a7 + 48);
  v22 = *a1;
  *(_OWORD *)(v22 + 128) = *(_OWORD *)a7;
  *(_OWORD *)(v22 + 144) = v19;
  *(_OWORD *)(v22 + 160) = v20;
  *(_OWORD *)(v22 + 176) = v21;
  *(_DWORD *)(v22 + 192) = v18;
  *(_DWORD *)(*a1 + 124) = 1;
  v23 = *a1;
  if ( a5 )
  {
    *(_OWORD *)(v23 + 228) = *(_OWORD *)a5;
    *(_OWORD *)(v23 + 244) = *(_OWORD *)(a5 + 16);
    v24 = *(_DWORD *)(a5 + 32);
  }
  else
  {
    LOBYTE(v27) = 0;
    v24 = v27;
    *(_OWORD *)(v23 + 228) = _xmm;
    *(_OWORD *)(v23 + 244) = 0LL;
  }
  *(_DWORD *)(v23 + 260) = v24;
  result = a4;
  *(_DWORD *)(*a1 + 264) = a4;
  return result;
}
