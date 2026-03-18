/*
 * XREFs of xxxNotifyShellTrackedWindowTrackingInfo @ 0x1C0124174
 * Callers:
 *     xxxEndGetWidnowTrackInfoAsync @ 0x1C012412C (xxxEndGetWidnowTrackInfoAsync.c)
 * Callees:
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00A9ED8 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     TransformWindowTrackInfo @ 0x1C0124224 (TransformWindowTrackInfo.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall xxxNotifyShellTrackedWindowTrackingInfo(__int64 a1, __int64 a2)
{
  __int64 v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v7[5]; // [rsp+30h] [rbp-30h] BYREF

  memset(v7, 0, sizeof(v7));
  v5 = *(_QWORD *)(a2 + 32);
  v6 = *(_QWORD *)(a2 + 24);
  v7[0] = *(_QWORD *)a1;
  LODWORD(v7[1]) = 1;
  TransformWindowTrackInfo(a1, &v5, &v6, 0LL);
  v7[3] = v5;
  v7[2] = v6;
  LOWORD(v7[4]) = *(_WORD *)(a1 + 356);
  return xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v7);
}
