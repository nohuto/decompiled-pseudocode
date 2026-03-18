/*
 * XREFs of xxxNotifyShellTrackedWindowTrackingInfo @ 0x1C00928D8
 * Callers:
 *     xxxEndGetWidnowTrackInfoAsync @ 0x1C0092890 (xxxEndGetWidnowTrackInfoAsync.c)
 * Callees:
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C0092988 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     TransformWindowTrackInfo @ 0x1C0092A70 (TransformWindowTrackInfo.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall xxxNotifyShellTrackedWindowTrackingInfo(__int64 a1, __int64 a2)
{
  __int64 v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v7[5]; // [rsp+30h] [rbp-30h] BYREF

  memset(v7, 0, sizeof(v7));
  v6 = *(_QWORD *)(a2 + 32);
  v5 = *(_QWORD *)(a2 + 24);
  v7[0] = *(_QWORD *)a1;
  LODWORD(v7[1]) = 1;
  TransformWindowTrackInfo(a1, &v6, &v5, 0LL);
  v7[3] = v6;
  v7[2] = v5;
  LOWORD(v7[4]) = *(_WORD *)(a1 + 360);
  return xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v7);
}
