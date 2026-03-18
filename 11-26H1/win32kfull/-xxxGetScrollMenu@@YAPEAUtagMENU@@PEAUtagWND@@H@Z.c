/*
 * XREFs of ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1402F454C
 * Callers:
 *     xxxDoScrollMenu @ 0x1402F8250 (xxxDoScrollMenu.c)
 * Callees:
 *     xxxClientLoadMenu @ 0x14000A328 (xxxClientLoadMenu.c)
 *     _GetSubMenu @ 0x14000F1E0 (_GetSubMenu.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     RtlInitUnicodeStringOrId @ 0x140220FB4 (RtlInitUnicodeStringOrId.c)
 *     LockDesktopMenu @ 0x14022E8F8 (LockDesktopMenu.c)
 */

struct tagMENU *__fastcall xxxGetScrollMenu(struct tagWND *a1, int a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int8 *Menu; // rax
  __int64 v8; // rcx
  __int64 SubMenu; // rbx
  struct _UNICODE_STRING v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v12[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v12);
  v4 = (__int64 *)((a2 != 0 ? 80LL : 72LL) + *((_QWORD *)a1 + 3));
  v5 = *v4;
  v13 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v12, v5);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v12)
    && (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v6) + 130, 0, 0) & 5) == 0 )
  {
    v11 = 0LL;
    RtlInitUnicodeStringOrId(&v11, (WCHAR *)(a2 != 0 ? 80LL : 64LL));
    Menu = xxxClientLoadMenu(0LL, (char **)&v11);
    v13 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v12, (__int64)Menu);
    LockDesktopMenu((__int64)v4, v12);
  }
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v12) )
  {
    SubMenu = 0LL;
  }
  else
  {
    v8 = v13;
    if ( !v13 )
      v8 = *v12[0];
    SubMenu = GetSubMenu(v8);
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v12);
  return (struct tagMENU *)SubMenu;
}
