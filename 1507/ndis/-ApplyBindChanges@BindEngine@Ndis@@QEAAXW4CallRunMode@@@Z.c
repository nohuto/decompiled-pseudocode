/*
 * XREFs of ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A1F38
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C000EB4C (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C001CF98 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisEnumerateFilterModules @ 0x1C00522E0 (NdisEnumerateFilterModules.c)
 *     _lambda_28977e66c5b80366e0db14d788188459_::_helper_func_cdecl_ @ 0x1C0055B90 (_lambda_28977e66c5b80366e0db14d788188459_--_helper_func_cdecl_.c)
 *     _lambda_8e30f3ed12b678c2e2902b934cc3b0c1_::_helper_func_cdecl_ @ 0x1C0055BB0 (_lambda_8e30f3ed12b678c2e2902b934cc3b0c1_--_helper_func_cdecl_.c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0055D88 (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0056A24 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisWdfMiniportDataPathStart @ 0x1C005BAB0 (NdisWdfMiniportDataPathStart.c)
 *     ndisBindRequest @ 0x1C005EFB0 (ndisBindRequest.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C009B2D0 (ndisIssueNetEventSetPowerEvent.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A08E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00A109C (ndisMSetMiniportReadyForBinding.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00B02D0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     _lambda_771a8e8e365bef8cca390f7125e613d4_::_helper_func_cdecl_ @ 0x1C00B1D40 (_lambda_771a8e8e365bef8cca390f7125e613d4_--_helper_func_cdecl_.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00CCFB0 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00CE44C (ndisIMInitializeDeviceInstance_ea_1C00CE44C.c)
 *     ?ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z @ 0x1C00CEF10 (-ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z.c)
 *     ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00CF000 (-ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisQueuedStatusUnbindAdapter @ 0x1C00D0830 (ndisQueuedStatusUnbindAdapter.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00D1884 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C00D1A20 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     NdisMSetMiniportSecondary @ 0x1C00D1C50 (NdisMSetMiniportSecondary.c)
 *     NdisWdfMiniportDataPathPause @ 0x1C00D34D0 (NdisWdfMiniportDataPathPause.c)
 *     _lambda_9e46fee1aa3a9bfa01fc7c62f26cea81_::_helper_func_cdecl_ @ 0x1C00DDDD0 (_lambda_9e46fee1aa3a9bfa01fc7c62f26cea81_--_helper_func_cdecl_.c)
 *     _lambda_1ce06b2b40968439b229a98218e85867_::_helper_func_cdecl_ @ 0x1C00E2E00 (_lambda_1ce06b2b40968439b229a98218e85867_--_helper_func_cdecl_.c)
 *     ndisDevicePowerOn @ 0x1C00E5640 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00E5B90 (ndisDevicePowerDown.c)
 *     ndisPnPRemoveDevice @ 0x1C00E63F0 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00EB930 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     ?Wait@KWaitEventBase@@QEAAXXZ @ 0x1C009B178 (-Wait@KWaitEventBase@@QEAAXXZ.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2190 (-UpdateBindings@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6BE4 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ReleaseShared@KLockHolder@@QEAAXXZ @ 0x1C00A6C38 (-ReleaseShared@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall Ndis::BindEngine::ApplyBindChanges(Ndis::BindEngine *this, enum CallRunMode a2)
{
  KPushLock *p_m_lock; // rbx
  KPushLockBase *m_Lock; // rcx
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  p_m_lock = &this->m_lock;
  v6.m_Lock = &this->m_lock;
  KeEnterCriticalRegion();
  v6.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
  v6.m_State = Exclusive;
  if ( this->m_bindThread )
  {
    KLockHolder::ReleaseExclusive(&v6);
    if ( a2 == RunSynchronous )
      KWaitEventBase::Wait(&this->m_bindCompleteEvent);
  }
  else if ( this->m_isDirty )
  {
    KeClearEvent(&this->m_bindCompleteEvent.m_event);
    _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
    if ( a2 == RunAsynchronous )
    {
      this->m_bindThread = (_KTHREAD *)1;
      KeClearEvent(&this->m_backgroundWorkFinishedEvent.m_event);
      ExQueueWorkItem(&this->m_asyncBindWorkItem.m_workitem, NormalWorkQueue);
    }
    else
    {
      m_Lock = v6.m_Lock;
      this->m_bindThread = KeGetCurrentThread();
      ExReleasePushLockExclusiveEx(m_Lock, 0LL);
      v6.m_State = Unlocked;
      v6.m_Region.m_Entered = 0;
      KeLeaveCriticalRegion();
      Ndis::BindEngine::UpdateBindings(this);
    }
  }
  if ( v6.m_State == Shared )
  {
    KLockHolder::ReleaseShared(&v6);
  }
  else if ( v6.m_State == Exclusive )
  {
    ExReleasePushLockExclusiveEx(v6.m_Lock, 0LL);
LABEL_8:
    KeLeaveCriticalRegion();
    return;
  }
  if ( v6.m_Region.m_Entered )
    goto LABEL_8;
}
