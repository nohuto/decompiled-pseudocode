/*
 * XREFs of ACPIWaitWakeEnableOnPowerUp @ 0x1C0041990
 * Callers:
 *     <none>
 * Callees:
 *     ACPIWakeEnableDisablePciDevice @ 0x1C0021C4C (ACPIWakeEnableDisablePciDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ACPIWaitWakeEnableOnPowerUp(__int64 a1, __int64 a2, int a3)
{
  KIRQL v5; // al
  __int64 *v6; // rbx
  KIRQL v7; // si

  (*(void (__fastcall **)(__int64, _QWORD))(a2 + 8))(a1, *(_QWORD *)a2);
  if ( a3 >= 0 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    v6 = (__int64 *)AcpiPowerWaitWakeList;
    v7 = v5;
    while ( v6 != &AcpiPowerWaitWakeList )
    {
      if ( v6[5] == a1 )
        ACPIWakeEnableDisablePciDevice(a1, 1);
      v6 = (__int64 *)*v6;
    }
    KeReleaseSpinLock(&AcpiPowerLock, v7);
  }
}
