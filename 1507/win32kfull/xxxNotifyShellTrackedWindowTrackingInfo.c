/*
 * XREFs of xxxNotifyShellTrackedWindowTrackingInfo @ 0x1C01D663C
 * Callers:
 *     xxxEndGetWidnowTrackInfoAsync @ 0x1C0227630 (xxxEndGetWidnowTrackInfoAsync.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C01D56B0 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 */

__int64 __fastcall xxxNotifyShellTrackedWindowTrackingInfo(__int64 a1, _DWORD *a2)
{
  INT v4; // r9d
  INT v5; // esi
  INT v6; // r14d
  INT v7; // r15d
  int v8; // eax
  unsigned __int16 v9; // ax
  INT v10; // ebx
  unsigned __int64 v12; // [rsp+20h] [rbp-40h]
  unsigned __int64 v13; // [rsp+28h] [rbp-38h]
  _QWORD v14[5]; // [rsp+30h] [rbp-30h] BYREF

  memset(v14, 0, sizeof(v14));
  v4 = a2[8];
  v5 = a2[9];
  v6 = a2[6];
  v7 = a2[7];
  v14[0] = *(_QWORD *)a1;
  v8 = *(_DWORD *)(a1 + 344);
  v13 = __PAIR64__(v5, v4);
  v12 = __PAIR64__(v7, v6);
  LODWORD(v14[1]) = 1;
  if ( v8 != 2 )
  {
    if ( v8 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
      v9 = *(_WORD *)(gpsi + 7286LL);
    else
      v9 = 96;
    v10 = v9;
    LODWORD(v13) = EngMulDiv(v4, *(unsigned __int16 *)(a1 + 360), v9);
    HIDWORD(v13) = EngMulDiv(v5, *(unsigned __int16 *)(a1 + 360), v10);
    LODWORD(v12) = EngMulDiv(v6, *(unsigned __int16 *)(a1 + 360), v10);
    HIDWORD(v12) = EngMulDiv(v7, *(unsigned __int16 *)(a1 + 360), v10);
  }
  v14[3] = v13;
  v14[2] = v12;
  LOWORD(v14[4]) = *(_WORD *)(a1 + 360);
  return xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v14);
}
