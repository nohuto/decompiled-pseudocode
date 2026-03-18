/*
 * XREFs of KiComputeProcessorDataSize @ 0x1403A6C04
 * Callers:
 *     KiStartDynamicProcessor @ 0x140619E80 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140762F20 (KeStartAllProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeProcessorDataSize(int a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v3; // ecx

  v3 = ((((a1 << 6) + 32831) & 0xFFFFFFC0) + 31936) & 0xFFFFF000;
  *a3 = v3;
  *a2 = v3 + 12208;
  return v3 + 20480;
}
