/*
 * XREFs of NtUserTranslateAccelerator @ 0x1402C0630
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ @ 0x14000F15C (--1-$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     xxxTranslateAccelerator @ 0x1401BA998 (xxxTranslateAccelerator.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall NtUserTranslateAccelerator(__int64 a1, __int64 a2, void *a3)
{
  __int64 v6; // rcx
  struct tagWND *v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rsi
  struct tagTHREADINFO *v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-98h] BYREF
  __int128 v13; // [rsp+30h] [rbp-88h]
  __int128 v14; // [rsp+40h] [rbp-78h]
  ULONG_PTR v15[2]; // [rsp+58h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+68h] [rbp-50h] BYREF
  _OWORD v17[3]; // [rsp+78h] [rbp-40h] BYREF

  EnterCrit(0LL, 0LL);
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  RtlCopyFromUser(&v12, a3, 0x30uLL);
  v17[0] = v12;
  v17[1] = v13;
  v17[2] = v14;
  v7 = (struct tagWND *)ValidateHwnd(a1);
  v8 = 0;
  if ( v7 )
  {
    v9 = HMValidateHandleWithDescriptor(a2, 8u);
    if ( v9 )
    {
      v10 = PtiCurrent(v6);
      Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, (__int64)v10, (__int64)v7);
      Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(v15, (__int64)v10, v9);
      v8 = xxxTranslateAccelerator(v7, v9, (__int64)v17);
      Win32HMThreadLockAlways<tagACCELTABLE>::~Win32HMThreadLockAlways<tagACCELTABLE>((ULONG_PTR)v15);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
