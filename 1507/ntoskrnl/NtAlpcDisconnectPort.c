/*
 * XREFs of NtAlpcDisconnectPort @ 0x1404A301C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     AlpcpDisconnectPort @ 0x1404A3D10 (AlpcpDisconnectPort.c)
 */

NTSTATUS __cdecl NtAlpcDisconnectPort(HANDLE PortHandle, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // ebx
  struct _KTHREAD *v4; // rdx
  __int16 v5; // cx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    v3 = -1073741811;
  }
  else
  {
    v3 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v3 >= 0 )
    {
      v3 = AlpcpDisconnectPort(Object);
      ObfDereferenceObject(Object);
    }
  }
  v4 = KeGetCurrentThread();
  v5 = v4->KernelApcDisable + 1;
  v4->KernelApcDisable = v5;
  if ( !v5
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v4->ApcState.ApcListHead[0].Flink != &v4->152
    && !v4->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v3;
}
