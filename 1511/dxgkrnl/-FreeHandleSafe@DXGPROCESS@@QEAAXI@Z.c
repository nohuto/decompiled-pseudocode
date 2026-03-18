/*
 * XREFs of ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C00019F4
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C006B970 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??1DXGOVERLAY@@QEAA@XZ @ 0x1C0147DCC (--1DXGOVERLAY@@QEAA@XZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0094580 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
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
