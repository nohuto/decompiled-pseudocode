/*
 * XREFs of PopGetLockConsoleTimeout @ 0x1404F3300
 * Callers:
 *     PopGetDisplayTimeout @ 0x1404F2D38 (PopGetDisplayTimeout.c)
 *     PopConsoleSessionPassiveInput @ 0x1404F2E8C (PopConsoleSessionPassiveInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetLockConsoleTimeout(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( byte_1402DCFF5 && PopConsoleContext == a1 && a1 != -1 )
    return PopGetLockConsoleTimeoutUnsafe();
  return result;
}
