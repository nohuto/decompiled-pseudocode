/*
 * XREFs of ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800117F4
 * Callers:
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x1800047F0 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     PbmRegisterPlaybackManagerNotifications @ 0x180016860 (PbmRegisterPlaybackManagerNotifications.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x180016920 (PbmUnregisterPlaybackManagerNotifications.c)
 *     PbmSetSmtcSubscriptionState @ 0x180016A50 (PbmSetSmtcSubscriptionState.c)
 *     PbmGetSoundLevel @ 0x180016B40 (PbmGetSoundLevel.c)
 *     PbmIsPlaying @ 0x180016C40 (PbmIsPlaying.c)
 *     PbmRegisterAppManagerNotification @ 0x180016D50 (PbmRegisterAppManagerNotification.c)
 *     PbmUnregisterAppManagerNotification @ 0x180016DF0 (PbmUnregisterAppManagerNotification.c)
 *     PbmRegisterAppClosureNotification @ 0x180016E80 (PbmRegisterAppClosureNotification.c)
 *     PbmUnregisterAppClosureNotification @ 0x180016F20 (PbmUnregisterAppClosureNotification.c)
 *     PbmPlayToStreamStateChanged @ 0x180017000 (PbmPlayToStreamStateChanged.c)
 *     PbmCastingAppStateChanged @ 0x180017140 (PbmCastingAppStateChanged.c)
 *     PbmSetScreenReaderState @ 0x1800173F0 (PbmSetScreenReaderState.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     WPP_SF_ @ 0x180005B4C (WPP_SF_.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHPEAPEAV1@@Z @ 0x18000D36C (-CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHPEAPEAV1@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x18000FD8C (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x18001098C (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x180010C18 (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 *     ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x180011F30 (-ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?FindProcess@CApplicationManager@@IEAAJKPEAPEAVCProcess@@@Z @ 0x18001207C (-FindProcess@CApplicationManager@@IEAAJKPEAPEAVCProcess@@@Z.c)
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x180014E58 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RpcGetProcess(CApplicationManager *this, void *a2, struct CProcess **a3)
{
  CApplicationManager *v5; // r14
  int v6; // r13d
  char *v7; // r15
  int v8; // r12d
  int LastError; // eax
  int Process; // esi
  HANDLE CurrentThread; // rax
  signed int v12; // eax
  unsigned int v13; // ecx
  signed int v14; // eax
  unsigned int v15; // esi
  int v16; // esi
  int v17; // eax
  signed int v18; // r9d
  int v19; // eax
  signed int v20; // r9d
  int v21; // eax
  CApplicationManager *v22; // rcx
  int v23; // eax
  struct CProcess *v24; // rbx
  int *v26; // rbx
  int v27; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int Pid; // [rsp+74h] [rbp-F4h] BYREF
  int v29; // [rsp+78h] [rbp-F0h] BYREF
  int v30; // [rsp+7Ch] [rbp-ECh]
  struct CProcess *v31; // [rsp+80h] [rbp-E8h] BYREF
  int v32; // [rsp+88h] [rbp-E0h]
  int v33; // [rsp+8Ch] [rbp-DCh]
  void *TokenHandle; // [rsp+90h] [rbp-D8h] BYREF
  HANDLE hObject; // [rsp+98h] [rbp-D0h] BYREF
  int v36; // [rsp+A0h] [rbp-C8h] BYREF
  int v37; // [rsp+A4h] [rbp-C4h] BYREF
  unsigned int v38; // [rsp+A8h] [rbp-C0h] BYREF
  unsigned int v39[3]; // [rsp+ACh] [rbp-BCh] BYREF
  char *v40; // [rsp+B8h] [rbp-B0h]
  HLOCAL hMem; // [rsp+C0h] [rbp-A8h] BYREF
  HLOCAL v42; // [rsp+C8h] [rbp-A0h] BYREF
  HLOCAL v43; // [rsp+D0h] [rbp-98h] BYREF
  HLOCAL v44; // [rsp+D8h] [rbp-90h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+E0h] [rbp-88h] BYREF
  char v46; // [rsp+E8h] [rbp-80h]
  CApplicationManager *v47; // [rsp+F0h] [rbp-78h]
  __int64 v48; // [rsp+F8h] [rbp-70h]
  char v49[8]; // [rsp+100h] [rbp-68h] BYREF
  char v50[8]; // [rsp+108h] [rbp-60h] BYREF
  char v51[8]; // [rsp+110h] [rbp-58h] BYREF
  char v52[8]; // [rsp+118h] [rbp-50h] BYREF
  ATL::CAtlException *v53; // [rsp+120h] [rbp-48h] BYREF
  CApplicationManager *v54; // [rsp+170h] [rbp+8h] BYREF
  struct CProcess **v55; // [rsp+180h] [rbp+18h]
  char v56; // [rsp+188h] [rbp+20h] BYREF

  v55 = a3;
  v54 = this;
  v48 = -2LL;
  v5 = g_ApplicationManager;
  v47 = g_ApplicationManager;
  v31 = 0LL;
  v6 = 0;
  v7 = 0LL;
  TokenHandle = 0LL;
  hObject = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  hMem = 0LL;
  v42 = 0LL;
  v30 = 0;
  v32 = 0;
  v33 = 0;
  v27 = 0;
  v8 = 0;
  v29 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v46 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *a3 = 0LL;
  LastError = I_RpcBindingInqLocalClientPID(a2, &Pid);
  if ( LastError )
    goto LABEL_2;
  Process = CApplicationManager::FindProcess(v5, Pid, &v31);
  if ( Process != -2147023728 )
    goto LABEL_66;
  if ( RpcImpersonateClient(a2) )
    goto LABEL_68;
  v6 = 1;
  CurrentThread = GetCurrentThread();
  if ( !OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
  {
    LastError = GetLastError();
    goto LABEL_2;
  }
  LastError = GetTokenInformation(TokenHandle, (unsigned __int16 **)&v43, &v38, (unsigned __int16 **)&v44, v39);
  if ( LastError )
  {
LABEL_2:
    Process = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      Process = LastError;
    goto LABEL_68;
  }
  v7 = (char *)OpenProcess(0x101000u, 0, Pid);
  v40 = v7;
  if ( !v7 )
  {
    v12 = GetLastError();
    v13 = (unsigned __int16)v12 | 0x80070000;
    if ( v12 <= 0 )
      v13 = v12;
    if ( v13 == -2147024891 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids);
      }
      v7 = (char *)OpenProcess(0x100400u, 0, Pid);
      v40 = v7;
      if ( !v7 )
      {
        v14 = GetLastError();
        v15 = (unsigned __int16)v14 | 0x80070000;
        if ( v14 <= 0 )
          v15 = v14;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids, v15);
        }
        AudPolicyLogError("CApplicationManager::RpcGetProcess", 1027, v15);
      }
    }
  }
  Process = GetProcessModuleNameAndAppId((__int64)v7, (__int64)&hMem, (unsigned __int16 **)&v42);
  if ( Process >= 0 )
  {
    if ( (int)AppModelPolicy_GetPolicy_Internal(-6LL, 1LL, &v36, v50, v49) >= 0 )
      v30 = (unsigned int)(v36 - 65537) <= 1;
    if ( (int)AppModelPolicy_GetPolicy_Internal(-6LL, 14LL, &v37, v52, v51) < 0 )
    {
      v16 = v32;
    }
    else
    {
      v16 = v37 == 917505;
      v32 = v16;
      if ( v37 == 917505 )
      {
        LOBYTE(v54) = 0;
        v17 = CapabilityCheck(-6LL, L"voipCall", &v54);
        v18 = (unsigned __int16)v17 | 0x80070000;
        if ( v17 <= 0 )
          v18 = v17;
        if ( v18 < 0
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids, v18);
        }
        v33 = (_BYTE)v54 != 0;
        v56 = 0;
        v27 = 0;
        v8 = 0;
        v29 = 0;
        v19 = CapabilityCheck(-6LL, L"backgroundMediaPlayback", &v56);
        v20 = (unsigned __int16)v19 | 0x80070000;
        if ( v19 <= 0 )
          v20 = v19;
        if ( v20 < 0
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids, v20);
        }
        if ( v56 )
        {
          v27 = 1;
          v8 = 0;
          v29 = 0;
        }
        if ( !OpenProcessToken(v7, 8u, &hObject) )
        {
          v21 = GetLastError();
          goto LABEL_49;
        }
      }
    }
    v21 = RpcRevertToSelf();
    if ( v21 )
    {
LABEL_49:
      Process = (unsigned __int16)v21 | 0x80070000;
      if ( v21 <= 0 )
        Process = v21;
      goto LABEL_68;
    }
    v6 = 0;
    if ( !v16 || v27 )
    {
      v23 = 1;
      v27 = 1;
    }
    else
    {
      Process = CApplicationManager::ReadBackgroundAudioTaskCapability(v22, hObject, &v27, &v29);
      if ( Process < 0 )
        goto LABEL_68;
      v23 = v27;
      v8 = v29;
      v16 = v32;
    }
    Process = CProcess::CreateInstance(
                v7,
                Pid,
                v39[0],
                (const unsigned __int16 *)hMem,
                (unsigned __int16 *)v42,
                (unsigned __int16 *)v43,
                v38 != 0,
                (unsigned __int16 *)v44,
                v30,
                v16,
                v33,
                v23,
                v8,
                &v31);
    if ( Process >= 0 )
    {
      try
      {
        ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
          (__int64 *)v47 + 14,
          &v31);
      }
      catch ( ATL::CAtlException *v53 )
      {
        v26 = (int *)v53;
        if ( *(_DWORD *)v53 == -1073741571 )
          _o__resetstkoflw();
        v30 = *v26;
        Process = v30;
        v7 = v40;
        if ( v30 < 0 )
          goto LABEL_67;
      }
      _InterlockedIncrement((volatile signed __int32 *)v31 + 2);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids, Pid);
      }
LABEL_66:
      *v55 = v31;
      v31 = 0LL;
      Process = 0;
LABEL_67:
      v6 = 0;
    }
  }
LABEL_68:
  LocalFree(hMem);
  LocalFree(v42);
  LocalFree(v43);
  LocalFree(v44);
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
  if ( v31 && _InterlockedExchangeAdd((volatile signed __int32 *)v31 + 2, 0xFFFFFFFF) == 1 )
  {
    v24 = v31;
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v31 + 32LL))(v31);
    (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v24 + 24LL))(v24, 1LL);
  }
  if ( v6 )
    RpcRevertToSelf();
  if ( Process < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids, Process);
    }
    AudPolicyLogError("CApplicationManager::RpcGetProcess", 1130, Process);
  }
  if ( v46 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)Process;
}
