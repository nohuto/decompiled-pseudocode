/*
 * XREFs of ?SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ @ 0x1C0106B34
 * Callers:
 *     UmfdSessionInitialize @ 0x1C01067E0 (UmfdSessionInitialize.c)
 * Callees:
 *     <none>
 */

bool UmfdHostLifeTimeManager::SessionInitialize(void)
{
  struct _KEVENT *v0; // rax

  v0 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 1986348102LL);
  UmfdHostLifeTimeManager::s_WinlogonCallbackEvent = v0;
  if ( v0 )
  {
    GreInitializePushLock(&UmfdHostLifeTimeManager::s_ReadyLock);
    GreInitializePushLock(&UmfdHostLifeTimeManager::s_LaunchLock);
    KeInitializeEvent(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent, SynchronizationEvent, 0);
    LOBYTE(v0) = 1;
  }
  return (char)v0;
}
