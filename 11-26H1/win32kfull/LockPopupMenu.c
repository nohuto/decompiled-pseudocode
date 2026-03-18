/*
 * XREFs of LockPopupMenu @ 0x140176F40
 * Callers:
 *     xxxMNStartMenu @ 0x140176B5C (xxxMNStartMenu.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 *     xxxMNKeyDown @ 0x1402D9B18 (xxxMNKeyDown.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x14000C04C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?UnlockPopupMenuWindow@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z @ 0x140175948 (-UnlockPopupMenuWindow@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall LockPopupMenu(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(&v9, *a2);
  UnlockPopupMenuWindow((__int64)&v9);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v9);
  if ( !SmartObjStackRef<tagMENU>::operator==(a3) )
  {
    v6 = **(_QWORD **)a3 + 80LL;
    v10 = *(_QWORD *)(**(_QWORD **)a1 + 8LL);
    v9 = v6;
    HMAssignmentLock(&v9, 0LL);
  }
  v7 = *(_QWORD *)(a3 + 16);
  if ( !v7 )
    v7 = **(_QWORD **)a3;
  v9 = (__int64)a2;
  v10 = v7;
  return HMAssignmentLock(&v9, 1LL);
}
