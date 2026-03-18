/*
 * XREFs of NtRequestPort @ 0x140541A44
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtRequestPort(HANDLE PortHandle, PPORT_MESSAGE LpcMessage)
{
  int v3; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  struct _KTHREAD *v6; // rdx
  __int16 v7; // cx
  _QWORD v9[8]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset(v9, 0, sizeof(v9));
  v3 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v3 >= 0 )
  {
    v9[0] = Object;
    CurrentThread = KeGetCurrentThread();
    LODWORD(v9[6]) = 0x10000;
    --CurrentThread->KernelApcDisable;
    v5 = AlpcpSendMessage((__int64)v9, (__m256i *)LpcMessage, 0LL, KeGetCurrentThread()->PreviousMode);
    v6 = KeGetCurrentThread();
    v3 = v5;
    v7 = v6->KernelApcDisable + 1;
    v6->KernelApcDisable = v7;
    if ( !v7
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
      && !v6->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ObfDereferenceObject(Object);
  }
  return v3;
}
