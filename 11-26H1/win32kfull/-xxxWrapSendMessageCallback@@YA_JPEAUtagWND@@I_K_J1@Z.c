/*
 * XREFs of ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140051740
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14004D1E0 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 */

__int64 __fastcall xxxWrapSendMessageCallback(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        _OWORD *Address)
{
  __int64 v7; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // rax
  ULONG_PTR *v13; // rcx
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-60h] BYREF
  struct tagWND *v16; // [rsp+60h] [rbp-58h]
  __int64 v17[10]; // [rsp+68h] [rbp-50h]

  *(_OWORD *)v17 = 0LL;
  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3);
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3);
    return 0LL;
  }
  else
  {
    ProbeForWrite(Address, 0x10uLL, 4u);
    *(_OWORD *)v17 = *Address;
    if ( a1 != (struct tagWND *)-1LL )
    {
      CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v7);
      if ( CurrentThreadWin32Thread )
        v9 = *CurrentThreadWin32Thread;
      else
        v9 = 0LL;
      BugCheckParameter3 = *(_QWORD *)(v9 + 448);
      *(_QWORD *)(v9 + 448) = &BugCheckParameter3;
      v16 = a1;
      HMLockObject(a1);
    }
    v11 = (int)xxxSendMessageCallback(a1, a2, v17[0], v17[1], 1, 0, 1);
    if ( a1 != (struct tagWND *)-1LL )
    {
      v12 = (_QWORD *)PsGetCurrentThreadWin32Thread(v10);
      if ( v12 )
        v12 = (_QWORD *)*v12;
      v13 = (ULONG_PTR *)v12[56];
      if ( v13 != &BugCheckParameter3 )
        KeBugCheckEx(0x164u, 0x3BuLL, (ULONG_PTR)v12, (ULONG_PTR)&BugCheckParameter3, 0LL);
      v12[56] = *v13;
      HMUnlockObject(v13[1]);
      v16 = 0LL;
      BugCheckParameter3 = -1LL;
    }
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3);
    return v11;
  }
}
