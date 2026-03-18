/*
 * XREFs of ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x1C0038340
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000C280 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIWakeRestoreEnables @ 0x1C00424C0 (ACPIWakeRestoreEnables.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase3(__int64 a1)
{
  int v1; // ebx
  int v3; // edi
  int v4; // ebp
  __int64 v5; // rcx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 104);
  v3 = 0;
  *(_DWORD *)(a1 + 212) = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v4 = AcpiMostRecentSleepState;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( v1 != 1 || v4 != 5 || (v3 = ACPIWakeRestoreEnables(v5, a1), result = 259LL, v3 != 259) )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v3, 0LL, a1);
    return 0LL;
  }
  return result;
}
