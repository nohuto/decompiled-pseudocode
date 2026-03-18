/*
 * XREFs of xxxLoadSysDesktopMenu @ 0x14022E810
 * Callers:
 *     xxxGetSysMenuPtr @ 0x14000EF90 (xxxGetSysMenuPtr.c)
 *     xxxTranslateAccelerator @ 0x1401BA998 (xxxTranslateAccelerator.c)
 *     xxxSetDialogSystemMenu @ 0x14022E75C (xxxSetDialogSystemMenu.c)
 * Callees:
 *     xxxLoadSysMenu @ 0x14000BE58 (xxxLoadSysMenu.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _DestroyMenu @ 0x140033000 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     LockDesktopMenu @ 0x14022E8F8 (LockDesktopMenu.c)
 */

struct _HEAD *__fastcall xxxLoadSysDesktopMenu(struct _HEAD **a1, int a2)
{
  unsigned __int8 *SysMenu; // rax
  struct _HEAD *v5; // rbx
  struct _HEAD *v6; // rcx
  struct _HEAD *v8; // rcx
  __int64 v9[2]; // [rsp+20h] [rbp-20h] BYREF
  struct _HEAD *v10; // [rsp+30h] [rbp-10h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v9);
  SysMenu = xxxLoadSysMenu(a2);
  v5 = 0LL;
  v10 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v9, (__int64)SysMenu);
  v6 = v10;
  if ( !v10 )
  {
    if ( !*(_QWORD *)v9[0] )
      goto LABEL_8;
    v6 = v10;
  }
  if ( *a1 )
  {
    if ( !v6 )
      v6 = *(struct _HEAD **)v9[0];
    DestroyMenu(v6);
    v5 = *a1;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9[0] + 40LL) + 40LL) |= 0x80u;
    if ( !(unsigned int)LockDesktopMenu(a1, v9) )
    {
      v8 = v10;
      if ( !v10 )
        v8 = *(struct _HEAD **)v9[0];
      DestroyMenu(v8);
      v10 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v9, 0LL);
    }
    if ( v10 )
      v5 = v10;
    else
      v5 = *(struct _HEAD **)v9[0];
  }
LABEL_8:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v9);
  return v5;
}
