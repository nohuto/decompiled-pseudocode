/*
 * XREFs of ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C00114C4 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0014890 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisEnumerateFilterModules @ 0x1C0057280 (NdisEnumerateFilterModules.c)
 *     _lambda_1f70e7b164a43a0d336a36d71bfafc03_::_lambda_invoker_cdecl_ @ 0x1C005A210 (_lambda_1f70e7b164a43a0d336a36d71bfafc03_--_lambda_invoker_cdecl_.c)
 *     _lambda_d7e18b6ef415ee16504487d4de9f46a0_::operator() @ 0x1C005A238 (_lambda_d7e18b6ef415ee16504487d4de9f46a0_--operator().c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C005A414 (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005B088 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisWdfMiniportDataPathStart @ 0x1C005F650 (NdisWdfMiniportDataPathStart.c)
 *     ndisBindRequest @ 0x1C00628E8 (ndisBindRequest.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C009C88C (ndisIssueNetEventSetPowerEvent.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C009EB9C (ndisMSetMiniportReadyForBinding.c)
 *     _lambda_3586b9b7f2fd6000f93b66a493a8f736_::_lambda_invoker_cdecl_ @ 0x1C00AAC80 (_lambda_3586b9b7f2fd6000f93b66a493a8f736_--_lambda_invoker_cdecl_.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00AAD08 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00AD3D0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00CBE70 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00CD13C (ndisIMInitializeDeviceInstance_ea_1C00CD13C.c)
 *     ?ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z @ 0x1C00CDBF0 (-ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z.c)
 *     ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00CDCE4 (-ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisQueuedStatusUnbindAdapter @ 0x1C00CF660 (ndisQueuedStatusUnbindAdapter.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00D05F8 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C00D07B0 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     NdisMSetMiniportSecondary @ 0x1C00D09E0 (NdisMSetMiniportSecondary.c)
 *     NdisWdfMiniportDataPathPause @ 0x1C00D2950 (NdisWdfMiniportDataPathPause.c)
 *     _lambda_55dd5fd2ac8d6f91724a8900c7ec63ca_::_lambda_invoker_cdecl_ @ 0x1C00DD5C0 (_lambda_55dd5fd2ac8d6f91724a8900c7ec63ca_--_lambda_invoker_cdecl_.c)
 *     _lambda_28a615441be2ea9fc307386fd4fcfbda_::_lambda_invoker_cdecl_ @ 0x1C00E2B90 (_lambda_28a615441be2ea9fc307386fd4fcfbda_--_lambda_invoker_cdecl_.c)
 *     ndisDevicePowerOn @ 0x1C00E5000 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00E5F90 (ndisDevicePowerDown.c)
 *     ndisPnPRemoveDevice @ 0x1C00E6FA8 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00F2BA8 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     ndisSelectiveSuspendClearStop @ 0x1C006C230 (ndisSelectiveSuspendClearStop.c)
 *     ndisSelectiveSuspendStop @ 0x1C006C56C (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C006CFAC (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C006D4D8 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z @ 0x1C009C1E4 (-DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z.c)
 *     ?Wait@KWaitEventBase@@QEAAXXZ @ 0x1C009C27C (-Wait@KWaitEventBase@@QEAAXXZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6E6C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall Ndis::BindEngine::ApplyBindChanges(Ndis::BindEngine *this, enum CallRunMode a2, char a3)
{
  _NDIS_MINIPORT_BLOCK *m_miniport; // rdi
  _NDIS_MINIPORT_BLOCK *v7; // rbx
  KLockThisExclusive v8; // [rsp+20h] [rbp-28h] BYREF

  if ( a3 && a2 == RunSynchronous )
  {
    m_miniport = this->m_miniport;
    if ( this->m_miniport->SelectiveSuspend )
      ndisSelectiveSuspendStop(this->m_miniport, 13);
    if ( m_miniport->AoAc )
      ndisAoAcStop(m_miniport, 13, RunAsynchronous);
  }
  KLockThisExclusive::KLockThisExclusive(&v8, &this->m_lock);
  if ( this->m_bindThread )
  {
    KLockHolder::ReleaseExclusive(&v8);
    if ( a2 == RunSynchronous )
      KWaitEventBase::Wait(&this->m_bindCompleteEvent);
  }
  else
  {
    Ndis::BindEngine::DispatchPendingWork(this, a2, &v8);
  }
  if ( a3 && a2 == RunSynchronous )
  {
    v7 = this->m_miniport;
    if ( v7->SelectiveSuspend )
      ndisSelectiveSuspendClearStop((__int64)v7, 13);
    if ( v7->AoAc )
      ndisAoAcClearStop(v7, NdisSSBindChanges);
  }
  KLockHolder::~KLockHolder(&v8);
}
