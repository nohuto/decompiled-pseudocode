/*
 * XREFs of PopLockGetDoDevicePowerState @ 0x140205CDC
 * Callers:
 *     PiControlGetDevicePowerData @ 0x14064A204 (PiControlGetDevicePowerData.c)
 *     NtGetDevicePowerState @ 0x14067073C (NtGetDevicePowerState.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PopLockGetDoDevicePowerState(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&PopIrpSerialLock);
  LODWORD(a1) = (*(_DWORD *)(a1 + 16) >> 4) & 0xF;
  KeReleaseSpinLock(&PopIrpSerialLock, v2);
  return (unsigned int)a1;
}
