/*
 * XREFs of ?EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJAEBU_GUID@@@Z @ 0x180151D8C
 * Callers:
 *     ?SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x180152808 (-SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionW.c)
 * Callees:
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034F70 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18009FF0C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_x @ 0x1801141C0 (Template_x.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::EnsureRestoreBuffer(
        CCompositionSurfaceInfo::CBindInfo *this,
        struct _GUID *a2)
{
  unsigned int v2; // ebx
  void **v3; // r14
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned int *v9; // rbx
  char v10; // al
  int RenderTargetBitmap; // eax
  int v13[2]; // [rsp+88h] [rbp+Fh] BYREF
  int v14; // [rsp+90h] [rbp+17h]
  __int64 v15; // [rsp+98h] [rbp+1Fh] BYREF
  _BYTE v16[8]; // [rsp+A0h] [rbp+27h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+2Fh]
  int v18; // [rsp+E0h] [rbp+67h] BYREF
  int v19; // [rsp+F0h] [rbp+77h] BYREF
  char v20; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = 0;
  v3 = (void **)((char *)this + 80);
  if ( !*((_QWORD *)this + 10) )
  {
    v19 = 0;
    v18 = 0;
    v15 = 0x300000057LL;
    GetPixelFormatColorSpace(87, (enum ColorSpace *)v16);
    v6 = *((_QWORD *)this + 9);
    v17 = 0LL;
    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)(v6 + 112) + 24LL))(v6 + 112, &v19, &v18);
    v14 = 40;
    *(_QWORD *)v13 = "DWM Rendertarget (DFlip+ restore buffer)";
    v7 = *((_QWORD *)this + 9);
    v8 = v7 + 112;
    v9 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 96LL))(v7, &v20);
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 128LL))(v8);
    RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                           (__int64)&qword_1801F0018,
                           (__int64)v13,
                           v19,
                           v18,
                           1LL,
                           0,
                           (struct PixelFormatInfo *)&v15,
                           1,
                           a2,
                           *(struct _LUID *)((char *)this + 128),
                           *v9,
                           v10,
                           0,
                           1,
                           v3);
    v2 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x69Au);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      Template_x(
        *(_QWORD *)this,
        &EVTDESC_ADVANCED_DIRECTFLIP_CREATERESTOREBUFFER,
        *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32));
    }
  }
  return v2;
}
