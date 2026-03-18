/*
 * XREFs of KiShouldScanSharedReadyQueue @ 0x1400E53FC
 * Callers:
 *     KiUpdateRunTime @ 0x140045DB0 (KiUpdateRunTime.c)
 *     KeClockInterruptNotify @ 0x140046990 (KeClockInterruptNotify.c)
 *     KiQuantumEnd @ 0x14007AAB0 (KiQuantumEnd.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiShouldScanSharedReadyQueue(__int64 a1)
{
  return *(_DWORD *)(a1 + 24784) || (*(_BYTE *)(a1 + 35) & 2) != 0 && *(_QWORD *)(a1 + 24768);
}
