/*
 * XREFs of NtUserSetMenu @ 0x140222360
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxSetMenu @ 0x1402224F0 (xxxSetMenu.c)
 */

__int64 __fastcall NtUserSetMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // edi
  struct tagWND *v8; // rsi
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-40h] BYREF
  ULONG_PTR v14[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = 0;
  v8 = (struct tagWND *)v5;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 40);
    v10 = *(_WORD *)(v6 + 42) & 0x2FFF;
    if ( v10 != 669 && v10 != 671 )
    {
      Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v15);
      if ( a2 )
      {
        v11 = ValidateHmenu(a2, 64LL);
        v16 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v15, v11);
        if ( SmartObjStackRef<tagMENU>::operator==((__int64)v15) )
        {
LABEL_11:
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v15);
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
          goto LABEL_2;
        }
      }
      else
      {
        v16 = 0LL;
        if ( !*(_QWORD *)v15[0] )
        {
LABEL_8:
          if ( !*(_QWORD *)v15[0] )
          {
LABEL_9:
            v12 = *(_QWORD *)v15[0];
LABEL_10:
            Win32HM_LockIntoThread<1>(v4, v12, (__int64 *)v14);
            v7 = xxxSetMenu(v8);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v14);
            goto LABEL_11;
          }
LABEL_16:
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v15[0] + 40LL) + 40LL) & 1) != 0 )
          {
            UserSetLastError(87);
            goto LABEL_11;
          }
          v12 = v16;
          if ( v16 )
            goto LABEL_10;
          goto LABEL_9;
        }
        SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v15);
        v15[0] = gSmartObjNullRef;
      }
      if ( v16 )
        goto LABEL_16;
      goto LABEL_8;
    }
  }
LABEL_2:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
