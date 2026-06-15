/*
 * XREFs of ??1?$CComPtr@VCAudioSessionManager@@@ATL@@QEAA@XZ @ 0x180067748
 * Callers:
 *     _CPolicyConfig::SetDeviceFormatSwAudioEngine_::_1_::dtor$2 @ 0x1800480AC (_CPolicyConfig--SetDeviceFormatSwAudioEngine_--_1_--dtor$2.c)
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$9 @ 0x18006A585 (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$9.c)
 *     _CVADServer::InitializeEngine_::_1_::dtor$1 @ 0x18008B3FB (_CVADServer--InitializeEngine_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180019460 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComPtr<CAudioSessionManager>::~CComPtr<CAudioSessionManager>(CAudioSessionManager **a1)
{
  __int64 (__fastcall *v1)(CAudioSessionManager *); // rdi
  __int64 result; // rax

  if ( *a1 )
  {
    v1 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)*a1 + 16LL);
    if ( v1 == CAudioSessionManager::Release )
      return CAudioSessionManager::Release(*a1);
    else
      return v1(*a1);
  }
  return result;
}
