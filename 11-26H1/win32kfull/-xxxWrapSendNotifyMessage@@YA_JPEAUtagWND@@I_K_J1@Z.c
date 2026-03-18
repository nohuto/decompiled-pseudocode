/*
 * XREFs of ?xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140044890
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 */

__int64 __fastcall xxxWrapSendNotifyMessage(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  struct tagTHREADINFO *v9; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-18h] BYREF
  struct tagWND *v12; // [rsp+38h] [rbp-10h]

  v4 = 0LL;
  BugCheckParameter3 = -1LL;
  v12 = 0LL;
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
  }
  else
  {
    if ( a1 != (struct tagWND *)-1LL )
    {
      v9 = PtiCurrent((__int64)a1);
      BugCheckParameter3 = *((_QWORD *)v9 + 56);
      *((_QWORD *)v9 + 56) = &BugCheckParameter3;
      v12 = a1;
      HMLockObject(a1);
    }
    v4 = (int)xxxSendNotifyMessage(a1, a2, a3, a4, 0);
    if ( a1 != (struct tagWND *)-1LL )
      Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(&BugCheckParameter3);
  }
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3);
  return v4;
}
