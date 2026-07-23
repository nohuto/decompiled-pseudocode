/*
 * XREFs of NtReplyWaitReplyPort @ 0x140654B10
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     LpcpReplyWaitReplyPort @ 0x14065492C (LpcpReplyWaitReplyPort.c)
 */

NTSTATUS __stdcall NtReplyWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE ReplyMessage)
{
  char PreviousMode; // si
  NTSTATUS v4; // edi
  PVOID v5; // rbx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v4 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v5 = Object;
    if ( (*((_DWORD *)Object + 104) & 6) == 2 )
    {
      ObfDereferenceObject(Object);
      return -1073741811;
    }
    else
    {
      v4 = LpcpReplyWaitReplyPort((__int64)Object, (unsigned __int64)ReplyMessage, PreviousMode, PreviousMode);
      ObfDereferenceObject(v5);
    }
  }
  return v4;
}
