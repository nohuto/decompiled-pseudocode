/*
 * XREFs of PopRemoteSessionActiveInput @ 0x14052E614
 * Callers:
 *     PopSessionInputChange @ 0x14052E19C (PopSessionInputChange.c)
 *     PopConsoleSessionActiveInput @ 0x14052E33C (PopConsoleSessionActiveInput.c)
 *     PopSessionConnected @ 0x140546184 (PopSessionConnected.c)
 * Callees:
 *     PopGetDisplayTimeout @ 0x14052E648 (PopGetDisplayTimeout.c)
 *     PopSetSessionUserStatus @ 0x14052E674 (PopSetSessionUserStatus.c)
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
