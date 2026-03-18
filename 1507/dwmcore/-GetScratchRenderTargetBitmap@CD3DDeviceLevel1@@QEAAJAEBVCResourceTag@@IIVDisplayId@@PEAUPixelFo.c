/*
 * XREFs of ?GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N3PEAPEAVIRenderTargetBitmap@@@Z @ 0x180003348
 * Callers:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x18000575C (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 * Callees:
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x180001464 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?UpdateDisplayId@CHwTextureRenderTarget@@UEAA_NVDisplayId@@@Z @ 0x180001F40 (-UpdateDisplayId@CHwTextureRenderTarget@@UEAA_NVDisplayId@@@Z.c)
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x180002F70 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ?SetPurpose@CScratchRenderTargetBitmap@@QEAAXAEBVCResourceTag@@@Z @ 0x180002FB0 (-SetPurpose@CScratchRenderTargetBitmap@@QEAAXAEBVCResourceTag@@@Z.c)
 *     ?ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ @ 0x180018E98 (-ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180070C30 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x180082610 (-UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@UEBA_NXZ @ 0x180082AB0 (-IsHardwareProtected@CHwTextureRenderTarget@@UEBA_NXZ.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x180083270 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetScratchRenderTargetBitmap(
        __int64 a1,
        const struct CResourceTag *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct PixelFormatInfo *a6,
        bool a7,
        char a8,
        void **a9)
{
  __int64 v9; // rdi
  DWORD CurrentThreadId; // eax
  char v15; // cl
  bool v16; // r12
  _DWORD *v17; // rsi
  struct PixelFormatInfo *v18; // r15
  int v19; // eax
  bool v20; // zf
  int Interface; // eax
  unsigned int v22; // esi
  unsigned int v23; // eax
  int v24; // eax
  DWORD v26; // eax
  unsigned int v27; // r9d
  int v28; // eax
  _QWORD v29[2]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD *v30; // [rsp+80h] [rbp+8h] BYREF

  ++*(_DWORD *)(a1 + 512);
  v9 = 0LL;
  v30 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v15 = a8;
  v16 = a7;
  *(_DWORD *)(a1 + 516) = CurrentThreadId;
  if ( !*(_DWORD *)(a1 + 816) && (v16 || !*(_BYTE *)(a1 + 808)) && !v15 )
  {
    if ( *(_DWORD *)(a1 + 800) > a3 )
      a3 = *(_DWORD *)(a1 + 800);
    if ( *(_DWORD *)(a1 + 804) > a4 )
      a4 = *(_DWORD *)(a1 + 804);
  }
  v17 = *(_DWORD **)(a1 + 792);
  v18 = a6;
  if ( !v17 )
    goto LABEL_27;
  v19 = v17[50];
  v20 = v17[2] == a3;
  if ( v17[2] <= a3 )
  {
LABEL_7:
    if ( !v20 || v17[3] != a4 || v19 != *(_DWORD *)a6 )
      goto LABEL_39;
    goto LABEL_10;
  }
  if ( v17[3] <= a4 || v19 != *(_DWORD *)a6 || v15 )
  {
    v20 = v17[2] == a3;
    goto LABEL_7;
  }
LABEL_10:
  if ( v16 == CHwTextureRenderTarget::IsHardwareProtected(*(CHwTextureRenderTarget **)(a1 + 792)) )
  {
    *(_QWORD *)(a1 + 792) = 0LL;
    v9 = (__int64)v17;
    v30 = v17;
    goto LABEL_12;
  }
  if ( !v16 )
    goto LABEL_27;
LABEL_39:
  CD3DDeviceLevel1::ReleaseCachedScratchRenderTargetBitmap((CD3DDeviceLevel1 *)a1);
LABEL_12:
  if ( v9 )
  {
    CHwSurfaceRenderTarget::UpdatePixelFormatInfo((CHwSurfaceRenderTarget *)v9, v18);
    CHwTextureRenderTarget::UpdateDisplayId(v9, a5);
    goto LABEL_14;
  }
LABEL_27:
  ++*(_DWORD *)(a1 + 512);
  v29[0] = a1;
  v26 = GetCurrentThreadId();
  v27 = a5;
  *(_DWORD *)(a1 + 516) = v26;
  v28 = CScratchRenderTargetBitmap::Create(a3, a4, (CD3DDeviceLevel1 *)a1, v27, v18, v16, (__int64 *)&v30);
  v22 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xECDu);
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(v29);
    v9 = (__int64)v30;
    goto LABEL_22;
  }
  CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(v29);
  v9 = (__int64)v30;
LABEL_14:
  CScratchRenderTargetBitmap::SetPurpose((CScratchRenderTargetBitmap *)v9, a2);
  Interface = CMILCOMBase::InternalQueryInterface(
                (CMILCOMBase *)(v9 + 120),
                &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
                a9);
  v22 = Interface;
  if ( Interface < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Interface, 0xEDEu);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 800) > a3 )
      a3 = *(_DWORD *)(a1 + 800);
    v23 = *(_DWORD *)(a1 + 804);
    *(_DWORD *)(a1 + 800) = a3;
    if ( v23 > a4 )
      a4 = v23;
    *(_DWORD *)(a1 + 804) = a4;
    if ( v16 )
      *(_BYTE *)(a1 + 808) = 1;
    v24 = *(_DWORD *)(a1 + 1064);
    ++*(_DWORD *)(a1 + 816);
    *(_DWORD *)(a1 + 812) = v24;
  }
LABEL_22:
  v20 = (*(_DWORD *)(a1 + 512))-- == 1;
  if ( v20 )
    *(_DWORD *)(a1 + 516) = 0;
  if ( v9 )
    CScratchRenderTargetBitmap::Release((CD3DDeviceLevel1 **)v9);
  return v22;
}
