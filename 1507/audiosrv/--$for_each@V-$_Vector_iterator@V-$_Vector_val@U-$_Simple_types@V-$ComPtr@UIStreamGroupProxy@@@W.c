/*
 * XREFs of ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_07193abe57ae9f87925f6a38d9da1073_@@@std@@YA?AV_lambda_07193abe57ae9f87925f6a38d9da1073_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x1800915C8
 * Callers:
 *     ?SwitchStreamGroupsFromNonDefaultToDefaultSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x180092E00 (-SwitchStreamGroupsFromNonDefaultToDefaultSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointChar.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180004D54 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     _lambda_07193abe57ae9f87925f6a38d9da1073_::operator() @ 0x1800919D4 (_lambda_07193abe57ae9f87925f6a38d9da1073_--operator().c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_07193abe57ae9f87925f6a38d9da1073_>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 i; // rbx
  __int64 v8; // rdi

  for ( i = a2; i != a3; i += 8LL )
    lambda_07193abe57ae9f87925f6a38d9da1073_::operator()(a4, i);
  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(a1, *a4);
  v8 = *a4;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return a1;
}
