/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18002F654
 * Callers:
 *     _MPCRawInputProvider::OnInputReceived_::_1_::dtor$1 @ 0x1800A1BF7 (_MPCRawInputProvider--OnInputReceived_--_1_--dtor$1.c)
 *     _SpatialInputControllerHeadEventHandler::SetOwner_::_1_::dtor$0 @ 0x1800A1C03 (_SpatialInputControllerHeadEventHandler--SetOwner_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::OnHeadEventOccurred_::_1_::dtor$0 @ 0x1800A1D96 (_MPCHeadUpdateListener--OnHeadEventOccurred_--_1_--dtor$0.c)
 *     _WGIRawInputProvider::OnUINavigationControllerAdded_::_1_::dtor$0 @ 0x1800A2210 (_WGIRawInputProvider--OnUINavigationControllerAdded_--_1_--dtor$0.c)
 *     _SpatialInputControllerCollection::TryUpdateControllerNodeReference_::_1_::dtor$0 @ 0x1800A2277 (_SpatialInputControllerCollection--TryUpdateControllerNodeReference_--_1_--dtor$0.c)
 *     _WGIRawInputProvider::StartUINavigationControllerWatcher_::_1_::dtor$4 @ 0x1800A22B3 (_WGIRawInputProvider--StartUINavigationControllerWatcher_--_1_--dtor$4.c)
 *     _SpatialInputControllerCollection::OnFinalRelease_::_1_::dtor$0 @ 0x1800A30F7 (_SpatialInputControllerCollection--OnFinalRelease_--_1_--dtor$0.c)
 *     _SpatialInputControllerCollection::OnFinalRelease_::_1_::dtor$1 @ 0x1800A3103 (_SpatialInputControllerCollection--OnFinalRelease_--_1_--dtor$1.c)
 *     _SpatialInputControllerCollection::OnDeviceRemoval_::_1_::dtor$2 @ 0x1800A313F (_SpatialInputControllerCollection--OnDeviceRemoval_--_1_--dtor$2.c)
 *     _SpatialInputControllerCollection::OnInputReport_::_1_::dtor$2 @ 0x1800A3163 (_SpatialInputControllerCollection--OnInputReport_--_1_--dtor$2.c)
 *     _SpatialInputControllerCollection::AddDeviceToCache_::_1_::dtor$1 @ 0x1800A316F (_SpatialInputControllerCollection--AddDeviceToCache_--_1_--dtor$1.c)
 *     _SpatialInputControllerCollection::SendTrackedNodesUpdates_::_1_::dtor$1 @ 0x1800A31AE (_SpatialInputControllerCollection--SendTrackedNodesUpdates_--_1_--dtor$1.c)
 *     _SpatialInputControllerCollection::SendTrackedNodesUpdates_::_1_::dtor$2 @ 0x1800A31BA (_SpatialInputControllerCollection--SendTrackedNodesUpdates_--_1_--dtor$2.c)
 *     _SpatialInputControllerCollection::OnDisplayChanged_::_1_::dtor$3 @ 0x1800A3202 (_SpatialInputControllerCollection--OnDisplayChanged_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(
        struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *this = 0LL;
  }
}
