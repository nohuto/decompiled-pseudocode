/*
 * XREFs of _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1402DBAC4
 * Callers:
 *     _anonymous_namespace_::NotifyPartExit @ 0x140046D64 (_anonymous_namespace_--NotifyPartExit.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1401D6BB8 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x14022D518 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     ?ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z @ 0x14025D948 (-ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z.c)
 *     ?WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x140265DD0 (-WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x140261368 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 */

struct tagWND *__fastcall anonymous_namespace_::SeverWindowManagementConnectionToShell(__int64 a1)
{
  struct tagTHREADINFO *v1; // rax
  struct tagWND *v2; // r8
  struct tagWND *result; // rax

  v1 = PtiCurrent(a1);
  result = ShellWindowManagement::SetWindow(*((ShellWindowManagement **)v1 + 61), 0LL, v2);
  if ( result )
    return (struct tagWND *)PostMessage((int)result, 835, 0, 0);
  return result;
}
