/*
 * XREFs of VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0011740
 * Callers:
 *     VidSchGetNodeOrdinal @ 0x1C0066FA8 (VidSchGetNodeOrdinal.c)
 *     VidSchCreateContext @ 0x1C0067490 (VidSchCreateContext.c)
 *     VidSchiPreemptEngineNodes @ 0x1C0068BF8 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C00A01A0 (VidSchiResetEngines.c)
 *     VidSchInitializeComponentPowerManagement @ 0x1C00A1050 (VidSchInitializeComponentPowerManagement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiDriverNodeEngineToSchedulerNode(__int64 a1, int a2, unsigned int a3)
{
  return a2 + (unsigned int)*(unsigned __int8 *)(a3 + a1 + 64);
}
