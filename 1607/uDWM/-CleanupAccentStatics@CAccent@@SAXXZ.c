/*
 * XREFs of ?CleanupAccentStatics@CAccent@@SAXXZ @ 0x18007D9BC
 * Callers:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180007368 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x1800366E0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x180075FA4 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
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
