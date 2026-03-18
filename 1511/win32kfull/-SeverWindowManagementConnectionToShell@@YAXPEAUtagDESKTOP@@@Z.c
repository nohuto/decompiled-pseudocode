/*
 * XREFs of ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01D7144
 * Callers:
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C0092988 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01D716C (-xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     SetShellWndManagementWindow @ 0x1C00D5B04 (SetShellWndManagementWindow.c)
 */

void __fastcall SeverWindowManagementConnectionToShell(struct tagDESKTOP *a1)
{
  __int64 v1; // rax

  v1 = SetShellWndManagementWindow((__int64)a1, 0LL);
  if ( v1 )
    PostMessage(v1, 835LL, 0LL, 0LL);
}
