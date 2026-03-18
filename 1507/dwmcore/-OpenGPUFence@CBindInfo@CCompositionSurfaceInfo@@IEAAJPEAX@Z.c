/*
 * XREFs of ?OpenGPUFence@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAX@Z @ 0x180004F98
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x180089BA0 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 * Callees:
 *     ?OpenFence@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAXPEAPEAXI3@Z @ 0x180005634 (-OpenFence@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAXPEAPEAXI3@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ @ 0x180087B20 (-GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::OpenGPUFence(void **this, void *a2)
{
  struct CComposition *(__fastcall *v4)(CSurfaceManager *__hidden); // rdi
  struct CComposition *CompositionNoRef; // rax
  int v6; // eax
  unsigned int v7; // ebx
  void **v9; // [rsp+20h] [rbp-28h]
  unsigned int v10; // [rsp+28h] [rbp-20h]

  v4 = *(struct CComposition *(__fastcall **)(CSurfaceManager *__hidden))(**((_QWORD **)*this + 3) + 8LL);
  if ( v4 == CSurfaceManager::GetCompositionNoRef )
    CompositionNoRef = CSurfaceManager::GetCompositionNoRef(*((CSurfaceManager **)*this + 3));
  else
    CompositionNoRef = v4(*((CSurfaceManager **)*this + 3));
  v6 = CD3DDeviceManager::OpenFence(
         (CD3DDeviceManager *)&g_D3DDeviceManager,
         (const struct _GUID *)((char *)CompositionNoRef + 252),
         *(struct _LUID *)((char *)this + 100),
         a2,
         v9,
         v10,
         this + 14);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x638u);
  return v7;
}
