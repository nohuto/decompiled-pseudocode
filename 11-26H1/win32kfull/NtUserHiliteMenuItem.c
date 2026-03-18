/*
 * XREFs of NtUserHiliteMenuItem @ 0x1402B6200
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxHiliteMenuItem @ 0x1402F2B8C (xxxHiliteMenuItem.c)
 */

__int64 __fastcall NtUserHiliteMenuItem(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-40h] BYREF
  ULONG_PTR v17[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]

  v8 = EnterCrit(0LL, 0LL);
  v9 = ValidateHwnd(a1);
  v11 = 0;
  v12 = v9;
  if ( v9 )
  {
    Win32HM_LockIntoThread<0>(v8, v9, BugCheckParameter3);
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v18);
    if ( (a4 & 0xFFFF0000) != 0 )
    {
      UserSetLastError(1004);
    }
    else
    {
      v13 = ValidateHmenu(a2, 64LL);
      v19 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v18, v13);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v18)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v18[0] + 40LL) + 40LL) & 0x40) == 0 )
      {
        v14 = v19;
        if ( !v19 )
          v14 = *(_QWORD *)v18[0];
        Win32HM_LockIntoThread<0>(v8, v14, v17);
        v11 = xxxHiliteMenuItem(v12, v18, a3, a4);
        Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(v17);
      }
    }
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v18);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
