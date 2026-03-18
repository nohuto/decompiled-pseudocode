/*
 * XREFs of ?xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@@Z @ 0x1C01D7244
 * Callers:
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C0075870 (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01D812C (xxxNotifyShellTrackedWindowPosChanged.c)
 * Callees:
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C0092988 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall xxxNotifyShellWindowPosChangedCommon(__int64 a1, int a2, int a3, int a4)
{
  int v8; // ecx
  char v9; // al
  __int64 v10; // r8
  _QWORD v12[5]; // [rsp+20h] [rbp-48h] BYREF

  memset(v12, 0, sizeof(v12));
  v8 = 0;
  v12[0] = *(_QWORD *)a1;
  v9 = *(_BYTE *)(a1 + 55);
  LODWORD(v12[1]) = a4;
  LODWORD(v12[2]) = a2;
  if ( (v9 & 1) != 0 )
  {
    v8 = 1;
  }
  else if ( (v9 & 0x20) != 0 )
  {
    v8 = 2;
  }
  else if ( a3 && (*(_BYTE *)(a1 + 289) & 3) != 0 )
  {
    v8 = 3;
  }
  v10 = *(_QWORD *)(a1 + 24);
  HIDWORD(v12[2]) = v8;
  TransformRectBetweenCoordinateSpaces(&v12[3], a1 + 112, *(_QWORD *)(v10 + 320), a1);
  return xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v12);
}
