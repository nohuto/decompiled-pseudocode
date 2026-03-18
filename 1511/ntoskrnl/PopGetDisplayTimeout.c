/*
 * XREFs of PopGetDisplayTimeout @ 0x1404F2D38
 * Callers:
 *     PopRemoteSessionActiveInput @ 0x1404F2D04 (PopRemoteSessionActiveInput.c)
 *     PopSessionInputChange @ 0x1404F2D64 (PopSessionInputChange.c)
 *     PopCheckConsoleTimeouts @ 0x14063C394 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     PopGetLockConsoleTimeout @ 0x1404F3300 (PopGetLockConsoleTimeout.c)
 */

__int64 __fastcall PopGetDisplayTimeout(int a1)
{
  __int64 result; // rax

  if ( PopConsoleContext != a1 || a1 == -1 )
    return 0LL;
  result = PopGetLockConsoleTimeout();
  if ( !(_DWORD)result )
    return (unsigned int)PopDisplayTimeout;
  return result;
}
