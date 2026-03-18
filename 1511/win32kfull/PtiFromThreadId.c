/*
 * XREFs of PtiFromThreadId @ 0x1C0065AC8
 * Callers:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0050310 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     NtUserPostThreadMessage @ 0x1C00657C0 (NtUserPostThreadMessage.c)
 *     _GetThreadDesktop @ 0x1C00659D0 (_GetThreadDesktop.c)
 *     NtUserBuildHwndList @ 0x1C006D080 (NtUserBuildHwndList.c)
 *     NtUserSetWindowsHookEx @ 0x1C00822A0 (NtUserSetWindowsHookEx.c)
 *     _SetWinEventHook @ 0x1C0087C88 (_SetWinEventHook.c)
 *     NtUserGetGUIThreadInfo @ 0x1C00D9550 (NtUserGetGUIThreadInfo.c)
 *     _ThreadMessageQueueAttached @ 0x1C00E2350 (_ThreadMessageQueueAttached.c)
 *     NtUserBuildHimcList @ 0x1C0100B60 (NtUserBuildHimcList.c)
 *     NtUserDelegateInput @ 0x1C0100F50 (NtUserDelegateInput.c)
 *     NtUserAttachThreadInput @ 0x1C0102920 (NtUserAttachThreadInput.c)
 *     NtUserDisableThreadIme @ 0x1C01083A0 (NtUserDisableThreadIme.c)
 *     _OpenThreadDesktop @ 0x1C01E8C58 (_OpenThreadDesktop.c)
 *     _GetSendMessageReceiver @ 0x1C01ED1C0 (_GetSendMessageReceiver.c)
 *     NtUserCheckWindowThreadDesktop @ 0x1C0218430 (NtUserCheckWindowThreadDesktop.c)
 *     _SetThreadQueueMergeSetting @ 0x1C0223880 (_SetThreadQueueMergeSetting.c)
 * Callees:
 *     LockThreadByClientId @ 0x1C0065B6C (LockThreadByClientId.c)
 */

__int64 __fastcall PtiFromThreadId(int a1)
{
  HANDLE v1; // rdi
  __int64 v2; // rbx
  __int64 *ThreadWin32Thread; // rax
  int v4; // eax
  PETHREAD Thread; // [rsp+48h] [rbp+10h] BYREF

  v1 = (HANDLE)a1;
  if ( (int)LockThreadByClientId(a1, &Thread) < 0 )
    return 0LL;
  v2 = 0LL;
  if ( !PsIsThreadTerminating(Thread) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(Thread);
    if ( ThreadWin32Thread )
      v2 = *ThreadWin32Thread;
  }
  if ( v2 )
  {
    if ( PsGetThreadId(*(PETHREAD *)v2) == v1 && (v4 = *(_DWORD *)(v2 + 440), (v4 & 0x1000000) != 0) )
    {
      if ( (v4 & 1) != 0 )
        v2 = 0LL;
    }
    else
    {
      v2 = 0LL;
    }
  }
  ObfDereferenceObject(Thread);
  return v2;
}
