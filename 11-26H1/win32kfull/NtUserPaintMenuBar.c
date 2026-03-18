/*
 * XREFs of NtUserPaintMenuBar @ 0x14020C030
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxPaintMenuBar @ 0x14020C128 (xxxPaintMenuBar.c)
 */

__int64 __fastcall NtUserPaintMenuBar(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rsi
  int v16; // ecx
  ULONG_PTR BugCheckParameter3[5]; // [rsp+30h] [rbp-28h] BYREF

  v10 = EnterCrit(0LL, 0LL);
  v11 = ValidateHwnd(a1);
  v13 = 0;
  v14 = v11;
  if ( v11 )
  {
    Win32HM_LockIntoThread<0>(v10, v11, BugCheckParameter3);
    if ( (*(_BYTE *)(*(_QWORD *)(v14 + 40) + 31LL) & 0xC0) != 0x40 )
    {
      if ( (a6 & 0xFFFFFFFE) != 0 )
      {
        v16 = 1004;
        goto LABEL_11;
      }
      if ( a3 >= 0 && a4 >= 0 && a5 >= 0 )
      {
        v13 = xxxPaintMenuBar(v14, a2, (unsigned int)a3, (unsigned int)a4, a5, a6);
LABEL_8:
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
        goto LABEL_9;
      }
    }
    v16 = 87;
LABEL_11:
    UserSetLastError(v16);
    goto LABEL_8;
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v12);
  return v13;
}
