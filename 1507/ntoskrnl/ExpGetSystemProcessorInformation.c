/*
 * XREFs of ExpGetSystemProcessorInformation @ 0x1400143B0
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140014408 (KeQueryMaximumProcessorCountEx.c)
 *     ExSystemExceptionFilter @ 0x14040A5E8 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall ExpGetSystemProcessorInformation(__int64 a1)
{
  *(_WORD *)a1 = KeProcessorArchitecture;
  *(_WORD *)(a1 + 2) = KeProcessorLevel;
  *(_WORD *)(a1 + 4) = KeProcessorRevision;
  *(_WORD *)(a1 + 6) = KeQueryMaximumProcessorCountEx(0xFFFFu);
  *(_DWORD *)(a1 + 8) = KeFeatureBits;
  return 0LL;
}
