/*
 * XREFs of ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_a8a63d51e8072b51e985e5868ab4f48b_@@@std@@YA?AV_lambda_a8a63d51e8072b51e985e5868ab4f48b_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x18007780C
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x18001EE2C (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180001D78 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??$_For_each@PEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V_lambda_a8a63d51e8072b51e985e5868ab4f48b_@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0AEAV_lambda_a8a63d51e8072b51e985e5868ab4f48b_@@@Z @ 0x180077488 (--$_For_each@PEAV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V_lambda_a8a63d51e8072b51e985e5868.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_a8a63d51e8072b51e985e5868ab4f48b_>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  std::_For_each<Microsoft::WRL::ComPtr<IStreamGroupProxy> *,_lambda_a8a63d51e8072b51e985e5868ab4f48b_>(a2, a3, a4);
  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(a1, *a4);
  if ( *a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a4 + 16LL))(*a4);
  return a1;
}
