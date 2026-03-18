/*
 * XREFs of xxxNotifyShellWindowBorderExitIfEntered @ 0x1C00C7308
 * Callers:
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     xxxTrackMouseMove @ 0x1C00C6FC4 (xxxTrackMouseMove.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C0092988 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

_DWORD *__fastcall xxxNotifyShellWindowBorderExitIfEntered(__int64 *a1)
{
  _DWORD *result; // rax
  unsigned __int8 v3; // r8
  __int64 v4; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-38h] BYREF

  result = (_DWORD *)GetProp((__int64)a1, (unsigned __int16)gatomShellWindowManagement, 1LL);
  if ( result )
  {
    if ( ((unsigned __int8)*result & v3) != 0 )
    {
      *result &= ~1u;
      memset(v5, 0, sizeof(v5));
      v4 = *a1;
      v5[2] = 0LL;
      v5[3] = 0LL;
      v5[0] = v4;
      LODWORD(v5[1]) = 6;
      return (_DWORD *)xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v5);
    }
  }
  return result;
}
