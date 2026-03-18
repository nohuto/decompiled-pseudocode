/*
 * XREFs of ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAXPEAPEAVIRenderTargetBitmap@@@Z @ 0x180172BB0
 * Callers:
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18011EE3C (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180034ED0 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180035208 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAXPEAPEAV1@@Z @ 0x18017BD48 (-OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PE.c)
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
        _QWORD *a9)
{
  _QWORD *v9; // r15
  CD3DDeviceManager *v10; // r14
  unsigned int v11; // r8d
  struct CD3DDeviceLevel1 *v12; // rsi
  __int64 v13; // rdx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // rdi
  int v16; // eax
  int v17; // ebx
  int D3DDevice; // eax
  int v19; // eax
  int v20; // eax
  struct CD3DDeviceLevel1 *v22; // [rsp+30h] [rbp-10h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, _QWORD *); // [rsp+70h] [rbp+30h] BYREF

  v9 = a9;
  v10 = (CD3DDeviceManager *)(a1 - 16);
  v11 = a7;
  v12 = 0LL;
  v13 = (__int64)a6;
  v14 = 0LL;
  v22 = 0LL;
  *a9 = 0LL;
  v23 = 0LL;
  v16 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(a1 - 16, v13, v11);
  v17 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x644u);
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801C7480, 1u, v17, 0x9D6u);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice(v10, a5, a6, &v22);
    v17 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801C7480, 1u, D3DDevice, 0x9D8u);
      v12 = v22;
      goto LABEL_13;
    }
    v12 = v22;
    v19 = CHwTextureRenderTarget::OpenShared(v22, a7, a4, a8, &v23);
    v17 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801C7480, 1u, v19, 0x9E1u);
      v14 = v23;
    }
    else
    {
      v14 = v23;
      v20 = (**v23)(v23, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, v9);
      v17 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801C7480, 1u, v20, 0x9E4u);
    }
  }
  if ( v14 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v14)[2])(v14);
LABEL_13:
  if ( v12 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v12 + 408));
  return (unsigned int)v17;
}
