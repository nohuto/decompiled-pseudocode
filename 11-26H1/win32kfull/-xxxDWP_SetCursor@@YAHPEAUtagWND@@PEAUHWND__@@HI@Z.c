/*
 * XREFs of ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x140012F10
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxGetSysMenu @ 0x14000D5F8 (xxxGetSysMenu.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1400368B8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     xxxActiveWindowTracking @ 0x14008DA14 (xxxActiveWindowTracking.c)
 *     xxxActivateEnabledPopup @ 0x1401AF0B0 (xxxActivateEnabledPopup.c)
 *     xxxFlashEnabledPopup @ 0x1401B1004 (xxxFlashEnabledPopup.c)
 *     _GetMenuState @ 0x140220F5C (_GetMenuState.c)
 */

__int64 __fastcall xxxDWP_SetCursor(ULONG_PTR *a1, _QWORD *a2, int a3, int a4)
{
  _QWORD *v6; // rbp
  ULONG_PTR v8; // rax
  ULONG_PTR v9; // rcx
  __int64 v10; // r8
  ULONG_PTR v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r15
  struct tagCURSOR *v21; // rcx
  struct tagTHREADINFO *v23; // rax
  __int64 v24; // rdx
  struct tagCURSOR *v25; // rbx
  __int64 v26; // rax
  struct tagWND *v27; // rdi
  __int64 SysMenu; // rax
  int MenuState; // edi
  int v30; // edi
  int v31; // edi
  __int64 v32; // rbx
  int v33; // edi
  int v34; // edi
  ULONG_PTR BugCheckParameter3[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = a2;
  if ( a4 )
  {
    if ( a3 == 10 || a3 == 11 )
    {
      v25 = *(struct tagCURSOR **)(W32GetUserSessionState(a1, a2) + 25776);
    }
    else
    {
      if ( a3 != 12 )
      {
        if ( a3 == 13 )
        {
LABEL_54:
          v25 = *(struct tagCURSOR **)(W32GetUserSessionState(a1, a2) + 24672);
          goto LABEL_37;
        }
        if ( a3 == 14 )
          goto LABEL_53;
        if ( a3 != 15 )
        {
          if ( a3 != 16 )
          {
            if ( a3 != 17 )
              goto LABEL_10;
            goto LABEL_54;
          }
LABEL_53:
          v25 = *(struct tagCURSOR **)(W32GetUserSessionState(a1, a2) + 25224);
          goto LABEL_37;
        }
      }
      v25 = *(struct tagCURSOR **)(W32GetUserSessionState(a1, a2) + 26328);
    }
LABEL_37:
    LOBYTE(v24) = 1;
    v26 = HMValidateHandleNoSecure(v6, v24);
    v27 = (struct tagWND *)v26;
    if ( !v26 )
      return 0LL;
    if ( (*(_BYTE *)(*(_QWORD *)(v26 + 40) + 30LL) & 8) != 0 )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v26);
      SysMenu = xxxGetSysMenu(v27, 1);
      MenuState = GetMenuState(SysMenu, 61440LL);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3);
      if ( MenuState != -1 && (MenuState & 3) != 0 )
        goto LABEL_44;
    }
    zzzSetCursor(v25);
    return 1LL;
  }
LABEL_10:
  if ( (*(_BYTE *)(a1[5] + 31) & 0xC0) == 0x40 )
    v8 = a1[13];
  else
    v8 = 0LL;
  v9 = a1[3];
  v10 = 0LL;
  if ( v9 )
  {
    a2 = *(_QWORD **)(v9 + 8);
    if ( a2 )
      v10 = a2[3];
  }
  v11 = 0LL;
  if ( v8 != v10 )
    v11 = v8;
  if ( !v11 )
  {
LABEL_18:
    if ( a4 )
    {
      PsGetCurrentThreadWin32Thread();
      v15 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 19904);
      if ( (unsigned __int64)(unsigned __int16)v6 >= *(_QWORD *)(v15 + 8) )
        return 0LL;
      UserSessionState = W32GetUserSessionState(v15, v14);
      v19 = *(_DWORD *)(W32GetUserSessionState(v18, v17) + 19928) * (unsigned int)(unsigned __int16)v6
          + *(_QWORD *)(UserSessionState + 19920);
      v20 = HMPkheFromPhe(v19);
      LOWORD(v6) = WORD1(v6) & 0x7FFF;
      if ( (WORD1(v6) & 0x7FFF) != *(_WORD *)(v19 + 26)
        && (_WORD)v6 != 0x7FFF
        && ((_WORD)v6 || !PsGetCurrentProcessWow64Process()) )
      {
        return 0LL;
      }
      if ( (*(_BYTE *)(v19 + 25) & 1) != 0 || *(_BYTE *)(v19 + 24) != 1 || !*(_QWORD *)v20 )
        return 0LL;
      if ( a3 == -2 )
      {
        v30 = a4 - 512;
        if ( !v30 )
        {
          v9 = *(unsigned int *)(W32GetUserSessionState(v9, a2) + 66796);
          if ( (v9 & 1) != 0 )
            xxxActiveWindowTracking(a1, 32LL, 4294967294LL);
          goto LABEL_44;
        }
        v31 = v30 - 1;
        if ( v31 )
        {
          v33 = v31 - 3;
          if ( v33 )
          {
            v34 = v33 - 3;
            if ( v34 )
            {
              if ( v34 != 4 )
                goto LABEL_44;
            }
          }
        }
        else
        {
          v32 = *(_QWORD *)(*((_QWORD *)PtiCurrent() + 58) + 128LL);
          xxxActivateEnabledPopup((struct tagWND *)a1);
          v9 = *((_QWORD *)PtiCurrent() + 58);
          if ( v32 != *(_QWORD *)(v9 + 128) )
            goto LABEL_44;
        }
        xxxFlashEnabledPopup(a1);
        goto LABEL_44;
      }
      if ( a3 == 1 )
      {
        v21 = *(struct tagCURSOR **)(*(_QWORD *)(*(_QWORD *)v20 + 136LL) + 88LL);
        if ( !v21 )
          return 0LL;
LABEL_27:
        zzzSetCursor(v21);
        return 0LL;
      }
    }
LABEL_44:
    v21 = *(struct tagCURSOR **)(W32GetUserSessionState(v9, a2) + 21912);
    goto LABEL_27;
  }
  v23 = PtiCurrent();
  BugCheckParameter3[0] = *((_QWORD *)v23 + 56);
  *((_QWORD *)v23 + 56) = BugCheckParameter3;
  BugCheckParameter3[1] = v11;
  HMLockObject(v11);
  if ( !xxxSendMessage(v11, 32LL, v6, (unsigned __int16)a3 | ((unsigned __int16)a4 << 16)) )
  {
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3);
    goto LABEL_18;
  }
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3);
  return 1LL;
}
