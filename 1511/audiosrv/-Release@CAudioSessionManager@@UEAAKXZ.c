/*
 * XREFs of ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180016770
 * Callers:
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x180002290 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?CallDestructors@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@CAXPEAV?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@_K@Z @ 0x180002484 (-CallDestructors@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL.c)
 *     ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800141D0 (-Invoke@CAudioSessionStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?RemoveInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800153B0 (-RemoveInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComP.c)
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180015560 (-AddInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComPtr@.c)
 *     ?Invoke@CAudioStreamDestroy@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180017930 (-Invoke@CAudioStreamDestroy@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioStreamCreate@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180017A50 (-Invoke@CAudioStreamCreate@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioStreamStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180018B40 (-Invoke@CAudioStreamStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x18002558C (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     AudioSessionManagerDestroy @ 0x180034270 (AudioSessionManagerDestroy.c)
 *     ?Invoke@CAudioSessionVolumeChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180038800 (-Invoke@CAudioSessionVolumeChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioSessionGroupingParamChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180039A60 (-Invoke@CAudioSessionGroupingParamChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ??1?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x18003A0FC (--1-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UISessionI.c)
 *     AUDIOSESSIONMANAGER_rundown @ 0x18003A250 (AUDIOSESSIONMANAGER_rundown.c)
 *     ?Release@CAudioSessionManager@@W7EAAKXZ @ 0x180048FD0 (-Release@CAudioSessionManager@@W7EAAKXZ.c)
 *     ??1?$CComPtr@VCAudioSessionManager@@@ATL@@QEAA@XZ @ 0x180066014 (--1-$CComPtr@VCAudioSessionManager@@@ATL@@QEAA@XZ.c)
 *     ?RemoveAt@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x1800660B4 (-RemoveAt@-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UIS.c)
 *     ??1?$CComPtr@UISessionInternalEvents@@@ATL@@QEAA@XZ @ 0x180066578 (--1-$CComPtr@UISessionInternalEvents@@@ATL@@QEAA@XZ.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x180068B9C (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?Invoke@CAudioChannelVolumeChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180074830 (-Invoke@CAudioChannelVolumeChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioSessionDisconnected@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180074900 (-Invoke@CAudioSessionDisconnected@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioSessionDisplayNameChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800749C0 (-Invoke@CAudioSessionDisplayNameChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioSessionIconPathChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180074A80 (-Invoke@CAudioSessionIconPathChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z @ 0x18007C690 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z.c)
 *     ?RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z @ 0x18007C9E8 (-RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z.c)
 *     ?DisconnectHelper@CPolicyConfig@@AEAAXPEAUIMMDevice@@@Z @ 0x180082048 (-DisconnectHelper@CPolicyConfig@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x180085620 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 */

__int64 __fastcall CAudioSessionManager::Release(CAudioSessionManager *this)
{
  unsigned __int32 v2; // ebx

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
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
