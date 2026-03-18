/*
 * XREFs of PtiFromThreadId @ 0x1C00911E4
 * Callers:
 *     NtUserAttachThreadInput @ 0x1C0042900 (NtUserAttachThreadInput.c)
 *     NtUserSetWindowsHookEx @ 0x1C0049BD0 (NtUserSetWindowsHookEx.c)
 *     _SetWinEventHook @ 0x1C004D474 (_SetWinEventHook.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0061E90 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     NtUserBuildHwndList @ 0x1C007BA50 (NtUserBuildHwndList.c)
 *     NtUserPostThreadMessage @ 0x1C0090EE0 (NtUserPostThreadMessage.c)
 *     _GetThreadDesktop @ 0x1C00910EC (_GetThreadDesktop.c)
 *     NtUserGetGUIThreadInfo @ 0x1C00C6290 (NtUserGetGUIThreadInfo.c)
 *     _ThreadMessageQueueAttached @ 0x1C00DF340 (_ThreadMessageQueueAttached.c)
 *     NtUserBuildHimcList @ 0x1C00F9340 (NtUserBuildHimcList.c)
 *     NtUserDelegateInput @ 0x1C00F9F00 (NtUserDelegateInput.c)
 *     NtUserDisableThreadIme @ 0x1C00FBE80 (NtUserDisableThreadIme.c)
 *     _OpenThreadDesktop @ 0x1C01E8628 (_OpenThreadDesktop.c)
 *     _GetSendMessageReceiver @ 0x1C01ECCA0 (_GetSendMessageReceiver.c)
 *     NtUserCheckWindowThreadDesktop @ 0x1C0218660 (NtUserCheckWindowThreadDesktop.c)
 *     _SetThreadQueueMergeSetting @ 0x1C02237A0 (_SetThreadQueueMergeSetting.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PtiFromThreadId(int a1)
{
  HANDLE v1; // rdi
  NTSTATUS v2; // ebx
  __int64 v3; // rbx
  __int64 *ThreadWin32Thread; // rax
  int v5; // eax
  PETHREAD Thread; // [rsp+48h] [rbp+10h] BYREF

  v1 = (HANDLE)a1;
  v2 = PsLookupThreadByThreadId((HANDLE)a1, &Thread);
  if ( v2 >= 0 && (unsigned int)PsGetThreadSessionId(Thread) != gSessionId )
  {
    ObfDereferenceObject(Thread);
    return 0LL;
  }
  if ( v2 < 0 )
    return 0LL;
  v3 = 0LL;
  if ( !PsIsThreadTerminating(Thread) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(Thread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  if ( v3 )
  {
    if ( PsGetThreadId(*(PETHREAD *)v3) == v1 && (v5 = *(_DWORD *)(v3 + 448), (v5 & 0x1000000) != 0) )
    {
      if ( (v5 & 1) != 0 )
        v3 = 0LL;
    }
    else
    {
      v3 = 0LL;
    }
  }
  ObfDereferenceObject(Thread);
  return v3;
}
