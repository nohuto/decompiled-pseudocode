/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001EA10
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     ACPIDeviceCompleteCommon @ 0x1C001EB0C (ACPIDeviceCompleteCommon.c)
 *     ACPIDevicePowerEnumerateAssociatedPowerNodes @ 0x1C001EB58 (ACPIDevicePowerEnumerateAssociatedPowerNodes.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase4(__int64 a1)
{
  __int64 v1; // rdi
  void *v2; // rbx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (void *)(a1 + 216);
  dword_1C005A218 = 0;
  byte_1C005A21C = 0;
  FreeDataBuffs(a1 + 216, 1u);
  memset(v2, 0, 0x28uLL);
  LOBYTE(v2) = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  ACPIDevicePowerEnumerateAssociatedPowerNodes(a1, ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes, a1);
  *(_DWORD *)(v1 + 488) = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(v1 + 328);
  *(_DWORD *)(v1 + 328) = 0;
  KeReleaseSpinLock(&AcpiPowerLock, (KIRQL)v2);
  ACPIDeviceCompleteCommon(a1 + 208, 0LL);
  return 0LL;
}
