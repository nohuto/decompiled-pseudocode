/*
 * XREFs of NtReplyPort @ 0x14052ED7C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14052EE8C (AlpcpReplyLegacySynchronousRequest.c)
 */

NTSTATUS __stdcall NtReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v4; // ebx
  __int64 v5; // r8
  struct _KTHREAD *v6; // rax
  struct _KTHREAD *v7; // rcx
  __int16 v8; // ax
  char PreviousMode; // r9
  _QWORD v11[8]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset(v11, 0, sizeof(v11));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v11[0] = Object;
    LODWORD(v11[6]) = 0;
    v6 = KeGetCurrentThread();
    if ( (*((_DWORD *)Object + 104) & 0x2000) != 0 )
    {
      LOBYTE(v5) = v6->PreviousMode;
      v4 = AlpcpReplyLegacySynchronousRequest(v11, LpcReply, v5);
    }
    else
    {
      PreviousMode = v6->PreviousMode;
      LODWORD(v11[6]) = 65537;
      v4 = AlpcpSendMessage((__int64)v11, (__m256i *)LpcReply, 0LL, PreviousMode);
      if ( v4 == -1073740029 )
        v4 = -1073741769;
    }
    ObfDereferenceObject(Object);
  }
  v7 = KeGetCurrentThread();
  v8 = v7->KernelApcDisable + 1;
  v7->KernelApcDisable = v8;
  if ( !v8
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v7->ApcState.ApcListHead[0].Flink != &v7->152
    && !v7->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v4;
}
