/*
 * XREFs of ??1?$CComPtr@VCAudioSessionManagerProvider@@@ATL@@QEAA@XZ @ 0x180065FC4
 * Callers:
 *     _VAD_AudiosrvAudioDGProcessTerminated_::_1_::dtor$0 @ 0x1800496A4 (_VAD_AudiosrvAudioDGProcessTerminated_--_1_--dtor$0.c)
 *     _CVADServer::InitializePolicy_::_1_::dtor$3 @ 0x18004B344 (_CVADServer--InitializePolicy_--_1_--dtor$3.c)
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$8 @ 0x1800690BC (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$8.c)
 *     _CPolicyConfig::DisconnectHelper_::_1_::dtor$0 @ 0x180082192 (_CPolicyConfig--DisconnectHelper_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180005B00 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComPtr<CAudioSessionManagerProvider>::~CComPtr<CAudioSessionManagerProvider>(
        volatile signed __int32 **a1)
{
  __int64 (__fastcall *v1)(volatile signed __int32 *); // rdi
  __int64 result; // rax

  if ( *a1 )
  {
    v1 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)*a1 + 16LL);
    if ( v1 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
      return ATL::CComObject<CAudioSessionManagerProvider>::Release(*a1);
    else
      return v1(*a1);
  }
  return result;
}
