/*
 * XREFs of ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18000A160
 * Callers:
 *     PbmReportApplicationState @ 0x180001E2C (PbmReportApplicationState.c)
 *     s_pbmReportAppInteractivityChange @ 0x180002060 (s_pbmReportAppInteractivityChange.c)
 *     s_pbmReportAppClosing @ 0x180003DF0 (s_pbmReportAppClosing.c)
 *     s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x180005860 (s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive.c)
 *     s_pbmReportHostedAppStateChange @ 0x180008AC0 (s_pbmReportHostedAppStateChange.c)
 *     s_tsUnregisterAudioProtocolNotification @ 0x180009890 (s_tsUnregisterAudioProtocolNotification.c)
 *     s_tsRegisterAudioProtocolNotification @ 0x180009E70 (s_tsRegisterAudioProtocolNotification.c)
 *     s_tsSessionGetAudioProtocol @ 0x180009FF0 (s_tsSessionGetAudioProtocol.c)
 *     s_pbmLaunchBackgroundTask @ 0x180093D50 (s_pbmLaunchBackgroundTask.c)
 *     PbmAllowMediaPlaybackForApp @ 0x1800A0ED8 (PbmAllowMediaPlaybackForApp.c)
 * Callees:
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x18000A340 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_Dd @ 0x18007C094 (WPP_SF_Dd.c)
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
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      11LL,
      &WPP_c40d8c8986032b8f982279e707239ad1_Traceguids,
      BindingHandle);
  }
  RpcCallAttributes = 2;
  v15[0] = 16;
  TokenInformation = RpcServerInqCallAttributesW(BindingHandle, &RpcCallAttributes);
  if ( !TokenInformation )
  {
    v8 = v16;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        12LL,
        &WPP_c40d8c8986032b8f982279e707239ad1_Traceguids,
        v16);
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
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
          {
            WPP_SF_Dd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              13LL,
              &WPP_c40d8c8986032b8f982279e707239ad1_Traceguids,
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
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      14LL,
      &WPP_c40d8c8986032b8f982279e707239ad1_Traceguids,
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
