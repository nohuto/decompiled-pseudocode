/*
 * XREFs of NtRequestPort @ 0x1404BFE1C
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 */

NTSTATUS __stdcall NtRequestPort(HANDLE PortHandle, PPORT_MESSAGE LpcMessage)
{
  NTSTATUS v3; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset(v6, 0, 64);
  v3 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v3 >= 0 )
  {
    v6[0] = (__int64)Object;
    CurrentThread = KeGetCurrentThread();
    LODWORD(v6[6]) = 0x10000;
    --CurrentThread->KernelApcDisable;
    v3 = AlpcpSendMessage(v6, (__m256i *)LpcMessage, 0LL, KeGetCurrentThread()->PreviousMode);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(Object);
  }
  return v3;
}
