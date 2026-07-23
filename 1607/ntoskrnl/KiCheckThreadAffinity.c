/*
 * XREFs of KiCheckThreadAffinity @ 0x1400CEFD4
 * Callers:
 *     KiSelectNextThread @ 0x1400C8450 (KiSelectNextThread.c)
 *     KiQueueReadyThread @ 0x1400CEB10 (KiQueueReadyThread.c)
 *     KiQuantumEnd @ 0x1400CF620 (KiQuantumEnd.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1401115F4 (KiUpdateGlobalCpuSetConfiguration.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiCheckThreadAffinity(__int64 a1)
{
  return *(_QWORD *)(a1 + 568) == KiCpuSetSequence || (*(_DWORD *)(a1 + 116) & 8) != 0;
}
