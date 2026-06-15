/*
 * XREFs of ??1?$CComPtr@VCAudioSessionManagerProvider@@@ATL@@QEAA@XZ @ 0x1800676F8
 * Callers:
 *     _VAD_AudiosrvAudioDGProcessTerminated_::_1_::dtor$0 @ 0x180045592 (_VAD_AudiosrvAudioDGProcessTerminated_--_1_--dtor$0.c)
 *     _CVADServer::InitializePolicy_::_1_::dtor$3 @ 0x180046764 (_CVADServer--InitializePolicy_--_1_--dtor$3.c)
 *     _CPolicyConfig::SetDeviceFormatSwAudioEngine_::_1_::dtor$1 @ 0x1800480A0 (_CPolicyConfig--SetDeviceFormatSwAudioEngine_--_1_--dtor$1.c)
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$8 @ 0x18006A579 (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$8.c)
 *     _CVADServer::InitializeEngine_::_1_::dtor$2 @ 0x18008B407 (_CVADServer--InitializeEngine_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18002CAF0 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComPtr<CAudioSessionManagerProvider>::~CComPtr<CAudioSessionManagerProvider>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 (__fastcall *v2)(__int64, volatile int *); // rdi
  __int64 result; // rax

  if ( *a1 )
  {
    v2 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)*a1 + 16LL);
    if ( v2 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
      return ATL::CComObject<CAudioSessionManagerProvider>::Release(*a1, a2);
    else
      return ((__int64 (__fastcall *)(__int64))v2)(*a1);
  }
  return result;
}
