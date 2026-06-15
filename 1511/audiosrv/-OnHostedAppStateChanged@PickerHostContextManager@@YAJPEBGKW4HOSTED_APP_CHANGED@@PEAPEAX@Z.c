/*
 * XREFs of ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18001D080
 * Callers:
 *     s_pbmReportHostedAppStateChange @ 0x18002C440 (s_pbmReportHostedAppStateChange.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180032520 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x1800325E4 (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180032780 (-RemoveAt@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x1800349F8 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180037190 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedApp.c)
 *     ?NewNode@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCPickerHostContext@@PEAV312@1@Z @ 0x180039108 (-NewNode@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PickerHostContextManager::OnHostedAppStateChanged(
        const unsigned __int16 *a1,
        unsigned int a2,
        int a3,
        CPickerHostContext **a4)
{
  CPickerHostContext **v4; // r14
  int v5; // esi
  unsigned int v6; // r15d
  const unsigned __int16 *v7; // rdi
  CPickerHostContext *v8; // rbx
  _QWORD *v9; // rax
  int v10; // r12d
  signed int HostedAppInteractivity; // r14d
  struct CHostedAppInteractivity *v12; // rdx
  int v13; // r8d
  int v14; // eax
  int v15; // edx
  BOOL v16; // r8d
  BOOL v17; // ebx
  CHostedAppInteractivityManager *v18; // rcx
  LPVOID *v19; // r12
  int v20; // edx
  int v21; // eax
  BOOL v22; // ebx
  HANDLE ProcessHeap; // rax
  unsigned __int128 v24; // rax
  CHostedAppInteractivity *v25; // rsi
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // r15
  __int64 v28; // r9
  int v29; // r10d
  __int64 v30; // r8
  unsigned __int64 v31; // rbx
  char *v32; // rdi
  __int16 v33; // cx
  unsigned __int64 v34; // r15
  TraceLoggingHProvider v35; // rcx
  HANDLE v36; // rax
  _QWORD *v37; // rdi
  _QWORD *v39; // rdx
  HANDLE v40; // rax
  int v41; // ecx
  CPickerHostContext *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  CPickerHostContext *v45; // r12
  __int64 v46; // rax
  ATL::CAtlException *v47; // rbx
  __int64 *v48; // rdx
  __int64 v49; // [rsp+0h] [rbp-C8h] BYREF
  LPVOID lpMem; // [rsp+20h] [rbp-A8h] BYREF
  struct CHostedAppInteractivity *v51; // [rsp+28h] [rbp-A0h] BYREF
  CPickerHostContext *v52; // [rsp+30h] [rbp-98h] BYREF
  __int64 v53; // [rsp+38h] [rbp-90h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-88h] BYREF
  char v55; // [rsp+48h] [rbp-80h]
  LPCRITICAL_SECTION v56; // [rsp+50h] [rbp-78h] BYREF
  char v57; // [rsp+58h] [rbp-70h]
  LPCRITICAL_SECTION v58; // [rsp+60h] [rbp-68h] BYREF
  char v59; // [rsp+68h] [rbp-60h]
  ATL::CAtlException *v60[11]; // [rsp+70h] [rbp-58h] BYREF
  BOOL v65; // [rsp+E8h] [rbp+20h]

  v60[2] = (ATL::CAtlException *)-2LL;
  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v56 = (LPCRITICAL_SECTION)&PickerHostContextManager::s_csPickerHostContextList;
  v57 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v56);
  v8 = *v4;
  v52 = v8;
  if ( v8 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)&PickerHostContextManager::s_csPickerHostContextList;
    v55 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v9 = (_QWORD *)PickerHostContextManager::s_PickerHostContextList;
    if ( PickerHostContextManager::s_PickerHostContextList )
    {
      while ( (CPickerHostContext *)v9[2] != v8 )
      {
        v9 = (_QWORD *)*v9;
        if ( !v9 )
          goto LABEL_79;
      }
      v10 = 1;
    }
    else
    {
LABEL_79:
      v10 = 0;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_ec06d0f298c71c199f72f747d2c93494_Traceguids, v8);
      }
    }
    if ( v55 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v10 )
      goto LABEL_8;
  }
  v42 = (CPickerHostContext *)operator new(0x30uLL);
  v45 = v42;
  lpMem = v42;
  if ( v42 )
  {
    *(_QWORD *)v42 = 0LL;
    *((_QWORD *)v42 + 1) = 0LL;
    *((_QWORD *)v42 + 2) = 0LL;
    *((_QWORD *)v42 + 3) = 0LL;
    *((_QWORD *)v42 + 4) = 0LL;
    *((_DWORD *)v42 + 10) = 10;
    v8 = v42;
    v52 = v42;
    try
    {
      v46 = ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::NewNode(
              v43,
              &v52,
              v44,
              PickerHostContextManager::s_PickerHostContextList);
      if ( PickerHostContextManager::s_PickerHostContextList )
        *(_QWORD *)(PickerHostContextManager::s_PickerHostContextList + 8) = v46;
      else
        qword_1800E55B8 = v46;
      PickerHostContextManager::s_PickerHostContextList = v46;
    }
    catch ( ATL::CAtlException *v60 )
    {
      v48 = &v49;
      v47 = v60[0];
      if ( *(_DWORD *)v60[0] == -1073741571 )
        _resetstkoflw();
      LODWORD(v51) = *(_DWORD *)v47;
      HostedAppInteractivity = (int)v51;
      if ( (int)v51 < 0 )
      {
        CPickerHostContext::`scalar deleting destructor'((CPickerHostContext *)lpMem, (unsigned int)v48);
        goto LABEL_134;
      }
      v4 = a4;
      v5 = a3;
      v6 = a2;
      v7 = a1;
      v8 = v52;
      v45 = (CPickerHostContext *)lpMem;
    }
    *v4 = v45;
LABEL_8:
    v51 = 0LL;
    HostedAppInteractivity = CPickerHostContext::GetHostedAppInteractivity(v8, v7, v6, &v51);
    if ( HostedAppInteractivity < 0 )
    {
      v35 = WPP_GLOBAL_Control;
LABEL_130:
      if ( v35 == (TraceLoggingHProvider)&WPP_GLOBAL_Control
        || (*((_DWORD *)v35 + 7) & 0x40000000) == 0
        || *((_BYTE *)v35 + 25) < 2u )
      {
LABEL_135:
        if ( HostedAppInteractivity >= 0 )
          goto LABEL_60;
        goto LABEL_138;
      }
      WPP_SF_D(
        *((_QWORD *)v35 + 2),
        12LL,
        &WPP_ec06d0f298c71c199f72f747d2c93494_Traceguids,
        (unsigned int)HostedAppInteractivity);
LABEL_134:
      v35 = WPP_GLOBAL_Control;
      goto LABEL_135;
    }
    if ( v5 == 1 )
    {
      v41 = *((_DWORD *)v51 + 3);
      *((_DWORD *)v51 + 3) = 0;
      v16 = v41 != 0;
      v17 = 0;
LABEL_17:
      if ( !v16 )
        goto LABEL_58;
      lpMem = 0LL;
      v58 = (LPCRITICAL_SECTION)&unk_1800E6430;
      v59 = 0;
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v58);
      HostedAppInteractivity = CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity(
                                 v18,
                                 v7,
                                 v6,
                                 (struct CHostedAppInteractivity **)&lpMem);
      if ( HostedAppInteractivity < 0 )
      {
        v35 = WPP_GLOBAL_Control;
        goto LABEL_125;
      }
      v19 = (LPVOID *)lpMem;
      v20 = *((_DWORD *)lpMem + 3);
      if ( v17 )
      {
        v21 = v20 + 1;
      }
      else
      {
        if ( !v20 )
        {
LABEL_22:
          v22 = *((_DWORD *)v19 + 3) != 0;
          v65 = v22;
          if ( (v20 != 0) == v22 )
          {
            v35 = WPP_GLOBAL_Control;
            goto LABEL_55;
          }
          HostedAppInteractivity = 0;
          if ( !g_ApplicationManager )
            goto LABEL_118;
          ProcessHeap = GetProcessHeap();
          *(_QWORD *)&v24 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
          v25 = (CHostedAppInteractivity *)v24;
          v53 = v24;
          if ( (_QWORD)v24 )
            *(_QWORD *)v24 = 0LL;
          else
            v25 = 0LL;
          if ( v25 )
          {
            *((_DWORD *)v25 + 2) = v6;
            *((_DWORD *)v25 + 3) = v22;
            v26 = -1LL;
            do
              ++v26;
            while ( v7[v26] );
            *(_QWORD *)v25 = 0LL;
            v27 = v26 + 1;
            if ( v26 + 1 < v26 )
            {
              HostedAppInteractivity = -2147024362;
            }
            else
            {
              *(_QWORD *)v25 = 0LL;
              v24 = v27 * (unsigned __int128)2uLL;
              v60[1] = *((ATL::CAtlException **)&v24 + 1);
              if ( !is_mul_ok(v27, 2uLL) )
              {
                HostedAppInteractivity = -2147024362;
                goto LABEL_44;
              }
              *(_QWORD *)&v24 = CoTaskMemAlloc(2 * v27);
              v28 = v24;
              *(_QWORD *)v25 = v24;
              if ( (_QWORD)v24 )
              {
                HostedAppInteractivity = 0;
                v53 = v26;
                if ( v27 > 0x7FFFFFFF )
                {
                  if ( v26 == -1LL )
                    goto LABEL_44;
                }
                else
                {
                  if ( v26 < 0x7FFFFFFF )
                  {
                    if ( !v7 )
                    {
                      v7 = (const unsigned __int16 *)&word_1800AFAB8;
                      v26 = 0LL;
                      v53 = 0LL;
                    }
                    if ( v27 )
                    {
                      *(_QWORD *)&v24 = v27;
                      *((_QWORD *)&v24 + 1) = v28;
                      v29 = 0;
                      v30 = 0LL;
                      v31 = v26 - v27;
                      v32 = (char *)v7 - v28;
                      while ( v31 + (_QWORD)v24 )
                      {
                        v33 = *(_WORD *)&v32[*((_QWORD *)&v24 + 1)];
                        if ( !v33 )
                          break;
                        **((_WORD **)&v24 + 1) = v33;
                        *((_QWORD *)&v24 + 1) += 2LL;
                        ++v30;
                        *(_QWORD *)&v24 = v24 - 1;
                        if ( !(_QWORD)v24 )
                        {
                          *((_QWORD *)&v24 + 1) -= 2LL;
                          --v30;
                          v29 = -2147024774;
                          break;
                        }
                      }
                      **((_WORD **)&v24 + 1) = 0;
                      v34 = v27 - v30;
                      if ( v29 >= 0 && v34 > 1 && 2 * v34 > 2 )
                        memset_0((void *)(v28 + 2 * (v30 + 1)), 0, 2 * v34 - 2);
                    }
LABEL_44:
                    v22 = v65;
                    if ( HostedAppInteractivity >= 0 )
                      goto LABEL_45;
                    goto LABEL_98;
                  }
                  if ( v26 == -1LL )
                    goto LABEL_44;
                }
                *(_WORD *)v24 = 0;
                goto LABEL_44;
              }
              HostedAppInteractivity = -2147024882;
            }
            v22 = v65;
          }
          else
          {
            HostedAppInteractivity = -2147024882;
          }
LABEL_98:
          if ( v25 )
            CHostedAppInteractivity::`scalar deleting destructor'(v25, DWORD2(v24));
          v25 = 0LL;
          v35 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
          {
LABEL_46:
            if ( HostedAppInteractivity < 0 )
              goto LABEL_112;
            v36 = GetProcessHeap();
            *(_QWORD *)&v24 = HeapAlloc(v36, 0, 0x18uLL);
            v37 = (_QWORD *)v24;
            v60[3] = (ATL::CAtlException *)v24;
            if ( (_QWORD)v24 )
            {
              *(_QWORD *)v24 = &CGenericApplicationManagerWorkItem<HostedAppStateChangedContext>::`vftable';
              _InterlockedIncrement((volatile signed __int32 *)g_ApplicationManager + 2);
              v19 = (LPVOID *)lpMem;
            }
            else
            {
              v37 = 0LL;
            }
            if ( v37 )
            {
              v37[1] = CApplicationManager::OnHostedAppStateChanged;
              v37[2] = v25;
              if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v37, 0LL) )
              {
                HostedAppInteractivity = 0;
LABEL_52:
                if ( HostedAppInteractivity >= 0 )
                  goto LABEL_53;
                v35 = WPP_GLOBAL_Control;
LABEL_112:
                if ( !v25 )
                  goto LABEL_54;
                CHostedAppInteractivity::`scalar deleting destructor'(v25, DWORD2(v24));
LABEL_53:
                v35 = WPP_GLOBAL_Control;
LABEL_54:
                if ( HostedAppInteractivity >= 0 )
                {
LABEL_55:
                  if ( !v22 )
                  {
                    v39 = (_QWORD *)qword_1800E6458;
                    if ( qword_1800E6458 )
                    {
                      while ( (LPVOID *)v39[2] != v19 )
                      {
                        v39 = (_QWORD *)*v39;
                        if ( !v39 )
                          goto LABEL_56;
                      }
                      ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::RemoveAt(&qword_1800E6458);
                      if ( *v19 )
                      {
                        CoTaskMemFree(*v19);
                        *v19 = 0LL;
                      }
                      v40 = GetProcessHeap();
                      HeapFree(v40, 0, v19);
                      v35 = WPP_GLOBAL_Control;
                    }
                  }
                  goto LABEL_56;
                }
                if ( v35 == (TraceLoggingHProvider)&WPP_GLOBAL_Control
                  || (*((_DWORD *)v35 + 7) & 0x40000000) == 0
                  || *((_BYTE *)v35 + 25) < 2u )
                {
                  goto LABEL_119;
                }
                WPP_SF_D(
                  *((_QWORD *)v35 + 2),
                  18LL,
                  &WPP_ec06d0f298c71c199f72f747d2c93494_Traceguids,
                  (unsigned int)HostedAppInteractivity);
LABEL_118:
                v35 = WPP_GLOBAL_Control;
LABEL_119:
                if ( HostedAppInteractivity >= 0 )
                  goto LABEL_55;
LABEL_125:
                if ( v35 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
                  && (*((_DWORD *)v35 + 7) & 0x40000000) != 0
                  && *((_BYTE *)v35 + 25) >= 2u )
                {
                  WPP_SF_D(
                    *((_QWORD *)v35 + 2),
                    16LL,
                    &WPP_ec06d0f298c71c199f72f747d2c93494_Traceguids,
                    (unsigned int)HostedAppInteractivity);
                  v35 = WPP_GLOBAL_Control;
                }
LABEL_56:
                if ( !v59 )
                  goto LABEL_59;
                LeaveCriticalSection(v58);
LABEL_58:
                v35 = WPP_GLOBAL_Control;
LABEL_59:
                if ( HostedAppInteractivity >= 0 )
                  goto LABEL_60;
                goto LABEL_130;
              }
              LODWORD(v24) = GetLastError();
              HostedAppInteractivity = v24;
              if ( (int)v24 > 0 )
                HostedAppInteractivity = (unsigned __int16)v24 | 0x80070000;
              if ( HostedAppInteractivity >= 0 )
                goto LABEL_53;
            }
            else
            {
              HostedAppInteractivity = -2147024882;
            }
            if ( v37 )
            {
              (*(void (__fastcall **)(_QWORD *, __int64))(*v37 + 8LL))(v37, 1LL);
              v22 = v65;
            }
            goto LABEL_52;
          }
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            35LL,
            &WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
            (unsigned int)HostedAppInteractivity);
LABEL_45:
          v35 = WPP_GLOBAL_Control;
          goto LABEL_46;
        }
        v21 = v20 - 1;
      }
      *((_DWORD *)lpMem + 3) = v21;
      goto LABEL_22;
    }
    if ( (unsigned int)(v5 - 2) > 1 )
      goto LABEL_58;
    v12 = v51;
    v13 = *((_DWORD *)v51 + 3);
    if ( v5 == 2 )
    {
      v14 = v13 + 1;
    }
    else
    {
      if ( !v13 )
      {
LABEL_16:
        v15 = *((_DWORD *)v12 + 3);
        v16 = (v13 != 0) != (v15 != 0);
        v17 = v15 != 0;
        goto LABEL_17;
      }
      v14 = v13 - 1;
    }
    *((_DWORD *)v51 + 3) = v14;
    goto LABEL_16;
  }
  HostedAppInteractivity = -2147024882;
  v35 = WPP_GLOBAL_Control;
LABEL_138:
  if ( v35 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)v35 + 7) & 0x40000000) != 0
    && *((_BYTE *)v35 + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)v35 + 2),
      10LL,
      &WPP_ec06d0f298c71c199f72f747d2c93494_Traceguids,
      (unsigned int)HostedAppInteractivity);
  }
LABEL_60:
  if ( v57 )
    LeaveCriticalSection(v56);
  return (unsigned int)HostedAppInteractivity;
}
