/*
 * XREFs of ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180099AE4
 * Callers:
 *     ?EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x180099224 (-EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealizati.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CCompositionSurfaceInfo@@AEAAXPEAG@Z @ 0x180099584 (-EnsureSwapChainTelemetryInitialized@CBindInfo@CCompositionSurfaceInfo@@AEAAXPEAG@Z.c)
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1800998F8 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180099BD0 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     ?CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x180151C84 (-CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::Initialize(CCompositionSurfaceInfo::CBindInfo *this, __int64 a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  unsigned int v9; // [rsp+20h] [rbp-448h]
  __int64 v10; // [rsp+30h] [rbp-438h] BYREF
  _DWORD v11[4]; // [rsp+40h] [rbp-428h] BYREF
  _BYTE v12[120]; // [rsp+50h] [rbp-418h] BYREF
  struct _LUID v13[97]; // [rsp+C8h] [rbp-3A0h] BYREF
  unsigned __int16 v14[64]; // [rsp+3D0h] [rbp-98h] BYREF

  v10 = a2;
  v3 = 0;
  memset_0(v11, 0, 0x410uLL);
  if ( *((_QWORD *)this + 1) )
    CCompositionSurfaceInfo::CBindInfo::Reset(this);
  v4 = NtQueryCompositionSurfaceBinding(*(_QWORD *)(*(_QWORD *)this + 32LL), &v10, v11);
  if ( v4 < 0 )
  {
    v3 = v4 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, &dword_1801B8EF0, 3u, v4 | 0x10000000, 0x3BCu);
    goto LABEL_9;
  }
  v5 = v11[0];
  *((_QWORD *)this + 1) = v10;
  *((_DWORD *)this + 4) = v5;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        v3 = -2147024809;
        MilInstrumentationCheckHR(0x14u, &dword_1801B8EF0, 3u, -2147024809, 0x3DEu);
        goto LABEL_13;
      }
      v7 = CCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
             (struct CDecodeBitmap **)this,
             (const struct CSM_BUFFER_ATTRIBUTES *)v12,
             v13);
      v3 = v7;
      if ( v7 >= 0 )
      {
        CCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(this, v14);
        goto LABEL_9;
      }
      v9 = 976;
    }
    else
    {
      v7 = CCompositionSurfaceInfo::CBindInfo::CreateAndAddSingleBuffer(
             this,
             (const struct CSM_BUFFER_ATTRIBUTES *)v12,
             (const struct CSM_SINGLE_BUFFER_INFO *)v13);
      v3 = v7;
      if ( v7 >= 0 )
        return v3;
      v9 = 969;
    }
    MilInstrumentationCheckHR(0x14u, &dword_1801B8EF0, 3u, v7, v9);
LABEL_9:
    if ( (v3 & 0x80000000) == 0 )
      return v3;
LABEL_13:
    *((_QWORD *)this + 1) = 0LL;
    *((_DWORD *)this + 4) = 0;
  }
  return v3;
}
