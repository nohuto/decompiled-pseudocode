/*
 * XREFs of ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x140121918
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 *     GreSaveDC @ 0x140122524 (GreSaveDC.c)
 *     GreGetLayout @ 0x1401264BC (GreGetLayout.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x14012ED78 (-IsInsideUserApiHook@@YAHXZ.c)
 *     _IsWindowVisible @ 0x140206F58 (_IsWindowVisible.c)
 *     GreSetWindowOrg @ 0x140207284 (GreSetWindowOrg.c)
 *     xxxDrawWindowFrame @ 0x14025B5E8 (xxxDrawWindowFrame.c)
 */

__int64 __fastcall xxxDWPPrint(struct tagWND *a1, HDC a2, char a3)
{
  char v3; // si
  struct tagWND *v5; // rbx
  char *v6; // r15
  int v7; // r12d
  int v8; // r14d
  unsigned int v9; // r15d
  __int64 v10; // rcx
  struct tagBWL *v12; // rax
  __int64 v13; // rdx
  struct tagBWL *v14; // r15
  __int64 *i; // r12
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rdx
  unsigned int v19; // r13d
  struct tagBWL *v20; // rcx
  __int64 DesktopWindow; // rax
  struct tagBWL *v22; // rax
  __int64 v23; // rdx
  struct tagBWL *v24; // rbx
  struct tagWND *v25; // r12
  __int64 *j; // r14
  __int64 v27; // rax
  struct tagWND *v28; // rsi
  int v29; // r13d
  int v30; // r12d
  unsigned int v31; // r13d
  unsigned int v32; // r15d
  ULONG_PTR BugCheckParameter3[3]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v34; // [rsp+90h] [rbp+40h]
  struct _POINTL v35; // [rsp+A0h] [rbp+50h] BYREF
  struct tagWND *v36; // [rsp+A8h] [rbp+58h]

  v35 = 0LL;
  v3 = a3;
  v36 = a1;
  v5 = a1;
  if ( (a3 & 1) != 0 && !(unsigned int)IsWindowVisible(a1) )
    return 0LL;
  v6 = (char *)v5 + 40;
  if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 26LL) & 0x40) != 0 )
  {
    if ( (GreGetLayout(a2) & 1) == 0 )
    {
      v7 = 1;
      goto LABEL_4;
    }
    v6 = (char *)v5 + 40;
  }
  v7 = 0;
LABEL_4:
  if ( (v3 & 2) != 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL) & 0x10) != 0 )
    {
      v8 = 0;
    }
    else
    {
      v8 = 1;
      SetVisible((__int64)v5, 5u);
    }
    SetOrClrWF(1, v5, 0x180u, 1);
    if ( v7 )
    {
      v29 = *(_DWORD *)(*(_QWORD *)v6 + 96LL) - *(_DWORD *)(*(_QWORD *)v6 + 88LL);
      v34 = GreSetLayout(a2, (unsigned int)(v29 - 1), 1LL);
      if ( (unsigned int)IsInsideUserApiHook() )
        xxxSendMessage(v5, 0xAFu);
      else
        xxxDrawWindowFrame(v5, a2, (*(_BYTE *)(*(_QWORD *)v6 + 16LL) & 0x40) != 0);
      GreSetLayout(a2, (unsigned int)(v29 - 1), v34);
    }
    else if ( (unsigned int)IsInsideUserApiHook() )
    {
      xxxSendMessage(v5, 0xAFu);
    }
    else
    {
      xxxDrawWindowFrame(v5, a2, (*(_BYTE *)(*(_QWORD *)v6 + 16LL) & 0x40) != 0);
    }
    SetOrClrWF(0, v5, 0x180u, 1);
    if ( v8 )
      SetVisible((__int64)v5, 0);
  }
  if ( (v3 & 4) == 0 )
    return 1LL;
  v9 = GreSaveDC(a2);
  if ( !v9 )
    return 0LL;
  GreGetDCPoint(a2, 8u, &v35);
  if ( (v3 & 2) != 0 )
    GreSetWindowOrg(a2);
  GreIntersectClipRect(
    a2,
    0LL,
    0LL,
    (unsigned int)(*(_DWORD *)(*((_QWORD *)v5 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 104LL)),
    *(_DWORD *)(*((_QWORD *)v5 + 5) + 116LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 108LL));
  if ( v7 )
  {
    v30 = *(_DWORD *)(*((_QWORD *)v5 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 104LL);
    v31 = GreSetLayout(a2, (unsigned int)(v30 - 1), 1LL);
    if ( (v3 & 8) != 0 )
      xxxSendMessage(v5, 0x14u);
    xxxSendMessage(v5, 0x318u);
    GreSetLayout(a2, (unsigned int)(v30 - 1), v31);
  }
  else
  {
    if ( (v3 & 8) != 0 )
      xxxSendMessage(v5, 0x14u);
    xxxSendMessage(v5, 0x318u);
  }
  GreRestoreDC(a2, v9);
  v10 = *((_QWORD *)v5 + 5);
  v35.x += *(_DWORD *)(v10 + 88);
  v35.y += *(_DWORD *)(v10 + 92);
  if ( (v3 & 0x10) != 0 )
  {
    v3 = v3 & 0xF4 | 0xA;
    v12 = BuildHwndList(*((struct tagWND **)v5 + 14), 2LL, 0LL, 1);
    v14 = v12;
    if ( v12 )
    {
      for ( i = (__int64 *)((char *)v12 + 32); *i != 1; ++i )
      {
        v16 = HMValidateHandleNoSecure(*i, 1);
        v5 = (struct tagWND *)v16;
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 40);
          if ( (*(_BYTE *)(v17 + 31) & 0x10) != 0 )
          {
            v19 = GreSaveDC(a2);
            if ( !v19 )
            {
              v20 = v14;
              goto LABEL_37;
            }
            GreSetWindowOrg(a2);
            if ( *(char *)(*(_QWORD *)(*((_QWORD *)v5 + 17) + 8LL) + 8LL) >= 0 )
              GreIntersectClipRect(
                a2,
                0LL,
                0LL,
                (unsigned int)(*(_DWORD *)(v17 + 96) - *(_DWORD *)(v17 + 88)),
                *(_DWORD *)(v17 + 100) - *(_DWORD *)(v17 + 92));
            Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v5);
            xxxSendMessage(v5, 0x317u);
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
            GreRestoreDC(a2, v19);
          }
        }
      }
      FreeHwndList(v14, v13);
    }
  }
  if ( (v3 & 0x20) == 0 )
    return 1LL;
  DesktopWindow = GetDesktopWindow((__int64)v5);
  v22 = BuildHwndList(*(struct tagWND **)(DesktopWindow + 112), 2LL, 0LL, 1);
  v24 = v22;
  if ( !v22 )
    return 1LL;
  v25 = v36;
  for ( j = (__int64 *)((char *)v22 + 32); ; ++j )
  {
    if ( *j == 1 )
    {
      FreeHwndList(v24, v23);
      return 1LL;
    }
    v27 = HMValidateHandleNoSecure(*j, 1);
    v28 = (struct tagWND *)v27;
    if ( v27 )
    {
      if ( *(struct tagWND **)(v27 + 120) == v25 && (*(_BYTE *)(*(_QWORD *)(v27 + 40) + 31LL) & 0x10) != 0 )
        break;
    }
LABEL_43:
    ;
  }
  v32 = GreSaveDC(a2);
  if ( v32 )
  {
    GreSetWindowOrg(a2);
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v28);
    xxxSendMessage(v28, 0x317u);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    GreRestoreDC(a2, v32);
    goto LABEL_43;
  }
  v20 = v24;
LABEL_37:
  FreeHwndList(v20, v18);
  return 0LL;
}
