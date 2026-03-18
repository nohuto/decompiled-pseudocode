/*
 * XREFs of NtUserUpdateLayeredWindow @ 0x1C0069CF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0007BB0 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C0055FC4 (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C006BA10 (zzzUpdateLayeredWindow.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C006CE7C (UpdateMonitorForWindowAndChildren.c)
 *     GetNewMonitor @ 0x1C006DEC0 (GetNewMonitor.c)
 *     xxxNotifyMonitorChanged @ 0x1C0091974 (xxxNotifyMonitorChanged.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserUpdateLayeredWindow(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4,
        __int64 a5,
        unsigned __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        unsigned __int64 a10)
{
  __int128 *v12; // r14
  _QWORD *v13; // r15
  int *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 *v18; // rdx
  _QWORD *v19; // rdx
  int *v20; // rdx
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r14
  NTSTATUS updated; // eax
  __int64 NewMonitor; // rax
  __int64 v29; // [rsp+68h] [rbp-100h] BYREF
  int v30; // [rsp+70h] [rbp-F8h] BYREF
  _QWORD *v31; // [rsp+78h] [rbp-F0h]
  __int64 *v32; // [rsp+80h] [rbp-E8h]
  __int64 *v33; // [rsp+88h] [rbp-E0h]
  int *v34; // [rsp+90h] [rbp-D8h]
  __int64 v35; // [rsp+98h] [rbp-D0h] BYREF
  _QWORD *v36; // [rsp+A0h] [rbp-C8h] BYREF
  __int128 *v37; // [rsp+A8h] [rbp-C0h]
  __int64 v38; // [rsp+B0h] [rbp-B8h] BYREF
  _QWORD *v39; // [rsp+C0h] [rbp-A8h]
  _QWORD v40[3]; // [rsp+C8h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-88h]
  __int128 v42; // [rsp+F0h] [rbp-78h]
  struct tagRECT v43; // [rsp+100h] [rbp-68h] BYREF
  __int128 v44; // [rsp+110h] [rbp-58h] BYREF

  v31 = a3;
  v29 = a2;
  *(_QWORD *)&v43.left = a5;
  *(_QWORD *)&v42 = a8;
  v12 = (__int128 *)a10;
  v32 = 0LL;
  v33 = 0LL;
  v13 = 0LL;
  v39 = 0LL;
  v34 = 0LL;
  v14 = 0LL;
  v37 = 0LL;
  EnterCrit(0LL, 1LL);
  v17 = ValidateHwnd(a1);
  if ( v17 )
  {
    v40[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v40;
    v40[1] = v17;
    ++*(_DWORD *)(v17 + 8);
    v18 = (__int64 *)a6;
    if ( a6 )
    {
      if ( a6 >= W32UserProbeAddress )
        v18 = (__int64 *)W32UserProbeAddress;
      v41 = *v18;
      v38 = v41;
      v32 = &v38;
    }
    if ( !a4 )
      goto LABEL_11;
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (__int64 *)W32UserProbeAddress;
    v35 = *a4;
    v33 = &v35;
    if ( (int)v35 < 0 || v35 < 0 )
    {
      v21 = 0;
      UserSetLastError(87);
    }
    else
    {
LABEL_11:
      v19 = v31;
      if ( v31 )
      {
        if ( (unsigned __int64)v31 >= W32UserProbeAddress )
          v19 = (_QWORD *)W32UserProbeAddress;
        v31 = (_QWORD *)*v19;
        v36 = v31;
        v13 = &v36;
        v39 = &v36;
      }
      v20 = (int *)v42;
      if ( (_QWORD)v42 )
      {
        if ( (unsigned __int64)v42 >= W32UserProbeAddress )
          v20 = (int *)W32UserProbeAddress;
        v30 = *v20;
        v34 = &v30;
      }
      if ( a10 )
      {
        if ( a10 >= W32UserProbeAddress )
          v12 = (__int128 *)W32UserProbeAddress;
        v44 = *v12;
        v14 = (int *)&v44;
        v37 = &v44;
      }
      if ( (a9 & 0xFFFFFFF0) != 0 )
      {
        UserSetLastError(87);
        v21 = 0;
      }
      else if ( v14 && (*v14 < 0 || v14[1] < 0) )
      {
        UserSetLastError(87);
        v21 = 0;
        UserSetLastError(87);
      }
      else
      {
        if ( v13 && *(_QWORD *)(v17 + 88) && IsTopLevelOrLayeredChildWindow(v17) )
          IsTopLevelWindow(v17);
        v24 = ValidateHmonitorNoRip(*(_QWORD *)(v17 + 352));
        v42 = *(_OWORD *)(v17 + 112);
        updated = zzzUpdateLayeredWindow(
                    (struct tagWND *)v17,
                    *(__int64 *)&v43.left,
                    (__int64)v32,
                    a7,
                    (__int64)v34,
                    a9,
                    (__int64)v14);
        if ( updated < 0 )
        {
          v21 = 0;
          UserSetLastStatus(updated, 1);
        }
        else
        {
          v21 = 1;
          v23 = v42 - *(_QWORD *)(v17 + 112);
          if ( (_QWORD)v42 == *(_QWORD *)(v17 + 112) )
            v23 = *((_QWORD *)&v42 + 1) - *(_QWORD *)(v17 + 120);
          if ( v23 )
          {
            v43 = 0LL;
            NewMonitor = GetNewMonitor((struct tagWND *)v17, 0LL, &v43);
            if ( NewMonitor )
            {
              if ( NewMonitor != v24 )
              {
                if ( (unsigned int)UpdateMonitorForWindowAndChildren(v17, NewMonitor, &v29, 0LL) )
                  xxxNotifyMonitorChanged((struct tagWND *)v17);
              }
            }
          }
        }
      }
    }
    ThreadUnlock1(v23, v22);
  }
  else
  {
    v21 = 0;
  }
  UserSessionSwitchLeaveCrit(v16, v15);
  return v21;
}
