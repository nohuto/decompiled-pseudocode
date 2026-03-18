/*
 * XREFs of KiShouldScanSharedReadyQueue @ 0x1400A3E30
 * Callers:
 *     KiQuantumEnd @ 0x1400D1780 (KiQuantumEnd.c)
 *     KeClockInterruptNotify @ 0x1400D9870 (KeClockInterruptNotify.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiShouldScanSharedReadyQueue(__int64 a1)
{
  return *(_DWORD *)(a1 + 24912) || (*(_BYTE *)(a1 + 35) & 2) != 0 && *(_QWORD *)(a1 + 24896);
}
