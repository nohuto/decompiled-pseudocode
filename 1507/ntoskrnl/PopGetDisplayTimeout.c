/*
 * XREFs of PopGetDisplayTimeout @ 0x140564598
 * Callers:
 *     PopSessionInputChange @ 0x14055DA90 (PopSessionInputChange.c)
 *     PopRemoteSessionActiveInput @ 0x140564564 (PopRemoteSessionActiveInput.c)
 *     PopCheckConsoleTimeouts @ 0x1406BC9F0 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     PopGetLockConsoleTimeout @ 0x1405645C4 (PopGetLockConsoleTimeout.c)
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
