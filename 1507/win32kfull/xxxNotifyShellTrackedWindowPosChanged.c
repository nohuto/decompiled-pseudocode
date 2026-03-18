/*
 * XREFs of xxxNotifyShellTrackedWindowPosChanged @ 0x1C01D65A8
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00665FC (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C00FE300 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C020BEC4 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0081EAC (IsWindowSubjectToShellWindowBehavior.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C01D56B0 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 */

__int64 __fastcall xxxNotifyShellTrackedWindowPosChanged(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  char v6; // cl
  int v7; // eax
  __int128 v8; // xmm0
  _QWORD v9[5]; // [rsp+20h] [rbp-38h] BYREF

  result = IsWindowSubjectToShellWindowBehavior(a1, 16);
  if ( (_DWORD)result )
  {
    memset(v9, 0, sizeof(v9));
    v5 = *(_QWORD *)a1;
    LODWORD(v9[1]) = 0;
    v6 = *(_BYTE *)(a1 + 55);
    v9[0] = v5;
    v7 = 1;
    if ( (v6 & 1) == 0 )
    {
      v7 = 0;
      if ( (v6 & 0x20) != 0 )
        v7 = 2;
    }
    v8 = *(_OWORD *)(a1 + 112);
    v9[2] = __PAIR64__(v7, a2);
    *(_OWORD *)&v9[3] = v8;
    return xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v9);
  }
  return result;
}
