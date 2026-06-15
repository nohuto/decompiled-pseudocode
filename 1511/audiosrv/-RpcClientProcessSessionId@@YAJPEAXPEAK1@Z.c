/*
 * XREFs of ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18002C620
 * Callers:
 *     s_pbmReportAppClosing @ 0x1800025F0 (s_pbmReportAppClosing.c)
 *     s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x180003870 (s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive.c)
 *     s_pbmReportAppInteractivityChange @ 0x1800038B0 (s_pbmReportAppInteractivityChange.c)
 *     PbmReportApplicationState @ 0x1800051A4 (PbmReportApplicationState.c)
 *     s_tsRegisterAudioProtocolNotification @ 0x18002C2C0 (s_tsRegisterAudioProtocolNotification.c)
 *     s_pbmReportHostedAppStateChange @ 0x18002C440 (s_pbmReportHostedAppStateChange.c)
 *     s_tsSessionGetAudioProtocol @ 0x18002C4B0 (s_tsSessionGetAudioProtocol.c)
 *     s_tsUnregisterAudioProtocolNotification @ 0x18002E450 (s_tsUnregisterAudioProtocolNotification.c)
 *     s_pbmLaunchBackgroundTask @ 0x180091570 (s_pbmLaunchBackgroundTask.c)
 *     PbmAllowMediaPlaybackForApp @ 0x18009E058 (PbmAllowMediaPlaybackForApp.c)
 * Callees:
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x18002C800 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_Dd @ 0x18006F85C (WPP_SF_Dd.c)
 */

__int64 __fastcall RpcClientProcessSessionId(RPC_BINDING_HANDLE BindingHandle, unsigned int *a2, unsigned int *a3)
{
  int v6; // edi
  unsigned int TokenInformation; // ebx
  unsigned int v8; // ebp
  HANDLE CurrentThread; // rax
  unsigned int v10; // eax
  unsigned int v12; // [rsp+30h] [rbp-C8h] BYREF
  void *TokenHandle; // [rsp+38h] [rbp-C0h] BYREF
  int RpcCallAttributes; // [rsp+40h] [rbp-B8h] BYREF
  int v15[15]; // [rsp+44h] [rbp-B4h] BYREF
  unsigned int v16; // [rsp+80h] [rbp-78h]

  RpcCallAttributes = 0;
  memset_0(v15, 0, 0x6CuLL);
  TokenHandle = 0LL;
  v6 = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_a039a10251cf52648c3361a61631dc40_Traceguids, BindingHandle);
  }
  RpcCallAttributes = 2;
  v15[0] = 16;
  TokenInformation = RpcServerInqCallAttributesW(BindingHandle, &RpcCallAttributes);
  if ( !TokenInformation )
  {
    v8 = v16;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_a039a10251cf52648c3361a61631dc40_Traceguids, v16);
    }
    TokenInformation = RpcImpersonateClient(BindingHandle);
    if ( !TokenInformation )
    {
      v6 = 1;
      CurrentThread = GetCurrentThread();
      if ( OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
      {
        TokenInformation = GetTokenInformation(TokenHandle, 0LL, 0LL, 0LL, &v12);
        if ( !TokenInformation )
        {
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
          {
            WPP_SF_Dd(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              13LL,
              &WPP_a039a10251cf52648c3361a61631dc40_Traceguids,
              v8,
              v12);
          }
          v10 = v12;
          *a2 = v8;
          *a3 = v10;
          goto LABEL_18;
        }
      }
      else
      {
        TokenInformation = GetLastError();
        if ( !TokenInformation )
          goto LABEL_18;
      }
    }
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_a039a10251cf52648c3361a61631dc40_Traceguids,
      TokenInformation);
  }
LABEL_18:
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( v6 )
    RpcRevertToSelf();
  return TokenInformation;
}
