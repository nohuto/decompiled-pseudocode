/*
 * XREFs of NtUserMenuItemFromPoint @ 0x14020CFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxMenuItemFromPoint @ 0x14020D12C (xxxMenuItemFromPoint.c)
 */

__int64 __fastcall NtUserMenuItemFromPoint(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v11; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-40h] BYREF
  ULONG_PTR v14[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+80h] [rbp+20h] BYREF

  v17 = a3;
  v5 = EnterCrit(0LL, 0LL);
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    Win32HM_LockIntoThread<1>(v5, a1, (__int64 *)BugCheckParameter3);
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v15);
    v8 = ValidateHmenu(a2, 1LL);
    v16 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v15, v8);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v15) )
    {
      v7 = -1;
    }
    else
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v9);
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(a1, CurrentThreadDpiAwarenessContext) )
        TransformPointBetweenCoordinateSpaces(&v17, &v17, a1, 0LL);
      v11 = v16;
      if ( !v16 )
        v11 = *(_QWORD *)v15[0];
      Win32HM_LockIntoThread<0>(v5, v11, v14);
      v7 = xxxMenuItemFromPoint(a1, v15, v17);
      Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(v14);
    }
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v15);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  }
  else
  {
    v7 = -1;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
