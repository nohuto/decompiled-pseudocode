/*
 * XREFs of ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180012764
 * Callers:
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x1800045D0 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     PbmRegisterPlaybackManagerNotifications @ 0x180018750 (PbmRegisterPlaybackManagerNotifications.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x180018810 (PbmUnregisterPlaybackManagerNotifications.c)
 *     PbmSetSmtcSubscriptionState @ 0x180018940 (PbmSetSmtcSubscriptionState.c)
 *     PbmGetSoundLevel @ 0x180018A30 (PbmGetSoundLevel.c)
 *     PbmIsPlaying @ 0x180018B30 (PbmIsPlaying.c)
 *     PbmRegisterAppManagerNotification @ 0x180018C40 (PbmRegisterAppManagerNotification.c)
 *     PbmUnregisterAppManagerNotification @ 0x180018CE0 (PbmUnregisterAppManagerNotification.c)
 *     PbmRegisterAppClosureNotification @ 0x180018D70 (PbmRegisterAppClosureNotification.c)
 *     PbmUnregisterAppClosureNotification @ 0x180018E10 (PbmUnregisterAppClosureNotification.c)
 *     PbmPlayToStreamStateChanged @ 0x180018EF0 (PbmPlayToStreamStateChanged.c)
 *     PbmCastingAppStateChanged @ 0x180019040 (PbmCastingAppStateChanged.c)
 *     PbmSetScreenReaderState @ 0x180019280 (PbmSetScreenReaderState.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     WPP_SF_ @ 0x18000537C (WPP_SF_.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHPEAPEAV1@@Z @ 0x18000D9C0 (-CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHPEAPEAV1@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x18001070C (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x18001137C (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x180011610 (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 *     ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x180013008 (-ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?FindProcess@CApplicationManager@@IEAAJKPEAPEAVCProcess@@@Z @ 0x1800131C0 (-FindProcess@CApplicationManager@@IEAAJKPEAPEAVCProcess@@@Z.c)
 *     ?AppModelPolicy_GetPolicy@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@@Z @ 0x1800167F0 (-AppModelPolicy_GetPolicy@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RpcGetProcess(CApplicationManager *this, void *a2, struct CProcess **a3)
{
  CApplicationManager *v5; // r14
  char *v6; // r15
  BOOL v7; // r13d
  int v8; // r12d
  int LastError; // eax
  int v10; // ecx
  unsigned int v11; // eax
  HANDLE CurrentThread; // rax
  signed int v13; // eax
  unsigned int v14; // ecx
  signed int v15; // eax
  const GUID *v16; // r8
  unsigned __int64 v17; // r9
  const struct _TlgProvider_t *v18; // rcx
  int v19; // eax
  signed int v20; // r9d
  int v21; // eax
  signed int v22; // r9d
  int v23; // eax
  unsigned int v24; // ecx
  CApplicationManager *v25; // rcx
  int v26; // eax
  struct CProcess **v27; // rbx
  const GUID *v28; // r8
  const GUID *v29; // r9
  struct CProcess *v30; // rbx
  unsigned int v31; // ebx
  const struct _TlgProvider_t *v32; // rcx
  int *v34; // rbx
  UINT32 cData; // [rsp+20h] [rbp-1E8h]
  int Process; // [rsp+70h] [rbp-198h] BYREF
  char v37; // [rsp+74h] [rbp-194h] BYREF
  char v38[3]; // [rsp+75h] [rbp-193h] BYREF
  int v39; // [rsp+78h] [rbp-190h] BYREF
  unsigned int Pid; // [rsp+7Ch] [rbp-18Ch] BYREF
  int v41; // [rsp+80h] [rbp-188h] BYREF
  int v42; // [rsp+84h] [rbp-184h]
  int v43; // [rsp+88h] [rbp-180h] BYREF
  struct CProcess *v44; // [rsp+90h] [rbp-178h] BYREF
  int v45; // [rsp+98h] [rbp-170h]
  int v46; // [rsp+9Ch] [rbp-16Ch]
  void *TokenHandle; // [rsp+A0h] [rbp-168h] BYREF
  HANDLE hObject; // [rsp+A8h] [rbp-160h] BYREF
  int v49; // [rsp+B0h] [rbp-158h] BYREF
  int v50; // [rsp+B4h] [rbp-154h] BYREF
  int v51; // [rsp+B8h] [rbp-150h] BYREF
  unsigned int v52; // [rsp+BCh] [rbp-14Ch] BYREF
  UINT32 v53; // [rsp+C0h] [rbp-148h] BYREF
  HLOCAL hMem; // [rsp+C8h] [rbp-140h] BYREF
  HLOCAL v55; // [rsp+D0h] [rbp-138h] BYREF
  HLOCAL v56; // [rsp+D8h] [rbp-130h] BYREF
  HLOCAL v57; // [rsp+E0h] [rbp-128h] BYREF
  char *v58; // [rsp+E8h] [rbp-120h]
  struct CProcess **v59; // [rsp+F0h] [rbp-118h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+F8h] [rbp-110h] BYREF
  char v61; // [rsp+100h] [rbp-108h]
  CApplicationManager *v62; // [rsp+108h] [rbp-100h]
  struct CProcess **v63; // [rsp+110h] [rbp-F8h]
  __int64 v64; // [rsp+118h] [rbp-F0h]
  ATL::CAtlException *v65; // [rsp+120h] [rbp-E8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp-D8h] BYREF
  const char *v67; // [rsp+150h] [rbp-B8h]
  __int64 v68; // [rsp+158h] [rbp-B0h]
  int *v69; // [rsp+160h] [rbp-A8h]
  __int64 v70; // [rsp+168h] [rbp-A0h]
  int *p_Process; // [rsp+170h] [rbp-98h]
  __int64 v72; // [rsp+178h] [rbp-90h]
  EVENT_DATA_DESCRIPTOR v73; // [rsp+180h] [rbp-88h] BYREF
  const char *v74; // [rsp+1A0h] [rbp-68h]
  __int64 v75; // [rsp+1A8h] [rbp-60h]
  int *v76; // [rsp+1B0h] [rbp-58h]
  __int64 v77; // [rsp+1B8h] [rbp-50h]
  int *v78; // [rsp+1C0h] [rbp-48h]
  __int64 v79; // [rsp+1C8h] [rbp-40h]

  v64 = -2LL;
  v59 = a3;
  v63 = a3;
  v5 = g_ApplicationManager;
  v62 = g_ApplicationManager;
  v44 = 0LL;
  v42 = 0;
  v6 = 0LL;
  TokenHandle = 0LL;
  hObject = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  hMem = 0LL;
  v55 = 0LL;
  v46 = 0;
  v7 = 0;
  v45 = 0;
  v39 = 0;
  v8 = 0;
  v41 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v61 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *a3 = 0LL;
  LastError = I_RpcBindingInqLocalClientPID(a2, &Pid);
  v10 = LastError;
  if ( LastError )
    goto LABEL_2;
  Process = CApplicationManager::FindProcess(v5, Pid, &v44);
  if ( Process != -2147023728 )
  {
    v27 = v59;
LABEL_69:
    *v27 = v44;
    v44 = 0LL;
    Process = 0;
    goto LABEL_70;
  }
  if ( RpcImpersonateClient(a2) )
    goto LABEL_70;
  v42 = 1;
  CurrentThread = GetCurrentThread();
  if ( !OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
  {
    LastError = GetLastError();
    v10 = LastError;
LABEL_2:
    v11 = (unsigned __int16)LastError | 0x80070000;
    if ( v10 <= 0 )
      v11 = v10;
    Process = v11;
    goto LABEL_70;
  }
  LastError = GetTokenInformation(TokenHandle, (unsigned __int16 **)&v56, &v52, (unsigned __int16 **)&v57, &v53);
  v10 = LastError;
  if ( LastError )
    goto LABEL_2;
  v6 = (char *)OpenProcess(0x101000u, 0, Pid);
  v58 = v6;
  if ( !v6 )
  {
    v13 = GetLastError();
    v14 = (unsigned __int16)v13 | 0x80070000;
    if ( v13 <= 0 )
      v14 = v13;
    Process = v14;
    if ( v14 == -2147024891 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids);
      }
      v6 = (char *)OpenProcess(0x100400u, 0, Pid);
      v58 = v6;
      if ( !v6 )
      {
        v15 = GetLastError();
        v17 = (unsigned __int16)v15 | 0x80070000;
        if ( v15 <= 0 )
          v17 = (unsigned int)v15;
        Process = v17;
        v18 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v17);
        }
        if ( (unsigned int)dword_180034030 > 2 )
        {
          v67 = "__FUNC__";
          v68 = 9LL;
          v49 = 1027;
          v69 = &v49;
          v70 = 4LL;
          p_Process = &Process;
          v72 = 4LL;
          TlgWrite(v18, &unk_18002D869, v16, (LPCGUID)v17, cData, &pData);
        }
      }
    }
  }
  Process = GetProcessModuleNameAndAppId((__int64)v6, (__int64)&hMem, (unsigned __int16 **)&v55);
  if ( Process >= 0 )
  {
    if ( (int)AppModelPolicy_GetPolicy(-6LL, 1LL, &v50) >= 0 )
      v46 = (unsigned int)(v50 - 65537) <= 1;
    if ( (int)AppModelPolicy_GetPolicy(-6LL, 14LL, &v51) >= 0 )
    {
      v7 = v51 == 917505;
      if ( v51 == 917505 )
      {
        v37 = 0;
        v19 = CapabilityCheck(-6LL, L"voipCall", &v37);
        v20 = (unsigned __int16)v19 | 0x80070000;
        if ( v19 <= 0 )
          v20 = v19;
        if ( v20 < 0
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v20);
        }
        v45 = v37 != 0;
        Process = 0;
        v38[0] = 0;
        v39 = 0;
        v8 = 0;
        v41 = 0;
        v21 = CapabilityCheck(-6LL, L"backgroundMediaPlayback", v38);
        v22 = (unsigned __int16)v21 | 0x80070000;
        if ( v21 <= 0 )
          v22 = v21;
        if ( v22 < 0
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v22);
        }
        if ( v38[0] )
        {
          v39 = 1;
          v8 = 0;
          v41 = 0;
        }
        Process = 0;
        if ( !OpenProcessToken(v6, 8u, &hObject) )
        {
          v23 = GetLastError();
LABEL_51:
          v24 = (unsigned __int16)v23 | 0x80070000;
          if ( v23 <= 0 )
            v24 = v23;
          Process = v24;
          goto LABEL_70;
        }
      }
    }
    v23 = RpcRevertToSelf();
    if ( v23 )
      goto LABEL_51;
    v42 = 0;
    if ( !v7 || v39 )
    {
      v26 = 1;
      v39 = 1;
    }
    else
    {
      Process = CApplicationManager::ReadBackgroundAudioTaskCapability(v25, hObject, &v39, &v41);
      if ( Process < 0 )
        goto LABEL_70;
      v26 = v39;
      v8 = v41;
    }
    Process = CProcess::CreateInstance(
                v6,
                Pid,
                v53,
                (const unsigned __int16 *)hMem,
                (unsigned __int16 *)v55,
                (unsigned __int16 *)v56,
                v52 != 0,
                (unsigned __int16 *)v57,
                v46,
                v7,
                v45,
                v26,
                v8,
                &v44);
    if ( Process >= 0 )
    {
      Process = 0;
      try
      {
        ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
          (__int64 *)v62 + 14,
          &v44);
      }
      catch ( ATL::CAtlException *v65 )
      {
        v34 = (int *)v65;
        if ( *(_DWORD *)v65 == -1073741571 )
          _resetstkoflw();
        Process = *v34;
        v42 = 0;
        v6 = v58;
        v27 = v63;
        goto LABEL_63;
      }
      v27 = v59;
LABEL_63:
      if ( Process >= 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v44 + 2);
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, Pid);
        }
        goto LABEL_69;
      }
    }
  }
LABEL_70:
  LocalFree(hMem);
  LocalFree(v55);
  LocalFree(v56);
  LocalFree(v57);
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(hObject);
    hObject = 0LL;
  }
  if ( v44 && _InterlockedExchangeAdd((volatile signed __int32 *)v44 + 2, 0xFFFFFFFF) == 1 )
  {
    v30 = v44;
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v44 + 32LL))(v44);
    (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v30 + 24LL))(v30, 1LL);
  }
  if ( v42 )
    RpcRevertToSelf();
  v31 = Process;
  if ( Process < 0 )
  {
    v32 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, Process);
      v31 = Process;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v74 = "__FUNC__";
      v75 = 9LL;
      v43 = 1130;
      v76 = &v43;
      v77 = 4LL;
      v78 = &Process;
      v79 = 4LL;
      TlgWrite(v32, &unk_18002D869, v28, v29, cData, &v73);
      v31 = Process;
    }
  }
  if ( v61 )
    LeaveCriticalSection(lpCriticalSection);
  return v31;
}
