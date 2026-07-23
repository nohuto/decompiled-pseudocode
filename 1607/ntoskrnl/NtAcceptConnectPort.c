/*
 * XREFs of NtAcceptConnectPort @ 0x14049D9F8
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     AlpcpAcceptConnectPort @ 0x14049EE08 (AlpcpAcceptConnectPort.c)
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
  char v10; // [rsp+58h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = 1;
  v7 = AlpcpAcceptConnectPort(
         PortHandle,
         0LL,
         0LL,
         0LL,
         0LL,
         PortContext,
         ConnectionRequest,
         0LL,
         AcceptConnection,
         ServerView,
         ClientView,
         v10);
  KeLeaveCriticalRegion();
  if ( v7 == -1073740029 )
    return -1073741813;
  return v7;
}
