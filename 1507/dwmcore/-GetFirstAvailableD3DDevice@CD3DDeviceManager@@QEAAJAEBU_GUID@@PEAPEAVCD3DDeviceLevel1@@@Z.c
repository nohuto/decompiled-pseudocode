/*
 * XREFs of ?GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180133220
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCCompiledEffect@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x180112670 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCCompiledEffect@@VCD3DDe.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x180115220 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VC.c)
 *     ?FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z @ 0x180121F7C (-FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z.c)
 *     ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x180137564 (-GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180055818 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ @ 0x180055F6C (-EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::GetFirstAvailableD3DDevice(
        CD3DDeviceManager *this,
        const struct _GUID *a2,
        struct CD3DDeviceLevel1 **a3)
{
  int D3DDevice; // eax
  unsigned int v7; // ebx
  int v8; // r9d
  __int64 v9; // rax
  unsigned int v11; // [rsp+20h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  D3DDevice = CD3DDeviceManager::EnsureDXGIEnumeration(this);
  v7 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v11 = 800;
LABEL_3:
    v8 = D3DDevice;
LABEL_8:
    MilInstrumentationCheckHR(0x14u, &dword_1801757BC, 1u, v8, v11);
    goto LABEL_9;
  }
  v9 = *((_QWORD *)this + 10);
  if ( !*(_DWORD *)(v9 + 88) )
  {
    v7 = -2003304307;
    v11 = 811;
    v8 = -2003304307;
    goto LABEL_8;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice(this, a2, *(struct _LUID *)(**(_QWORD **)(v9 + 64) + 336LL), a3);
  v7 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v11 = 807;
    goto LABEL_3;
  }
LABEL_9:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
  return v7;
}
