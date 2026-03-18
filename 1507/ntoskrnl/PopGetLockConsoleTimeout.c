/*
 * XREFs of PopGetLockConsoleTimeout @ 0x1405645C4
 * Callers:
 *     PopGetDisplayTimeout @ 0x140564598 (PopGetDisplayTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetLockConsoleTimeout(int a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( byte_14032D355 )
  {
    if ( PopConsoleContext == a1 && a1 != -1 )
    {
      v1 = PopAdaptiveLockConsoleTimeout;
      if ( PopAdaptiveLockConsoleTimeout > (unsigned int)PopDisplayTimeout )
        return (unsigned int)PopDisplayTimeout;
    }
  }
  return v1;
}
