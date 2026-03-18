/*
 * XREFs of ?s_EndpointProc@CManipulationManager@@CAJAEBUMessageCallThreadInfo@1@PEAXPEBXH@Z @ 0x18016B5C4
 * Callers:
 *     ?s_ManipulationThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z @ 0x18016B630 (-s_ManipulationThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z.c)
 *     ?s_RenderThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z @ 0x18016B6A0 (-s_RenderThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CManipulationManager::s_EndpointProc(
        const struct CManipulationManager::MessageCallThreadInfo *a1,
        void *a2,
        const void *a3,
        int a4)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = CoreUICallReceive(
         *((_QWORD *)a1 + 2),
         &IManipulation_Receive<CManipulationManager>::Type,
         &g_parameters_nUpgr3xaG6loj6Q3yRoUp63Ij3A,
         163LL,
         a2,
         a3,
         a4);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x74Au);
  return v5;
}
