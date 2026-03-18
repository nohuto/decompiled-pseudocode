/*
 * XREFs of ?GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801728B8
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18013B9DC (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDevic.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x18014E180 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompil.c)
 *     ?FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z @ 0x18015D20C (-FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z.c)
 *     ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x18017898C (-GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180034ED0 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ @ 0x180035C84 (-EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::GetFirstAvailableD3DDevice(
        CD3DDeviceManager *this,
        const struct _GUID *a2,
        struct CD3DDeviceLevel1 **a3)
{
  int D3DDevice; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned int v10; // [rsp+20h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  D3DDevice = CD3DDeviceManager::EnsureDXGIEnumeration(this);
  v7 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v10 = 864;
    goto LABEL_7;
  }
  v8 = *((_QWORD *)this + 9);
  if ( *(_DWORD *)(v8 + 88) )
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice(this, a2, *(struct _LUID *)(**(_QWORD **)(v8 + 64) + 336LL), a3);
    v7 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      v10 = 871;
LABEL_7:
      MilInstrumentationCheckHR(0x14u, &dword_1801C7480, 1u, D3DDevice, v10);
    }
  }
  else
  {
    v7 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801C7480, 1u, -2003304307, 0x36Bu);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v7;
}
