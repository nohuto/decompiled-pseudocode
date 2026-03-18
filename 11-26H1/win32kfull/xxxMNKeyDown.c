/*
 * XREFs of xxxMNKeyDown @ 0x1402D9B18
 * Callers:
 *     xxxHandleMenuMessages @ 0x14005B450 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMNChar @ 0x1402D9470 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1402D9B18 (xxxMNKeyDown.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x14000C04C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     _GetSubMenu @ 0x14000F1E0 (_GetSubMenu.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     HMValidateHandleNoRip @ 0x140095FE4 (HMValidateHandleNoRip.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNCancel @ 0x14011F744 (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x140120634 (xxxMNSelectItem.c)
 *     UnlockPopupMenu @ 0x1401758E0 (UnlockPopupMenu.c)
 *     LockPopupMenu @ 0x140176F40 (LockPopupMenu.c)
 *     xxxSendHelpMessage @ 0x1401C7838 (xxxSendHelpMessage.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1402376D0 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNCloseHierarchy @ 0x140248D60 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 *     xxxMNSetCapture @ 0x14028B3D4 (xxxMNSetCapture.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1402D8D5C (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     MNGetpItem @ 0x1402D9360 (MNGetpItem.c)
 *     xxxMNKeyDown @ 0x1402D9B18 (xxxMNKeyDown.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1402DA6FC (xxxMNSwitchToAlternateMenu.c)
 *     MNFindItemInColumn @ 0x1402FBFC0 (MNFindItemInColumn.c)
 *     MNFindNextValidItem @ 0x1402FC0CC (MNFindNextValidItem.c)
 */

_QWORD *__fastcall xxxMNKeyDown(__int64 **a1, __int64 a2, unsigned int a3)
{
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int MenuInheritedContextHelpId; // eax
  __int64 v10; // r8
  int ValidItem; // r8d
  unsigned int v12; // esi
  int v13; // r12d
  int v14; // eax
  __int64 v15; // r9
  __int64 v16; // r8
  int v17; // r15d
  __int64 *v18; // rax
  __int64 *p_BugCheckParameter3; // rcx
  __int64 v20; // rcx
  struct tagTHREADINFO *v21; // rax
  __int64 *v22; // rcx
  struct tagTHREADINFO *v23; // r12
  _QWORD *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // r15
  __int64 v27; // rax
  __int64 v28; // r12
  int v29; // r14d
  __int64 v30; // rcx
  __int64 *v31; // rax
  __int64 *v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // r8
  int v35; // ecx
  int v37; // [rsp+30h] [rbp-59h]
  _QWORD v38[3]; // [rsp+38h] [rbp-51h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-39h] BYREF
  _QWORD *v40; // [rsp+58h] [rbp-31h]
  ULONG_PTR v41[2]; // [rsp+70h] [rbp-19h] BYREF
  ULONG_PTR v42[2]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v43; // [rsp+90h] [rbp+7h]
  __int128 v44; // [rsp+98h] [rbp+Fh]
  BOOL v45; // [rsp+100h] [rbp+77h]
  int v46; // [rsp+108h] [rbp+7Fh]
  struct tagTHREADINFO *v47; // [rsp+108h] [rbp+7Fh]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v38, 0LL);
  v6 = *(_DWORD *)(a2 + 8);
  if ( (v6 & 8) != 0 )
  {
    if ( a3 != 112 )
    {
      if ( (v6 & 0x80u) != 0 && a3 == 27 )
        *(_DWORD *)(a2 + 8) = v6 | 0x2000;
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v38);
    }
    goto LABEL_18;
  }
  switch ( a3 )
  {
    case 0xDu:
      if ( *(_DWORD *)(**a1 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
      {
        v34 = (_QWORD *)(96LL * *(unsigned int *)(**a1 + 80) + *(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL));
        v35 = *(_DWORD *)(*v34 + 4LL) & 3;
        if ( v34[2] )
        {
          if ( !v35 )
            goto LABEL_22;
        }
        else if ( !v35 )
        {
          xxxMNDismissWithNotify(a2, (__int64)a1, (__int64)v34, *(_DWORD *)(**a1 + 80), 0LL);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v38);
        }
      }
      goto LABEL_108;
    case 0x12u:
LABEL_15:
      if ( (v6 & 0x100) == 0 )
      {
        xxxMNCancel(a2, 0, 0, 0LL);
        if ( a3 == 18 )
          *(_DWORD *)(a2 + 8) &= ~0x20u;
      }
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v38);
    case 0x1Bu:
      if ( (*(_DWORD *)**a1 & 1) == 0
        && **a1 != *(_QWORD *)(**a1 + 64)
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 64) + 8LL) + 40LL) + 31LL) & 0x20) == 0 )
      {
        if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(&BugCheckParameter3, *(_QWORD *)(**a1 + 64));
          **(_DWORD **)BugCheckParameter3 &= ~0x400u;
          if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
            xxxMNCancel(a2, 0, 0, 0LL);
          else
            xxxMNCloseHierarchy(*(_QWORD *)BugCheckParameter3, a2);
LABEL_103:
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&BugCheckParameter3);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v38);
        }
        Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v42, *(_QWORD *)(**a1 + 32));
        xxxSendMessage(*(struct tagWND **)(**a1 + 32), 0x1E4u);
        p_BugCheckParameter3 = (__int64 *)v42;
        goto LABEL_60;
      }
LABEL_108:
      xxxMNCancel(a2, 0, 0, 0LL);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v38);
  }
  if ( a3 != 37 )
  {
    if ( a3 == 38 )
    {
LABEL_21:
      if ( (*(_DWORD *)**a1 & 1) != 0 )
      {
LABEL_22:
        xxxMNOpenHierarchy(a1, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v38);
      }
      v10 = -1LL;
      if ( a3 != 38 )
        v10 = 1LL;
      ValidItem = MNFindNextValidItem(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v10, 0LL);
LABEL_58:
      xxxMNSelectItem(a1, a2, ValidItem);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v38);
    }
    if ( a3 != 39 )
    {
      if ( a3 != 40 )
      {
        if ( a3 == 112 )
        {
LABEL_18:
          v7 = MNGetpItem((__int64)a1, *(_DWORD *)(**a1 + 80));
          v8 = v7;
          if ( *(_QWORD *)(**a1 + 8) && v7 )
          {
            Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
              &BugCheckParameter3,
              *(_QWORD *)(**a1 + 8));
            MenuInheritedContextHelpId = GetMenuInheritedContextHelpId(a1);
            xxxSendHelpMessage(
              *(struct tagTHREADINFO ***)(**a1 + 8),
              2,
              *(_DWORD *)(*(_QWORD *)v8 + 8LL),
              **(_QWORD **)(**a1 + 40),
              MenuInheritedContextHelpId);
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(&BugCheckParameter3);
          }
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v38);
        }
        if ( a3 != 121 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v38);
        goto LABEL_15;
      }
      goto LABEL_21;
    }
  }
  v12 = 1;
  v13 = 37;
  v46 = (*(_DWORD *)**a1 & 0x400000) != 0;
  v37 = (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) >> 6) & 1;
  if ( v46 != v37 )
  {
    v14 = 37;
    if ( a3 == 37 )
      v14 = 39;
    a3 = v14;
  }
  if ( (*(_DWORD *)**a1 & 1) != 0
    || a3 != 39
    || *(_QWORD *)(**a1 + 24)
    || xxxMNOpenHierarchy(a1, a2) != -1 && (*(_DWORD *)**a1 & 0x20) == 0 )
  {
    if ( *(_QWORD *)(**a1 + 24) )
    {
      v45 = 1;
      if ( a3 == 37 && (*(_DWORD *)**a1 & 1) == 0 )
      {
        xxxMNCloseHierarchy(**a1, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v38);
      }
    }
    else
    {
      v45 = (*(_DWORD *)**a1 & 0x400) != 0;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v38, **a1);
    if ( (*(_DWORD *)**a1 & 2) == 0 || (v15 = 1LL, **a1 != *(_QWORD *)(**a1 + 64)) )
      v15 = 0LL;
    v16 = 0xFFFFFFFFLL;
    if ( a3 != 37 )
      v16 = 1LL;
    v17 = MNFindItemInColumn(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v16, v15);
    if ( v17 != -1 )
    {
LABEL_55:
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
        if ( v17 == -1 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v38);
        ValidItem = v17;
        goto LABEL_58;
      }
      if ( v17 == -1 )
      {
        if ( *(_QWORD *)(**a1 + 8) )
        {
          v20 = *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL);
          if ( (*(_BYTE *)(v20 + 30) & 8) != 0 )
          {
            v21 = PtiCurrent(v20);
            v22 = *a1;
            v44 = 0LL;
            v23 = v21;
            v47 = v21;
            v24 = (*(_DWORD *)*v22 & 4) != 0 ? (_QWORD *)GetSubMenu(*(_QWORD *)(**a1 + 40)) : *(_QWORD **)(**a1 + 40);
            v43 = v24 ? *v24 : 0LL;
            Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(
              &BugCheckParameter3,
              *(_QWORD *)(**a1 + 8));
            xxxSendMessage(*(struct tagWND **)(**a1 + 8), 0x213u);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)&BugCheckParameter3);
            v25 = HMValidateHandleNoSecure(*((__int64 *)&v44 + 1), 1);
            v26 = (_QWORD *)v25;
            if ( v25 )
            {
              if ( *(struct tagTHREADINFO **)(v25 + 16) == v23 )
              {
                v27 = HMValidateHandleNoRip(v44, 2);
                v28 = v27;
                if ( v27 )
                {
                  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v42, v27);
                  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v41, (__int64)v26);
                  v29 = v45;
                  if ( (*(_BYTE *)(v26[5] + 31LL) & 0x20) != 0 )
                    v29 = 1;
                  xxxMNSelectItem(a1, a2, -1);
                  *(_DWORD *)(a2 + 8) |= 2u;
                  UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 48));
                  *(_DWORD *)**a1 &= ~0x80u;
                  v30 = v26[20];
                  if ( v30 && GetSubMenu(v30) == v28 )
                    v28 = v26[20];
                  UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 40));
                  v31 = *a1;
                  v40 = v26;
                  BugCheckParameter3 = *v31 + 8;
                  HMAssignmentLock(&BugCheckParameter3, 0LL);
                  v32 = *a1;
                  v40 = v26;
                  BugCheckParameter3 = *v32 + 16;
                  HMAssignmentLock(&BugCheckParameter3, 0LL);
                  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(&BugCheckParameter3, v28);
                  LockPopupMenu((__int64)a1, (__int64 *)(**a1 + 40), (__int64)&BugCheckParameter3);
                  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)&BugCheckParameter3);
                  if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
                  {
                    *(_DWORD *)(*((_QWORD *)v47 + 58) + 436LL) &= ~0x100000u;
                    xxxMNSetCapture((__int64)a1, a2);
                  }
                  if ( (*(_BYTE *)(v26[5] + 31LL) & 0x40) == 0 && *(_QWORD *)(**a1 + 40) )
                  {
                    v33 = v26[21];
                    if ( v33 == *(_QWORD *)(**a1 + 40) )
                    {
                      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(&BugCheckParameter3, v26[20]);
                      LockPopupMenu((__int64)a1, (__int64 *)(**a1 + 48), (__int64)&BugCheckParameter3);
                      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)&BugCheckParameter3);
                      *(_DWORD *)(a2 + 8) &= ~2u;
                    }
                    else
                    {
                      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(&BugCheckParameter3, v33);
                      LockPopupMenu((__int64)a1, (__int64 *)(**a1 + 48), (__int64)&BugCheckParameter3);
                      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)&BugCheckParameter3);
                    }
                  }
                  v17 = 0;
                  *(_DWORD *)**a1 ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)(2 * *(_DWORD *)(a2 + 8))) & 4;
                  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v41);
                  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v42);
LABEL_91:
                  if ( *(_QWORD *)(*(_QWORD *)v38[0] + 24LL) )
                    xxxMNCloseHierarchy(*(_QWORD *)v38[0], a2);
                  xxxMNSelectItem(a1, a2, v17);
                  if ( v29 )
                    goto LABEL_22;
                  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v38);
                }
              }
            }
          }
        }
        if ( !(unsigned int)xxxMNSwitchToAlternateMenu(a1, a2) )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v38);
        if ( a3 != 39 )
          v12 = -1;
        v17 = MNFindNextValidItem(*(_QWORD *)(**a1 + 40), 0xFFFFFFFFLL, v12, 0LL);
        if ( v17 == -1 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v38);
      }
      v29 = v45;
      goto LABEL_91;
    }
    if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
    {
      if ( v46 != v37 )
      {
        if ( a3 == 37 )
          v13 = 39;
        a3 = v13;
      }
      SmartObjStackRefBase<tagPOPUPMENU>::Init(&BugCheckParameter3, *(_QWORD *)(**a1 + 64));
      xxxMNKeyDown(&BugCheckParameter3, a2, a3);
      goto LABEL_103;
    }
    v18 = *a1;
    if ( **a1 == *(_QWORD *)(**a1 + 64) )
    {
      if ( (*(_DWORD *)*v18 & 1) == 0 )
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v38);
      goto LABEL_55;
    }
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(&BugCheckParameter3, *(_QWORD *)(*v18 + 32));
    xxxSendMessage(*(struct tagWND **)(**a1 + 32), 0x100u);
    p_BugCheckParameter3 = (__int64 *)&BugCheckParameter3;
LABEL_60:
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>(p_BugCheckParameter3);
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v38);
}
