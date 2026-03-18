/*
 * XREFs of xxxMNStartMenu @ 0x140176B5C
 * Callers:
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     xxxMNKeyFilter @ 0x1402FC2DC (xxxMNKeyFilter.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x14000C04C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     xxxGetSysMenu @ 0x14000D5F8 (xxxGetSysMenu.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     LockPopupMenu @ 0x140176F40 (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x140178014 (xxxMNReleaseCapture.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x14020D8E4 (xxxMNRecomputeBarIfNeeded.c)
 *     ??0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagMENU@@@Z @ 0x14021A8EC (--0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1Win32HMThreadLockAlwaysMenuNoModify@@QEAA@XZ @ 0x14023B12C (--1Win32HMThreadLockAlwaysMenuNoModify@@QEAA@XZ.c)
 *     MNPositionSysMenu @ 0x14023E29C (MNPositionSysMenu.c)
 *     xxxMNSetCapture @ 0x14028B3D4 (xxxMNSetCapture.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1402D06C0 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     xxxClientLoadOLE @ 0x1402F9780 (xxxClientLoadOLE.c)
 */

_BOOL8 __fastcall xxxMNStartMenu(__int64 a1, __int64 a2, int a3)
{
  struct tagWND *v6; // rsi
  unsigned int v7; // ecx
  struct tagMENU *InitMenuParam; // rax
  int v10; // r8d
  __int64 SysMenu; // rax
  struct tagMENU *v12; // rax
  int v13; // r8d
  BOOL v14; // ebx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v16[16]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v18; // [rsp+60h] [rbp-20h]
  __int64 v19[3]; // [rsp+68h] [rbp-18h] BYREF
  int v20; // [rsp+A0h] [rbp+20h] BYREF

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v17);
  if ( (***(_DWORD ***)a1 & 0x8000) != 0 || !*(_QWORD *)(**(_QWORD **)a1 + 8LL) )
    goto LABEL_6;
  v6 = *(struct tagWND **)(**(_QWORD **)a1 + 8LL);
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)v6);
  *(_DWORD *)(a2 + 8) |= 1u;
  *(_DWORD *)(a2 + 20) = a3;
  v7 = ((unsigned __int16)_GetKeyState(1LL) >> 9) & 0x7FFFC0 | *(_DWORD *)(a2 + 8) & 0xFFFFFFBF;
  *(_DWORD *)(a2 + 8) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(v7 >> 3)) & 8;
  xxxMNSetCapture(a1, a2);
  xxxSendMessage(v6, 0x20u);
  if ( (***(_DWORD ***)a1 & 1) != 0 )
  {
    v20 = 0;
    InitMenuParam = xxxGetInitMenuParam(v6, &v20);
    v18 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v17, (__int64)InitMenuParam);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v17) )
    {
      *(_DWORD *)(a2 + 8) &= ~1u;
      xxxMNReleaseCapture(a2);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
LABEL_6:
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v17);
      return 0LL;
    }
    LockPopupMenu(a1, **(_QWORD **)a1 + 40LL, v17);
    v10 = v20;
    ***(_DWORD ***)a1 = (v20 != 0 ? 4 : 0) | ***(_DWORD ***)a1 & 0xFFFFFFFB;
    if ( !v10 )
    {
      SysMenu = xxxGetSysMenu(v6, 0);
      v18 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v17, SysMenu);
      LockPopupMenu(a1, **(_QWORD **)a1 + 48LL, v17);
    }
  }
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 8) & 0xFFFFFFFD | ((***(_DWORD ***)a1 & 4) != 0 ? 2 : 0);
  if ( (***(_DWORD ***)a1 & 0x800) == 0 )
  {
    if ( (***(_DWORD ***)a1 & 8) != 0 && (***(_DWORD ***)a1 & 4) != 0 )
      v12 = xxxGetInitMenuParam(v6, 0LL);
    else
      v12 = *(struct tagMENU **)(**(_QWORD **)a1 + 40LL);
    v18 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v17, (__int64)v12);
    SmartObjStackRef<tagMENU>::operator==((__int64)v17);
    xxxSendMessage(v6, 0x116u);
  }
  if ( (***(_DWORD ***)a1 & 8) == 0 )
  {
    if ( (***(_DWORD ***)a1 & 4) == 0 )
    {
      if ( (***(_DWORD ***)a1 & 1) == 0 || !*(_QWORD *)(**(_QWORD **)a1 + 40LL) )
        goto LABEL_21;
      Win32HMThreadLockAlwaysMenuNoModify::Win32HMThreadLockAlwaysMenuNoModify(
        (Win32HMThreadLockAlwaysMenuNoModify *)v16,
        *(struct tagMENU **)(**(_QWORD **)a1 + 40LL));
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v19, *(_QWORD *)(**(_QWORD **)a1 + 40LL));
      xxxMNRecomputeBarIfNeeded(v6, v19);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v19);
      Win32HMThreadLockAlwaysMenuNoModify::~Win32HMThreadLockAlwaysMenuNoModify((Win32HMThreadLockAlwaysMenuNoModify *)v16);
    }
    MNPositionSysMenu(v6);
  }
LABEL_21:
  if ( (***(_DWORD ***)a1 & 0x8000) == 0 && *(_QWORD *)(**(_QWORD **)a1 + 40LL) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 40LL) + 40LL) & 0x40000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x100u;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 40LL) + 40LL) & 0x20000000) != 0
      && (int)xxxClientLoadOLE() >= 0 )
    {
      *(_DWORD *)(a2 + 8) |= 0x400u;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 40LL) + 40LL) & 0x10000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x800u;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 40LL) + 40LL) & 0x8000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x20000u;
  }
  if ( (***(_DWORD ***)a1 & 4) != 0 )
    v13 = -1;
  else
    v13 = (***(_BYTE ***)a1 & 1) != 0 ? 0xFFFFFFFD : 0;
  xxxWindowEvent(4u, v6, v13, 0, 0);
  v14 = (***(_DWORD ***)a1 & 0x8000) == 0;
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v17);
  return v14;
}
