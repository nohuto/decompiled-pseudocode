/*
 * XREFs of xxxCallShellWindowSizeStartingHandler @ 0x1C01D7CC0
 * Callers:
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0209F54 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?GetModifiersStateForShell@@YAIPEBUtagTHREADINFO@@@Z @ 0x1C01D65FC (-GetModifiersStateForShell@@YAIPEBUtagTHREADINFO@@@Z.c)
 *     ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01D716C (-xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z.c)
 */

__int64 __fastcall xxxCallShellWindowSizeStartingHandler(_QWORD *a1, int a2)
{
  __int64 v2; // rbx
  _QWORD v6[8]; // [rsp+20h] [rbp-58h] BYREF

  v2 = a1[2];
  memset(v6, 0, sizeof(v6));
  v6[0] = *a1;
  LODWORD(v6[1]) = 2;
  HIDWORD(v6[3]) = a2;
  LODWORD(v6[4]) = GetModifiersStateForShell((const struct tagTHREADINFO *)v2);
  TransformRectBetweenCoordinateSpaces((char *)&v6[1] + 4, a1 + 14, *(_QWORD *)(*(_QWORD *)(v2 + 408) + 320LL), a1);
  return xxxCallIAMWindowManagementHandler((const struct _SHELL_WINDOWMANAGEMENT_CALLOUT_INFO *const)v6);
}
