/*
 * XREFs of NtAcceptConnectPort @ 0x1404B8D48
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     AlpcpAcceptConnectPort @ 0x14047D9CC (AlpcpAcceptConnectPort.c)
 */

NTSTATUS __stdcall NtAcceptConnectPort(
        PHANDLE PortHandle,
        PVOID PortContext,
        PPORT_MESSAGE ConnectionRequest,
        BOOLEAN AcceptConnection,
        PPORT_VIEW ServerView,
        PREMOTE_PORT_VIEW ClientView)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = AlpcpAcceptConnectPort(
         (ULONG64)PortHandle,
         0,
         0LL,
         0LL,
         0LL,
         PortContext,
         (__int128 *)&ConnectionRequest->u1.s1.DataLength,
         0LL,
         AcceptConnection,
         (__m128i *)ServerView,
         (ULONG64)ClientView,
         1);
  KeLeaveCriticalRegion();
  if ( v7 == -1073740029 )
    return -1073741813;
  return v7;
}
