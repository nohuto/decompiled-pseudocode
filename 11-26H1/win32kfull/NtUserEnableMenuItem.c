/*
 * XREFs of NtUserEnableMenuItem @ 0x140203FC0
 * Callers:
 *     <none>
 * Callees:
 *     xxxEnableMenuItem @ 0x14000E684 (xxxEnableMenuItem.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserEnableMenuItem(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v13[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h]

  v6 = EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v13);
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004);
LABEL_12:
    v9 = -1;
    goto LABEL_10;
  }
  v7 = ValidateHmenu(a1, 128LL);
  v14 = 0LL;
  if ( v7 != *v13[0] )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree((__int64 *)v13);
    if ( v7 )
    {
      v13[0] = *(__int64 **)(v7 + 152);
      ++*((_DWORD *)v13[0] + 2);
    }
    else
    {
      v13[0] = (__int64 *)gSmartObjNullRef;
    }
  }
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v13)
    || (*(_DWORD *)(*(_QWORD *)(*v13[0] + 40) + 40LL) & 0x40) != 0 )
  {
    goto LABEL_12;
  }
  v8 = v14;
  if ( !v14 )
    v8 = *v13[0];
  Win32HM_LockIntoThread<0>(v6, v8, BugCheckParameter3);
  v9 = xxxEnableMenuItem(v13, a2, a3);
  Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3);
LABEL_10:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v13);
  UserSessionSwitchLeaveCrit(v10);
  return v9;
}
