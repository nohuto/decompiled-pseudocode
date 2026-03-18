/*
 * XREFs of xxxDWP_UpdateUIState @ 0x140041D68
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1401FFD98 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     GetAppCompatFlags2 @ 0x14004E590 (GetAppCompatFlags2.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 */

__int64 __fastcall xxxDWP_UpdateUIState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int16 v5; // bx
  __int64 v6; // rbp
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // rcx
  __int64 UserSessionState; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rbp
  _QWORD *i; // rbx
  __int64 v21; // rax
  struct tagWND *v22; // rsi
  __int64 v23; // rdx
  _DWORD *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // edi
  ULONG_PTR BugCheckParameter3[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  v5 = WORD1(a2);
  LOWORD(v6) = a2;
  if ( (a2 & 0xFFF80000LL) != 0 || (unsigned __int16)a2 > 3u || a3 )
    return 0LL;
  if ( (_WORD)a2 == 3 )
  {
    v24 = *(_DWORD **)(W32GetUserSessionState(a1, a2) + 19904);
    if ( (*v24 & 0x80u) != 0 )
      return 0LL;
    v26 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 19904);
    if ( (*(_DWORD *)(v26 + 7004) & 0x20) != 0
      || *(int *)(*(_QWORD *)(W32GetUserSessionState(v26, v25) + 19904) + 7004LL) >= 0
      || (GetAppCompatFlags2(1024LL) & 2) != 0 )
    {
      return 0LL;
    }
    LOBYTE(v5) = 3;
    v6 = (unsigned __int16)(((**(_DWORD **)(W32GetUserSessionState(v28, v27) + 19904) & 0x40) != 0) + 1);
    v3 = v6 | 0x30000;
LABEL_10:
    v10 = (unsigned int)(unsigned __int16)v6 - 1;
    if ( (unsigned __int16)v6 == 1 )
    {
      if ( (v5 & 2) != 0 )
        SetOrClrWF(1LL, a1, 2880LL, 1LL);
      if ( (v5 & 1) != 0 )
        SetOrClrWF(1LL, a1, 2944LL, 1LL);
      if ( (v5 & 4) == 0 )
        goto LABEL_16;
      v12 = 1LL;
    }
    else
    {
      v10 = (unsigned int)(unsigned __int16)v6 - 2;
      if ( (unsigned __int16)v6 != 2 )
      {
        if ( (unsigned __int16)v6 == 3 )
        {
          v29 = **(_DWORD **)(W32GetUserSessionState(v10, v7) + 19904) & 0x40;
          SetOrClrWF(v29 == 0, a1, 2944LL, 1LL);
          SetOrClrWF(v29 == 0, a1, 2880LL, 1LL);
          v3 = (v29 != 0) + 196609LL;
        }
        goto LABEL_16;
      }
      if ( (v5 & 2) != 0 )
        SetOrClrWF(v10, a1, 2880LL, 1LL);
      if ( (v5 & 1) != 0 )
        SetOrClrWF(0LL, a1, 2944LL, 1LL);
      if ( (v5 & 4) == 0 )
      {
LABEL_16:
        if ( *(_QWORD *)(a1 + 112) )
        {
          UserSessionState = W32GetUserSessionState(v10, v7);
          if ( PtiCurrent(v14) == *(struct tagTHREADINFO **)(UserSessionState + 68472)
            || (v16 = 0, PtiCurrent(v15) == *(struct tagTHREADINFO **)(UserSessionState + 68544)) )
          {
            v16 = 1;
          }
          v17 = BuildHwndList(*(struct tagWND **)(a1 + 112), 2u);
          v19 = v17;
          if ( v17 )
          {
            for ( i = (_QWORD *)(v17 + 32); *i != 1LL; ++i )
            {
              LOBYTE(v18) = 1;
              v21 = HMValidateHandleNoSecure(*i, v18);
              v22 = (struct tagWND *)v21;
              if ( v21 )
              {
                Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v21);
                if ( v16 )
                  xxxSendNotifyMessage(v22, 296LL, v3, 0LL, 1);
                else
                  xxxSendMessage(v22, 0x128u);
                Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
              }
            }
            FreeHwndList(v19);
          }
        }
        return 0LL;
      }
      v12 = 0LL;
    }
    SetOrClrWF(v12, a1, 2820LL, 1LL);
    goto LABEL_16;
  }
  v8 = *(_DWORD **)(W32GetUserSessionState(a1, a2) + 19904);
  if ( (*v8 & 0x80u) != 0
    || (v9 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19904), (*(_DWORD *)(v9 + 7004) & 0x20) != 0)
    || *(int *)(*(_QWORD *)(W32GetUserSessionState(v9, v7) + 19904) + 7004LL) >= 0
    || (GetAppCompatFlags2(1024LL) & 2) != 0 )
  {
    v5 &= 0xFFFCu;
  }
  if ( v5 )
    goto LABEL_10;
  return 0LL;
}
