/*
 * XREFs of xxxMNSetTop @ 0x1402DA3DC
 * Callers:
 *     xxxMNInvertItem @ 0x140120C3C (xxxMNInvertItem.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1402D91A0 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x14000C04C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     MNGetpItemFromIndex @ 0x14000D208 (MNGetpItemFromIndex.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     xxxInvalidateRect @ 0x14002C804 (xxxInvalidateRect.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxScrollWindowEx @ 0x14003EEB4 (xxxScrollWindowEx.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x14008A600 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     MNDrawArrow @ 0x1402FA3FC (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1402FA704 (xxxMNDrawFullNC.c)
 */

__int64 __fastcall xxxMNSetTop(__int64 a1, signed int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r9
  int v8; // r14d
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rsi
  struct tagTHREADINFO *v13; // rax
  int v14; // edx
  struct tagWND *v15; // rcx
  __int64 v16; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-40h] BYREF
  ULONG_PTR v21[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v22[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v23; // [rsp+70h] [rbp-10h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v22, *(_QWORD *)(**(_QWORD **)a1 + 40LL));
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v22) )
    goto LABEL_30;
  if ( a2 >= 0 )
  {
    if ( a2 > *(_DWORD *)(*(_QWORD *)v22[0] + 120LL) )
      a2 = *(_DWORD *)(*(_QWORD *)v22[0] + 120LL);
  }
  else
  {
    a2 = 0;
  }
  if ( a2 == *(_DWORD *)(*(_QWORD *)v22[0] + 116LL) )
    goto LABEL_30;
  if ( v23 )
    v4 = v23;
  else
    v4 = *(_QWORD *)v22[0];
  MNGetpItemFromIndex(v4, *(_DWORD *)(v4 + 116));
  if ( !v5 )
    v5 = *(_QWORD *)v22[0];
  v6 = MNGetpItemFromIndex(v5, a2);
  if ( !v7 || !v6 )
    goto LABEL_30;
  v8 = *(_DWORD *)(*(_QWORD *)v7 + 68LL) - *(_DWORD *)(*(_QWORD *)v6 + 68LL);
  v9 = *(_DWORD *)(*(_QWORD *)v22[0] + 124LL);
  if ( (v9 & 3) == 2 )
  {
    *(_DWORD *)(*(_QWORD *)v22[0] + 124LL) = v9 & 0xFFFFFFFC | 1;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 40LL) + 24LL) )
      goto LABEL_21;
    v10 = 4294967293LL;
    goto LABEL_20;
  }
  if ( (v9 & 3) == 3 )
  {
    *(_DWORD *)(*(_QWORD *)v22[0] + 124LL) = *(_DWORD *)(*(_QWORD *)v22[0] + 124LL) & 0xFFFFFFFC | 1;
    if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 40LL) + 24LL) )
    {
      v10 = 4294967292LL;
LABEL_20:
      MNDrawArrow(0LL, a1, v10);
    }
  }
LABEL_21:
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v21, *(_QWORD *)(**(_QWORD **)a1 + 16LL));
  v12 = v23;
  if ( !v23 )
    v12 = *(_QWORD *)v22[0];
  v13 = PtiCurrent(v11);
  Win32HM_LockIntoThread<1>((__int64)v13, v12, (__int64 *)BugCheckParameter3);
  v14 = -v8;
  if ( v8 > 0 )
    v14 = v8;
  v15 = *(struct tagWND **)(**(_QWORD **)a1 + 16LL);
  if ( v14 <= *(_DWORD *)(*(_QWORD *)v22[0] + 68LL) )
    xxxScrollWindowEx(v15, 0, v8, 0LL, 0LL, 0LL, 0LL, 6);
  else
    xxxInvalidateRect((__int64)v15, 0LL, 1);
  v16 = Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3);
  v23 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v22, v16);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v22) )
  {
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v21);
LABEL_30:
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v22);
    return 0LL;
  }
  *(_DWORD *)(*(_QWORD *)v22[0] + 116LL) = a2;
  v18 = *(_QWORD *)v22[0];
  if ( a2 )
  {
    if ( a2 != *(_DWORD *)(v18 + 120) )
      goto LABEL_38;
    *(_DWORD *)(*(_QWORD *)v22[0] + 124LL) |= 3u;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 40LL) + 24LL) )
      goto LABEL_38;
    v19 = 4294967292LL;
    goto LABEL_37;
  }
  *(_DWORD *)(v18 + 124) = *(_DWORD *)(v18 + 124) & 0xFFFFFFFC | 2;
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 40LL) + 24LL) )
  {
    v19 = 4294967293LL;
LABEL_37:
    MNDrawArrow(0LL, a1, v19);
  }
LABEL_38:
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 40LL) + 24LL) )
  {
    if ( *(_QWORD *)(**(_QWORD **)a1 + 16LL) )
    {
      Win32HM_ExchangeThreadLock<1>(*(_QWORD *)(**(_QWORD **)a1 + 16LL), (__int64)v21);
      xxxMNDrawFullNC(*(_QWORD *)(**(_QWORD **)a1 + 16LL), 0LL, a1);
    }
  }
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v21);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v22);
  return 1LL;
}
