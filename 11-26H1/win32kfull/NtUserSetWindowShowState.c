/*
 * XREFs of NtUserSetWindowShowState @ 0x1402BE910
 * Callers:
 *     <none>
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400103E0 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     GetMonitorWorkRectForWindow @ 0x1401EFBA4 (GetMonitorWorkRectForWindow.c)
 *     ??$ReadFromUser@UtagRECT@@@UmpDetail@@YA?AUtagRECT@@PEBU1@@Z @ 0x1402512A4 (--$ReadFromUser@UtagRECT@@@UmpDetail@@YA-AUtagRECT@@PEBU1@@Z.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1402E7150 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall NtUserSetWindowShowState(__int64 a1, unsigned int a2, int a3, void *a4)
{
  BOOL v7; // r14d
  struct tagRECT *v8; // r12
  const struct tagTHREADINFO *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  struct tagWND *v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  const struct tagWND *v15; // r15
  int v16; // ecx
  int v17; // eax
  const struct tagTHREADINFO *v18; // rax
  __int64 v19; // rbx
  struct tagMONITOR *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v26; // [rsp+30h] [rbp-88h]
  __int128 v27; // [rsp+48h] [rbp-70h] BYREF
  __m128i v28; // [rsp+58h] [rbp-60h] BYREF
  __int128 *v29; // [rsp+68h] [rbp-50h]
  __int128 v30; // [rsp+70h] [rbp-48h] BYREF

  v26 = a2;
  v7 = 0;
  v8 = 0LL;
  v9 = (const struct tagTHREADINFO *)EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v12 = (struct tagWND *)v10;
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 40);
    v13 = *(_WORD *)(v11 + 42) & 0x2FFF;
    if ( v13 != 669 && v13 != 671 )
    {
      Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, (__int64)v9, (__int64)v12);
      v15 = *(const struct tagWND **)(*((_QWORD *)PtiCurrent(v14) + 61) + 328LL);
      if ( v15
        && (LOBYTE(v17) = IAMThreadAccessGranted(v9), v17)
        && *((_QWORD *)v9 + 57) == *(_QWORD *)(*((_QWORD *)v15 + 2) + 456LL) )
      {
        v18 = (const struct tagTHREADINFO *)*((_QWORD *)v12 + 2);
        if ( v18 != v9 )
        {
          if ( *((_QWORD *)v18 + 88) )
          {
            v16 = 5023;
            goto LABEL_6;
          }
          if ( a3 )
          {
            v16 = 1004;
            goto LABEL_6;
          }
          v19 = v26;
          if ( v26 <= 5 )
          {
            if ( !a4 )
              goto LABEL_24;
            v30 = *UmpDetail::ReadFromUser<tagRECT>(&v28, a4);
            v8 = (struct tagRECT *)&v30;
            v29 = &v30;
            v20 = _MonitorFromWindowInternal(v12, 2u, 1);
            if ( v20 )
            {
              v28 = *GetMonitorWorkRectForWindow(&v28, (__int64)v20, v15);
              v27 = 0LL;
              if ( (unsigned int)IntersectRect(&v27, (int *)&v30, v28.m128i_i32) )
              {
                v22 = v27 - v30;
                if ( (_QWORD)v27 == (_QWORD)v30 )
                  v22 = *((_QWORD *)&v27 + 1) - *((_QWORD *)&v30 + 1);
                if ( !v22 )
                {
                  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v21);
                  if ( !(unsigned __int8)ShouldVirtualizeWindowRect(v12, CurrentThreadDpiAwarenessContext)
                    || (unsigned int)TransformRectBetweenCoordinateSpaces(&v30, &v30, v12, v15) )
                  {
LABEL_24:
                    v7 = xxxSetWindowShowState(v12, byte_140369688[v19], v8);
                    goto LABEL_25;
                  }
                }
              }
            }
          }
        }
        v16 = 87;
      }
      else
      {
        v16 = 5;
      }
LABEL_6:
      UserSetLastError(v16);
LABEL_25:
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v11);
  return v7;
}
