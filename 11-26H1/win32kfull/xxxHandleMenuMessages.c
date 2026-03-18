/*
 * XREFs of xxxHandleMenuMessages @ 0x14005B450
 * Callers:
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x140269B80 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x14000EC74 (safe_cast_fnid_to_PMENUWND.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     xxxMNMouseMove @ 0x14000F5A4 (xxxMNMouseMove.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140046914 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     xxxTranslateMessage @ 0x14005BDE8 (xxxTranslateMessage.c)
 *     IsMFMWFPWindow @ 0x14008A0E4 (IsMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x14008B6DC (xxxMNFindWindowFromPoint.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNCancel @ 0x14011F744 (xxxMNCancel.c)
 *     xxxMNButtonUp @ 0x1402375A8 (xxxMNButtonUp.c)
 *     xxxMNButtonDown @ 0x14024D270 (xxxMNButtonDown.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1402580B0 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x140290FD4 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     UnlockMFMWFPWindow @ 0x140291824 (UnlockMFMWFPWindow.c)
 *     IsPointerPrimary @ 0x1402AA494 (IsPointerPrimary.c)
 *     GetMenuStateWindow @ 0x1402D9274 (GetMenuStateWindow.c)
 *     LockMFMWFPWindow @ 0x1402D92A8 (LockMFMWFPWindow.c)
 *     xxxMNChar @ 0x1402D9470 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1402D9948 (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1402D9B18 (xxxMNKeyDown.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1402DA6FC (xxxMNSwitchToAlternateMenu.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxHandleMenuMessages(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // esi
  ULONG_PTR v8; // r12
  unsigned int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned __int16 v21; // bx
  struct tagTHREADINFO *v22; // rax
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  ULONG_PTR v30; // r8
  __int64 v31; // r12
  unsigned int v32; // ebx
  bool v33; // zf
  unsigned int v34; // edx
  __int16 v35; // r15d^2
  __int64 v36; // r8
  struct tagWND *v37; // rbx
  int v38; // r12d
  unsigned int v39; // edx
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // eax
  __int64 v44; // rcx
  int v45; // ebx
  __int64 v46; // rdx
  int v47; // eax
  __int64 MenuStateWindow; // rax
  __int64 v49; // rax
  unsigned int v50; // r15d
  struct tagWND *v51; // rbx
  __int64 v52; // rax
  struct tagWND *v53; // rcx
  unsigned int v54; // [rsp+20h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+28h] [rbp-38h] BYREF
  ULONG_PTR v56; // [rsp+30h] [rbp-30h]
  ULONG_PTR v57[2]; // [rsp+38h] [rbp-28h] BYREF
  ULONG_PTR v58[2]; // [rsp+48h] [rbp-18h] BYREF

  v3 = *a3;
  v4 = 0;
  v58[1] = 0LL;
  v54 = 0;
  v58[0] = -1LL;
  if ( !*(_QWORD *)(*(_QWORD *)v3 + 40LL) )
    goto LABEL_10;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_DWORD *)(a1 + 8);
  v10 = *(_DWORD *)(a1 + 16);
  v57[0] = v8;
  if ( v9 > 0x105 )
  {
    if ( v9 > 0x203 )
    {
      v17 = v9 - 516;
      if ( !v17 )
        goto LABEL_128;
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 60;
          if ( !v20 || v20 == 4 )
          {
            v21 = *(_WORD *)(a1 + 16);
            v22 = PtiCurrent(515LL);
            if ( (unsigned int)IsPointerPrimary(v22, v21) )
            {
              if ( !xxxMNFindWindowFromPoint(a3, &v54, (unsigned int)v8) )
                xxxMNCancel(a2, 0LL, 0LL, 0LL);
            }
          }
          goto LABEL_15;
        }
        goto LABEL_47;
      }
      goto LABEL_114;
    }
    if ( v9 == 515 )
    {
LABEL_105:
      *(_DWORD *)(a2 + 20) = -1;
      AdjustMouseCoordinates(*(struct tagWND **)(*(_QWORD *)*a3 + 16LL), (__int64 *)v57);
      v49 = xxxMNFindWindowFromPoint(a3, &v54, LODWORD(v57[0]));
      v50 = v54;
      v51 = (struct tagWND *)v49;
      if ( v49 || v54 )
      {
        if ( (**(_DWORD **)*a3 & 2) != 0 && v49 == 4294967291LL )
        {
          xxxMNSwitchToAlternateMenu(a3, a2);
        }
        else if ( v49 != 0xFFFFFFFFLL )
        {
          if ( (unsigned int)IsMFMWFPWindow(v49) )
          {
            Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)v58, (__int64)v51);
            xxxSendMessage(v51, 0x1F1u);
            Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v58);
            goto LABEL_37;
          }
          goto LABEL_46;
        }
        xxxMNDoubleClick(a2, a3, v50);
        goto LABEL_37;
      }
      goto LABEL_78;
    }
    v40 = v9 - 262;
    if ( v40 )
    {
      v41 = v40 - 18;
      if ( !v41 )
        goto LABEL_37;
      v42 = v41 - 232;
      if ( !v42 )
      {
LABEL_7:
        v12 = *(unsigned int *)(a2 + 8);
        if ( (*(_DWORD *)(a2 + 8) & 0x408) == 0x408 && (v12 & 0xC0) == 0 )
        {
          if ( *(_QWORD *)(a2 + 64) )
          {
            BugCheckParameter3 = *(_QWORD *)(a2 + 56);
            v56 = BugCheckParameter3;
            v44 = *(_QWORD *)(W32GetUserSessionState(v12, 1032LL) + 19904);
            v45 = *(_DWORD *)(v44 + 2172);
            HIDWORD(BugCheckParameter3) -= v45;
            HIDWORD(v56) += v45;
            v47 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v44, v46) + 19904) + 2168LL);
            LODWORD(BugCheckParameter3) = BugCheckParameter3 - v47;
            LODWORD(v56) = v47 + v56;
            LODWORD(v57[0]) = (__int16)v8;
            HIDWORD(v57[0]) = SWORD1(v8);
            if ( !(unsigned int)PtInRect(&BugCheckParameter3, v57[0]) )
            {
              MenuStateWindow = GetMenuStateWindow(a2);
              if ( MenuStateWindow )
              {
                *(_DWORD *)(a2 + 8) |= 0x80u;
                PostMessage(MenuStateWindow, 500, 0, 0);
              }
            }
          }
        }
        xxxMNMouseMove(a3, a2, v8);
        goto LABEL_9;
      }
      v43 = v42 - 1;
      if ( !v43 )
        goto LABEL_38;
      if ( v43 != 1 )
        goto LABEL_15;
      goto LABEL_25;
    }
    goto LABEL_103;
  }
  if ( v9 == 261 )
  {
    if ( v10 == 18 || v10 == 121 )
      goto LABEL_37;
    goto LABEL_89;
  }
  if ( v9 > 0xA5 )
  {
    v25 = v9 - 166;
    if ( !v25 )
      goto LABEL_47;
    v26 = v25 - 90;
    if ( !v26 )
    {
LABEL_34:
      v29 = *(_DWORD *)(a2 + 8);
      if ( (v29 & 8) != 0 && v10 != 112 )
      {
        if ( (v29 & 0x80u) != 0 && v10 == 27 )
          *(_DWORD *)(a2 + 8) = v29 | 0x2000;
        goto LABEL_37;
      }
      *(_DWORD *)(a2 + 20) = 1;
      if ( v10 > 0x25 )
      {
        if ( v10 != 38 && v10 != 39 && v10 != 40 && v10 != 112 && v10 != 121 )
          goto LABEL_89;
      }
      else if ( v10 != 37 && v10 != 3 )
      {
        if ( v10 == 9 )
        {
          if ( (**(_DWORD **)*a3 & 1) != 0 && !*(_QWORD *)(*(_QWORD *)*a3 + 56LL) )
          {
LABEL_78:
            xxxMNCancel(a2, 0LL, 0LL, 0LL);
            goto LABEL_9;
          }
        }
        else if ( v10 == 13 || v10 == 18 || v10 == 27 )
        {
          goto LABEL_84;
        }
LABEL_89:
        if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
          xxxTranslateMessage(a1, 0LL);
        goto LABEL_37;
      }
LABEL_84:
      if ( !*(_QWORD *)(*(_QWORD *)*a3 + 56LL) )
      {
        xxxMNKeyDown(a3, a2, v10);
        goto LABEL_37;
      }
LABEL_86:
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
        &BugCheckParameter3,
        *(_QWORD *)(*(_QWORD *)*a3 + 56LL));
      xxxSendMessage(*(struct tagWND **)(*(_QWORD *)*a3 + 56LL), *(_DWORD *)(a1 + 8));
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(&BugCheckParameter3);
      goto LABEL_37;
    }
    v27 = v26 - 1;
    if ( !v27 )
      goto LABEL_89;
    v28 = v27 - 1;
    if ( v28 )
    {
      if ( v28 != 2 )
        goto LABEL_15;
      goto LABEL_34;
    }
LABEL_103:
    if ( !*(_QWORD *)(*(_QWORD *)*a3 + 56LL) )
    {
      xxxMNChar(a3, a2, v10);
      goto LABEL_37;
    }
    goto LABEL_86;
  }
  if ( v9 == 165 )
  {
LABEL_114:
    if ( (**(_DWORD **)*a3 & 0x40) == 0 )
    {
      if ( (*(_DWORD *)(a2 + 8) & 8) == 0 )
      {
        if ( *(_DWORD *)(a1 + 8) == 517 && (**(_DWORD **)*a3 & 0x800) == 0 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(&BugCheckParameter3, 0LL);
          v52 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)*a3 + 56LL));
          if ( v52 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&BugCheckParameter3, *(_QWORD *)(v52 + 8));
            if ( *(_QWORD *)BugCheckParameter3 )
            {
              if ( *(int *)(*(_QWORD *)BugCheckParameter3 + 80LL) >= 0
                && *(_QWORD *)(*(_QWORD *)BugCheckParameter3 + 8LL) )
              {
                Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
                  v57,
                  *(_QWORD *)(*(_QWORD *)BugCheckParameter3 + 8LL));
                xxxSendMessage(*(struct tagWND **)(*(_QWORD *)BugCheckParameter3 + 8LL), 0x122u);
                Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v57);
              }
            }
          }
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&BugCheckParameter3);
        }
        goto LABEL_15;
      }
      v33 = (*(_DWORD *)(a2 + 8) & 0x100) == 0;
      goto LABEL_49;
    }
    goto LABEL_25;
  }
  v11 = v9 - 160;
  if ( !v11 )
    goto LABEL_7;
  v14 = v11 - 1;
  if ( !v14 )
    goto LABEL_38;
  v15 = v14 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      if ( v16 != 1 )
      {
LABEL_15:
        Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v58);
        return 0LL;
      }
LABEL_128:
      if ( (**(_DWORD **)*a3 & 0x40) != 0 )
      {
LABEL_38:
        *(_DWORD *)(a2 + 20) = -1;
        AdjustMouseCoordinates(*(struct tagWND **)(*(_QWORD *)*a3 + 16LL), (__int64 *)v57);
        v30 = v57[0];
        *(_DWORD *)(a2 + 12) = SLOWORD(v57[0]);
        *(_DWORD *)(a2 + 16) = SWORD1(v30);
        v31 = xxxMNFindWindowFromPoint(a3, &v54, v30);
        if ( (unsigned int)IsMFMWFPWindow(v31) )
          Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)v58, v31);
        if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
        {
          *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 12);
          *(_DWORD *)(a2 + 72) = v54;
          LockMFMWFPWindow(a2 + 64, v31);
        }
        if ( (*(_DWORD *)(a2 + 8) & 0x500) != 0 )
          *(_DWORD *)(a2 + 76) = ((v10 & 2) != 0) + 1;
        v32 = v54;
        if ( !v31 && !v54 )
          goto LABEL_46;
        if ( (**(_DWORD **)*a3 & 2) != 0 && v31 == 4294967291LL )
        {
          xxxMNSwitchToAlternateMenu(a3, a2);
LABEL_133:
          xxxMNButtonDown(a3, a2, v32, 1LL);
LABEL_134:
          if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
            goto LABEL_37;
          v34 = 516;
          goto LABEL_51;
        }
        if ( v31 == 0xFFFFFFFFLL )
          goto LABEL_133;
        if ( (unsigned int)IsMFMWFPWindow(v31) )
        {
          xxxSendMessage(v53, 0x1EDu);
          goto LABEL_134;
        }
LABEL_46:
        xxxMNCancel(a2, 0LL, 0LL, 0LL);
        goto LABEL_37;
      }
LABEL_47:
      *(_DWORD *)(a2 + 20) = -1;
      AdjustMouseCoordinates(*(struct tagWND **)(*(_QWORD *)*a3 + 16LL), (__int64 *)v57);
      if ( xxxMNFindWindowFromPoint(a3, &v54, LODWORD(v57[0])) )
      {
        v33 = (*(_DWORD *)(a2 + 8) & 0x100) == 0;
LABEL_49:
        if ( !v33 )
          goto LABEL_37;
        v34 = 0;
LABEL_51:
        xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), v34);
        goto LABEL_37;
      }
      goto LABEL_78;
    }
    goto LABEL_105;
  }
LABEL_25:
  v23 = *(_DWORD *)(a2 + 8);
  if ( (v23 & 8) != 0 )
  {
    if ( (v23 & 0x400) != 0 )
    {
      UnlockMFMWFPWindow(a2 + 64);
      v24 = *(_DWORD *)(a2 + 8) & 0xFFFFFF7F;
      *(_DWORD *)(a2 + 8) = v24;
      if ( (v24 & 0x2000) != 0 )
      {
        *(_DWORD *)(a2 + 8) = v24 & 0xFFFFDFF7;
LABEL_9:
        v4 = 1;
LABEL_10:
        Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v58);
        return v4;
      }
    }
    AdjustMouseCoordinates(*(struct tagWND **)(*(_QWORD *)*a3 + 16LL), (__int64 *)v57);
    v35 = WORD1(v57[0]);
    v36 = LODWORD(v57[0]);
    *(_DWORD *)(a2 + 12) = SLOWORD(v57[0]);
    *(_DWORD *)(a2 + 16) = v35;
    v37 = (struct tagWND *)xxxMNFindWindowFromPoint(a3, &v54, v36);
    v38 = IsMFMWFPWindow(v37);
    if ( v38 )
      Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)v58, (__int64)v37);
    v39 = v54;
    if ( (**(_DWORD **)*a3 & 2) != 0 )
    {
      if ( !v37 && !v54 )
        goto LABEL_46;
      if ( v37 == (struct tagWND *)0xFFFFFFFFLL )
      {
        if ( (**(_DWORD **)*a3 & 4) != 0 && (**(_DWORD **)*a3 & 0x80u) != 0 )
          goto LABEL_46;
LABEL_60:
        xxxMNButtonUp(a3, a2, v39, 0LL);
        goto LABEL_37;
      }
    }
    else
    {
      if ( !v37 && !v54 && (**(_DWORD **)*a3 & 0x200) == 0 )
      {
        Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(
          &BugCheckParameter3,
          *(_QWORD *)(*(_QWORD *)*a3 + 16LL));
        xxxSendMessage(*(struct tagWND **)(*(_QWORD *)*a3 + 16LL), 0x1E6u);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)&BugCheckParameter3);
        goto LABEL_37;
      }
      **(_DWORD **)*a3 &= ~0x200u;
      if ( v37 == (struct tagWND *)0xFFFFFFFFLL )
        goto LABEL_60;
    }
    if ( v38 )
      xxxSendMessage(v37, 0x1EFu);
    else
      *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
  }
LABEL_37:
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v58);
  return 1LL;
}
