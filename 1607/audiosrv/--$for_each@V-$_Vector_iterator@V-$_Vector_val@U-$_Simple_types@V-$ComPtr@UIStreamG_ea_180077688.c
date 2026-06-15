/*
 * XREFs of ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_7156cef9570d693754a0562f20dccd1f_@@@std@@YA?AV_lambda_7156cef9570d693754a0562f20dccd1f_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x180077688
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x18001EE2C (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_7156cef9570d693754a0562f20dccd1f_>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v5; // rbx
  char v7; // al
  int v8; // eax
  _QWORD *result; // rax
  _QWORD *v10; // [rsp+58h] [rbp+20h]

  v10 = a4;
  v5 = a2;
  if ( a2 != a3 )
  {
    do
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 208LL))(*v5);
      v8 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, _QWORD, _QWORD, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                          + 40LL))(
             g_DeviceGraphManager,
             *v5,
             *v10,
             v7 == 0,
             0LL);
      if ( v8 < 0 )
        AudSrvTraceLoggingErrorHelper(
          "CAudioResourceManager::GetSaDeviceForSharedStream::<lambda_7156cef9570d693754a0562f20dccd1f>::operator ()",
          1695,
          v8);
      ++v5;
    }
    while ( v5 != a3 );
    a4 = v10;
  }
  result = a1;
  *a1 = a4;
  return result;
}
