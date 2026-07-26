/*
 * XREFs of ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A24
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0012550 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C001EBD4 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisEnumerateFilterModules @ 0x1C0052790 (NdisEnumerateFilterModules.c)
 *     _lambda_5a0c0adad4973b4f26bfe6550d362256_::_helper_func_cdecl_ @ 0x1C0055A50 (_lambda_5a0c0adad4973b4f26bfe6550d362256_--_helper_func_cdecl_.c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0055C28 (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C00568B4 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisWdfMiniportDataPathStart @ 0x1C005B820 (NdisWdfMiniportDataPathStart.c)
 *     ndisBindRequest @ 0x1C005E910 (ndisBindRequest.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00983AC (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C009913C (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00994E4 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ndisFSetRestartAttributes @ 0x1C009CE04 (ndisFSetRestartAttributes.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C009EB00 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00A0368 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A1020 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A21D8 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A2C8C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00A6E98 (ndisMSetMiniportReadyForBinding.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00A7678 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A8460 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00A9740 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     _lambda_9a257e6d5af29d57c0884fc82970b8d2_::_helper_func_cdecl_ @ 0x1C00AC720 (_lambda_9a257e6d5af29d57c0884fc82970b8d2_--_helper_func_cdecl_.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00C63D0 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00C785C (ndisIMInitializeDeviceInstance_ea_1C00C785C.c)
 *     ?ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z @ 0x1C00C8320 (-ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z.c)
 *     ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00C8410 (-ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisQueuedStatusUnbindAdapter @ 0x1C00C9C40 (ndisQueuedStatusUnbindAdapter.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00CABE8 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C00CAD90 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     NdisMSetMiniportSecondary @ 0x1C00CAFC0 (NdisMSetMiniportSecondary.c)
 *     NdisWdfMiniportDataPathPause @ 0x1C00CCC60 (NdisWdfMiniportDataPathPause.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00D7610 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     _lambda_9e46fee1aa3a9bfa01fc7c62f26cea81_::_helper_func_cdecl_ @ 0x1C00D7720 (_lambda_9e46fee1aa3a9bfa01fc7c62f26cea81_--_helper_func_cdecl_.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00DFD10 (ndisDevicePowerDown.c)
 *     ndisPnPRemoveDevice @ 0x1C00E02B8 (ndisPnPRemoveDevice.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00E0B98 (ndisPnPNotifyAllTransports.c)
 *     ndisAddDevice @ 0x1C00E1708 (ndisAddDevice.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E1F18 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisOpenAdapterEx @ 0x1C00E3930 (NdisOpenAdapterEx.c)
 *     ndisPnPNotifyBinding @ 0x1C00E3EEC (ndisPnPNotifyBinding.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00EBF10 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A354C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall Ndis::BindEngine::EndPolicyUpdates(Ndis::BindEngine *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  bool m_isDirty; // al
  char v4; // di
  _NDIS_MINIPORT_BLOCK *m_miniport; // rcx

  m_isDirty = this->m_isDirty;
  v4 = 0;
  do
  {
    m_miniport = this->m_miniport;
    v4 |= m_isDirty;
    this->m_isDirty = 0;
    Ndis::BindRules::Apply((Ndis::BindRules *)m_miniport, a2);
    m_isDirty = this->m_isDirty;
  }
  while ( m_isDirty );
  this->m_isDirty = v4;
  ExReleasePushLockExclusiveEx(&this->m_lock, 0LL);
  KeLeaveCriticalRegion();
}
