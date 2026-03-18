/*
 * XREFs of NtUserUpdateLayeredWindow @ 0x140234060
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastStatus @ 0x14001F7CC (UserSetLastStatus.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     zzzUpdateLayeredWindow @ 0x1400421A8 (zzzUpdateLayeredWindow.c)
 *     UpdateMonitorForWindowAndChildren @ 0x14004AF3C (UpdateMonitorForWindowAndChildren.c)
 *     GetNewMonitor @ 0x14004B044 (GetNewMonitor.c)
 *     xxxNotifyMonitorChanged @ 0x14004BDFC (xxxNotifyMonitorChanged.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1400A8258 (IsTopLevelOrLayeredChildWindow.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ??$ReadFromUser@UtagRECT@@@UmpDetail@@YA?AUtagRECT@@PEBU1@@Z @ 0x1402512A4 (--$ReadFromUser@UtagRECT@@@UmpDetail@@YA-AUtagRECT@@PEBU1@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x14028E0D0 (xxxAppAdjustDpiCandidateRect.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall NtUserUpdateLayeredWindow(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        ULONG64 a8,
        int a9,
        __int64 a10)
{
  int *v13; // r15
  const struct tagPOINT *v14; // r13
  struct tagRECT *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  struct tagWND *v19; // r14
  struct _BLENDFUNCTION *v20; // r15
  __int64 v21; // rax
  int v22; // ebx
  NTSTATUS updated; // eax
  __int64 v24; // rdx
  ULONG_PTR v25; // rcx
  __int64 v27; // rbx
  __int64 NewMonitor; // rdi
  __int64 v29; // rax
  __int64 v30; // r15
  unsigned __int16 v31; // si
  __int64 v32; // rdx
  int v33; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-F0h] BYREF
  struct tagSIZE *v35; // [rsp+60h] [rbp-E8h] BYREF
  int v36; // [rsp+74h] [rbp-D4h]
  ULONG_PTR v37[2]; // [rsp+78h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+88h] [rbp-C0h] BYREF
  __int64 ULong64FromUser; // [rsp+98h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-A0h] BYREF
  __int64 p_ULong64FromUser; // [rsp+B0h] [rbp-98h]
  struct tagRECT v43; // [rsp+B8h] [rbp-90h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-80h]
  __int64 *v45; // [rsp+D0h] [rbp-78h]
  __int64 *v46; // [rsp+D8h] [rbp-70h]
  __int64 *v47; // [rsp+E0h] [rbp-68h]
  int *v48; // [rsp+E8h] [rbp-60h]
  __int128 *v49; // [rsp+F0h] [rbp-58h]
  __int128 v50; // [rsp+100h] [rbp-48h] BYREF

  *(_QWORD *)&v43.left = a2;
  v44 = a5;
  v13 = (int *)a8;
  ULong64FromUser = 0LL;
  p_ULong64FromUser = 0LL;
  v40 = 0LL;
  v35 = 0LL;
  v41 = 0LL;
  v14 = 0LL;
  v33 = 0;
  v34 = 0LL;
  v50 = 0LL;
  v15 = 0LL;
  v16 = EnterCrit(0LL, 0LL);
  v17 = ValidateHwnd(a1);
  v19 = (struct tagWND *)v17;
  if ( v17 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(v37, v16, v17);
    if ( a6 )
    {
      ULong64FromUser = RtlReadULong64FromUser(a6);
      p_ULong64FromUser = (__int64)&ULong64FromUser;
      v45 = &ULong64FromUser;
    }
    if ( a4
      && ((v21 = RtlReadULong64FromUser(a4), v40 = v21, v35 = (struct tagSIZE *)&v40, v46 = &v40, (int)v21 < 0)
       || v21 < 0) )
    {
      v22 = 0;
      v36 = 0;
      UserSetLastError(87);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v37);
    }
    else
    {
      if ( a3 )
      {
        v41 = RtlReadULong64FromUser(a3);
        v14 = (const struct tagPOINT *)&v41;
        v47 = &v41;
      }
      if ( a8 )
      {
        if ( a8 >= MmUserProbeAddress )
          v13 = (int *)MmUserProbeAddress;
        v33 = *v13;
        v20 = (struct _BLENDFUNCTION *)&v33;
        v48 = &v33;
      }
      else
      {
        v20 = (struct _BLENDFUNCTION *)v34;
      }
      if ( a10 )
      {
        v50 = *(_OWORD *)UmpDetail::ReadFromUser<tagRECT>(BugCheckParameter3, a10);
        v15 = (struct tagRECT *)&v50;
        v49 = &v50;
      }
      if ( (a9 & 0xFFFFFFD0) != 0 )
      {
        UserSetLastError(87);
        v22 = 0;
      }
      else if ( v15 && (v15->left < 0 || v15->top < 0) )
      {
        UserSetLastError(87);
        v22 = 0;
        UserSetLastError(87);
      }
      else
      {
        v34 = 0LL;
        if ( v14 )
        {
          v27 = *((_QWORD *)v19 + 13);
          if ( v27 )
          {
            if ( (unsigned int)IsTopLevelOrLayeredChildWindow(v19) && !IsTopLevelWindow((__int64)v19) )
            {
              LODWORD(v34) = v14->x + *(_DWORD *)(*(_QWORD *)(v27 + 40) + 104LL);
              HIDWORD(v34) = v14->y + *(_DWORD *)(*(_QWORD *)(v27 + 40) + 108LL);
              v14 = (const struct tagPOINT *)&v34;
            }
          }
        }
        *(_OWORD *)BugCheckParameter3 = *(_OWORD *)(*((_QWORD *)v19 + 5) + 88LL);
        updated = zzzUpdateLayeredWindow(
                    v19,
                    *(HDC *)&v43.left,
                    v14,
                    v35,
                    (HDC)v44,
                    (struct tagPOINT *)p_ULong64FromUser,
                    a7,
                    v20,
                    a9,
                    v15);
        if ( updated < 0 )
        {
          v22 = 0;
          UserSetLastStatus(updated, 1);
        }
        else
        {
          v22 = 1;
          v24 = *((_QWORD *)v19 + 5);
          v25 = BugCheckParameter3[0] - *(_QWORD *)(v24 + 88);
          if ( BugCheckParameter3[0] == *(_QWORD *)(v24 + 88) )
            v25 = BugCheckParameter3[1] - *(_QWORD *)(v24 + 96);
          if ( v25 )
          {
            v43 = 0LL;
            NewMonitor = GetNewMonitor(v19, 0LL, &v43);
            v29 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v19 + 5) + 256LL));
            v30 = v29;
            if ( NewMonitor )
            {
              if ( NewMonitor != v29 )
              {
                Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v16, NewMonitor);
                v35 = 0LL;
                if ( v30 )
                  v31 = *(_WORD *)(*(_QWORD *)(v30 + 40) + 60LL);
                else
                  v31 = 0;
                v32 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 60LL);
                if ( (_WORD)v32 != v31 )
                  xxxAppAdjustDpiCandidateRect(v19, v32, *((_QWORD *)v19 + 5) + 88LL, &v43);
                if ( Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3)
                  && (unsigned int)UpdateMonitorForWindowAndChildren(
                                     (struct tagWND **)v19,
                                     (struct tagMONITOR *)NewMonitor,
                                     (__int64 *)&v35,
                                     0) )
                {
                  xxxNotifyMonitorChanged(v19, &v43, (struct tagBWL *)v35, v31);
                }
                Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
              }
            }
          }
        }
      }
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v37);
    }
  }
  else
  {
    v22 = 0;
  }
  UserSessionSwitchLeaveCrit(v18);
  return v22;
}
