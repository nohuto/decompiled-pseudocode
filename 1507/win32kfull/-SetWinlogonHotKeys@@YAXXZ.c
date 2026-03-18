/*
 * XREFs of ?SetWinlogonHotKeys@@YAXXZ @ 0x1C014696C
 * Callers:
 *     RawInputThread @ 0x1C0143560 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C003D9A4 (_RegisterHotKey.c)
 */

void SetWinlogonHotKeys(void)
{
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 0, 0x8003u, 46);
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 4, 6u, 27);
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 5, 0x8008u, 76);
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 6, 0x2008u, 85);
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 10, 0x200Au, 85);
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 13, 0x6008u, 13);
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 12, 0x6008u, 187);
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 12, 0x6008u, 107);
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 10, 0x600Au, 125);
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 7, 0x2008u, 80);
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 8, 0x200Au, 80);
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 9, 0x200Cu, 80);
  RegisterHotKey(0LL, (__int64)RotationLockCallback, -12, 0x2008u, 79);
  RegisterHotKey(0LL, (__int64)WinlogonWinSpaceCallback, -8, 0x2008u, 32);
  RegisterHotKey(0LL, (__int64)WinlogonWinSpaceCallback, -9, 0x200Au, 32);
  RegisterHotKey(0LL, (__int64)WinlogonWinSpaceCallback, -10, 0x200Cu, 32);
  RegisterHotKey(0LL, (__int64)WinlogonWinSpaceCallback, -11, 0x200Eu, 32);
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 7, 0x2008u, 133);
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 8, 0x200Au, 133);
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 9, 0x200Cu, 133);
  RegisterHotKey(0LL, (__int64)RotationLockCallback, -13, 0x6008u, 125);
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 11, 0xE008u, 127);
  RegisterHotKey(0LL, (__int64)PTPEnableHotkeyCallback, -14, 0xC00Au, 135);
  RegisterHotKey(0LL, (__int64)DisplayDiagHotkeyCallback, -15, 0x600Au, 66);
}
