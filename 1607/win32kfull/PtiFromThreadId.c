/*
 * XREFs of PtiFromThreadId @ 0x1C0057448
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C0057130 (NtUserPostThreadMessage.c)
 *     _GetThreadDesktop @ 0x1C0057350 (_GetThreadDesktop.c)
 *     _ThreadMessageQueueAttached @ 0x1C005C140 (_ThreadMessageQueueAttached.c)
 *     NtUserBuildHwndList @ 0x1C0076200 (NtUserBuildHwndList.c)
 *     NtUserSetWindowsHookEx @ 0x1C00A4740 (NtUserSetWindowsHookEx.c)
 *     _SetWinEventHook @ 0x1C00A9348 (_SetWinEventHook.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00AB9C4 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     NtUserAttachThreadInput @ 0x1C00DB870 (NtUserAttachThreadInput.c)
 *     NtUserGetGUIThreadInfo @ 0x1C00EDF70 (NtUserGetGUIThreadInfo.c)
 *     NtUserDelegateInput @ 0x1C01222F0 (NtUserDelegateInput.c)
 *     NtUserBuildHimcList @ 0x1C0122630 (NtUserBuildHimcList.c)
 *     NtUserDisableThreadIme @ 0x1C0128490 (NtUserDisableThreadIme.c)
 *     _OpenThreadDesktop @ 0x1C01DF4E8 (_OpenThreadDesktop.c)
 *     _GetSendMessageReceiver @ 0x1C01E3D70 (_GetSendMessageReceiver.c)
 *     NtUserCheckWindowThreadDesktop @ 0x1C0211000 (NtUserCheckWindowThreadDesktop.c)
 *     _SetThreadQueueMergeSetting @ 0x1C021DCF0 (_SetThreadQueueMergeSetting.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PtiFromThreadId(int a1)
{
  HANDLE v1; // rdi
  NTSTATUS v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 *ThreadWin32Thread; // rax
  int v8; // eax
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
  v6 = 0LL;
  if ( !PsIsThreadTerminating(Thread) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(Thread, v3, v4, v5);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  if ( v6 )
  {
    if ( PsGetThreadId(*(PETHREAD *)v6) == v1 && (v8 = *(_DWORD *)(v6 + 440), (v8 & 0x1000000) != 0) )
    {
      if ( (v8 & 1) != 0 )
        v6 = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
  }
  ObfDereferenceObject(Thread);
  return v6;
}
