/*
 * XREFs of ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000F640
 * Callers:
 *     ??1DXGOVERLAY@@QEAA@XZ @ 0x1C014236C (--1DXGOVERLAY@@QEAA@XZ.c)
 *     ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C0144334 (--1DXGPAGINGQUEUE@@IEAA@XZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00848F0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

void __fastcall DXGPROCESS::FreeHandleSafe(DXGPROCESS *this, unsigned int a2)
{
  char *v2; // rsi

  v2 = (char *)this + 192;
  DXGPUSHLOCK::AcquireExclusive((DXGPROCESS *)((char *)this + 192));
  HMGRTABLE::FreeHandle((DXGPROCESS *)((char *)this + 216), a2);
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
