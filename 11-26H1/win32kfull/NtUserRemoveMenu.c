/*
 * XREFs of NtUserRemoveMenu @ 0x14004A3E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140049CF8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserRemoveMenu(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rdi
  int v7; // ebx
  __int64 v8; // rdi
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v13);
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004);
    v7 = 0;
  }
  else
  {
    v6 = ValidateHmenu(a1, 32LL);
    v7 = 0;
    v14 = 0LL;
    if ( v6 != *(_QWORD *)v13[0] )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v13);
      if ( v6 )
      {
        v13[0] = *(_QWORD *)(v6 + 152);
        ++*(_DWORD *)(v13[0] + 8);
      }
      else
      {
        v13[0] = gSmartObjNullRef;
      }
    }
    if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v13)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13[0] + 40LL) + 40LL) & 0x40) == 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13[0] + 40LL) + 40LL) & 0x200) == 0 )
    {
      v8 = v14;
      if ( !v14 )
        v8 = *(_QWORD *)v13[0];
      v9 = PtiCurrent(*(_QWORD *)v13[0]);
      Win32HM_LockIntoThread<1>((__int64)v9, v8, (__int64 *)BugCheckParameter3);
      v7 = xxxRemoveDeleteMenuHelper((__int64)v13, a2, a3, 0);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    }
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v13);
  UserSessionSwitchLeaveCrit(v10);
  return v7;
}
