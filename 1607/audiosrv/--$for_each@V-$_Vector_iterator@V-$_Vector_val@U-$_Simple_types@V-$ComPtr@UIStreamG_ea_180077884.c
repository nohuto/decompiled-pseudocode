/*
 * XREFs of ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_d964c332b7dd59d7dbb035aa7db56ce6_@@@std@@YA?AV_lambda_d964c332b7dd59d7dbb035aa7db56ce6_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x180077884
 * Callers:
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x180078E68 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180001D78 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??$_For_each@PEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V_lambda_d964c332b7dd59d7dbb035aa7db56ce6_@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0AEAV_lambda_d964c332b7dd59d7dbb035aa7db56ce6_@@@Z @ 0x18007752C (--$_For_each@PEAV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V_lambda_d964c332b7dd59d7dbb035aa7.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_d964c332b7dd59d7dbb035aa7db56ce6_>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  std::_For_each<Microsoft::WRL::ComPtr<IStreamGroupProxy> *,_lambda_d964c332b7dd59d7dbb035aa7db56ce6_>(a2, a3, a4);
  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(a1, *a4);
  if ( *a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a4 + 16LL))(*a4);
  return a1;
}
