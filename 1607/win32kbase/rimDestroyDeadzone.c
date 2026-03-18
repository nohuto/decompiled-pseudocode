/*
 * XREFs of rimDestroyDeadzone @ 0x1C0005280
 * Callers:
 *     RIMInitializeDeadzone @ 0x1C0005588 (RIMInitializeDeadzone.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C00067A0 (RIMReleasePointerDeviceInfo.c)
 * Callees:
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C000539C (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

__int64 rimDestroyDeadzone()
{
  RIMLockExclusive(&gDeadzoneLock);
  if ( RIMDeadzone::s_pRimDeadzoneInstance )
  {
    RIMDeadzone::Release(RIMDeadzone::s_pRimDeadzoneInstance);
    if ( !*((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 1) )
    {
      Win32FreePool(RIMDeadzone::s_pRimDeadzoneInstance);
      RIMDeadzone::s_pRimDeadzoneInstance = 0LL;
    }
  }
  return RIMUnlockExclusive(&gDeadzoneLock);
}
