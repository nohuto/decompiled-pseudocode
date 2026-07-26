/*
 * XREFs of ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A08E8
 * Callers:
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C0055C68 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C009BFC4 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00B3678 (ndisHandleBindNotification.c)
 *     ndisAddDevice @ 0x1C00E7650 (ndisAddDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 * Callees:
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C009C5C0 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00A0880 (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00A0A30 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A0A64 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$KPtr@UNDIS_BIND_.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1C00A11D4 (--1BindStack@Ndis@@QEAA@XZ.c)
 *     ??0BindStack@Ndis@@QEAA@XZ @ 0x1C00A13AC (--0BindStack@Ndis@@QEAA@XZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A1F38 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2FD4 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A6CF4 (-UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$KPtr@UNDIS_BIN.c)
 *     ?ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z @ 0x1C00B25C8 (-ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall Ndis::BindRegistry::Reload(
        Ndis::BindRegistry *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        enum Ndis::ReadBindingsOptions::Flags a3)
{
  unsigned int v4; // ebp
  _DEVICE_OBJECT *v5; // rbx
  unsigned int v6; // edi
  enum CallRunMode v7; // r8d
  Ndis::BindStack v9; // [rsp+20h] [rbp-98h] BYREF

  v4 = (unsigned int)a2;
  Ndis::BindStack::BindStack(&v9);
  v5 = (_DEVICE_OBJECT *)*((_QWORD *)this + 486);
  v6 = 0;
  if ( ndisIsInNetSetupMode() && Ndis::BindStack::ReadV2InterfaceBindings(&v9, (const struct _GUID *)this + 254)
    || Ndis::BindStack::ReadV1InterfaceBindings(&v9, v5) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 5232, 0LL);
    Ndis::BindRegistry::UpdateProtocols(this, (char *)this + 5072, &v9.Protocols, v4);
    Ndis::BindRegistry::UpdateFilters(this, (char *)this + 5096, &v9.Filters, v4);
    ++*((_DWORD *)this + 1300);
    Ndis::BindEngine::ApplyRules((Ndis::BindEngine *)((char *)this + 5208));
    ExReleasePushLockExclusiveEx((char *)this + 5232, 0LL);
    KeLeaveCriticalRegion();
    Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)((char *)this + 5208), RunSynchronous);
    Ndis::Initmode::DisableIfNeeded(this, 0LL, v7);
  }
  else
  {
    v6 = -1073741823;
  }
  Ndis::BindStack::~BindStack(&v9);
  return v6;
}
