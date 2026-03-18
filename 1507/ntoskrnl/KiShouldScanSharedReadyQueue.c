/*
 * XREFs of KiShouldScanSharedReadyQueue @ 0x14011B3C4
 * Callers:
 *     KiQuantumEnd @ 0x1400A25A0 (KiQuantumEnd.c)
 *     KeClockInterruptNotify @ 0x1400A6130 (KeClockInterruptNotify.c)
 *     KiUpdateRunTime @ 0x1400AC2C0 (KiUpdateRunTime.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiShouldScanSharedReadyQueue(__int64 a1)
{
  return *(_DWORD *)(a1 + 24784) || (*(_BYTE *)(a1 + 35) & 2) != 0 && *(_QWORD *)(a1 + 24768);
}
