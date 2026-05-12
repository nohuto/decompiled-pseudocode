/*
 * XREFs of RaidAdapterRestartAdapter @ 0x1C0008980
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000792C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C00068A8 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006A2C (RaidAdapterAcquireInterruptLock.c)
 *     RaCallMiniportAdapterControl @ 0x1C000AFB8 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C000BBE4 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterRestartAdapter(__int64 a1)
{
  KIRQL v2; // si
  int v3; // edi

  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 4LL) )
    RaCallMiniportAdapterControl(a1 + 296, 4LL);
  v2 = RaidAdapterAcquireInterruptLock(a1);
  v3 = RaCallMiniportAdapterControl(a1 + 296, 2LL);
  if ( v3 >= 0 )
    *(_BYTE *)(a1 + 104) |= 1u;
  RaidAdapterReleaseInterruptLock(a1, v2);
  return (unsigned int)v3;
}
