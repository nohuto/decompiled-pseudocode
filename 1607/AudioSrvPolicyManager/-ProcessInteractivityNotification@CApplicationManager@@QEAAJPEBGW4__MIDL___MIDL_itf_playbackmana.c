/*
 * XREFs of ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180016020
 * Callers:
 *     ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x1800162F0 (-OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z.c)
 *     PbmReportAppInteractivityChange @ 0x180018440 (PbmReportAppInteractivityChange.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x18000BC20 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18000BC8C (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z @ 0x18000C4DC (-PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x18000C6E4 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     WPP_SF_Ss @ 0x180011214 (WPP_SF_Ss.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001356C (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?CreateInstance@CAppStateChangedWorkItem@@SAJPEBGHKPEAPEAVIPBMWorkItem@@@Z @ 0x1800208E0 (-CreateInstance@CAppStateChangedWorkItem@@SAJPEBGHKPEAPEAVIPBMWorkItem@@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::ProcessInteractivityNotification(
        __int64 a1,
        const wchar_t *a2,
        int a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  __int64 v9; // r8
  const char *v10; // rax
  int Application; // ebx
  const GUID *v12; // r8
  const GUID *v13; // r9
  CApplication *v14; // rsi
  int v15; // edi
  struct IPBMWorkItem *v16; // rdi
  int v17; // eax
  const struct _TlgProvider_t *v18; // rcx
  UINT32 cData; // [rsp+20h] [rbp-99h]
  int v21; // [rsp+30h] [rbp-89h] BYREF
  int v22; // [rsp+34h] [rbp-85h] BYREF
  struct IPBMWorkItem *v23; // [rsp+38h] [rbp-81h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-79h] BYREF
  char v25; // [rsp+48h] [rbp-71h]
  LPCRITICAL_SECTION v26; // [rsp+50h] [rbp-69h] BYREF
  char v27; // [rsp+58h] [rbp-61h]
  CApplication *v28[2]; // [rsp+60h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-49h] BYREF
  const char *v30; // [rsp+90h] [rbp-29h]
  __int64 v31; // [rsp+98h] [rbp-21h]
  int *v32; // [rsp+A0h] [rbp-19h]
  __int64 v33; // [rsp+A8h] [rbp-11h]
  int *v34; // [rsp+B0h] [rbp-9h]
  __int64 v35; // [rsp+B8h] [rbp-1h]

  v28[1] = (CApplication *)-2LL;
  v21 = 0;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  v26 = (LPCRITICAL_SECTION)(a1 + 24);
  v27 = 0;
  ATL::CCritSecLock::Lock(&v26);
  v22 = 0;
  v23 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v10 = "PBMIC_UNKNOWN";
    if ( a3 == 2 )
      v10 = "PBMIC_SOFT_NONINTERACTIVE";
    if ( a3 == 1 )
      v10 = "PBMIC_HARD_NONINTERACTIVE";
    if ( !a3 )
      v10 = "PBMIC_INTERACTIVE";
    WPP_SF_Ss(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x40u, v9, a2, v10);
  }
  Application = CApplicationManager::GetApplication((CApplicationManager *)a1, a2, a4, v28, 1, &v22);
  v21 = Application;
  if ( Application < 0 )
    goto LABEL_33;
  lpCriticalSection = v8;
  v25 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v14 = v28[0];
  if ( a3 == 2
    && *((_DWORD *)v28[0] + 28)
    && !(unsigned int)CApplication::GetTotalActiveRenderStreamCount(v28[0])
    && (unsigned int)CApplication::GetTotalActiveCaptureStreamCount(v14) )
  {
    if ( v25 )
      LeaveCriticalSection(lpCriticalSection);
    v15 = 1;
  }
  else
  {
    if ( v25 )
      LeaveCriticalSection(lpCriticalSection);
    v15 = 0;
  }
  Application = CAppStateChangedWorkItem::CreateInstance(a2, a3 == 0, a4, &v23);
  v21 = Application;
  if ( Application < 0 )
    goto LABEL_29;
  if ( v15 )
  {
    v16 = v23;
    v17 = CApplication::PostDelayedInteractivityNotification((const wchar_t **)v14, (const wchar_t *)v23);
    goto LABEL_27;
  }
  Application = CApplication::CleanupDelayedInteractivityNotification((const wchar_t **)v14);
  v21 = Application;
  if ( Application < 0 )
  {
LABEL_29:
    v16 = v23;
    goto LABEL_30;
  }
  v16 = v23;
  v17 = (*(__int64 (__fastcall **)(struct IPBMWorkItem *))(*(_QWORD *)v23 + 16LL))(v23);
LABEL_27:
  v21 = v17;
  Application = v17;
  if ( v17 >= 0 )
    v16 = 0LL;
LABEL_30:
  if ( v16 )
  {
    (*(void (__fastcall **)(struct IPBMWorkItem *, __int64))(*(_QWORD *)v16 + 8LL))(v16, 1LL);
    Application = v21;
  }
  if ( Application < 0 )
  {
LABEL_33:
    v18 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x41u,
        &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids,
        Application);
      Application = v21;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v30 = "__FUNC__";
      v31 = 9LL;
      v22 = 3031;
      v32 = &v22;
      v33 = 4LL;
      v34 = &v21;
      v35 = 4LL;
      TlgWrite(v18, &unk_18002D869, v12, v13, cData, &pData);
      Application = v21;
    }
  }
  if ( v27 )
    LeaveCriticalSection(v26);
  return (unsigned int)Application;
}
