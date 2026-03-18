/*
 * XREFs of ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAXPEAPEAVIRenderTargetBitmap@@@Z @ 0x180144DC0
 * Callers:
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18010838C (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180071388 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800724C8 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x1800AF990 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAXPEAPEAV1@@Z @ 0x18014B470 (-OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PE.c)
 */

__int64 __fastcall CD3DDeviceManager::OpenSharedHandleAsRenderTargetBitmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _GUID *a5,
        struct _LUID a6,
        unsigned int a7,
        __int64 a8,
        struct CD3DDeviceLevel1 *a9)
{
  struct CD3DDeviceLevel1 *v9; // r15
  CD3DDeviceManager *v10; // rbx
  int v11; // r8d
  __int64 v12; // rdx
  int v14; // eax
  int v15; // edi
  int D3DDevice; // eax
  struct CD3DDeviceLevel1 *v17; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v19; // r9
  int v20; // eax
  __int64 (__fastcall ***v21)(_QWORD, GUID *, struct CD3DDeviceLevel1 *); // r14
  int v22; // eax
  __int64 (__fastcall ***v24)(_QWORD, GUID *, struct CD3DDeviceLevel1 *); // [rsp+30h] [rbp-10h] BYREF
  struct CD3DDeviceLevel1 *v25; // [rsp+70h] [rbp+30h] BYREF

  v9 = a9;
  v10 = (CD3DDeviceManager *)(a1 - 16);
  v11 = a7;
  v12 = (__int64)a6;
  v25 = 0LL;
  *(_QWORD *)a9 = 0LL;
  v24 = 0LL;
  v14 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(a1 - 16, v12, v11);
  v15 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x6ABu);
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180183F24, 1u, v15, 0xA04u);
    return (unsigned int)v15;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice(v10, a5, a6, &v25);
  v15 = D3DDevice;
  if ( D3DDevice >= 0 )
  {
    v17 = v25;
    a9 = v25;
    ++*((_DWORD *)v25 + 126);
    CurrentThreadId = GetCurrentThreadId();
    v19 = a8;
    *((_DWORD *)v17 + 127) = CurrentThreadId;
    v20 = CHwTextureRenderTarget::OpenShared(v17, a7, a4, v19, &v24);
    v15 = v20;
    if ( v20 >= 0 )
    {
      v21 = v24;
      v22 = (**v24)(v24, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, v9);
      v15 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_180183F24, 1u, v22, 0xA15u);
        CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>((__int64 *)&a9);
        goto LABEL_14;
      }
      CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>((__int64 *)&a9);
      if ( !g_pMediaControl )
      {
LABEL_14:
        if ( v21 )
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct CD3DDeviceLevel1 *)))(*v21)[2])(v21);
        goto LABEL_16;
      }
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)g_pMediaControl + 2) + 88LL));
      v17 = v25;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, &dword_180183F24, 1u, v20, 0xA12u);
      CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>((__int64 *)&a9);
    }
    v21 = v24;
    goto LABEL_14;
  }
  MilInstrumentationCheckHR(0x14u, &dword_180183F24, 1u, D3DDevice, 0xA06u);
  v17 = v25;
LABEL_16:
  if ( v17 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v17 + 384));
  return (unsigned int)v15;
}
