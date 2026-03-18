/*
 * XREFs of xxxSetSysMenu @ 0x14000E260
 * Callers:
 *     xxxGetSysMenu @ 0x14000D5F8 (xxxGetSysMenu.c)
 *     xxxTranslateAccelerator @ 0x1401BA998 (xxxTranslateAccelerator.c)
 *     xxxHandleNCMouseGuys @ 0x140220C94 (xxxHandleNCMouseGuys.c)
 *     NtUserSetSysMenu @ 0x140255410 (NtUserSetSysMenu.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     xxxEnableMenuItem @ 0x14000E684 (xxxEnableMenuItem.c)
 *     MNGetPopupFromMenu @ 0x14000EA1C (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxGetSysMenuPtr @ 0x14000EF90 (xxxGetSysMenuPtr.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     _GetSubMenu @ 0x14000F1E0 (_GetSubMenu.c)
 *     ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14000F33C (-_SetCloseDefault@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _SetMenuDefaultItem @ 0x14000F3B0 (_SetMenuDefaultItem.c)
 *     IsSmallerThanScreen @ 0x14000FB4C (IsSmallerThanScreen.c)
 *     xxxRedrawTitle @ 0x14001111C (xxxRedrawTitle.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140011324 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     MNLookUpItem @ 0x1400344B8 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxMNUpdateShownMenu @ 0x1402F3090 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxSetSysMenu(struct tagWND *a1)
{
  __int64 SysMenuPtr; // rax
  unsigned int v3; // r15d
  __int64 v4; // rbx
  __int64 SubMenu; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edi
  unsigned int v9; // r12d
  unsigned int v10; // ebx
  int v11; // r14d
  unsigned int v12; // r13d
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rdx
  char v16; // cl
  struct tagTHREADINFO *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // ebx
  __int64 v22; // rsi
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // [rsp+20h] [rbp-60h] BYREF
  __int64 v29; // [rsp+28h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-50h] BYREF
  ULONG_PTR v31[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v32[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v33; // [rsp+60h] [rbp-20h]
  _QWORD v34[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v35; // [rsp+78h] [rbp-8h]
  __int64 v36; // [rsp+B8h] [rbp+38h] BYREF

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v32);
  SysMenuPtr = xxxGetSysMenuPtr(a1);
  v3 = 0;
  v33 = 0LL;
  v4 = SysMenuPtr;
  if ( SysMenuPtr != *(_QWORD *)v32[0] )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v32);
    if ( v4 )
    {
      v32[0] = *(_QWORD *)(v4 + 152);
      ++*(_DWORD *)(v32[0] + 8LL);
    }
    else
    {
      v32[0] = gSmartObjNullRef;
    }
  }
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v32) )
  {
    SubMenu = GetSubMenu();
    v33 = 0LL;
    if ( SubMenu == *(_QWORD *)v32[0]
      || ((SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v32), !SubMenu)
        ? (v32[0] = gSmartObjNullRef)
        : (v32[0] = *(_QWORD *)(SubMenu + 152), ++*(_DWORD *)(v32[0] + 8LL)),
          (v6 = v33) == 0) )
    {
      if ( !*(_QWORD *)v32[0] )
        goto LABEL_40;
      v6 = *(_QWORD *)v32[0];
    }
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v31, v6);
    v7 = *((_QWORD *)a1 + 5);
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 3;
    v12 = 61536;
    if ( (*(_BYTE *)(v7 + 31) & 0x20) != 0 )
    {
      v11 = 0;
      v3 = 3;
      v10 = 3;
      v12 = 61728;
      v8 = (unsigned __int8)IsTrayWindow(a1, 1LL) != 0 ? 3 : 0;
    }
    else if ( (*(_BYTE *)(v7 + 30) & 2) == 0 )
    {
      v3 = 3;
    }
    v13 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v13 + 30) & 1) != 0 )
    {
      v14 = *(_BYTE *)(v13 + 31);
      if ( (v14 & 1) == 0 )
        goto LABEL_21;
      v8 = 3;
      v11 = 0;
      if ( (v14 & 0x40) == 0 && (unsigned int)IsSmallerThanScreen(a1) )
        v8 = 0;
      v10 = 3;
    }
    v9 = 3;
LABEL_21:
    v15 = *((_QWORD *)a1 + 5);
    v16 = *(_BYTE *)(v15 + 30);
    if ( (v16 & 4) == 0 )
      v10 = 3;
    if ( ((*(_BYTE *)(v15 + 30) & 0xC0) == 0x40 || (*(_BYTE *)(v15 + 24) & 1) != 0) && (v16 & 7) == 0 )
      goto LABEL_37;
    xxxEnableMenuItem(v32, 61440LL, v10);
    xxxEnableMenuItem(v32, 61472LL, v3);
    xxxEnableMenuItem(v32, 61488LL, v9);
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v34);
    v17 = PtiCurrent();
    v28 = (_QWORD *)gSmartObjNullRef;
    v29 = *((_QWORD *)v17 + 209);
    *((_QWORD *)v17 + 209) = &v29;
    v18 = v35;
    if ( !v35 )
      v18 = *(_QWORD *)v34[0];
    v19 = v33;
    v36 = v18;
    if ( !v33 )
      v19 = *(_QWORD *)v32[0];
    v20 = MNLookUpItem(v19, 61728LL, 0LL, &v36);
    if ( v20 )
    {
      v21 = *(_DWORD *)(*(_QWORD *)v20 + 4LL) & 3;
      *(_DWORD *)(*(_QWORD *)v20 + 4LL) ^= v11 ^ v21;
    }
    else
    {
      v21 = -1;
    }
    v22 = v36;
    v35 = 0LL;
    if ( v36 != *(_QWORD *)v34[0] )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v34);
      if ( v22 )
      {
        v34[0] = *(_QWORD *)(v22 + 152);
        ++*(_DWORD *)(v34[0] + 8LL);
      }
      else
      {
        v34[0] = gSmartObjNullRef;
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v32[0] + 40LL) + 40LL) & 0x100) != 0
      && *(_QWORD *)(*(_QWORD *)v32[0] + 80LL) )
    {
      if ( v11 == v21 )
        goto LABEL_36;
      v24 = *(_QWORD *)(*(_QWORD *)v32[0] + 80LL);
      Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v24);
      xxxRedrawTitle(v24, 4096LL);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
    }
    else if ( v11 == v21 )
    {
      goto LABEL_36;
    }
    v25 = v35;
    if ( v35 )
      goto LABEL_47;
    if ( *(_QWORD *)v34[0] )
    {
      v25 = *(_QWORD *)v34[0];
LABEL_47:
      v26 = MNGetPopupFromMenu(v25, 0LL);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v28, v26);
      if ( *v28 )
        xxxMNUpdateShownMenu(&v28, 0LL, 1LL);
    }
LABEL_36:
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v28);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v34);
LABEL_37:
    xxxEnableMenuItem(v32, 61456LL, v8);
    if ( v12 == 61536 )
    {
      _SetCloseDefault(v32);
    }
    else
    {
      v27 = v33;
      if ( !v33 )
        v27 = *(_QWORD *)v32[0];
      SetMenuDefaultItem(v27, v12, 0LL);
    }
    Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>((ULONG_PTR)v31);
  }
LABEL_40:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v32);
  return 1LL;
}
