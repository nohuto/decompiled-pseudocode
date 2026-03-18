/*
 * XREFs of ?s_LpcCommandHandler@CDwmAppHost@@CAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140001060
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x1400012E0 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 */

__int64 __fastcall CDwmAppHost::s_LpcCommandHandler(
        struct CPortMessage *a1,
        const struct PORT_CONTEXT *a2,
        const struct PORT_CONTEXT *a3,
        int *a4)
{
  return CDwmAppHost::ProcessLPCCommand(a1, a1, a3, (int *)a3, a4);
}
