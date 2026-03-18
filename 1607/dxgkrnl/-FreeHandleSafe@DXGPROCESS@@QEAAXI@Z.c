/*
 * XREFs of ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000966C
 * Callers:
 *     ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C00902DC (--1DXGPAGINGQUEUE@@IEAA@XZ.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C009D260 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C00A4670 (-Close@DXGSYNCOBJECT@@QEAAEI@Z.c)
 *     ??1DXGOVERLAY@@QEAA@XZ @ 0x1C016CA1C (--1DXGOVERLAY@@QEAA@XZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00A3220 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

void __fastcall DXGPROCESS::FreeHandleSafe(DXGPROCESS *this, unsigned int a2)
{
  char *v2; // rsi

  v2 = (char *)this + 184;
  DXGPUSHLOCK::AcquireExclusive((DXGPROCESS *)((char *)this + 184));
  HMGRTABLE::FreeHandle((DXGPROCESS *)((char *)this + 208), a2);
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
