/*
 * XREFs of ?GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N3PEAPEAVIRenderTargetBitmap@@@Z @ 0x180011DD0
 * Callers:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x180011340 (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 * Callees:
 *     ?UpdateDisplayId@CHwTextureRenderTarget@@UEAA_NVDisplayId@@@Z @ 0x180010FC0 (-UpdateDisplayId@CHwTextureRenderTarget@@UEAA_NVDisplayId@@@Z.c)
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800115B0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ?SetPurpose@CScratchRenderTargetBitmap@@QEAAXAEBVCResourceTag@@@Z @ 0x1800115F0 (-SetPurpose@CScratchRenderTargetBitmap@@QEAAXAEBVCResourceTag@@@Z.c)
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x18001D2A8 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800227F4 (-ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@UEBA_NXZ @ 0x18002CD70 (-IsHardwareProtected@CHwTextureRenderTarget@@UEBA_NXZ.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180085ED8 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x18008C6C0 (-UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x1800AF990 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetScratchRenderTargetBitmap(
        __int64 a1,
        const struct CResourceTag *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct PixelFormatInfo *a6,
        char a7,
        char a8,
        void **a9)
{
  __int64 v9; // rdi
  DWORD CurrentThreadId; // eax
  char v15; // cl
  char v16; // r12
  _DWORD *v17; // rsi
  struct PixelFormatInfo *v18; // r15
  int v19; // eax
  bool v20; // zf
  int Interface; // eax
  unsigned int v22; // esi
  unsigned int v23; // eax
  __int64 v24; // rax
  DWORD v26; // eax
  __int64 v27; // r9
  int v28; // eax
  _QWORD v29[2]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD *v30; // [rsp+80h] [rbp+8h] BYREF

  ++*(_DWORD *)(a1 + 504);
  v9 = 0LL;
  v30 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v15 = a8;
  v16 = a7;
  *(_DWORD *)(a1 + 508) = CurrentThreadId;
  if ( !*(_DWORD *)(a1 + 784) && (v16 || !*(_BYTE *)(a1 + 1032)) && !v15 )
  {
    if ( *(_DWORD *)(a1 + 776) > a3 )
      a3 = *(_DWORD *)(a1 + 776);
    if ( *(_DWORD *)(a1 + 780) > a4 )
      a4 = *(_DWORD *)(a1 + 780);
  }
  v17 = *(_DWORD **)(a1 + 768);
  v18 = a6;
  if ( !v17 )
    goto LABEL_31;
  v19 = v17[50];
  v20 = v17[2] == a3;
  if ( v17[2] <= a3 )
  {
LABEL_11:
    if ( !v20 || v17[3] != a4 || v19 != *(_DWORD *)a6 )
      goto LABEL_38;
    goto LABEL_14;
  }
  if ( v17[3] <= a4 || v19 != *(_DWORD *)a6 || v15 )
  {
    v20 = v17[2] == a3;
    goto LABEL_11;
  }
LABEL_14:
  if ( v16 == CHwTextureRenderTarget::IsHardwareProtected(*(CHwTextureRenderTarget **)(a1 + 768)) )
  {
    *(_QWORD *)(a1 + 768) = 0LL;
    v9 = (__int64)v17;
    v30 = v17;
    goto LABEL_16;
  }
  if ( !v16 )
    goto LABEL_31;
LABEL_38:
  CD3DDeviceLevel1::ReleaseCachedScratchRenderTargetBitmap((CD3DDeviceLevel1 *)a1);
LABEL_16:
  if ( v9 )
  {
    CHwSurfaceRenderTarget::UpdatePixelFormatInfo((CHwSurfaceRenderTarget *)v9, v18);
    CHwTextureRenderTarget::UpdateDisplayId(v9, a5);
    goto LABEL_18;
  }
LABEL_31:
  ++*(_DWORD *)(a1 + 504);
  v29[0] = a1;
  v26 = GetCurrentThreadId();
  v27 = a5;
  *(_DWORD *)(a1 + 508) = v26;
  v28 = CScratchRenderTargetBitmap::Create(a3, a4, a1, v27, v18, v16, &v30);
  v22 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xEF0u);
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(v29);
    v9 = (__int64)v30;
    goto LABEL_26;
  }
  CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(v29);
  v9 = (__int64)v30;
LABEL_18:
  CScratchRenderTargetBitmap::SetPurpose((CScratchRenderTargetBitmap *)v9, a2);
  Interface = CMILCOMBase::InternalQueryInterface(
                (CMILCOMBase *)(v9 + 120),
                &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
                a9);
  v22 = Interface;
  if ( Interface < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Interface, 0xF01u);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 776) > a3 )
      a3 = *(_DWORD *)(a1 + 776);
    v23 = *(_DWORD *)(a1 + 780);
    *(_DWORD *)(a1 + 776) = a3;
    if ( v23 > a4 )
      a4 = v23;
    *(_DWORD *)(a1 + 780) = a4;
    if ( v16 )
      *(_BYTE *)(a1 + 1032) = 1;
    v24 = *(_QWORD *)(a1 + 1016);
    ++*(_DWORD *)(a1 + 784);
    *(_QWORD *)(a1 + 1024) = v24;
  }
LABEL_26:
  v20 = (*(_DWORD *)(a1 + 504))-- == 1;
  if ( v20 )
    *(_DWORD *)(a1 + 508) = 0;
  if ( v9 )
    CScratchRenderTargetBitmap::Release((CD3DDeviceLevel1 **)v9);
  return v22;
}
