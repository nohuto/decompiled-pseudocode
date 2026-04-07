/*
 * XREFs of ?ReleaseCVICache@CDesktopManager@@SAXXZ @ 0x180047BD8
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18001B9C8 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z @ 0x18002F5A8 (-ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void CDesktopManager::ReleaseCVICache(void)
{
  CDesktopManager *v0; // rax
  __int64 v1; // rbx
  __int64 v2; // rdi
  CBaseObject *v3; // rcx

  v0 = CDesktopManager::s_pDesktopManagerInstance;
  v1 = 1592LL;
  v2 = 2LL;
  do
  {
    v3 = *(CBaseObject **)((char *)v0 + v1);
    if ( v3 )
    {
      CBaseObject::Release(v3);
      v0 = CDesktopManager::s_pDesktopManagerInstance;
      *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + v1) = 0LL;
    }
    v1 += 8LL;
    --v2;
  }
  while ( v2 );
}
