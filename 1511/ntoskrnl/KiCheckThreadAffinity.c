/*
 * XREFs of KiCheckThreadAffinity @ 0x14002A76C
 * Callers:
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiSelectNextThread @ 0x14002A940 (KiSelectNextThread.c)
 *     KiQuantumEnd @ 0x14007AAB0 (KiQuantumEnd.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140106E54 (KiUpdateGlobalCpuSetConfiguration.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiCheckThreadAffinity(__int64 a1)
{
  return *(_QWORD *)(a1 + 568) == KiCpuSetSequence || (*(_DWORD *)(a1 + 116) & 8) != 0;
}
