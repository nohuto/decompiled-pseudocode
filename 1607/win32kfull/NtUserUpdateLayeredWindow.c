/*
 * XREFs of NtUserUpdateLayeredWindow @ 0x1C0053B90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000C524 (UserSetLastStatus.c)
 *     zzzUpdateLayeredWindow @ 0x1C0053734 (zzzUpdateLayeredWindow.c)
 *     GetNewMonitor @ 0x1C0070AA8 (GetNewMonitor.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C007219C (UpdateMonitorForWindowAndChildren.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00725BC (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxNotifyMonitorChanged @ 0x1C00AEA64 (xxxNotifyMonitorChanged.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserUpdateLayeredWindow(
        __int64 a1,
        HDC a2,
        _QWORD *a3,
        __int64 *a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        unsigned __int64 a10)
{
  __int128 *v12; // r14
  const struct tagPOINT *v13; // r15
  struct tagRECT *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 *v18; // rdx
  _QWORD *v19; // rdx
  _DWORD *v20; // rdx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r14
  NTSTATUS updated; // eax
  __int64 NewMonitor; // rax
  __int64 v28; // rbx
  unsigned __int64 v30; // [rsp+50h] [rbp-118h] BYREF
  _DWORD v31[6]; // [rsp+58h] [rbp-110h] BYREF
  HDC v32; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v33; // [rsp+78h] [rbp-F0h] BYREF
  struct _BLENDFUNCTION *v34; // [rsp+80h] [rbp-E8h]
  struct tagPOINT *v35; // [rsp+88h] [rbp-E0h]
  struct tagSIZE *v36; // [rsp+90h] [rbp-D8h]
  _QWORD *v37; // [rsp+98h] [rbp-D0h]
  struct tagRECT v38; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+B8h] [rbp-B0h] BYREF
  _QWORD *v40; // [rsp+C0h] [rbp-A8h] BYREF
  _QWORD *v41; // [rsp+C8h] [rbp-A0h]
  __int128 *v42; // [rsp+D0h] [rbp-98h]
  __int64 v43; // [rsp+D8h] [rbp-90h]
  _QWORD v44[3]; // [rsp+E8h] [rbp-80h] BYREF
  __int128 v45; // [rsp+100h] [rbp-68h]
  __int128 v46; // [rsp+110h] [rbp-58h] BYREF

  v37 = a3;
  v32 = a2;
  *(_QWORD *)&v38.left = a5;
  v30 = a6;
  *(_QWORD *)&v45 = a8;
  v12 = (__int128 *)a10;
  v35 = 0LL;
  v36 = 0LL;
  v13 = 0LL;
  v41 = 0LL;
  v34 = 0LL;
  v14 = 0LL;
  v42 = 0LL;
  EnterCrit(0LL, 1LL);
  v17 = ValidateHwnd(a1);
  if ( v17 )
  {
    v44[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v44;
    v44[1] = v17;
    ++*(_DWORD *)(v17 + 8);
    v18 = (__int64 *)v30;
    if ( v30 )
    {
      if ( v30 >= W32UserProbeAddress )
        v18 = (__int64 *)W32UserProbeAddress;
      v43 = *v18;
      v39 = v43;
      v35 = (struct tagPOINT *)&v39;
    }
    if ( !a4 )
      goto LABEL_11;
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (__int64 *)W32UserProbeAddress;
    v33 = *a4;
    v36 = (struct tagSIZE *)&v33;
    if ( (int)v33 < 0 || v33 < 0 )
    {
      v21 = 0;
      v31[4] = 0;
      UserSetLastError(87LL);
    }
    else
    {
LABEL_11:
      v19 = v37;
      if ( v37 )
      {
        if ( (unsigned __int64)v37 >= W32UserProbeAddress )
          v19 = (_QWORD *)W32UserProbeAddress;
        v37 = (_QWORD *)*v19;
        v40 = v37;
        v13 = (const struct tagPOINT *)&v40;
        v41 = &v40;
      }
      v20 = (_DWORD *)v45;
      if ( (_QWORD)v45 )
      {
        if ( (unsigned __int64)v45 >= W32UserProbeAddress )
          v20 = (_DWORD *)W32UserProbeAddress;
        v31[0] = *v20;
        v34 = (struct _BLENDFUNCTION *)v31;
      }
      if ( a10 )
      {
        if ( a10 >= W32UserProbeAddress )
          v12 = (__int128 *)W32UserProbeAddress;
        v46 = *v12;
        v14 = (struct tagRECT *)&v46;
        v42 = &v46;
      }
      if ( (a9 & 0xFFFFFFF0) != 0 )
      {
        UserSetLastError(87LL);
        v21 = 0;
      }
      else if ( v14 && (v14->left < 0 || v14->top < 0) )
      {
        UserSetLastError(87LL);
        v21 = 0;
        UserSetLastError(87LL);
      }
      else
      {
        if ( v13 )
        {
          v28 = *(_QWORD *)(v17 + 88);
          if ( v28 )
          {
            if ( (unsigned int)IsTopLevelOrLayeredChildWindow(v17) && !(unsigned int)IsTopLevelWindow(v17) )
            {
              LODWORD(v30) = v13->x + *(_DWORD *)(v28 + 128);
              HIDWORD(v30) = v13->y + *(_DWORD *)(v28 + 132);
              v13 = (const struct tagPOINT *)&v30;
            }
          }
        }
        v24 = ValidateHmonitorNoRip(*(_QWORD *)(v17 + 344));
        v45 = *(_OWORD *)(v17 + 112);
        updated = zzzUpdateLayeredWindow((__m128i *)v17, v32, v13, v36, *(HDC *)&v38.left, v35, a7, v34, a9, v14);
        if ( updated < 0 )
        {
          v21 = 0;
          UserSetLastStatus(updated, 1);
        }
        else
        {
          v21 = 1;
          v23 = v45 - *(_QWORD *)(v17 + 112);
          if ( (_QWORD)v45 == *(_QWORD *)(v17 + 112) )
            v23 = *((_QWORD *)&v45 + 1) - *(_QWORD *)(v17 + 120);
          if ( v23 )
          {
            v38 = 0LL;
            NewMonitor = GetNewMonitor((struct tagWND *)v17, 0LL, &v38);
            if ( NewMonitor )
            {
              if ( NewMonitor != v24 )
              {
                if ( (unsigned int)UpdateMonitorForWindowAndChildren(v17, NewMonitor, &v32, 0LL) )
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
