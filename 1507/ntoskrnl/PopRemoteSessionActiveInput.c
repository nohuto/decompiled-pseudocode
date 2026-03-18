/*
 * XREFs of PopRemoteSessionActiveInput @ 0x140564564
 * Callers:
 *     PopSessionInputChange @ 0x14055DA90 (PopSessionInputChange.c)
 *     PopConsoleSessionActiveInput @ 0x1405644F0 (PopConsoleSessionActiveInput.c)
 *     PopSessionConnected @ 0x140582F38 (PopSessionConnected.c)
 * Callees:
 *     PopSetSessionUserStatus @ 0x14055DFC0 (PopSetSessionUserStatus.c)
 *     PopGetDisplayTimeout @ 0x140564598 (PopGetDisplayTimeout.c)
 */

__int64 __fastcall PopRemoteSessionActiveInput(unsigned int a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  PopSetSessionUserStatus(a1, 0);
  a3[1] = PopGetDisplayTimeout(a1);
  result = (unsigned int)PopInputTimeout;
  *a3 = PopInputTimeout;
  return result;
}
