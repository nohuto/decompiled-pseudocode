/*
 * XREFs of xxxSetMenuItemInfo @ 0x14000E028
 * Callers:
 *     xxxLoadSysMenu @ 0x14000BE58 (xxxLoadSysMenu.c)
 *     NtUserThunkedMenuItemInfo @ 0x14004B410 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14000E8C4 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x140033B50 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     MNLookUpItem @ 0x1400344B8 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     MakeMenuRtoL @ 0x1402FAA10 (MakeMenuRtoL.c)
 */

__int64 __fastcall xxxSetMenuItemInfo(_QWORD **a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  struct tagTHREADINFO *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r14
  unsigned int v13; // ebx
  __int64 v14; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v19; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  __int64 v21; // [rsp+58h] [rbp-8h]
  int v22; // [rsp+90h] [rbp+30h] BYREF

  v9 = PtiCurrent();
  v19 = (__int64 *)gSmartObjNullRef;
  v20 = *((_QWORD *)v9 + 209);
  *((_QWORD *)v9 + 209) = &v20;
  v21 = 0LL;
  v17 = *v19;
  v10 = a1[2];
  if ( !v10 )
    v10 = (_QWORD *)**a1;
  v11 = MNLookUpItem(v10, a2, a3, &v17);
  v12 = v17;
  v13 = 1;
  v21 = 0LL;
  if ( v17 != *v19 )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v19);
    if ( v12 )
    {
      v19 = *(__int64 **)(v12 + 152);
      ++*((_DWORD *)v19 + 2);
    }
    else
    {
      v19 = (__int64 *)gSmartObjNullRef;
    }
  }
  if ( v11 )
  {
    if ( (*(_DWORD *)(a4 + 4) & 0x10) != 0 )
    {
      if ( (*(_DWORD *)(a4 + 8) & 0x2000) != 0 || (v13 = 0, (*(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) & 0x20) != 0) )
      {
        v16 = a1[2];
        if ( !v16 )
          v16 = (_QWORD *)**a1;
        MakeMenuRtoL(v16, v13);
      }
    }
    v14 = v21;
    if ( !v21 )
      v14 = *v19;
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v14);
    v22 = 0;
    v13 = SetLPITEMInfoNoRedraw((unsigned int)&v19, v11, a4, a5, (__int64)&v22);
    if ( v22 )
      xxxRedrawForSetLPITEMInfo(&v19, v11);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
  }
  else if ( a3 || a2 != 61744 )
  {
    UserSetLastError(1456LL);
    v13 = 0;
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v19);
  return v13;
}
