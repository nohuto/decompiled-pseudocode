/*
 * XREFs of NtUserDrawMenuBar @ 0x14023A250
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxDrawMenuBar @ 0x14023A2F8 (xxxDrawMenuBar.c)
 */

__int64 __fastcall NtUserDrawMenuBar(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // rsi
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateHwnd(a1);
  v5 = 0;
  v6 = v3;
  if ( v3 )
  {
    v4 = *(_WORD *)(*(_QWORD *)(v3 + 40) + 42LL) & 0x2FFF;
    if ( (_DWORD)v4 != 669 && (_DWORD)v4 != 671 )
    {
      Win32HM_LockIntoThread<0>(v2, v3, BugCheckParameter3);
      v5 = xxxDrawMenuBar(v6);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
