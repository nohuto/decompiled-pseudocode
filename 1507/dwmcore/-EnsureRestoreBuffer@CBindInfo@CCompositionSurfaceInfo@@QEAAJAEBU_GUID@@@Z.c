/*
 * XREFs of ?EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJAEBU_GUID@@@Z @ 0x180119360
 * Callers:
 *     ?EnsureRestoreBuffer@CCompositionSurfaceInfo@@AEAAJXZ @ 0x1801194E0 (-EnsureRestoreBuffer@CCompositionSurfaceInfo@@AEAAJXZ.c)
 * Callees:
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x180014754 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@4PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800558C0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_x @ 0x18010D3A4 (Template_x.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::EnsureRestoreBuffer(
        CCompositionSurfaceInfo::CBindInfo *this,
        struct _GUID *a2)
{
  unsigned int v2; // ebx
  struct CD3DDeviceLevel1 *v3; // r15
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rsi
  int *v9; // rdi
  char v10; // al
  int RenderTargetBitmap; // eax
  int v13[2]; // [rsp+78h] [rbp-1h] BYREF
  int v14; // [rsp+80h] [rbp+7h]
  __int64 v15; // [rsp+88h] [rbp+Fh] BYREF
  _BYTE v16[8]; // [rsp+90h] [rbp+17h] BYREF
  __int64 v17; // [rsp+98h] [rbp+1Fh]
  int v18; // [rsp+E0h] [rbp+67h] BYREF
  int v19; // [rsp+F0h] [rbp+77h] BYREF
  char v20; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = 0;
  v3 = (CCompositionSurfaceInfo::CBindInfo *)((char *)this + 88);
  if ( !*((_QWORD *)this + 11) )
  {
    v19 = 0;
    v18 = 0;
    v15 = 0x300000057LL;
    GetPixelFormatColorSpace(87, (enum ColorSpace *)v16);
    v6 = *((_QWORD *)this + 10);
    v17 = 0LL;
    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)(v6 + 112) + 24LL))(v6 + 112, &v19, &v18);
    v14 = 40;
    *(_QWORD *)v13 = "DWM Rendertarget (DFlip+ restore buffer)";
    v7 = *((_QWORD *)this + 10);
    v8 = v7 + 112;
    v9 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 96LL))(v7, &v20);
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 112LL))(v8);
    RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                           (__int64)&qword_180195D88,
                           (__int64)v13,
                           v19,
                           v18,
                           1LL,
                           0,
                           (__int64)&v15,
                           1,
                           a2,
                           *(struct _LUID *)((char *)this + 100),
                           *v9,
                           v10,
                           v3);
    v2 = RenderTargetBitmap;
    if ( RenderTargetBitmap >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_x(
          *(unsigned int *)(*(_QWORD *)this + 40LL),
          &EVTDESC_ADVANCED_DIRECTFLIP_CREATERESTOREBUFFER,
          *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32));
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x69Bu);
    }
  }
  return v2;
}
