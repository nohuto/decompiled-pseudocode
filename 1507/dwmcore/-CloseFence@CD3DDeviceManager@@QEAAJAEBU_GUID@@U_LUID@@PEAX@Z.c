/*
 * XREFs of ?CloseFence@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAX@Z @ 0x1800056D0
 * Callers:
 *     ?CloseGPUFence@CBindInfo@CCompositionSurfaceInfo@@IEAAJXZ @ 0x180089898 (-CloseGPUFence@CBindInfo@CCompositionSurfaceInfo@@IEAAJXZ.c)
 * Callees:
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180005478 (-GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, ExistingDevice, 0x4FEu);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)v10 + 65) + 40LL))(*((_QWORD *)v10 + 65), a4);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v8, 0x500u);
  }
  if ( v6 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v6 + 392));
  return v7;
}
