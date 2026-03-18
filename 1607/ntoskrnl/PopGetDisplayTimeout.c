/*
 * XREFs of PopGetDisplayTimeout @ 0x14052E648
 * Callers:
 *     PopSessionInputChange @ 0x14052E19C (PopSessionInputChange.c)
 *     PopRemoteSessionActiveInput @ 0x14052E614 (PopRemoteSessionActiveInput.c)
 *     PopCheckConsoleTimeouts @ 0x1406749A0 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     PopGetLockConsoleTimeout @ 0x14052E9BC (PopGetLockConsoleTimeout.c)
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
