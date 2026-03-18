/*
 * XREFs of ?OpenFence@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAXPEAPEAXI3@Z @ 0x180005634
 * Callers:
 *     ?OpenGPUFence@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAX@Z @ 0x180004F98 (-OpenGPUFence@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180055818 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceManager::OpenFence(
        CD3DDeviceManager *this,
        const struct _GUID *a2,
        struct _LUID a3,
        void *a4,
        void **a5,
        unsigned int a6,
        void **a7)
{
  int D3DDevice; // eax
  void **v9; // rsi
  unsigned int v10; // ebx
  int v11; // eax

  a5 = 0LL;
  D3DDevice = CD3DDeviceManager::GetD3DDevice(this, a2, a3, (struct CD3DDeviceLevel1 **)&a5);
  v9 = a5;
  v10 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, D3DDevice, 0x4B0u);
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(void *, void *, _QWORD, _QWORD, void **))(*(_QWORD *)a5[65] + 24LL))(
            a5[65],
            a4,
            0LL,
            0LL,
            a7);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v11, 0x4B5u);
  }
  if ( v9 )
    CMILPoolResource::Release((CMILPoolResource *)(v9 + 49));
  return v10;
}
