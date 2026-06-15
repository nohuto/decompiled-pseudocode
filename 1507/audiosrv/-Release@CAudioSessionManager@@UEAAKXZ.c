/*
 * XREFs of ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180019460
 * Callers:
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x180001624 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?CallDestructors@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@CAXPEAV?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@_K@Z @ 0x180001818 (-CallDestructors@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL.c)
 *     ??1?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x1800080EC (--1-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UISessionI.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180016B88 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?RemoveInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180017EC0 (-RemoveInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComP.c)
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180018070 (-AddInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComPtr@.c)
 *     ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180018CB0 (-Invoke@CAudioSessionStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioStreamStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180018E10 (-Invoke@CAudioStreamStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioStreamDestroy@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180018F60 (-Invoke@CAudioStreamDestroy@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioStreamCreate@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18001B2A0 (-Invoke@CAudioStreamCreate@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180025240 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 *     ?Invoke@CAudioSessionVolumeChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800312F0 (-Invoke@CAudioSessionVolumeChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioSessionGroupingParamChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180031D00 (-Invoke@CAudioSessionGroupingParamChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     AUDIOSESSIONMANAGER_rundown @ 0x180031E70 (AUDIOSESSIONMANAGER_rundown.c)
 *     AudioSessionManagerDestroy @ 0x180031F60 (AudioSessionManagerDestroy.c)
 *     ?Release@CAudioSessionManager@@W7EAAKXZ @ 0x180044DB0 (-Release@CAudioSessionManager@@W7EAAKXZ.c)
 *     ??1?$CComPtr@VCAudioSessionManager@@@ATL@@QEAA@XZ @ 0x180067748 (--1-$CComPtr@VCAudioSessionManager@@@ATL@@QEAA@XZ.c)
 *     ?RemoveAt@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x180067810 (-RemoveAt@-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UIS.c)
 *     ??1?$CComPtr@UISessionInternalEvents@@@ATL@@QEAA@XZ @ 0x180067F40 (--1-$CComPtr@UISessionInternalEvents@@@ATL@@QEAA@XZ.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18006A060 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?Invoke@CAudioChannelVolumeChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800795A0 (-Invoke@CAudioChannelVolumeChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioSessionDisconnected@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180079670 (-Invoke@CAudioSessionDisconnected@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioSessionDisplayNameChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180079730 (-Invoke@CAudioSessionDisplayNameChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioSessionIconPathChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800797F0 (-Invoke@CAudioSessionIconPathChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z @ 0x1800813D0 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z.c)
 *     ?RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z @ 0x180081638 (-RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x180088B70 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?InitializeEngine@CVADServer@@IEAAJPEAUIAudioProcess@@PEBGW4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@U_GUID@@5W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008AD3C (-InitializeEngine@CVADServer@@IEAAJPEAUIAudioProcess@@PEBGW4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 */

__int64 __fastcall CAudioSessionManager::Release(CAudioSessionManager *this)
{
  unsigned __int32 v2; // ebx

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      63LL,
      &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      this,
      *((_DWORD *)this + 4) - 1);
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v2 )
  {
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 32LL))((char *)this + 8);
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 24LL))((char *)this + 8, 1LL);
  }
  return v2;
}
