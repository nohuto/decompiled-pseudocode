/*
 * XREFs of KiComputeProcessorDataSize @ 0x1403F7128
 * Callers:
 *     KiStartDynamicProcessor @ 0x14069849C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1407D3888 (KeStartAllProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeProcessorDataSize(int a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // ecx

  v3 = ((((a1 << 6) + 32831) & 0xFFFFFFC0) + 40128) & 0xFFFFF000;
  *a3 = v3 + 4096;
  *a2 = v3 + 16304;
  return v3 + 28672;
}
