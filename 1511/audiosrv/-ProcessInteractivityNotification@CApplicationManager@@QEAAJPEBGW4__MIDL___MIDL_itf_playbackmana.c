/*
 * XREFs of ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180003A60
 * Callers:
 *     s_pbmReportAppInteractivityChange @ 0x1800038B0 (s_pbmReportAppInteractivityChange.c)
 *     ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x1800039A0 (-OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z.c)
 * Callees:
 *     ??_GCAppStateChangedWorkItem@@UEAAPEAXI@Z @ 0x180004610 (--_GCAppStateChangedWorkItem@@UEAAPEAXI@Z.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180004BB8 (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x180004EE8 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001F320 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?QueueWorkItem@CSyncWorkItem@@UEAAJXZ @ 0x18002F330 (-QueueWorkItem@CSyncWorkItem@@UEAAJXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18006558C (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     WPP_SF_Ss @ 0x18009F900 (WPP_SF_Ss.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x1800A0254 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z @ 0x1800A08EC (-PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::ProcessInteractivityNotification(
        __int64 a1,
        const unsigned __int16 *a2,
        int a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  struct IPBMWorkItem *v9; // r15
  int Application; // ebp
  int v11; // r13d
  int v12; // ebx
  HANDLE ProcessHeap; // rax
  _QWORD *v14; // rsi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r14
  _WORD *v17; // rax
  _WORD *v18; // r9
  int v19; // r12d
  unsigned __int64 v20; // rax
  _WORD *v21; // rdx
  int v22; // r10d
  __int64 v23; // r8
  unsigned __int64 v24; // rbx
  char *v25; // rdi
  __int16 v26; // cx
  unsigned __int64 v27; // r14
  TraceLoggingHProvider v28; // rcx
  __int64 (__fastcall *v29)(ULONG_PTR); // rbx
  int v30; // eax
  const char *v32; // rax
  CApplication *v33; // rsi
  CApplication *v34[2]; // [rsp+30h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-48h] BYREF
  char v36; // [rsp+48h] [rbp-40h]
  LPCRITICAL_SECTION v37; // [rsp+50h] [rbp-38h] BYREF
  char v38; // [rsp+58h] [rbp-30h]
  _QWORD *v39; // [rsp+90h] [rbp+8h] BYREF

  v34[1] = (CApplication *)-2LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  v37 = (LPCRITICAL_SECTION)(a1 + 24);
  v38 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v37);
  v9 = 0LL;
  LODWORD(v39) = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        v32 = "PBMIC_HARD_NONINTERACTIVE";
      }
      else
      {
        v32 = "PBMIC_SOFT_NONINTERACTIVE";
        if ( a3 != 2 )
          v32 = "PBMIC_UNKNOWN";
      }
    }
    else
    {
      v32 = "PBMIC_INTERACTIVE";
    }
    WPP_SF_Ss(*((_QWORD *)WPP_GLOBAL_Control + 2), (__int64)v32);
  }
  Application = CApplicationManager::GetApplication((CApplicationManager *)a1, a2, a4, v34, 1, (int *)&v39);
  if ( Application >= 0 )
  {
    lpCriticalSection = v8;
    v36 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    if ( a3 == 2
      && (v33 = v34[0], *((_DWORD *)v34[0] + 28))
      && !CApplication::GetTotalActiveRenderStreamCount(v34[0])
      && CApplication::GetTotalActiveCaptureStreamCount(v33) )
    {
      ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
      v11 = 1;
    }
    else
    {
      if ( v36 )
        LeaveCriticalSection(lpCriticalSection);
      v11 = 0;
      if ( !a3 )
      {
        v12 = 1;
        goto LABEL_10;
      }
    }
    v12 = 0;
LABEL_10:
    ProcessHeap = GetProcessHeap();
    v14 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v39 = v14;
    if ( v14 )
    {
      *v14 = &CAppStateChangedWorkItem::`vftable';
      v14[1] = 0LL;
    }
    else
    {
      v14 = 0LL;
    }
    if ( !v14 )
    {
      Application = -2147024882;
      v28 = WPP_GLOBAL_Control;
      goto LABEL_73;
    }
    *((_DWORD *)v14 + 4) = v12;
    *((_DWORD *)v14 + 5) = a4;
    v15 = -1LL;
    do
      ++v15;
    while ( a2[v15] );
    v14[1] = 0LL;
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      Application = -2147024362;
    }
    else
    {
      v14[1] = 0LL;
      if ( !is_mul_ok(v16, 2uLL) )
      {
        Application = -2147024362;
        v19 = -2147024362;
        goto LABEL_30;
      }
      v17 = CoTaskMemAlloc(2 * v16);
      v18 = v17;
      v14[1] = v17;
      if ( v17 )
      {
        v19 = 0;
        Application = 0;
        if ( v16 > 0x7FFFFFFF )
        {
          if ( v15 == -1LL )
            goto LABEL_30;
        }
        else
        {
          if ( v15 < 0x7FFFFFFF )
          {
            if ( !a2 )
            {
              a2 = (const unsigned __int16 *)&word_1800AFAB8;
              v15 = 0LL;
            }
            if ( v16 )
            {
              v20 = v16;
              v21 = v18;
              v22 = 0;
              v23 = 0LL;
              v24 = v15 - v16;
              v25 = (char *)((char *)a2 - (char *)v18);
              while ( v20 + v24 )
              {
                v26 = *(_WORD *)&v25[(_QWORD)v21];
                if ( !v26 )
                  break;
                *v21++ = v26;
                ++v23;
                if ( !--v20 )
                {
                  --v21;
                  --v23;
                  v22 = -2147024774;
                  break;
                }
              }
              *v21 = 0;
              v27 = v16 - v23;
              if ( v22 >= 0 && v27 > 1 && 2 * v27 > 2 )
                memset_0(&v18[v23 + 1], 0, 2 * v27 - 2);
            }
LABEL_30:
            if ( v19 >= 0 )
              goto LABEL_31;
            goto LABEL_69;
          }
          if ( v15 == -1LL )
            goto LABEL_30;
        }
        *v17 = 0;
        goto LABEL_30;
      }
      Application = -2147024882;
    }
LABEL_69:
    v28 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
LABEL_32:
      if ( Application >= 0 )
      {
        v9 = (struct IPBMWorkItem *)v14;
        goto LABEL_34;
      }
LABEL_73:
      if ( v14 )
      {
        CAppStateChangedWorkItem::`scalar deleting destructor'((CAppStateChangedWorkItem *)v14, 1u);
        v28 = WPP_GLOBAL_Control;
      }
LABEL_34:
      if ( Application < 0 )
      {
        if ( v28 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)v28 + 7) & 0x40000000) != 0
          && *((_BYTE *)v28 + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)v28 + 2),
            18LL,
            &WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
            (unsigned int)Application);
          v28 = WPP_GLOBAL_Control;
        }
      }
      else
      {
        if ( v11 )
        {
          Application = CApplication::PostDelayedInteractivityNotification(v34[0], v9);
          if ( Application >= 0 )
            goto LABEL_40;
        }
        else
        {
          Application = CApplication::CleanupDelayedInteractivityNotification(v34[0]);
          if ( Application >= 0 )
          {
            v29 = *(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)v9 + 16LL);
            v30 = v29 == CSyncWorkItem::QueueWorkItem ? CSyncWorkItem::QueueWorkItem((ULONG_PTR)v9) : v29((ULONG_PTR)v9);
            Application = v30;
            if ( v30 >= 0 )
              goto LABEL_40;
          }
        }
        v28 = WPP_GLOBAL_Control;
      }
      if ( !v9 )
      {
LABEL_41:
        if ( Application >= 0 )
          goto LABEL_42;
        goto LABEL_86;
      }
      (*(void (__fastcall **)(struct IPBMWorkItem *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
LABEL_40:
      v28 = WPP_GLOBAL_Control;
      goto LABEL_41;
    }
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      19LL,
      &WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
      (unsigned int)Application);
LABEL_31:
    v28 = WPP_GLOBAL_Control;
    goto LABEL_32;
  }
  v28 = WPP_GLOBAL_Control;
LABEL_86:
  if ( v28 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)v28 + 7) & 0x40000000) != 0
    && *((_BYTE *)v28 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v28 + 2), 62LL, &WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids, (unsigned int)Application);
  }
LABEL_42:
  if ( v38 )
    LeaveCriticalSection(v37);
  return (unsigned int)Application;
}
