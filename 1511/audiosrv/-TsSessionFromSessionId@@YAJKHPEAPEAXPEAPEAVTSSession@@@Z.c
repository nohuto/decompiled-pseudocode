/*
 * XREFs of ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002C5A0
 * Callers:
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x1800028DC (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 *     ?GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext@@@Z @ 0x1800040A0 (-GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext.c)
 *     ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x18002A7A0 (-UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z.c)
 *     s_tsRegisterAudioProtocolNotification @ 0x18002C2C0 (s_tsRegisterAudioProtocolNotification.c)
 *     s_tsSessionGetAudioProtocol @ 0x18002C4B0 (s_tsSessionGetAudioProtocol.c)
 *     VADServerUserSessionChanged @ 0x18002FDEC (VADServerUserSessionChanged.c)
 *     ?TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z @ 0x180038DD8 (-TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x18003974C (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 *     ?TsSessionIdIsMuted@@YAHK@Z @ 0x180039D10 (-TsSessionIdIsMuted@@YAHK@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18003AD7C (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdDisconnect@@YAXK@Z @ 0x18003B164 (-TsSessionIdDisconnect@@YAXK@Z.c)
 *     ?TsSessionIdLogoff@@YAJK@Z @ 0x18003B1C0 (-TsSessionIdLogoff@@YAJK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x18003E6B0 (-TsSessionIdLogon@@YAJK@Z.c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1@Z @ 0x18009BEF8 (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1@Z.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18009CBF0 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z @ 0x18009CCB4 (-TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18009CED0 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x18009CF60 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionIdGetActiveMediaAppById@@YAPEAVCApplication@@KPEBG@Z @ 0x18009D12C (-TsSessionIdGetActiveMediaAppById@@YAPEAVCApplication@@KPEBG@Z.c)
 *     ?TsSessionIdIsStreamCategoryDucked@@YAHKPEBGKH@Z @ 0x18009D1D0 (-TsSessionIdIsStreamCategoryDucked@@YAHKPEBGKH@Z.c)
 *     ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z @ 0x18009D278 (-TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18009D44C (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18009D4E8 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x18009D690 (-TsSessionIdTerminate@@YAJK@Z.c)
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
  v6 = qword_1800E68A0;
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
