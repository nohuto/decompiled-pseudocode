/*
 * XREFs of NtUserDragObject @ 0x1402B11A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxDragObject @ 0x1402F2554 (xxxDragObject.c)
 */

__int64 __fastcall NtUserDragObject(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rbp
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR v18[2]; // [rsp+40h] [rbp-38h] BYREF
  ULONG_PTR v19[2]; // [rsp+50h] [rbp-28h] BYREF

  v9 = EnterCrit(0LL, 0LL);
  v10 = ValidateHwnd(a1);
  v12 = 0;
  v13 = v10;
  if ( v10 )
  {
    Win32HM_LockIntoThread<0>(v9, v10, BugCheckParameter3);
    if ( a2 )
    {
      v14 = ValidateHwnd(a2);
      if ( !v14 )
        goto LABEL_11;
    }
    else
    {
      v14 = 0LL;
    }
    if ( a5 )
    {
      v15 = HMValidateHandleWithDescriptor(a5, 3u);
      if ( !v15 )
        goto LABEL_11;
    }
    else
    {
      v15 = 0LL;
    }
    Win32HM_LockIntoThread<1>(v9, v14, (__int64 *)v19);
    Win32HM_LockIntoThread<1>(v9, v15, (__int64 *)v18);
    v12 = xxxDragObject(v13, v14, a3, a4, v15);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v18);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v19);
LABEL_11:
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v11);
  return v12;
}
