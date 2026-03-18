/*
 * XREFs of xxxRecreateSmallIcons @ 0x1402608E0
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x14009449C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 * Callees:
 *     xxxCreateWindowSmIcon @ 0x140093E5C (xxxCreateWindowSmIcon.c)
 *     DestroyWindowSmIcon @ 0x140094E54 (DestroyWindowSmIcon.c)
 *     IsToplevelWindowDesktopComposed @ 0x14012D424 (IsToplevelWindowDesktopComposed.c)
 *     SendDwmIconChange @ 0x14014DA14 (SendDwmIconChange.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x14014FA30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     DestroyClassSmIcon @ 0x14014FCA0 (DestroyClassSmIcon.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1401509D8 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ClassLock @ 0x140150FE0 (ClassLock.c)
 *     ClassUnlock @ 0x140151B6C (ClassUnlock.c)
 *     xxxCreateClassSmIcon @ 0x1401528C0 (xxxCreateClassSmIcon.c)
 */

__int64 __fastcall xxxRecreateSmallIcons(struct tagWND *a1)
{
  bool v2; // di
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // di
  __int64 result; // rax
  __int64 *v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  SmartObjStackRefBase<tagCLS>::Init(v7, *((_QWORD *)a1 + 17));
  v2 = (unsigned int)DestroyClassSmIcon(v7) && *(_QWORD *)(*((_QWORD *)a1 + 17) + 80LL);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)v7);
  if ( v2 )
  {
    v4 = *((_QWORD *)a1 + 17);
    v8 = 0LL;
    v9 = 0LL;
    if ( (unsigned int)ClassLock(v4, &v8) )
    {
      SmartObjStackRefBase<tagCLS>::Init(v7, *((_QWORD *)a1 + 17));
      xxxCreateClassSmIcon((__int64 *)v7);
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)v7);
      ClassUnlock(*((struct tagCLS **)a1 + 17), &v8);
    }
  }
  v5 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 23LL) & 0x20;
  if ( (unsigned int)DestroyWindowSmIcon(a1, v3) && !v5 )
    xxxCreateWindowSmIcon((__int64)a1, *(_QWORD *)(*((_QWORD *)a1 + 5) + 272LL));
  result = IsToplevelWindowDesktopComposed((__int64)a1);
  if ( (_DWORD)result )
    return SendDwmIconChange(a1);
  return result;
}
