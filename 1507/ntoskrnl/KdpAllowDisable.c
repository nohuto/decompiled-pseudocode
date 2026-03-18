/*
 * XREFs of KdpAllowDisable @ 0x14072D334
 * Callers:
 *     KdDisableDebuggerWithLock @ 0x14017069C (KdDisableDebuggerWithLock.c)
 * Callees:
 *     <none>
 */

__int64 KdpAllowDisable()
{
  int v0; // edx
  __int64 *i; // r8

  v0 = 0;
  if ( !(_DWORD)KeNumberProcessors_0 )
    return 0LL;
  for ( i = KiProcessorBlock; !*(_BYTE *)(*i + 136); ++i )
  {
    if ( ++v0 >= (unsigned int)KeNumberProcessors_0 )
      return 0LL;
  }
  return 3221225506LL;
}
