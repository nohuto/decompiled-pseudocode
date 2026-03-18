/*
 * XREFs of PopRemoteSessionActiveInput @ 0x1404F2D04
 * Callers:
 *     PopConsoleSessionActiveInput @ 0x1404F2C90 (PopConsoleSessionActiveInput.c)
 *     PopSessionInputChange @ 0x1404F2D64 (PopSessionInputChange.c)
 *     PopSessionConnected @ 0x14050BB18 (PopSessionConnected.c)
 * Callees:
 *     PopGetDisplayTimeout @ 0x1404F2D38 (PopGetDisplayTimeout.c)
 *     PopSetSessionUserStatus @ 0x1404F30C8 (PopSetSessionUserStatus.c)
 */

__int64 __fastcall PopRemoteSessionActiveInput(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // ebx
  __int64 result; // rax

  v4 = a1;
  PopSetSessionUserStatus(a1, 0LL);
  a3[1] = PopGetDisplayTimeout(v4);
  result = (unsigned int)PopInputTimeout;
  *a3 = PopInputTimeout;
  return result;
}
