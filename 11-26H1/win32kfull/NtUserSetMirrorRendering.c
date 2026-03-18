/*
 * XREFs of NtUserSetMirrorRendering @ 0x140216990
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GreDisableMirrorRendering @ 0x14028B728 (GreDisableMirrorRendering.c)
 *     GreEnableMirrorRendering @ 0x14028B8E4 (GreEnableMirrorRendering.c)
 */

__int64 __fastcall NtUserSetMirrorRendering(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // edi
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = 0;
  if ( v5 )
  {
    v8 = *(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFF;
    if ( v8 != 669 && v8 != 671 )
    {
      Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
      v11 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 56968) + 40LL);
      if ( a2 )
        v12 = GreEnableMirrorRendering(v11, a1);
      else
        v12 = GreDisableMirrorRendering(v11, a1);
      v7 = v12;
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
