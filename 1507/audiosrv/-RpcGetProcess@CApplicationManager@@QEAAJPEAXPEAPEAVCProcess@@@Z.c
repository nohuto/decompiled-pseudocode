/*
 * XREFs of ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B5F0
 * Callers:
 *     PbmIsPlaying @ 0x180003A80 (PbmIsPlaying.c)
 *     s_pbmRegisterPlaybackManagerNotifications @ 0x180003B30 (s_pbmRegisterPlaybackManagerNotifications.c)
 *     PbmGetSoundLevel @ 0x180004E2C (PbmGetSoundLevel.c)
 *     s_pbmRegisterAppManagerNotification @ 0x180004ED0 (s_pbmRegisterAppManagerNotification.c)
 *     PbmSetSmtcSubscriptionState @ 0x18000557C (PbmSetSmtcSubscriptionState.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180021EB0 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     s_pbmRegisterAppClosureNotification @ 0x180093DD0 (s_pbmRegisterAppClosureNotification.c)
 *     s_pbmUnregisterAppClosureNotification @ 0x180093E40 (s_pbmUnregisterAppClosureNotification.c)
 *     s_pbmUnregisterAppManagerNotification @ 0x180093EB0 (s_pbmUnregisterAppManagerNotification.c)
 *     s_pbmUnregisterPlaybackManagerNotifications @ 0x180093F20 (s_pbmUnregisterPlaybackManagerNotifications.c)
 *     PbmCastingAppStateChanged @ 0x1800A0FBC (PbmCastingAppStateChanged.c)
 *     PbmPlayToStreamStateChanged @ 0x1800A1080 (PbmPlayToStreamStateChanged.c)
 *     s_SetScreenReaderState @ 0x1800A1150 (s_SetScreenReaderState.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?ReadBackgroundAudioCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x1800029B0 (-ReadBackgroundAudioCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcess@@@Z @ 0x180007174 (-AddHead@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAPEAU__POSITION.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180007DD0 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x18000A340 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x18002D8FC (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHPEAPEAV1@@Z @ 0x1800316C4 (-CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHPEAPEAV1@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::RpcGetProcess(CApplicationManager *this, void *a2, struct CProcess **a3)
{
  struct CProcess **v3; // r12
  CRefCountedObject *v5; // r14
  struct CProcess *v6; // rsi
  char *v7; // r13
  RPC_STATUS v8; // eax
  int ProcessModuleNameAndAppId; // edi
  unsigned int v10; // r13d
  _QWORD *v11; // rcx
  __int64 v12; // r14
  int v13; // r14d
  HANDLE CurrentThread; // rax
  int TokenInformation; // eax
  signed int LastError; // eax
  CApplicationManager *v18; // rcx
  bool v19; // cc
  int v20; // eax
  int *v21; // rbx
  signed int v22; // eax
  signed int v23; // eax
  struct CProcess *v24; // [rsp+60h] [rbp-C8h] BYREF
  int v25; // [rsp+68h] [rbp-C0h] BYREF
  HLOCAL v26; // [rsp+70h] [rbp-B8h] BYREF
  void *TokenHandle; // [rsp+78h] [rbp-B0h] BYREF
  HANDLE hObject; // [rsp+80h] [rbp-A8h] BYREF
  char *v29; // [rsp+88h] [rbp-A0h]
  HLOCAL v30; // [rsp+90h] [rbp-98h] BYREF
  HLOCAL v31; // [rsp+98h] [rbp-90h] BYREF
  unsigned int v32; // [rsp+A0h] [rbp-88h] BYREF
  HLOCAL hMem; // [rsp+A8h] [rbp-80h] BYREF
  unsigned int v34; // [rsp+B0h] [rbp-78h] BYREF
  LPCRITICAL_SECTION v35; // [rsp+B8h] [rbp-70h] BYREF
  char v36; // [rsp+C0h] [rbp-68h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+C8h] [rbp-60h] BYREF
  char v38; // [rsp+D0h] [rbp-58h]
  struct ATL::CAtlPlex **v39; // [rsp+D8h] [rbp-50h]
  __int64 v40; // [rsp+E0h] [rbp-48h]
  ATL::CAtlException *v41; // [rsp+E8h] [rbp-40h] BYREF
  CApplicationManager *Pid; // [rsp+130h] [rbp+8h] BYREF
  RPC_BINDING_HANDLE BindingHandle; // [rsp+138h] [rbp+10h]
  struct CProcess **v44; // [rsp+140h] [rbp+18h]
  int v45; // [rsp+148h] [rbp+20h]

  v44 = a3;
  BindingHandle = a2;
  Pid = this;
  v40 = -2LL;
  v3 = a3;
  v5 = g_ApplicationManager;
  v6 = 0LL;
  v45 = 0;
  v7 = 0LL;
  TokenHandle = 0LL;
  hObject = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  hMem = 0LL;
  v26 = 0LL;
  v25 = 0;
  v35 = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v36 = 0;
  ATL::CCritSecLock::Lock(&v35);
  *v3 = 0LL;
  v8 = I_RpcBindingInqLocalClientPID(a2, (unsigned int *)&Pid);
  ProcessModuleNameAndAppId = v8;
  if ( v8 )
  {
    v13 = v45;
    if ( v8 > 0 )
      ProcessModuleNameAndAppId = (unsigned __int16)v8 | 0x80070000;
  }
  else
  {
    v10 = (unsigned int)Pid;
    ProcessModuleNameAndAppId = -2147023728;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)v5 + 24);
    v38 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v24 = 0LL;
    v39 = (struct ATL::CAtlPlex **)((char *)v5 + 112);
    v11 = (_QWORD *)*((_QWORD *)v5 + 14);
    if ( v11 )
    {
      while ( 1 )
      {
        v12 = v11[2];
        v11 = (_QWORD *)*v11;
        if ( !*(_DWORD *)(v12 + 416) && *(_DWORD *)(v12 + 168) == v10 )
          break;
        if ( !v11 )
          goto LABEL_30;
      }
      ProcessModuleNameAndAppId = 0;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          29LL,
          &WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
          v10);
      }
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v6 = (struct CProcess *)v12;
      v24 = (struct CProcess *)v12;
    }
    else
    {
LABEL_30:
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          30LL,
          &WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
          2147943568LL);
      }
    }
    if ( v38 )
      LeaveCriticalSection(lpCriticalSection);
    if ( ProcessModuleNameAndAppId != -2147023728 )
    {
      v7 = 0LL;
      v13 = 0;
LABEL_14:
      *v3 = v6;
      v6 = 0LL;
      ProcessModuleNameAndAppId = 0;
      goto LABEL_15;
    }
    if ( RpcImpersonateClient(BindingHandle) )
    {
      v7 = 0LL;
      v13 = 0;
      goto LABEL_15;
    }
    v13 = 1;
    CurrentThread = GetCurrentThread();
    if ( !OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
    {
      LastError = GetLastError();
      v7 = 0LL;
      goto LABEL_59;
    }
    TokenInformation = GetTokenInformation(TokenHandle, &v31, &v34, &v30, &v32);
    ProcessModuleNameAndAppId = TokenInformation;
    if ( TokenInformation )
    {
      v7 = 0LL;
      if ( TokenInformation > 0 )
        ProcessModuleNameAndAppId = (unsigned __int16)TokenInformation | 0x80070000;
    }
    else
    {
      v7 = (char *)OpenProcess(0x101000u, 0, (DWORD)Pid);
      v29 = v7;
      if ( !v7 )
      {
        v22 = GetLastError();
        if ( v22 > 0 )
          v22 = (unsigned __int16)v22 | 0x80070000;
        if ( v22 == -2147024891 )
        {
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
          {
            WPP_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              0x17u,
              (__int64)&WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids);
          }
          v7 = (char *)OpenProcess(0x100400u, 0, (DWORD)Pid);
          v29 = v7;
          if ( !v7 )
          {
            v23 = GetLastError();
            if ( v23 > 0 )
              v23 = (unsigned __int16)v23 | 0x80070000;
            if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
              && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
            {
              WPP_SF_D(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                24LL,
                &WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
                (unsigned int)v23);
            }
          }
        }
      }
      ProcessModuleNameAndAppId = GetProcessModuleNameAndAppId(
                                    v7,
                                    (unsigned __int16 **)&hMem,
                                    (unsigned __int16 **)&v26);
      if ( ProcessModuleNameAndAppId >= 0 )
      {
        if ( !v26 || !*(_WORD *)v26 )
        {
          v45 = 0;
          goto LABEL_42;
        }
        v45 = 1;
        if ( OpenProcessToken(v7, 8u, &hObject) )
        {
LABEL_42:
          LastError = RpcRevertToSelf();
          ProcessModuleNameAndAppId = LastError;
          v19 = LastError <= 0;
          if ( !LastError )
          {
            v13 = 0;
            if ( v45 )
            {
              ProcessModuleNameAndAppId = CApplicationManager::ReadBackgroundAudioCapability(v18, hObject, &v25);
              if ( ProcessModuleNameAndAppId < 0 )
                goto LABEL_15;
              v20 = v25;
            }
            else
            {
              v20 = 1;
              v25 = 1;
            }
            ProcessModuleNameAndAppId = CProcess::CreateInstance(
                                          v7,
                                          (unsigned int)Pid,
                                          v32,
                                          (const unsigned __int16 *)hMem,
                                          (const unsigned __int16 *)v26,
                                          (const unsigned __int16 *)v31,
                                          v34 != 0,
                                          (const unsigned __int16 *)v30,
                                          v45,
                                          v20,
                                          &v24);
            if ( ProcessModuleNameAndAppId < 0 )
              goto LABEL_80;
            try
            {
              ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::AddHead(v39, &v24);
            }
            catch ( ATL::CAtlException *v41 )
            {
              v21 = (int *)v41;
              if ( *(_DWORD *)v41 == -1073741571 )
                _resetstkoflw();
              v45 = *v21;
              ProcessModuleNameAndAppId = v45;
              v7 = v29;
              v13 = 0;
              if ( v45 >= 0 )
              {
                v3 = v44;
                goto LABEL_47;
              }
LABEL_80:
              v6 = v24;
              goto LABEL_15;
            }
LABEL_47:
            _InterlockedIncrement((volatile signed __int32 *)v24 + 2);
            if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
              && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
            {
              WPP_SF_D(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                25LL,
                &WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
                (unsigned int)Pid);
            }
            v6 = v24;
            goto LABEL_14;
          }
          goto LABEL_60;
        }
        LastError = GetLastError();
LABEL_59:
        ProcessModuleNameAndAppId = LastError;
        v19 = LastError <= 0;
LABEL_60:
        if ( !v19 )
          ProcessModuleNameAndAppId = (unsigned __int16)LastError | 0x80070000;
      }
    }
  }
LABEL_15:
  LocalFree(hMem);
  LocalFree(v26);
  LocalFree(v31);
  LocalFree(v30);
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
  if ( v13 )
    RpcRevertToSelf();
  if ( ProcessModuleNameAndAppId < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      26LL,
      &WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
      (unsigned int)ProcessModuleNameAndAppId);
  }
  if ( v36 )
    LeaveCriticalSection(v35);
  return (unsigned int)ProcessModuleNameAndAppId;
}
