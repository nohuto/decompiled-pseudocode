/*
 * XREFs of ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x1800172D8
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z @ 0x180016CB4 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ @ 0x180017020 (-RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x180009E60 (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18001753C (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedApp.c)
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z @ 0x180017730 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4)
{
  int CumulativeHostedAppInteractivity; // ebx
  const GUID *v8; // r8
  const GUID *v9; // r9
  LPVOID *v10; // rdi
  int v11; // ecx
  int v12; // eax
  int v13; // esi
  int v14; // eax
  __int64 v15; // rdx
  HANDLE ProcessHeap; // rax
  UINT32 v18; // [rsp+28h] [rbp-69h]
  int v19; // [rsp+38h] [rbp-59h] BYREF
  LPVOID lpMem; // [rsp+40h] [rbp-51h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-49h] BYREF
  char v22; // [rsp+50h] [rbp-41h]
  __int64 v23; // [rsp+58h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-29h] BYREF
  const char *v25; // [rsp+88h] [rbp-9h]
  int v26; // [rsp+90h] [rbp-1h]
  int v27; // [rsp+94h] [rbp+3h]
  LPVOID *p_lpMem; // [rsp+98h] [rbp+7h]
  int v29; // [rsp+A0h] [rbp+Fh]
  int v30; // [rsp+A4h] [rbp+13h]
  int *v31; // [rsp+A8h] [rbp+17h]
  int v32; // [rsp+B0h] [rbp+1Fh]
  int v33; // [rsp+B4h] [rbp+23h]

  v23 = -2LL;
  lpMem = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)&unk_180034C40;
  v22 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CumulativeHostedAppInteractivity = CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity(
                                       (CHostedAppInteractivityManager *)&unk_180034C40,
                                       a2,
                                       a3,
                                       (struct CHostedAppInteractivity **)&lpMem);
  v19 = CumulativeHostedAppInteractivity;
  if ( CumulativeHostedAppInteractivity < 0 )
  {
LABEL_27:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x10u,
        &WPP_396aba38fe233c5efaf9c5dc644ed068_Traceguids,
        CumulativeHostedAppInteractivity);
      CumulativeHostedAppInteractivity = v19;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v25 = "__FUNC__";
      v26 = 9;
      v27 = 0;
      LODWORD(lpMem) = 405;
      p_lpMem = &lpMem;
      v29 = 4;
      v30 = 0;
      v31 = &v19;
      v32 = 4;
      v33 = 0;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v8, v9, v18, &pData);
      CumulativeHostedAppInteractivity = v19;
    }
    goto LABEL_33;
  }
  v10 = (LPVOID *)lpMem;
  v11 = *((_DWORD *)lpMem + 3);
  if ( a4 )
  {
    v12 = v11 + 1;
  }
  else
  {
    if ( !v11 )
      goto LABEL_7;
    v12 = v11 - 1;
  }
  *((_DWORD *)lpMem + 3) = v12;
  CumulativeHostedAppInteractivity = v19;
LABEL_7:
  v13 = *((_DWORD *)v10 + 3) != 0;
  v14 = v11 != 0;
  if ( v14 != v13 )
  {
    CumulativeHostedAppInteractivity = CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem(
                                         (CHostedAppInteractivityManager *)(v14 != v13),
                                         a2,
                                         a3,
                                         *((_DWORD *)v10 + 3) != 0);
    v19 = CumulativeHostedAppInteractivity;
    if ( CumulativeHostedAppInteractivity < 0 )
      goto LABEL_27;
  }
  if ( !v13 )
  {
    v15 = qword_180034C68;
    if ( qword_180034C68 )
    {
      while ( *(LPVOID **)(v15 + 16) != v10 )
      {
        v15 = *(_QWORD *)v15;
        if ( !v15 )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      v15 = 0LL;
    }
    if ( v15 )
    {
      if ( v15 == qword_180034C68 )
        qword_180034C68 = *(_QWORD *)v15;
      else
        **(_QWORD **)(v15 + 8) = *(_QWORD *)v15;
      if ( v15 == qword_180034C70 )
        qword_180034C70 = *(_QWORD *)(v15 + 8);
      else
        *(_QWORD *)(*(_QWORD *)v15 + 8LL) = *(_QWORD *)(v15 + 8);
      *(_QWORD *)v15 = *((_QWORD *)&xmmword_180034C80 + 1);
      *((_QWORD *)&xmmword_180034C80 + 1) = v15;
      if ( !--qword_180034C78 )
        ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll((__int64)&qword_180034C68);
      if ( *v10 )
      {
        CoTaskMemFree(*v10);
        *v10 = 0LL;
      }
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v10);
      CumulativeHostedAppInteractivity = v19;
    }
  }
  if ( CumulativeHostedAppInteractivity < 0 )
    goto LABEL_27;
LABEL_33:
  if ( v22 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)CumulativeHostedAppInteractivity;
}
