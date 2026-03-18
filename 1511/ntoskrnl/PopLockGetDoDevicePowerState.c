/*
 * XREFs of PopLockGetDoDevicePowerState @ 0x1401ECE90
 * Callers:
 *     PiControlGetDevicePowerData @ 0x1406157B0 (PiControlGetDevicePowerData.c)
 *     NtGetDevicePowerState @ 0x1406382F0 (NtGetDevicePowerState.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PopLockGetDoDevicePowerState(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&PopIrpSerialLock);
  LODWORD(a1) = (*(_DWORD *)(a1 + 16) >> 4) & 0xF;
  KeReleaseSpinLock(&PopIrpSerialLock, v2);
  return (unsigned int)a1;
}
