/*
 * XREFs of NtReplyPort @ 0x140482478
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404812A0 (AlpcpReplyLegacySynchronousRequest.c)
 */

NTSTATUS __stdcall NtReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v4; // ebx
  struct _KTHREAD *v5; // rax
  char PreviousMode; // r9
  __int64 v8[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset(v8, 0, 64);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    LODWORD(v8[6]) = 0;
    v8[0] = (__int64)Object;
    v5 = KeGetCurrentThread();
    if ( (*((_DWORD *)Object + 104) & 0x2000) != 0 )
    {
      v4 = AlpcpReplyLegacySynchronousRequest((__int64)v8, (__int64)LpcReply, v5->PreviousMode);
    }
    else
    {
      PreviousMode = v5->PreviousMode;
      LODWORD(v8[6]) = 65537;
      v4 = AlpcpSendMessage(v8, (__m256i *)LpcReply, 0LL, PreviousMode);
      if ( v4 == -1073740029 )
        v4 = -1073741769;
    }
    ObfDereferenceObject(Object);
  }
  KeLeaveCriticalRegion();
  return v4;
}
