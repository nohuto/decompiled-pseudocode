/*
 * XREFs of ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18003CB54
 * Callers:
 *     _lambda_74900582371bb26b135d7f7a3ba0da76_::_lambda_invoker_cdecl_ @ 0x18003F900 (_lambda_74900582371bb26b135d7f7a3ba0da76_--_lambda_invoker_cdecl_.c)
 *     ?WilApiImpl_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18003FF00 (-WilApiImpl_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_S.c)
 *     ?Invoke@DisplayChangedHandler@@UEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x1800774D0 (-Invoke@DisplayChangedHandler@@UEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics.c)
 *     ?OnFinalRelease@SpatialInputControllerCollection@@MEAAXXZ @ 0x1800784C0 (-OnFinalRelease@SpatialInputControllerCollection@@MEAAXXZ.c)
 *     ?OpenDriverHandle@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ @ 0x18008A0F0 (-OpenDriverHandle@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ.c)
 *     ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@PEAV?$shared_ptr@VGetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@@std@@@Z @ 0x18008A2A0 (-StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NO.c)
 *     ?StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@@Z @ 0x18008A740 (-StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NOD.c)
 *     ?CreateDynamicNodeReference@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x18008B460 (-CreateDynamicNodeReference@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18003CB10 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 */

struct _RTL_CRITICAL_SECTION **__fastcall wil::critical_section::lock(
        struct _RTL_CRITICAL_SECTION *a1,
        struct _RTL_CRITICAL_SECTION **a2)
{
  wil::EnterCriticalSection(a2, a1);
  return a2;
}
