/*
 * XREFs of ?Release@?$CComObject@VCSaProvider@@@ATL@@UEAAKXZ @ 0x18002E1D0
 * Callers:
 *     ?OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ @ 0x180001D28 (-OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001E410 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     VADServerUserSessionChanged @ 0x18002BC60 (VADServerUserSessionChanged.c)
 *     ?FinalRelease@CPerStreamVolumeAudioStream@@EEAAXXZ @ 0x18002EFE0 (-FinalRelease@CPerStreamVolumeAudioStream@@EEAAXXZ.c)
 *     ??1?$CComPtr@UISaProvider@@@ATL@@QEAA@XZ @ 0x180067798 (--1-$CComPtr@UISaProvider@@@ATL@@QEAA@XZ.c)
 *     ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x18006B3A0 (-OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ.c)
 *     ?IsUsingResource@CAudioStream@@UEAAH_K@Z @ 0x180082370 (-IsUsingResource@CAudioStream@@UEAAH_K@Z.c)
 *     ?RegisterStream@CAudioStream@@QEAAJXZ @ 0x1800824C0 (-RegisterStream@CAudioStream@@QEAAJXZ.c)
 *     ?ReleaseSaDevice@CAudioStream@@SAXPEAUIAudioDeviceGraph@@@Z @ 0x1800826BC (-ReleaseSaDevice@CAudioStream@@SAXPEAUIAudioDeviceGraph@@@Z.c)
 *     ?UnregisterStream@CAudioStream@@QEAAJXZ @ 0x180082C18 (-UnregisterStream@CAudioStream@@QEAAJXZ.c)
 *     ?InitializeEngine@CVADServer@@IEAAJPEAUIAudioProcess@@PEBGW4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@U_GUID@@5W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008AD3C (-InitializeEngine@CVADServer@@IEAAJPEAUIAudioProcess@@PEBGW4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180075888 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall ATL::CComObject<CSaProvider>::Release(__int64 a1, volatile int *a2)
{
  unsigned int v3; // ebp

  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 8), a2);
  if ( !v3 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, v3 + 1);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v3;
}
