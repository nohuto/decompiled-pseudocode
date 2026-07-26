/*
 * XREFs of ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00AAD08
 * Callers:
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005A2F4 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C009CF00 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00CC5AC (ndisHandleBindNotification.c)
 *     ndisAddDevice @ 0x1C00E88C0 (ndisAddDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1C00A3564 (--1BindStack@Ndis@@QEAA@XZ.c)
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C00A3618 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 *     ??0BindStack@Ndis@@QEAA@XZ @ 0x1C00A3840 (--0BindStack@Ndis@@QEAA@XZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00A8C10 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00AAAB4 (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ComputeDelta@BindRegistry@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00AACB4 (-ComputeDelta@BindRegistry@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@1W4Flags@ReadBindi.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z @ 0x1C00E372C (-ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall Ndis::BindRegistry::Reload(
        Ndis::BindRegistry *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        enum Ndis::ReadBindingsOptions::Flags a3)
{
  unsigned int v4; // ebp
  _DEVICE_OBJECT *v5; // rbx
  unsigned int v6; // edi
  struct _NDIS_MINIPORT_BLOCK *v7; // rdx
  enum CallRunMode v8; // r8d
  Ndis::BindStack v10; // [rsp+20h] [rbp-98h] BYREF

  v4 = (unsigned int)a2;
  Ndis::BindStack::BindStack(&v10);
  v5 = (_DEVICE_OBJECT *)*((_QWORD *)this + 486);
  v6 = 0;
  if ( ndisIsInNetSetupMode() && Ndis::BindStack::ReadV2InterfaceBindings(&v10, (const struct _GUID *)this + 254)
    || Ndis::BindStack::ReadV1InterfaceBindings(&v10, v5) )
  {
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)((char *)this + 5208));
    Ndis::BindRegistry::ComputeDelta(
      this,
      (struct _NDIS_MINIPORT_BLOCK *)((char *)this + 5064),
      &v10,
      (struct Ndis::BindStack *)v4);
    ++*((_DWORD *)this + 1300);
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)((char *)this + 5208), v7);
    Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)((char *)this + 5208), RunSynchronous, 0);
    Ndis::Initmode::DisableIfNeeded(this, 0LL, v8);
  }
  else
  {
    v6 = -1073741823;
  }
  Ndis::BindStack::~BindStack(&v10);
  return v6;
}
