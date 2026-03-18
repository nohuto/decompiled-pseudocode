/*
 * XREFs of xxxNotifyShellWindowBorderEnter @ 0x1C01D8164
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00C6FC4 (xxxTrackMouseMove.c)
 * Callees:
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C0092988 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     ?GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP@1@PEAUtagWND@@H@Z @ 0x1C00C7350 (-GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?GetModifiersStateForShell@@YAIPEBUtagTHREADINFO@@@Z @ 0x1C01D65FC (-GetModifiersStateForShell@@YAIPEBUtagTHREADINFO@@@Z.c)
 */

struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *__fastcall xxxNotifyShellWindowBorderEnter(
        ShellWindowManagementProperty *this,
        int a2)
{
  __int64 v2; // rbx
  const struct tagTHREADINFO *v4; // rcx
  struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *result; // rax
  _QWORD v6[5]; // [rsp+20h] [rbp-38h] BYREF

  v2 = a2;
  memset(v6, 0, sizeof(v6));
  v4 = (const struct tagTHREADINFO *)*((_QWORD *)this + 2);
  v6[0] = *(_QWORD *)this;
  LODWORD(v6[1]) = 5;
  v6[2] = (unsigned int)GetModifiersStateForShell(v4);
  v6[3] = v2;
  result = (struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *)xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v6);
  if ( (_DWORD)result )
  {
    result = ShellWindowManagementProperty::GetShellWndManagementProperty(this, (struct tagWND *)1);
    if ( result )
      *(_DWORD *)result |= 1u;
  }
  return result;
}
