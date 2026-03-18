/*
 * XREFs of PopGetLockConsoleTimeout @ 0x14052E9BC
 * Callers:
 *     PopConsoleSessionPassiveInput @ 0x14052E2C4 (PopConsoleSessionPassiveInput.c)
 *     PopGetDisplayTimeout @ 0x14052E648 (PopGetDisplayTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetLockConsoleTimeout(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( byte_1403023D6 && PopConsoleContext == a1 && a1 != -1 )
    return PopGetLockConsoleTimeoutUnsafe();
  return result;
}
