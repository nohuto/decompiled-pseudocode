/*
 * XREFs of xxxGetSysMenu @ 0x14000D5F8
 * Callers:
 *     xxxGetMenuBarInfo @ 0x14000D8F8 (xxxGetMenuBarInfo.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x140012F10 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxMNStartMenu @ 0x140176B5C (xxxMNStartMenu.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x140220B3C (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1402D06C0 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 * Callees:
 *     xxxSetSysMenu @ 0x14000E260 (xxxSetSysMenu.c)
 *     xxxGetSysMenuPtr @ 0x14000EF90 (xxxGetSysMenuPtr.c)
 *     _GetSubMenu @ 0x14000F1E0 (_GetSubMenu.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall xxxGetSysMenu(struct tagWND *a1, int a2)
{
  __int64 SysMenuPtr; // rbx
  __int64 SubMenu; // rbx
  __int64 v6; // rbx
  _QWORD v8[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-10h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v8);
  xxxSetSysMenu(a1);
  SysMenuPtr = xxxGetSysMenuPtr(a1);
  v9 = 0LL;
  if ( SysMenuPtr != *(_QWORD *)v8[0] )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v8);
    if ( SysMenuPtr )
    {
      v8[0] = *(_QWORD *)(SysMenuPtr + 152);
      ++*(_DWORD *)(v8[0] + 8LL);
    }
    else
    {
      v8[0] = gSmartObjNullRef;
    }
  }
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v8) && a2 )
  {
    SubMenu = GetSubMenu();
    v9 = 0LL;
    if ( SubMenu == *(_QWORD *)v8[0] )
    {
LABEL_10:
      v6 = *(_QWORD *)v8[0];
      goto LABEL_11;
    }
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v8);
    if ( SubMenu )
    {
      v8[0] = *(_QWORD *)(SubMenu + 152);
      ++*(_DWORD *)(v8[0] + 8LL);
    }
    else
    {
      v8[0] = gSmartObjNullRef;
    }
  }
  v6 = v9;
  if ( !v9 )
    goto LABEL_10;
LABEL_11:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v8);
  return v6;
}
