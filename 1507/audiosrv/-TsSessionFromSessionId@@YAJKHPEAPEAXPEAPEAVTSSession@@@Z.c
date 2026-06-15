/*
 * XREFs of ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18000A0E0
 * Callers:
 *     ?GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext@@@Z @ 0x180002800 (-GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180003E38 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x180004F3C (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 *     ?TS_SessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z @ 0x18000771C (-TS_SessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z.c)
 *     ?TsSessionIdIsMuted@@YAHK@Z @ 0x1800077B0 (-TsSessionIdIsMuted@@YAHK@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z @ 0x180007814 (-TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x180007B50 (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 *     s_tsRegisterAudioProtocolNotification @ 0x180009E70 (s_tsRegisterAudioProtocolNotification.c)
 *     s_tsSessionGetAudioProtocol @ 0x180009FF0 (s_tsSessionGetAudioProtocol.c)
 *     ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x18000D9B0 (-UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x1800382F0 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdDisconnect@@YAXK@Z @ 0x1800385CC (-TsSessionIdDisconnect@@YAXK@Z.c)
 *     ?TsSessionIdLogoff@@YAJK@Z @ 0x180038628 (-TsSessionIdLogoff@@YAJK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x1800410EC (-TsSessionIdLogon@@YAJK@Z.c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1@Z @ 0x18009F0C4 (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1@Z.c)
 *     ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z @ 0x18009FB48 (-TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18009FD64 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x18009FE00 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionIdGetActiveMediaAppById@@YAPEAVCApplication@@KPEBG@Z @ 0x18009FFCC (-TsSessionIdGetActiveMediaAppById@@YAPEAVCApplication@@KPEBG@Z.c)
 *     ?TsSessionIdIsStreamCategoryDucked@@YAHKPEBGKH@Z @ 0x1800A0080 (-TsSessionIdIsStreamCategoryDucked@@YAHKPEBGKH@Z.c)
 *     ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z @ 0x1800A0128 (-TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x1800A02FC (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x1800A04A4 (-TsSessionIdTerminate@@YAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TsSessionFromSessionId(DWORD a1, int a2, void **a3, struct TSSession **a4)
{
  _QWORD *v6; // rax
  void *v7; // r8
  struct TSSession *v8; // rcx

  if ( a3 )
    *a3 = 0LL;
  *a4 = 0LL;
  v6 = qword_1800E88D0;
  do
  {
    v7 = v6;
    if ( !v6 )
    {
      if ( a2 )
        return TsSessionCreate(a1, a3, a4);
      else
        return 1168LL;
    }
    v8 = (struct TSSession *)v6[2];
    v6 = (_QWORD *)*v6;
  }
  while ( a1 != *(_DWORD *)v8 );
  if ( a3 )
    *a3 = v7;
  *a4 = v8;
  return 0LL;
}
