/*
 * XREFs of ?UnpinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z @ 0x180011230
 * Callers:
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x18001B938 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 * Callees:
 *     ?UnpinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x180011CFC (-UnpinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18007256C (-GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::UnpinResources(
        CD3DDeviceManager *this,
        const struct _GUID *a2,
        struct _LUID a3,
        struct IDXGIResource **a4,
        unsigned int a5)
{
  int ExistingDevice; // eax
  CD3DDeviceLevel1 *v7; // rdi
  unsigned int v8; // ebx
  int v9; // eax
  CD3DDeviceLevel1 *v11; // [rsp+30h] [rbp-18h] BYREF

  v11 = 0LL;
  ExistingDevice = CD3DDeviceManager::GetExistingDevice(this, a2, a3, &v11);
  v7 = v11;
  v8 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, ExistingDevice, 0x54Fu);
  }
  else
  {
    v9 = CD3DDeviceLevel1::UnpinResources(v11, a4, a5);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v9, 0x551u);
  }
  if ( v7 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v7 + 384));
  return v8;
}
