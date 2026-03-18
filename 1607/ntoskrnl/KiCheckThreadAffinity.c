/*
 * XREFs of KiCheckThreadAffinity @ 0x1400D1134
 * Callers:
 *     KiSelectNextThread @ 0x1400CA5B0 (KiSelectNextThread.c)
 *     KiQueueReadyThread @ 0x1400D0C70 (KiQueueReadyThread.c)
 *     KiQuantumEnd @ 0x1400D1780 (KiQuantumEnd.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140111090 (KiUpdateGlobalCpuSetConfiguration.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiCheckThreadAffinity(__int64 a1)
{
  return *(_QWORD *)(a1 + 568) == KiCpuSetSequence || (*(_DWORD *)(a1 + 116) & 8) != 0;
}
