/*
 * XREFs of ACPIDisconnectWakeInterrupt @ 0x1C0058334
 * Callers:
 *     ACPIWakeEmulationDisable @ 0x1C005891C (ACPIWakeEmulationDisable.c)
 * Callees:
 *     ACPIDereferenceWakeInterrupt @ 0x1C00582BC (ACPIDereferenceWakeInterrupt.c)
 *     ACPIFindWakeInterruptForVector @ 0x1C00583CC (ACPIFindWakeInterruptForVector.c)
 */

void __fastcall ACPIDisconnectWakeInterrupt(__int64 *a1)
{
  KIRQL v2; // al
  __int64 *v3; // rdi
  KIRQL v4; // r11
  __int64 **v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v3 = (__int64 *)*a1;
  v4 = v2;
  if ( (__int64 *)*a1 == a1 || (int)ACPIFindWakeInterruptForVector(*((unsigned int *)a1 + 6), a1[4], &v6) < 0 )
  {
    KeReleaseSpinLock(&AcpiPowerLock, v4);
  }
  else
  {
    v5 = (__int64 **)a1[1];
    if ( (__int64 *)v3[1] != a1 || *v5 != a1 )
      __fastfail(3u);
    *v5 = v3;
    v3[1] = (__int64)v5;
    a1[1] = (__int64)a1;
    *a1 = (__int64)a1;
    KeReleaseSpinLock(&AcpiPowerLock, v4);
    ACPIDereferenceWakeInterrupt(&v6);
  }
}
