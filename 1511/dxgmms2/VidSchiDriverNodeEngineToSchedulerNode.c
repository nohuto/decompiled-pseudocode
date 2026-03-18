/*
 * XREFs of VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0013D98
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     VidSchCreateContext @ 0x1C005FA70 (VidSchCreateContext.c)
 *     VidSchiPreemptEngineNodes @ 0x1C0061B00 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C008A9C4 (VidSchiResetEngines.c)
 *     VidSchInitializeComponentPowerManagement @ 0x1C008B6F0 (VidSchInitializeComponentPowerManagement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiDriverNodeEngineToSchedulerNode(__int64 a1, int a2, unsigned int a3)
{
  return a2 + (unsigned int)*(unsigned __int8 *)(a3 + a1 + 60);
}
