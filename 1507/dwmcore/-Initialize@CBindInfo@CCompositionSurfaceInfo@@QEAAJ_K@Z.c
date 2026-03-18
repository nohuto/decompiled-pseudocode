/*
 * XREFs of ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180089DB4
 * Callers:
 *     ?FindRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x1800869F8 (-FindRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180086B28 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x180089BA0 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180089E90 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x1801192B8 (-CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::Initialize(CCompositionSurfaceInfo::CBindInfo *this, __int64 a2)
{
  int CompositionSurfaceBinding; // eax
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v10; // eax
  _DWORD v11[4]; // [rsp+30h] [rbp-3D8h] BYREF
  _BYTE v12[168]; // [rsp+40h] [rbp-3C8h] BYREF
  _BYTE v13[776]; // [rsp+E8h] [rbp-320h] BYREF

  memset_0(v11, 0, 0x3C0uLL);
  if ( *((_QWORD *)this + 1) )
    CCompositionSurfaceInfo::CBindInfo::Reset(this);
  CompositionSurfaceBinding = QueryCompositionSurfaceBinding(*(_QWORD *)(*(_QWORD *)this + 32LL), a2, v11);
  v5 = CompositionSurfaceBinding;
  if ( CompositionSurfaceBinding < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016AE00, 3u, CompositionSurfaceBinding, 0x36Du);
    goto LABEL_9;
  }
  v6 = v11[0];
  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 4) = v6;
  if ( !v6 )
    goto LABEL_9;
  v7 = v6 - 1;
  if ( !v7 )
  {
    v10 = CCompositionSurfaceInfo::CBindInfo::CreateAndAddSingleBuffer(
            this,
            (const struct CSM_BUFFER_ATTRIBUTES *)v12,
            (const struct CSM_SINGLE_BUFFER_INFO *)v13);
    v5 = v10;
    if ( v10 >= 0 )
      return v5;
    MilInstrumentationCheckHR(0x14u, &dword_18016AE00, 3u, v10, 0x37Au);
LABEL_9:
    if ( (v5 & 0x80000000) == 0 )
      return v5;
LABEL_13:
    *((_QWORD *)this + 1) = 0LL;
    *((_DWORD *)this + 4) = 0;
    return v5;
  }
  if ( v7 != 1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, &dword_18016AE00, 3u, -2147024809, 0x38Du);
    goto LABEL_13;
  }
  v8 = CCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
         this,
         (const struct CSM_BUFFER_ATTRIBUTES *)v12,
         (const struct CSM_SWAPCHAIN_BUFFER_INFO *)v13);
  v5 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016AE00, 3u, v8, 0x381u);
    goto LABEL_9;
  }
  return v5;
}
