/*
 * XREFs of xxxGetSysMenuPtr @ 0x14000EF90
 * Callers:
 *     xxxGetSysMenu @ 0x14000D5F8 (xxxGetSysMenu.c)
 *     xxxSetSysMenu @ 0x14000E260 (xxxSetSysMenu.c)
 *     xxxMNCanClose @ 0x140032C30 (xxxMNCanClose.c)
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 *     xxxMNInvertItem @ 0x140120C3C (xxxMNInvertItem.c)
 *     xxxHandleNCMouseGuys @ 0x140220C94 (xxxHandleNCMouseGuys.c)
 *     NtUserGetSysMenuOffset @ 0x1402B4C10 (NtUserGetSysMenuOffset.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxLoadSysDesktopMenu @ 0x14022E810 (xxxLoadSysDesktopMenu.c)
 */

__int64 __fastcall xxxGetSysMenuPtr(_QWORD *a1)
{
  bool v2; // zf
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v6; // rdi
  _QWORD v7[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-10h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v7);
  v2 = (*(_BYTE *)(a1[5] + 30LL) & 8) == 0;
  v8 = 0LL;
  if ( v2 )
  {
    if ( !*(_QWORD *)v7[0] )
      goto LABEL_7;
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v7);
    v7[0] = gSmartObjNullRef;
LABEL_11:
    v4 = v8;
    if ( v8 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v3 = a1[20];
  if ( v3 != *(_QWORD *)v7[0] )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v7);
    if ( v3 )
    {
      v7[0] = *(_QWORD *)(v3 + 152);
      ++*(_DWORD *)(v7[0] + 8LL);
    }
    else
    {
      v7[0] = gSmartObjNullRef;
    }
    if ( v8 )
      goto LABEL_11;
  }
  if ( !*(_QWORD *)v7[0] )
  {
    v6 = *(_QWORD *)(a1[3] + 56LL);
    v8 = 0LL;
    if ( v6 == *(_QWORD *)v7[0]
      || ((SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v7), !v6)
        ? (v7[0] = gSmartObjNullRef)
        : (v7[0] = *(_QWORD *)(v6 + 152), ++*(_DWORD *)(v7[0] + 8LL)),
          !v8) )
    {
      if ( *(_QWORD *)v7[0] )
        goto LABEL_7;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent() + 130, 0, 0) & 5) == 0 )
      {
        xxxLoadSysDesktopMenu(a1[3] + 56LL, 16LL);
        v8 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v7);
      }
    }
    goto LABEL_11;
  }
LABEL_7:
  v4 = *(_QWORD *)v7[0];
LABEL_8:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v7);
  return v4;
}
