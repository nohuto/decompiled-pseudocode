/*
 * XREFs of NtUserGetMenuItemRect @ 0x14020D500
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ @ 0x14000F15C (--1-$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14004D19C (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     xxxGetMenuItemRect @ 0x14020D69C (xxxGetMenuItemRect.c)
 *     ??$?0VSmartObjStackRef@@@?$Win32HMThreadLockAlways@UtagMENU@@@@QEAA@PEAUtagTHREADINFO@@AEAV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14020D8AC (--$-0VSmartObjStackRef@@@-$Win32HMThreadLockAlways@UtagMENU@@@@QEAA@PEAUtagTHREADINFO@@AEAV-$Sma.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, void *a4)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int MenuItemRect; // edi
  __int64 v11; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v13; // rcx
  __int64 v15[3]; // [rsp+30h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v17[16]; // [rsp+58h] [rbp-50h] BYREF
  __int128 Src; // [rsp+68h] [rbp-40h] BYREF

  Src = 0LL;
  v8 = EnterCrit(0LL, 0LL);
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(BugCheckParameter3, v8, a1);
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v15);
    v9 = ValidateHmenu(a2, 1LL);
    v15[2] = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v15, v9);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v15) )
    {
      MenuItemRect = 0;
    }
    else
    {
      Win32HMThreadLockAlways<tagMENU>::Win32HMThreadLockAlways<tagMENU>(v17, v8, v15);
      MenuItemRect = xxxGetMenuItemRect(a1, v15, a3, &Src);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v11);
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(a1, CurrentThreadDpiAwarenessContext) )
        TransformRectBetweenCoordinateSpaces(&Src, &Src, 0LL, a1);
      RtlCopyToUser(a4, &Src, 0x10uLL);
      Win32HMThreadLockAlways<tagACCELTABLE>::~Win32HMThreadLockAlways<tagACCELTABLE>((ULONG_PTR)v17);
    }
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v15);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  }
  else
  {
    MenuItemRect = 0;
  }
  UserSessionSwitchLeaveCrit(v13);
  return MenuItemRect;
}
