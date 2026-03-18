/*
 * XREFs of IAMKeyAcquired @ 0x1C007B0A0
 * Callers:
 *     PostIAMShellHookMessageEx @ 0x1C007AFD0 (PostIAMShellHookMessageEx.c)
 *     ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01D55C4 (-xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C01D56B0 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IAMKeyAcquired(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 160LL) && !*(_DWORD *)(a1 + 272);
}
