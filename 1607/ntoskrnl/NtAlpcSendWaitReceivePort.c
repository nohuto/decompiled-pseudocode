/*
 * XREFs of NtAlpcSendWaitReceivePort @ 0x140448140
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E490 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     AlpcpSignal @ 0x14005DED0 (AlpcpSignal.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     AlpcpProcessSynchronousRequest @ 0x140447A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404483A0 (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     AlpcpTrackPortReferences @ 0x1404C0BB0 (AlpcpTrackPortReferences.c)
 */

NTSTATUS __cdecl NtAlpcSendWaitReceivePort(
        HANDLE PortHandle,
        ULONG Flags,
        PPORT_MESSAGE SendMessageA,
        PALPC_MESSAGE_ATTRIBUTES SendMessageAttributes,
        PPORT_MESSAGE ReceiveMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v11; // ebx
  unsigned __int8 v12; // r14
  NTSTATUS v13; // esi
  int v14; // r9d
  PVOID v15; // rdi
  KPROCESSOR_MODE v18; // al
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v20[3]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v21; // [rsp+78h] [rbp-40h]
  PVOID v22; // [rsp+80h] [rbp-38h]
  __int64 v23; // [rsp+88h] [rbp-30h]
  _QWORD v24[2]; // [rsp+90h] [rbp-28h] BYREF

  memset(v20, 0, sizeof(v20));
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24[0] = 0LL;
  v24[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = Flags & 0xFFFF0000;
  v12 = KeGetCurrentThread()->gap0[10];
  v13 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, v12, &Object, 0LL);
  if ( v13 >= 0 )
  {
    v15 = Object;
    if ( (v11 & 0x40000) != 0 )
      AlpcpTrackPortReferences(Object);
    if ( (v11 & 0x20000) != 0 )
    {
      if ( SendMessageA && (v11 & 0x10000) == 0 && (v11 & 0x1000000) == 0 )
      {
        if ( ReceiveMessage )
        {
          if ( (v11 & 0x100000) != 0 )
            v18 = 1;
          else
            v18 = v12;
          v13 = AlpcpProcessSynchronousRequest(
                  (__int64)v15,
                  v11,
                  (__int64)SendMessageA,
                  (__int64)SendMessageAttributes,
                  (unsigned __int64)ReceiveMessage,
                  BufferLength,
                  ReceiveMessageAttributes,
                  Timeout,
                  v12,
                  v18);
        }
        else
        {
          v13 = -1073740027;
        }
        goto LABEL_9;
      }
    }
    else
    {
      v20[0] = v15;
      LODWORD(v24[0]) = v11;
      if ( !SendMessageA )
      {
LABEL_6:
        if ( ReceiveMessage )
          v13 = AlpcpReceiveMessage(
                  (unsigned int)v20,
                  (_DWORD)ReceiveMessage,
                  (_DWORD)BufferLength,
                  (_DWORD)ReceiveMessageAttributes,
                  (__int64)Timeout);
        if ( _bittestandreset((signed __int32 *)v24, 2u) )
        {
          AlpcpSignal((__int64)v20, 0, 0, v14);
          if ( v22 )
            ObfDereferenceObject(v22);
        }
        goto LABEL_9;
      }
      if ( (v11 & 0x1000000) == 0 )
      {
        v22 = 0LL;
        LODWORD(v24[0]) = v11 | 4;
        v21 = 0LL;
        v23 = 0LL;
        v13 = AlpcpSendMessage(v20, SendMessageA, SendMessageAttributes, v12);
        if ( v13 >= 0 )
          goto LABEL_6;
LABEL_9:
        ObfDereferenceObject(v15);
        goto LABEL_10;
      }
    }
    v13 = -1073741584;
    goto LABEL_9;
  }
LABEL_10:
  KeLeaveCriticalRegion();
  return v13;
}
