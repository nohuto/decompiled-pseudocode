/*
 * XREFs of NtUserSetSystemMenu @ 0x140255BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxSetSystemMenu @ 0x14023E21C (xxxSetSystemMenu.c)
 */

__int64 __fastcall NtUserSetSystemMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // edi
  _QWORD *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-40h] BYREF
  ULONG_PTR v13[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v14[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = 0;
  v8 = (_QWORD *)v5;
  if ( v5 )
  {
    Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v14);
    v9 = ValidateHmenu(a2, 1LL);
    v15 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v14, v9);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v14) )
    {
      v10 = v15;
      if ( !v15 )
        v10 = *v14[0];
      Win32HM_LockIntoThread<0>(v4, v10, v13);
      v7 = xxxSetSystemMenu(v8, v14);
      Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(v13);
    }
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v14);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
