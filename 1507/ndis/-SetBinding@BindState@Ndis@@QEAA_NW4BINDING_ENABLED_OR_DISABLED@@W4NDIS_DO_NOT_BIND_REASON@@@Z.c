/*
 * XREFs of ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC
 * Callers:
 *     _lambda_8e30f3ed12b678c2e2902b934cc3b0c1_::_helper_func_cdecl_ @ 0x1C0055BB0 (_lambda_8e30f3ed12b678c2e2902b934cc3b0c1_--_helper_func_cdecl_.c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0055D88 (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0056A24 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisBindRequest @ 0x1C005EFB0 (ndisBindRequest.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A04E4 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A0A64 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$KPtr@UNDIS_BIND_.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Z @ 0x1C00A0B40 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00A109C (ndisMSetMiniportReadyForBinding.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A1520 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A177C (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A1C64 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A222C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2FD4 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C00A3AC4 (-MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z.c)
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A3CE0 (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A3E38 (-UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00A40C0 (-CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A45F4 (-CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A4708 (-UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A4904 (-CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00A65A4 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A6CF4 (-UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$KPtr@UNDIS_BIN.c)
 *     ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A6E0C (--$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@A.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00AEB60 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00CCFB0 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ?ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z @ 0x1C00CEF10 (-ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z.c)
 *     ndisQueuedStatusUnbindAdapter @ 0x1C00D0830 (ndisQueuedStatusUnbindAdapter.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C00D1A20 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     NdisMSetMiniportSecondary @ 0x1C00D1C50 (NdisMSetMiniportSecondary.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00E3130 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00E6058 (ndisPnPNotifyAllTransports.c)
 *     ndisPnPNotifyBinding @ 0x1C00E98E4 (ndisPnPNotifyBinding.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00EB930 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 */

char __fastcall Ndis::BindState::SetBinding(
        Ndis::BindState *this,
        enum BINDING_ENABLED_OR_DISABLED a2,
        enum NDIS_DO_NOT_BIND_REASON a3)
{
  unsigned int m_unbindReasons; // r10d
  unsigned int v5; // r9d
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx

  m_unbindReasons = this->m_unbindReasons;
  if ( a2 )
  {
    if ( a2 == BindingDisabled )
      this->m_unbindReasons = a3 | m_unbindReasons;
  }
  else
  {
    this->m_unbindReasons = m_unbindReasons & ~a3;
  }
  v5 = this->m_unbindReasons;
  if ( (m_unbindReasons != 0) == (v5 != 0) && this->Miniport )
    return 0;
  if ( (unsigned __int8)byte_1C0085323 >= 5u )
    WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, m_unbindReasons, v5);
  Miniport = this->Miniport;
  if ( !Miniport->BindEngine.m_isBeingDestroyed )
    Miniport->BindEngine.m_isDirty = 1;
  return 1;
}
