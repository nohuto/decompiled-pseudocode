/*
 * XREFs of PopGetDisplayTimeout @ 0x14052EB88
 * Callers:
 *     PopSessionInputChange @ 0x14052E6DC (PopSessionInputChange.c)
 *     PopRemoteSessionActiveInput @ 0x14052EB54 (PopRemoteSessionActiveInput.c)
 *     PopCheckConsoleTimeouts @ 0x140674A84 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     PopGetLockConsoleTimeout @ 0x14052EEFC (PopGetLockConsoleTimeout.c)
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
