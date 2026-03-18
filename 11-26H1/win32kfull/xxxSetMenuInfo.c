/*
 * XREFs of xxxSetMenuInfo @ 0x14000CF70
 * Callers:
 *     xxxLoadSysMenu @ 0x14000BE58 (xxxLoadSysMenu.c)
 *     xxxSetMenuInfo @ 0x14000CF70 (xxxSetMenuInfo.c)
 *     NtUserThunkedMenuInfo @ 0x14020F5E0 (NtUserThunkedMenuInfo.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x14000C04C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     xxxSetMenuInfo @ 0x14000CF70 (xxxSetMenuInfo.c)
 *     MNGetpItemFromIndex @ 0x14000D208 (MNGetpItemFromIndex.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     MNGetPopupFromMenu @ 0x14000EA1C (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x14000EC1C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxMNUpdateShownMenu @ 0x1402F3090 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxSetMenuInfo(_QWORD **a1, __int64 a2)
{
  struct tagTHREADINFO *v4; // rax
  int v5; // r8d
  int v6; // r15d
  int v7; // r13d
  unsigned int v8; // r12d
  _QWORD *v9; // rcx
  unsigned int v10; // r14d
  __int64 v11; // rsi
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  __int64 v15; // rbx
  __int64 v17; // [rsp+20h] [rbp-40h] BYREF
  __int64 v18; // [rsp+28h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v20[4]; // [rsp+40h] [rbp-20h] BYREF

  v4 = PtiCurrent();
  v17 = gSmartObjNullRef;
  v18 = *((_QWORD *)v4 + 209);
  v5 = 0;
  *((_QWORD *)v4 + 209) = &v18;
  v6 = 0;
  v7 = 0;
  v8 = 1;
  if ( (*(_DWORD *)(a2 + 4) & 0x10) != 0 )
  {
    v6 = 1;
    *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) ^= (*(_DWORD *)(a2 + 8) ^ *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL)) & 0xFC000000;
  }
  if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
  {
    v6 = 1;
    *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 52LL) = *(_DWORD *)(a2 + 12);
  }
  if ( (*(_DWORD *)(a2 + 4) & 2) != 0 )
  {
    v7 = 1;
    *(_QWORD *)(*(_QWORD *)(**a1 + 40LL) + 24LL) = *(_QWORD *)(a2 + 16);
    if ( (*(_BYTE *)(**a1 + 124LL) & 3) != 0 )
      v8 = 5;
  }
  if ( (*(_DWORD *)(a2 + 4) & 4) != 0 )
    *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 48LL) = *(_DWORD *)(a2 + 24);
  if ( (*(_DWORD *)(a2 + 4) & 8) != 0 )
    *(_QWORD *)(*(_QWORD *)(**a1 + 40LL) + 16LL) = *(_QWORD *)(a2 + 32);
  if ( *(int *)(a2 + 4) < 0 )
  {
    v9 = a1[2];
    v10 = 0;
    if ( !v9 )
      v9 = (_QWORD *)**a1;
    if ( *(_DWORD *)(v9[5] + 44LL) )
      v11 = v9[11];
    else
      v11 = 0LL;
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 44LL) )
    {
      do
      {
        if ( !v11 )
          break;
        v12 = *(_QWORD *)(v11 + 16);
        if ( v12 )
        {
          SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v20, v12);
          Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(
            BugCheckParameter3,
            *(_QWORD *)(v11 + 16));
          xxxSetMenuInfo(v20, a2);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v20);
        }
        v13 = a1[2];
        ++v10;
        if ( !v13 )
          v13 = (_QWORD *)**a1;
        v11 = MNGetpItemFromIndex(v13, v10);
      }
      while ( v10 < *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 44LL) );
    }
  }
  if ( v6 )
  {
    *(_DWORD *)(**a1 + 64LL) = v5;
    *(_DWORD *)(**a1 + 68LL) = v5;
  }
  else if ( !v7 )
  {
    goto LABEL_30;
  }
  v14 = a1[2];
  if ( !v14 )
    v14 = (_QWORD *)**a1;
  v15 = MNGetPopupFromMenu(v14, 0LL);
  if ( v15 != *(_QWORD *)v17 )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v17);
    if ( v15 )
    {
      v17 = *(_QWORD *)(v15 + 88);
      ++*(_DWORD *)(v17 + 8);
    }
    else
    {
      v17 = gSmartObjNullRef;
    }
  }
  if ( *(_QWORD *)v17 )
    xxxMNUpdateShownMenu(&v17, 0LL, v8);
LABEL_30:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v17);
  return 1LL;
}
