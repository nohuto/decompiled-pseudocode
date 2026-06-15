/*
 * XREFs of ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001D7D0
 * Callers:
 *     s_pbmRegisterAppManagerNotification @ 0x180002870 (s_pbmRegisterAppManagerNotification.c)
 *     PbmGetSoundLevel @ 0x180002E2C (PbmGetSoundLevel.c)
 *     s_pbmRegisterPlaybackManagerNotifications @ 0x180003010 (s_pbmRegisterPlaybackManagerNotifications.c)
 *     PbmCastingAppStateChanged @ 0x1800030AC (PbmCastingAppStateChanged.c)
 *     PbmIsPlaying @ 0x1800036EC (PbmIsPlaying.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x18001B9C0 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     s_pbmRegisterAppClosureNotification @ 0x1800915F0 (s_pbmRegisterAppClosureNotification.c)
 *     s_pbmUnregisterAppClosureNotification @ 0x180091670 (s_pbmUnregisterAppClosureNotification.c)
 *     s_pbmUnregisterAppManagerNotification @ 0x1800916E0 (s_pbmUnregisterAppManagerNotification.c)
 *     s_pbmUnregisterPlaybackManagerNotifications @ 0x180091750 (s_pbmUnregisterPlaybackManagerNotifications.c)
 *     PbmPlayToStreamStateChanged @ 0x18009E13C (PbmPlayToStreamStateChanged.c)
 *     PbmSetSmtcSubscriptionState @ 0x18009E200 (PbmSetSmtcSubscriptionState.c)
 *     s_SetScreenReaderState @ 0x18009E2C0 (s_SetScreenReaderState.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?ReadBackgroundAudioCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x180004380 (-ReadBackgroundAudioCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x18002C800 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x1800304A8 (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x180031518 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180032A30 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHPEAPEAV1@@Z @ 0x180038E70 (-CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHPEAPEAV1@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::RpcGetProcess(CApplicationManager *this, void *a2, struct CProcess **a3)
{
  struct CProcess **v3; // r12
  CRefCountedObject *v5; // r15
  struct CProcess *v6; // rsi
  char *v7; // r13
  signed int TokenInformation; // eax
  signed int ProcessModuleNameAndAppId; // edi
  bool v10; // cc
  unsigned int v11; // r13d
  _QWORD *v12; // rcx
  __int64 v13; // r14
  int v14; // r15d
  HANDLE CurrentThread; // rax
  CApplicationManager *v17; // rcx
  int v18; // eax
  __int64 v19; // rdi
  struct ATL::CAtlPlex *v20; // r8
  int v21; // edx
  _QWORD *v22; // rcx
  int i; // edx
  __int64 *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  signed int v27; // eax
  signed int LastError; // eax
  signed int v29; // eax
  struct CProcess *v30; // [rsp+60h] [rbp-D8h] BYREF
  int v31; // [rsp+68h] [rbp-D0h] BYREF
  int v32[4]; // [rsp+70h] [rbp-C8h]
  HANDLE hObject; // [rsp+80h] [rbp-B8h] BYREF
  void *TokenHandle; // [rsp+88h] [rbp-B0h] BYREF
  HLOCAL v35; // [rsp+90h] [rbp-A8h] BYREF
  HLOCAL hMem; // [rsp+98h] [rbp-A0h] BYREF
  HLOCAL v37; // [rsp+A0h] [rbp-98h] BYREF
  unsigned int v38; // [rsp+A8h] [rbp-90h] BYREF
  char *v39; // [rsp+B0h] [rbp-88h]
  unsigned int v40; // [rsp+B8h] [rbp-80h] BYREF
  HLOCAL v41; // [rsp+C0h] [rbp-78h] BYREF
  LPCRITICAL_SECTION v42; // [rsp+C8h] [rbp-70h] BYREF
  char v43; // [rsp+D0h] [rbp-68h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+D8h] [rbp-60h] BYREF
  char v45; // [rsp+E0h] [rbp-58h]
  __int64 v46; // [rsp+E8h] [rbp-50h]
  ATL::CAtlException *v47; // [rsp+F0h] [rbp-48h] BYREF
  int v48; // [rsp+140h] [rbp+8h]
  unsigned int Pid; // [rsp+158h] [rbp+20h] BYREF

  v46 = -2LL;
  v3 = a3;
  v5 = g_ApplicationManager;
  v6 = 0LL;
  v48 = 0;
  v7 = 0LL;
  TokenHandle = 0LL;
  hObject = 0LL;
  v41 = 0LL;
  v37 = 0LL;
  hMem = 0LL;
  v35 = 0LL;
  v31 = 0;
  v42 = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v43 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v42);
  *v3 = 0LL;
  TokenInformation = I_RpcBindingInqLocalClientPID(a2, &Pid);
  ProcessModuleNameAndAppId = TokenInformation;
  v10 = TokenInformation <= 0;
  if ( TokenInformation )
    goto LABEL_67;
  v11 = Pid;
  ProcessModuleNameAndAppId = -2147023728;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v5 + 24);
  v45 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v30 = 0LL;
  v12 = (_QWORD *)*((_QWORD *)v5 + 14);
  if ( v12 )
  {
    while ( 1 )
    {
      v13 = v12[2];
      v12 = (_QWORD *)*v12;
      if ( !*(_DWORD *)(v13 + 416) && *(_DWORD *)(v13 + 168) == v11 )
        break;
      if ( !v12 )
        goto LABEL_30;
    }
    ProcessModuleNameAndAppId = 0;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids, v11);
    }
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    v6 = (struct CProcess *)v13;
    v30 = (struct CProcess *)v13;
  }
  else
  {
LABEL_30:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        30LL,
        &WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids,
        2147943568LL);
    }
  }
  if ( v45 )
    LeaveCriticalSection(lpCriticalSection);
  if ( ProcessModuleNameAndAppId != -2147023728 )
  {
    v7 = 0LL;
LABEL_14:
    *v3 = v6;
    v6 = 0LL;
    ProcessModuleNameAndAppId = 0;
    v14 = 0;
    goto LABEL_15;
  }
  if ( RpcImpersonateClient(a2) )
  {
    v7 = 0LL;
    v14 = 0;
    goto LABEL_15;
  }
  v48 = 1;
  CurrentThread = GetCurrentThread();
  if ( OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
  {
    TokenInformation = GetTokenInformation(
                         TokenHandle,
                         (unsigned __int16 **)&v41,
                         &v40,
                         (unsigned __int16 **)&v37,
                         &v38);
    ProcessModuleNameAndAppId = TokenInformation;
    v10 = TokenInformation <= 0;
    if ( TokenInformation )
    {
      v7 = 0LL;
    }
    else
    {
      v7 = (char *)OpenProcess(0x101000u, 0, Pid);
      v39 = v7;
      if ( !v7 )
      {
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        if ( LastError == -2147024891 )
        {
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
          {
            WPP_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x17u,
              (__int64)&WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids);
          }
          v7 = (char *)OpenProcess(0x100400u, 0, Pid);
          v39 = v7;
          if ( !v7 )
          {
            v29 = GetLastError();
            if ( v29 > 0 )
              v29 = (unsigned __int16)v29 | 0x80070000;
            if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
            {
              WPP_SF_D(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                24LL,
                &WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids,
                (unsigned int)v29);
            }
          }
        }
      }
      ProcessModuleNameAndAppId = GetProcessModuleNameAndAppId(
                                    v7,
                                    (unsigned __int16 **)&hMem,
                                    (unsigned __int16 **)&v35);
      if ( ProcessModuleNameAndAppId < 0 )
        goto LABEL_66;
      if ( !v35 || !*(_WORD *)v35 )
      {
        v32[0] = 0;
        goto LABEL_42;
      }
      v32[0] = 1;
      if ( OpenProcessToken(v7, 8u, &hObject) )
      {
LABEL_42:
        TokenInformation = RpcRevertToSelf();
        ProcessModuleNameAndAppId = TokenInformation;
        v10 = TokenInformation <= 0;
        if ( !TokenInformation )
        {
          v48 = 0;
          if ( !v32[0] )
          {
            v18 = 1;
            v31 = 1;
LABEL_45:
            ProcessModuleNameAndAppId = CProcess::CreateInstance(
                                          v7,
                                          Pid,
                                          v38,
                                          (const unsigned __int16 *)hMem,
                                          (const unsigned __int16 *)v35,
                                          (const unsigned __int16 *)v41,
                                          v40 != 0,
                                          (const unsigned __int16 *)v37,
                                          v32[0],
                                          v18,
                                          &v30);
            if ( ProcessModuleNameAndAppId >= 0 )
            {
              try
              {
                v19 = *((_QWORD *)v5 + 14);
                if ( !*((_QWORD *)v5 + 18) )
                {
                  v20 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)v5 + 17, *((unsigned int *)v5 + 38), 0x18uLL);
                  if ( !v20 )
                    ATL::AtlThrowImpl(-2147024882);
                  v21 = *((_DWORD *)v5 + 38);
                  v22 = (_QWORD *)((char *)v20 + 16 * (v21 - 1) + 8 * (unsigned int)(v21 - 1) + 8);
                  for ( i = v21 - 1; i >= 0; --i )
                  {
                    *v22 = *((_QWORD *)v5 + 18);
                    *((_QWORD *)v5 + 18) = v22;
                    v22 -= 3;
                  }
                }
                v24 = (__int64 *)*((_QWORD *)v5 + 18);
                *(_QWORD *)v32 = v24;
                v25 = *v24;
                if ( v24 )
                  v24[2] = (__int64)v30;
                *((_QWORD *)v5 + 18) = v25;
                v24[1] = 0LL;
                *v24 = v19;
                ++*((_QWORD *)v5 + 16);
                v26 = *((_QWORD *)v5 + 14);
                if ( v26 )
                  *(_QWORD *)(v26 + 8) = v24;
                else
                  *((_QWORD *)v5 + 15) = v24;
                *((_QWORD *)v5 + 14) = v24;
              }
              catch ( ATL::CAtlException *v47 )
              {
                if ( *(_DWORD *)v47 == -1073741571 )
                  _resetstkoflw();
                v7 = v39;
                v3 = a3;
              }
              _InterlockedIncrement((volatile signed __int32 *)v30 + 2);
              if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
              {
                WPP_SF_D(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  25LL,
                  &WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids,
                  Pid);
              }
              v6 = v30;
              goto LABEL_14;
            }
            v6 = v30;
            goto LABEL_66;
          }
          ProcessModuleNameAndAppId = CApplicationManager::ReadBackgroundAudioCapability(v17, hObject, &v31);
          if ( ProcessModuleNameAndAppId >= 0 )
          {
            v18 = v31;
            goto LABEL_45;
          }
LABEL_66:
          v14 = v48;
          goto LABEL_15;
        }
        goto LABEL_67;
      }
      TokenInformation = GetLastError();
      ProcessModuleNameAndAppId = TokenInformation;
      v10 = TokenInformation <= 0;
    }
LABEL_67:
    v14 = v48;
    if ( !v10 )
      ProcessModuleNameAndAppId = (unsigned __int16)TokenInformation | 0x80070000;
    goto LABEL_15;
  }
  v27 = GetLastError();
  ProcessModuleNameAndAppId = v27;
  v7 = 0LL;
  v14 = 1;
  if ( v27 > 0 )
    ProcessModuleNameAndAppId = (unsigned __int16)v27 | 0x80070000;
LABEL_15:
  LocalFree(hMem);
  LocalFree(v35);
  LocalFree(v41);
  LocalFree(v37);
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(hObject);
    hObject = 0LL;
  }
  if ( v6 )
    CUnknown::Release(v6);
  if ( v14 )
    RpcRevertToSelf();
  if ( ProcessModuleNameAndAppId < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      26LL,
      &WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids,
      (unsigned int)ProcessModuleNameAndAppId);
  }
  if ( v43 )
    LeaveCriticalSection(v42);
  return (unsigned int)ProcessModuleNameAndAppId;
}
