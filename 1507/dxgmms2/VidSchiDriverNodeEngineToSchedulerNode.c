/*
 * XREFs of VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0005B54
 * Callers:
 *     VidSchCreateContext @ 0x1C00326F0 (VidSchCreateContext.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C003A22C (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     VidSchiPreemptEngineNodes @ 0x1C0076A74 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C0076C98 (VidSchiResetEngines.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiDriverNodeEngineToSchedulerNode(__int64 a1, int a2, unsigned int a3)
{
  return a2 + (unsigned int)*(unsigned __int8 *)(a3 + a1 + 60);
}
