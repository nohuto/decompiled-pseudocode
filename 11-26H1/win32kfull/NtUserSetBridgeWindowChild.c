/*
 * XREFs of NtUserSetBridgeWindowChild @ 0x1402BBB10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     ValidateHwndIAM @ 0x1401A2C8C (ValidateHwndIAM.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     xxxSetBridgeWindowChild @ 0x1402C8AE0 (xxxSetBridgeWindowChild.c)
 */

__int64 __fastcall NtUserSetBridgeWindowChild(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // r14
  int v6; // eax
  int v7; // ebx
  int v8; // ecx
  struct tagWND *v9; // rsi
  __int64 v10; // rax
  struct tagWND *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR v16[3]; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  v5 = PtiCurrent(v4);
  LOBYTE(v6) = IAMThreadAccessGranted(v5);
  v7 = 0;
  if ( !v6 )
  {
    v8 = 5;
LABEL_12:
    UserSetLastError(v8);
    goto LABEL_13;
  }
  v9 = (struct tagWND *)ValidateHwndIAM(a1);
  if ( !v9
    || (v10 = ValidateHwndIAM(a2), (v11 = (struct tagWND *)v10) == 0LL)
    || (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 232LL) & 0x40) == 0
    || !IsTopLevelWindow(v10)
    || !IsTopLevelWindow((__int64)v9)
    || (v12 = *((_QWORD *)v9 + 5), (*(_BYTE *)(v12 + 232) & 0x40) != 0)
    || (*(_BYTE *)(v12 + 31) & 8) != 0 )
  {
    v8 = 87;
    goto LABEL_12;
  }
  Win32HM_LockIntoThread<0>((__int64)v5, (__int64)v9, v16);
  Win32HM_LockIntoThread<0>((__int64)v5, (__int64)v11, BugCheckParameter3);
  v7 = xxxSetBridgeWindowChild(v9, v11);
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v16);
LABEL_13:
  UserSessionSwitchLeaveCrit(v13);
  return v7;
}
