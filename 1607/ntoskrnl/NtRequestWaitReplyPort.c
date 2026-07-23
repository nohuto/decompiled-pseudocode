/*
 * XREFs of NtRequestWaitReplyPort @ 0x14049D214
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     LpcpRequestWaitReplyPort @ 0x14049D2A8 (LpcpRequestWaitReplyPort.c)
 */

NTSTATUS __stdcall NtRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply, PPORT_MESSAGE LpcRequest)
{
  int v4; // ebp
  KPROCESSOR_MODE PreviousMode; // di
  int v6; // ebx
  int v7; // r9d
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  v4 = (int)LpcReply;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v6 >= 0 )
  {
    LOBYTE(v7) = PreviousMode;
    v6 = LpcpRequestWaitReplyPort((int)Object, v4, (__int64)LpcRequest, v7, PreviousMode, 0);
    ObfDereferenceObject(Object);
  }
  return v6;
}
