/*
 * XREFs of xxxNotifyShellWindowBorderExitIfEntered @ 0x1C0121224
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     xxxTrackMouseMove @ 0x1C009DDCC (xxxTrackMouseMove.c)
 * Callees:
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00A9ED8 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     ?GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP@1@PEAUtagWND@@H@Z @ 0x1C0121260 (-GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *__fastcall xxxNotifyShellWindowBorderExitIfEntered(
        ShellWindowManagementProperty *a1,
        __int64 a2,
        int a3)
{
  struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *result; // rax
  __int64 v5; // rax
  _QWORD v6[5]; // [rsp+20h] [rbp-38h] BYREF

  result = ShellWindowManagementProperty::GetShellWndManagementProperty(a1, 0LL, a3);
  if ( result )
  {
    if ( (*(_DWORD *)result & 1) != 0 )
    {
      *(_DWORD *)result &= ~1u;
      memset(v6, 0, sizeof(v6));
      v5 = *(_QWORD *)a1;
      v6[2] = 0LL;
      v6[3] = 0LL;
      v6[0] = v5;
      LODWORD(v6[1]) = 6;
      return (struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *)xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v6);
    }
  }
  return result;
}
