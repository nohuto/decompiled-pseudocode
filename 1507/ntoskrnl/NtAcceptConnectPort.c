/*
 * XREFs of NtAcceptConnectPort @ 0x1405510A0
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     AlpcpAcceptConnectPort @ 0x140471474 (AlpcpAcceptConnectPort.c)
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
  NTSTATUS v7; // eax
  struct _KTHREAD *v8; // rdx
  NTSTATUS v9; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = AlpcpAcceptConnectPort(
         PortHandle,
         0,
         0LL,
         0LL,
         0LL,
         PortContext,
         (ULONG64)ConnectionRequest,
         0LL,
         AcceptConnection,
         (ULONG64)ServerView,
         (ULONG64)ClientView,
         1);
  v8 = KeGetCurrentThread();
  v9 = v7;
  LOWORD(v7) = v8->KernelApcDisable + 1;
  v8->KernelApcDisable = v7;
  if ( !(_WORD)v7
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
    && !v8->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v9 == -1073740029 )
    return -1073741813;
  return v9;
}
