/*
 * XREFs of ?xxxSend4FingerTapHotkey@@YAXXZ @ 0x1C01F6348
 * Callers:
 *     ?xxxProcess3and4FingerTap@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z @ 0x1C01F5FF4 (-xxxProcess3and4FingerTap@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z.c)
 * Callees:
 *     xxxSendInput @ 0x1C0047E98 (xxxSendInput.c)
 *     InternalMapVirtualKeyEx @ 0x1C00D715C (InternalMapVirtualKeyEx.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     GetCurrentKbdTables @ 0x1C01D9CA0 (GetCurrentKbdTables.c)
 */

void xxxSend4FingerTapHotkey(void)
{
  __int64 CurrentKbdTables; // rax
  unsigned int v1; // r9d
  __int64 v2; // rbx
  _DWORD v3[80]; // [rsp+28h] [rbp-E0h] BYREF

  memset(&v3[2], 0, 0x138uLL);
  v3[70] = 1;
  v3[60] = 1;
  v3[50] = 1;
  v3[40] = 1;
  v3[30] = 1;
  v3[20] = 1;
  v3[10] = 1;
  LOWORD(v3[42]) = 135;
  LOWORD(v3[32]) = 135;
  v3[0] = 1;
  LOWORD(v3[72]) = 91;
  LOWORD(v3[2]) = 91;
  LOWORD(v3[62]) = 17;
  LOWORD(v3[12]) = 17;
  LOWORD(v3[52]) = 16;
  LOWORD(v3[22]) = 16;
  CurrentKbdTables = GetCurrentKbdTables();
  v2 = CurrentKbdTables;
  if ( CurrentKbdTables )
  {
    HIWORD(v3[72]) = InternalMapVirtualKeyEx(v1, 0, CurrentKbdTables);
    HIWORD(v3[2]) = HIWORD(v3[72]);
    HIWORD(v3[62]) = InternalMapVirtualKeyEx(0x11u, 0, v2);
    HIWORD(v3[12]) = HIWORD(v3[62]);
    HIWORD(v3[52]) = InternalMapVirtualKeyEx(0x10u, 0, v2);
    HIWORD(v3[22]) = HIWORD(v3[52]);
    HIWORD(v3[42]) = InternalMapVirtualKeyEx(0x87u, 0, v2);
    HIWORD(v3[32]) = HIWORD(v3[42]);
  }
  v3[73] = 2;
  v3[63] = 2;
  v3[53] = 2;
  v3[43] = 2;
  xxxSendInput(8u, (__int64)v3);
}
