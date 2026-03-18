/*
 * XREFs of xxxEnableMenuItem @ 0x14000E684
 * Callers:
 *     xxxSetSysMenu @ 0x14000E260 (xxxSetSysMenu.c)
 *     NtUserEnableMenuItem @ 0x140203FC0 (NtUserEnableMenuItem.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     MNGetPopupFromMenu @ 0x14000EA1C (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxRedrawTitle @ 0x14001111C (xxxRedrawTitle.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     MNLookUpItem @ 0x1400344B8 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z @ 0x1400A703C (-DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1402F3090 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxEnableMenuItem(__int64 **a1, unsigned int a2, int a3)
{
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // r14
  struct tagWND *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+28h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]
  __int64 v21; // [rsp+80h] [rbp+20h] BYREF

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v19);
  v6 = PtiCurrent();
  v16 = (_QWORD *)gSmartObjNullRef;
  v17 = *((_QWORD *)v6 + 209);
  *((_QWORD *)v6 + 209) = &v17;
  v7 = v20;
  if ( !v20 )
    v7 = *(_QWORD *)v19[0];
  v8 = a1[2];
  v21 = v7;
  if ( !v8 )
    v8 = (__int64 *)**a1;
  v9 = MNLookUpItem(v8, a2, a3 & 0x400, &v21);
  if ( v9 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)v9 + 4LL) & 3;
    *(_DWORD *)(*(_QWORD *)v9 + 4LL) ^= ((unsigned __int8)a3 ^ *(_BYTE *)(*(_QWORD *)v9 + 4LL) & 3) & 3;
  }
  else
  {
    v10 = -1;
  }
  v11 = v21;
  v20 = 0LL;
  if ( v21 != *(_QWORD *)v19[0] )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v19);
    if ( v11 )
    {
      v19[0] = *(_QWORD *)(v11 + 152);
      ++*(_DWORD *)(v19[0] + 8LL);
    }
    else
    {
      v19[0] = gSmartObjNullRef;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x100) != 0
    && a3 != v10
    && *(_QWORD *)(**a1 + 80)
    && (a2 == 61440 || a2 == 61456 || a2 == 61472 || a2 == 61488 || a2 == 61536 || a2 == 61728) )
  {
    v13 = *(struct tagWND **)(**a1 + 80);
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)v13);
    xxxRedrawTitle(v13, 4096LL);
    if ( a2 == 61536 && (unsigned int)IsWindowDesktopComposed(v13) )
      DwmUpdateCloseButton(v13, 1);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
  }
  if ( (a3 & 3) != v10 )
  {
    v14 = v20;
    if ( !v20 )
    {
      if ( !*(_QWORD *)v19[0] )
        goto LABEL_12;
      v14 = *(_QWORD *)v19[0];
    }
    v15 = MNGetPopupFromMenu(v14, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v16, v15);
    if ( *v16 )
      xxxMNUpdateShownMenu(&v16, 0LL, 1LL);
  }
LABEL_12:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v16);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v19);
  return v10;
}
