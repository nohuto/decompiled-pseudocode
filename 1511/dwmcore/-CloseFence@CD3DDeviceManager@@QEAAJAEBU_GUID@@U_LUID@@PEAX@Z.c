/*
 * XREFs of ?CloseFence@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAX@Z @ 0x180011148
 * Callers:
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x18006C85C (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18007256C (-GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::CloseFence(
        CD3DDeviceManager *this,
        const struct _GUID *a2,
        struct _LUID a3,
        void *a4)
{
  int ExistingDevice; // eax
  struct CD3DDeviceLevel1 *v6; // rsi
  unsigned int v7; // ebx
  int v8; // eax
  struct CD3DDeviceLevel1 *v10; // [rsp+30h] [rbp-18h] BYREF

  v10 = 0LL;
  ExistingDevice = CD3DDeviceManager::GetExistingDevice(this, a2, a3, &v10);
  v6 = v10;
  v7 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, ExistingDevice, 0x502u);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)v10 + 64) + 40LL))(*((_QWORD *)v10 + 64), a4);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v8, 0x504u);
  }
  if ( v6 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v6 + 384));
  return v7;
}
