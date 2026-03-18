/*
 * XREFs of NtUserLayoutCompleted @ 0x1C00FADE0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     PostIAMShellHookMessageEx @ 0x1C007AFD0 (PostIAMShellHookMessageEx.c)
 *     DwmAsyncCancelRotationDelay @ 0x1C025EECC (DwmAsyncCancelRotationDelay.c)
 */

__int64 __fastcall NtUserLayoutCompleted(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  void *v14; // rax
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0;
  v6 = v2;
  if ( v2 )
  {
    v15[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v15;
    v15[1] = v2;
    ++*(_DWORD *)(v2 + 8);
    EtwTraceLayoutChangeStop(gptiCurrent, a1, v2);
    if ( (unsigned int)IsWindowDesktopComposed(v6) )
    {
      v8 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 424);
      if ( *(_QWORD *)(v8 + 208) == v6 )
      {
        v14 = (void *)ReferenceDwmApiPort(v8, v7, v9, v10);
        DwmAsyncCancelRotationDelay(v14);
      }
    }
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 416LL), 38, a1);
    v5 = 1;
    ThreadUnlock1(v12, v11);
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
