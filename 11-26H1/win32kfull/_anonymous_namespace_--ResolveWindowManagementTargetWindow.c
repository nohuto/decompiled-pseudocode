/*
 * XREFs of _anonymous_namespace_::ResolveWindowManagementTargetWindow @ 0x140295B74
 * Callers:
 *     _anonymous_namespace_::NotifyPartExit @ 0x140046D64 (_anonymous_namespace_--NotifyPartExit.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1401D6BB8 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x14022D518 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     ?ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z @ 0x14025D948 (-ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z.c)
 *     ?WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x140265DD0 (-WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ @ 0x14019D930 (-SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ.c)
 */

struct tagWND *__fastcall anonymous_namespace_::ResolveWindowManagementTargetWindow(__int64 a1)
{
  int v1; // ebx
  struct tagTHREADINFO *v2; // r8
  __int64 v3; // rcx
  struct tagWND *result; // rax
  MOVESIZEDATA *v5; // rcx

  v1 = a1;
  v2 = PtiCurrent(a1);
  v3 = *((_QWORD *)v2 + 61);
  result = 0LL;
  if ( v3 && *(_QWORD *)(v3 + 288) )
  {
    if ( v1 )
    {
      if ( v1 == 1 )
      {
        v5 = (MOVESIZEDATA *)*((_QWORD *)v2 + 88);
        if ( v5 )
          return MOVESIZEDATA::SHData_GetCustomDockTargetWindow(v5);
      }
    }
    else
    {
      return *(struct tagWND **)(*((_QWORD *)PtiCurrent(v3) + 61) + 328LL);
    }
  }
  return result;
}
