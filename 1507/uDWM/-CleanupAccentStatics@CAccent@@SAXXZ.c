/*
 * XREFs of ?CleanupAccentStatics@CAccent@@SAXXZ @ 0x180074CD4
 * Callers:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180002424 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180035BE0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x18006C0B0 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void CAccent::CleanupAccentStatics(void)
{
  struct _RTL_CRITICAL_SECTION *v0; // [rsp+30h] [rbp+8h] BYREF

  v0 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( CAccent::s_pbsAccentCurrent )
  {
    CBaseObject::Release(CAccent::s_pbsAccentCurrent);
    CAccent::s_pbsAccentCurrent = 0LL;
  }
  if ( CAccent::s_pbsAccentTransitionTarget )
  {
    CBaseObject::Release(CAccent::s_pbsAccentTransitionTarget);
    CAccent::s_pbsAccentTransitionTarget = 0LL;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v0);
}
