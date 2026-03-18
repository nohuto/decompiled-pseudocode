/*
 * XREFs of xxxSetDialogSystemMenu @ 0x14022E75C
 * Callers:
 *     NtUserSetDialogSystemMenu @ 0x14022E6D0 (NtUserSetDialogSystemMenu.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14004B768 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxLoadSysDesktopMenu @ 0x14022E810 (xxxLoadSysDesktopMenu.c)
 */

_BOOL8 __fastcall xxxSetDialogSystemMenu(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 SysDesktopMenu; // rax
  BOOL v4; // ebx
  _QWORD *v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v6);
  v2 = *(_QWORD *)(a1[3] + 64LL);
  v7 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v6, v2);
  if ( !v7 && !*v6[0] )
  {
    SysDesktopMenu = xxxLoadSysDesktopMenu(a1[3] + 64LL, 48LL);
    v7 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v6, SysDesktopMenu);
  }
  v4 = 1;
  LockWndMenuWorker(a1, 1u, v6);
  if ( !v7 )
    v4 = *v6[0] != 0LL;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v6);
  return v4;
}
