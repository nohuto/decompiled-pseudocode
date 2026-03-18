/*
 * XREFs of ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01D5588
 * Callers:
 *     ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01D55C4 (-xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C01D56B0 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 */

void __fastcall SeverWindowManagementConnectionToShell(struct tagDESKTOP *a1)
{
  __int64 v2; // rax

  v2 = HMAssignmentUnlock((char *)a1 + 312);
  *((_DWORD *)a1 + 80) = 0;
  if ( v2 )
    PostMessage(v2, 0x343u, 0LL, 0LL);
}
