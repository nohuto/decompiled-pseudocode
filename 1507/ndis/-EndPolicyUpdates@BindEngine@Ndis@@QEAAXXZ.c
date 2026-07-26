/*
 * XREFs of ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C000EB4C (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C001CF98 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisEnumerateFilterModules @ 0x1C00522E0 (NdisEnumerateFilterModules.c)
 *     _lambda_8e30f3ed12b678c2e2902b934cc3b0c1_::_helper_func_cdecl_ @ 0x1C0055BB0 (_lambda_8e30f3ed12b678c2e2902b934cc3b0c1_--_helper_func_cdecl_.c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0055D88 (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0056A24 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisWdfMiniportDataPathStart @ 0x1C005BAB0 (NdisWdfMiniportDataPathStart.c)
 *     ndisBindRequest @ 0x1C005EFB0 (ndisBindRequest.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C009C000 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A04E4 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00A13F4 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A1520 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A177C (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A222C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00A65A4 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00AEB60 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ndisFSetRestartAttributes @ 0x1C00B0028 (ndisFSetRestartAttributes.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00B02D0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00B047C (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     _lambda_9a257e6d5af29d57c0884fc82970b8d2_::_helper_func_cdecl_ @ 0x1C00B1240 (_lambda_9a257e6d5af29d57c0884fc82970b8d2_--_helper_func_cdecl_.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00CCFB0 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00CE44C (ndisIMInitializeDeviceInstance_ea_1C00CE44C.c)
 *     ?ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z @ 0x1C00CEF10 (-ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z.c)
 *     ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00CF000 (-ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisQueuedStatusUnbindAdapter @ 0x1C00D0830 (ndisQueuedStatusUnbindAdapter.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00D1884 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C00D1A20 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     NdisMSetMiniportSecondary @ 0x1C00D1C50 (NdisMSetMiniportSecondary.c)
 *     NdisWdfMiniportDataPathPause @ 0x1C00D34D0 (NdisWdfMiniportDataPathPause.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00DDCC0 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     _lambda_9e46fee1aa3a9bfa01fc7c62f26cea81_::_helper_func_cdecl_ @ 0x1C00DDDD0 (_lambda_9e46fee1aa3a9bfa01fc7c62f26cea81_--_helper_func_cdecl_.c)
 *     ndisDevicePowerOn @ 0x1C00E5640 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00E5B90 (ndisDevicePowerDown.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00E6058 (ndisPnPNotifyAllTransports.c)
 *     ndisPnPRemoveDevice @ 0x1C00E63F0 (ndisPnPRemoveDevice.c)
 *     ndisAddDevice @ 0x1C00E7650 (ndisAddDevice.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E88AC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisPnPNotifyBinding @ 0x1C00E98E4 (ndisPnPNotifyBinding.c)
 *     NdisOpenAdapterEx @ 0x1C00E9A60 (NdisOpenAdapterEx.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00EB930 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     ?ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019438 (-ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00A1638 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 *     ?PauseMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A3404 (-PauseMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00A35E8 (-PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A382C (-UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C00A3AC4 (-MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z.c)
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A3CE0 (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A3E38 (-UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00A40C0 (-CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A4244 (-CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A44A8 (-RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A45F4 (-CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A4708 (-UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A4904 (-CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A49D0 (-CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A4BE8 (-ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A4D68 (-ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 */

void __fastcall Ndis::BindEngine::EndPolicyUpdates(Ndis::BindEngine *this)
{
  char v2; // bp
  _NDIS_MINIPORT_BLOCK *m_miniport; // rsi
  struct _NDIS_MINIPORT_BLOCK *v4; // rcx
  struct Ndis::BindStack *v5; // rdx
  struct _NDIS_MINIPORT_BLOCK *v6; // rdx
  struct Ndis::BindStack *v7; // rdx
  struct Ndis::BindStack *v8; // rdx
  struct _NDIS_MINIPORT_BLOCK *v9; // rdx
  struct Ndis::BindStack *v10; // rdx
  struct Ndis::BindStack *v11; // rdx
  struct Ndis::BindStack *v12; // rdx
  struct Ndis::BindStack *v13; // r8
  struct Ndis::BindStack *v14; // rdx
  struct Ndis::BindStack *v15; // rdx
  struct Ndis::BindStack *v16; // rdx
  bool v17; // r8
  struct Ndis::BindStack *v18; // rdx
  struct Ndis::BindStack *v19; // r8
  struct Ndis::BindStack *v20; // rdx

  v2 = 0;
  do
  {
    m_miniport = this->m_miniport;
    v2 |= this->m_isDirty;
    v4 = this->m_miniport;
    this->m_isDirty = 0;
    if ( ndisMDoesMiniportNeedCoNdisNdProxy(v4) )
      ndisBindEnumerateProtocolDrivers(
        (void (__fastcall *)(__int64, volatile signed __int32 **))lambda_f15002d7dee2adb7876419c4171e5c91_::_helper_func_cdecl_,
        (__int64)m_miniport);
    Ndis::BindRules::ReEnableTemporaryUnbind((Ndis::BindRules *)&m_miniport->Bindings, v5);
    Ndis::BindRules::ReStartTemporaryPause(m_miniport, v6);
    Ndis::BindRules::CheckForDriverLoaded((Ndis::BindRules *)&m_miniport->Bindings, v7);
    Ndis::BindRules::CheckForVBusDependency((Ndis::BindRules *)&m_miniport->Bindings, v8);
    Ndis::BindRules::UnbindIncompatibleDriversForMacChange((Ndis::BindRules *)m_miniport, v9);
    Ndis::BindRules::CheckMissingModifyingFilter((Ndis::BindRules *)&m_miniport->Bindings, v10);
    Ndis::BindRules::RetryProtocolBindingsAfterMiniportChange((Ndis::BindRules *)&m_miniport->Bindings, v11);
    Ndis::BindRules::CheckMissingMandatoryFilter((Ndis::BindRules *)&m_miniport->Bindings, v12);
    Ndis::BindRules::CoalesceFilterAttachDuringBoot(
      m_miniport,
      (struct _NDIS_MINIPORT_BLOCK *)&m_miniport->Bindings,
      v13);
    Ndis::BindRules::UnbindOnAttach((Ndis::BindRules *)&m_miniport->Bindings, v14);
    Ndis::BindRules::UnbindOnDetach((Ndis::BindRules *)&m_miniport->Bindings, v15);
    LOBYTE(v16) = m_miniport->InitMode != 0;
    Ndis::BindRules::MakeOptionalFiltersMandatoryDuringBoot((Ndis::BindRules *)&m_miniport->Bindings, v16, v17);
    Ndis::BindRules::UnbindMiniportStack((Ndis::BindRules *)&m_miniport->Bindings, v18);
    Ndis::BindRules::PauseNeededForBind(m_miniport, (struct _NDIS_MINIPORT_BLOCK *)&m_miniport->Bindings, v19);
    Ndis::BindRules::PauseMiniportStack((Ndis::BindRules *)&m_miniport->Bindings, v20);
  }
  while ( this->m_isDirty );
  this->m_isDirty = v2;
  ExReleasePushLockExclusiveEx(&this->m_lock, 0LL);
  KeLeaveCriticalRegion();
}
