/*
 * XREFs of NtUserTrackPopupMenuEx @ 0x1402C0470
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ @ 0x14000F15C (--1-$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     ??$?0VSmartObjStackRef@@@?$Win32HMThreadLockAlways@UtagMENU@@@@QEAA@PEAUtagTHREADINFO@@AEAV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14020D8AC (--$-0VSmartObjStackRef@@@-$Win32HMThreadLockAlways@UtagMENU@@@@QEAA@PEAUtagTHREADINFO@@AEAV-$Sma.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserTrackPopupMenuEx(__int64 a1, unsigned int a2, LONG a3, LONG a4, __int64 a5, ULONG64 a6)
{
  __int128 *v10; // rsi
  int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r14
  struct tagTHREADINFO *v15; // rbx
  __int64 v16; // rcx
  __int64 v18[4]; // [rsp+40h] [rbp-98h] BYREF
  ULONG_PTR v19[2]; // [rsp+60h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+70h] [rbp-68h] BYREF
  __int128 v21; // [rsp+80h] [rbp-58h] BYREF
  int v22; // [rsp+90h] [rbp-48h]

  v10 = (__int128 *)a6;
  v21 = 0LL;
  v22 = 0;
  EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v18);
  if ( (a2 & 0xFFFE0200) != 0 )
  {
    UserSetLastError(1004);
    v11 = 0;
  }
  else
  {
    v12 = ValidateHmenu(a1, 1LL);
    v11 = 0;
    v18[2] = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v18, v12);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v18) )
    {
      v14 = ValidateHwnd(a5);
      if ( v14 )
      {
        v15 = PtiCurrent(v13);
        Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, (__int64)v15, v14);
        Win32HMThreadLockAlways<tagMENU>::Win32HMThreadLockAlways<tagMENU>(v19, (__int64)v15, (__int64)v18);
        if ( a6 )
        {
          if ( a6 >= MmUserProbeAddress )
            v10 = (__int128 *)MmUserProbeAddress;
          v21 = *v10;
          v22 = *((_DWORD *)v10 + 4);
          v10 = &v21;
          v18[3] = (__int64)&v21;
        }
        v11 = xxxTrackPopupMenuEx((__int64)v18, a2, a3, a4, v14, (__int64)v10);
        Win32HMThreadLockAlways<tagACCELTABLE>::~Win32HMThreadLockAlways<tagACCELTABLE>((ULONG_PTR)v19);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
      }
    }
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v18);
  UserSessionSwitchLeaveCrit(v16);
  return v11;
}
