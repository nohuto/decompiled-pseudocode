/*
 * XREFs of ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001A328
 * Callers:
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x180005260 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x1800054B0 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x18000F650 (-GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ.c)
 *     ?GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z @ 0x18000F6E0 (-GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z.c)
 *     ?GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext@@@Z @ 0x180013470 (-GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext.c)
 *     ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x180017F80 (-IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_00.c)
 *     ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x180018090 (-UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z.c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x180019674 (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z.c)
 *     ?TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z @ 0x18001A394 (-TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z.c)
 *     ?TsSessionIdIsMuted@@YAHK@Z @ 0x18001A4E8 (-TsSessionIdIsMuted@@YAHK@Z.c)
 *     ?TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18001A548 (-TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18001A658 (-TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x18001A708 (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18001A88C (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18001A950 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z @ 0x18001A9F0 (-TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18001ABB4 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18001AC58 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x18001AE14 (-TsSessionIdLogon@@YAJK@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x18001AF74 (-TsSessionIdTerminate@@YAJK@Z.c)
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z @ 0x18001B01C (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z.c)
 *     ?TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHAEA_NAEAMAEA_J@Z @ 0x18001B0CC (-TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHAEA_NAEAMAEA_J@Z.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x18001B190 (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18001B22C (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x18001B400 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z @ 0x18001B5E4 (-TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z.c)
 *     ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z @ 0x18001B910 (-TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z.c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z @ 0x18001BB7C (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z.c)
 *     ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x18001BBDC (-TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z @ 0x18001BC44 (-TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z.c)
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18001BCB0 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 *     ?TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18001BF20 (-TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18001C048 (-TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?Invoke@CTransportControlRouterWorkItem@@UEAAXXZ @ 0x18001E4A0 (-Invoke@CTransportControlRouterWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x180019BB4 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionFromSessionId(DWORD SessionId, int a2, void **a3, struct TSSession **a4)
{
  _QWORD *v6; // rax
  void *v7; // r8
  struct TSSession *v8; // rcx
  __int64 result; // rax

  if ( a3 )
    *a3 = 0LL;
  *a4 = 0LL;
  v6 = qword_180031D68;
  while ( 1 )
  {
    v7 = v6;
    if ( !v6 )
      break;
    v8 = (struct TSSession *)v6[2];
    v6 = (_QWORD *)*v6;
    if ( SessionId == *(_DWORD *)v8 )
    {
      if ( a3 )
        *a3 = v7;
      *a4 = v8;
      break;
    }
  }
  result = *a4 == 0LL ? 0x490 : 0;
  if ( !*a4 )
  {
    if ( a2 )
      return TsSessionCreate(SessionId, a3, a4);
  }
  return result;
}
