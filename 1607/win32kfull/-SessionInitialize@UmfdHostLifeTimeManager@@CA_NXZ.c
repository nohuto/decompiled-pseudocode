/*
 * XREFs of ?SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ @ 0x1C01280D4
 * Callers:
 *     UmfdSessionInitialize @ 0x1C0127D80 (UmfdSessionInitialize.c)
 * Callees:
 *     <none>
 */

char UmfdHostLifeTimeManager::SessionInitialize(void)
{
  UmfdHostLifeTimeManager::s_WinlogonCallbackEvent = (PRKEVENT)Win32AllocPoolNonPaged(24LL, 1986348102LL);
  if ( !UmfdHostLifeTimeManager::s_WinlogonCallbackEvent )
    return 0;
  UmfdTls::s_FontDriverThreadsReadyEvent = (PRKEVENT)Win32AllocPoolNonPaged(24LL, 1986348102LL);
  if ( !UmfdTls::s_FontDriverThreadsReadyEvent )
    return 0;
  GreInitializePushLock(&UmfdHostLifeTimeManager::s_ReadyLock);
  GreInitializePushLock(&UmfdHostLifeTimeManager::s_LaunchLock);
  KeInitializeEvent(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent, SynchronizationEvent, 0);
  KeInitializeEvent(UmfdTls::s_FontDriverThreadsReadyEvent, SynchronizationEvent, 0);
  return 1;
}
