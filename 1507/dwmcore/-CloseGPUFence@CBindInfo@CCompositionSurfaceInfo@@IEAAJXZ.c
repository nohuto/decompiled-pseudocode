/*
 * XREFs of ?CloseGPUFence@CBindInfo@CCompositionSurfaceInfo@@IEAAJXZ @ 0x180089898
 * Callers:
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180089E90 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 * Callees:
 *     ?CloseFence@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAX@Z @ 0x1800056D0 (-CloseFence@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ @ 0x180087B20 (-GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::CloseGPUFence(void **this)
{
  unsigned int v1; // edi
  CSurfaceManager *v4; // rdi
  struct CComposition *(__fastcall *v5)(CSurfaceManager *); // rsi
  struct CComposition *CompositionNoRef; // rax
  int v7; // eax

  v1 = 0;
  if ( this[14] )
  {
    v4 = (CSurfaceManager *)*((_QWORD *)*this + 3);
    v5 = *(struct CComposition *(__fastcall **)(CSurfaceManager *))(*(_QWORD *)v4 + 8LL);
    if ( v5 == CSurfaceManager::GetCompositionNoRef )
      CompositionNoRef = CSurfaceManager::GetCompositionNoRef(v4);
    else
      CompositionNoRef = v5(*((CSurfaceManager **)*this + 3));
    v7 = CD3DDeviceManager::CloseFence(
           (CD3DDeviceManager *)&g_D3DDeviceManager,
           (const struct _GUID *)((char *)CompositionNoRef + 252),
           *(struct _LUID *)((char *)this + 100),
           this[14]);
    v1 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v7, 0x64Eu);
    this[14] = 0LL;
  }
  return v1;
}
