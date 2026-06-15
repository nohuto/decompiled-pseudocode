/*
 * XREFs of ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x1800190D8
 * Callers:
 *     PbmReportAppInteractivityChange @ 0x1800165D0 (PbmReportAppInteractivityChange.c)
 *     PbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x180016640 (PbmSwitchSoftNonInteractiveAppsToHardNonInteractive.c)
 *     PbmReportHostedAppStateChange @ 0x180016690 (PbmReportHostedAppStateChange.c)
 *     PbmReportAppClosing @ 0x180016700 (PbmReportAppClosing.c)
 *     PbmAllowMediaPlaybackForApp @ 0x180016760 (PbmAllowMediaPlaybackForApp.c)
 *     PbmReportApplicationState @ 0x180017530 (PbmReportApplicationState.c)
 *     PbmLaunchBackgroundTask @ 0x1800175F0 (PbmLaunchBackgroundTask.c)
 *     TS_SessionGetAudioProtocol @ 0x18001C180 (TS_SessionGetAudioProtocol.c)
 *     TS_RegisterAudioProtocolNotification @ 0x18001C230 (TS_RegisterAudioProtocolNotification.c)
 *     TS_UnregisterAudioProtocolNotification @ 0x18001C290 (TS_UnregisterAudioProtocolNotification.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     WPP_SF_dd @ 0x180005D34 (WPP_SF_dd.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x18001098C (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     WPP_SF_q @ 0x180014F38 (WPP_SF_q.c)
 *     __security_check_cookie @ 0x180020A40 (__security_check_cookie.c)
 *     memset @ 0x18002167E (memset.c)
 */

__int64 __fastcall RpcClientProcessSessionId(RPC_BINDING_HANDLE BindingHandle, unsigned int *a2, unsigned int *a3)
{
  __int64 v6; // rdx
  int v7; // r14d
  unsigned int LastError; // ebx
  int v9; // esi
  HANDLE CurrentThread; // rax
  unsigned int v11; // eax
  unsigned int *v13; // [rsp+20h] [rbp-79h]
  unsigned int v14; // [rsp+30h] [rbp-69h] BYREF
  void *TokenHandle; // [rsp+38h] [rbp-61h] BYREF
  _DWORD RpcCallAttributes[28]; // [rsp+40h] [rbp-59h] BYREF

  memset(RpcCallAttributes, 0, sizeof(RpcCallAttributes));
  TokenHandle = 0LL;
  v7 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), v6, &WPP_8c6176e2ee2e3d308447856c4f339b3c_Traceguids, BindingHandle);
  }
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  LastError = RpcServerInqCallAttributesW(BindingHandle, RpcCallAttributes);
  if ( !LastError )
  {
    v9 = RpcCallAttributes[16];
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xCu,
        &WPP_8c6176e2ee2e3d308447856c4f339b3c_Traceguids,
        RpcCallAttributes[16]);
    }
    LastError = RpcImpersonateClient(BindingHandle);
    if ( !LastError )
    {
      v7 = 1;
      CurrentThread = GetCurrentThread();
      if ( !OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
      {
        LastError = GetLastError();
        goto LABEL_19;
      }
      LastError = GetTokenInformation(TokenHandle, 0LL, 0LL, 0LL, &v14);
      if ( !LastError )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          LODWORD(v13) = v14;
          WPP_SF_dd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            LastError + 13,
            &WPP_8c6176e2ee2e3d308447856c4f339b3c_Traceguids,
            v9,
            v13);
        }
        v11 = v14;
        *a2 = v9;
        *a3 = v11;
LABEL_19:
        if ( !LastError )
          goto LABEL_24;
      }
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_8c6176e2ee2e3d308447856c4f339b3c_Traceguids, LastError);
  }
LABEL_24:
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( v7 )
    RpcRevertToSelf();
  return LastError;
}
