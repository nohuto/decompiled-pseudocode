/*
 * XREFs of NtAlpcSendWaitReceivePort @ 0x14047B5F0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14009D900 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     AlpcpSignal @ 0x1400444B0 (AlpcpSignal.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     AlpcpProcessSynchronousRequest @ 0x14047AD50 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x14047B8A0 (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
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
  unsigned __int8 v12; // r15
  NTSTATUS v13; // esi
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // rdi
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  KPROCESSOR_MODE v21; // al
  signed __int32 v22; // r12d
  signed __int32 v23; // r12d
  __int64 v24; // rax
  __int64 v25; // r9
  unsigned __int64 *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  PVOID Object; // [rsp+58h] [rbp-49h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-41h]
  __int64 v31; // [rsp+68h] [rbp-39h]
  _QWORD v32[3]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v33; // [rsp+90h] [rbp-11h]
  PVOID v34; // [rsp+98h] [rbp-9h]
  __int64 v35; // [rsp+A0h] [rbp-1h]
  _QWORD v36[2]; // [rsp+A8h] [rbp+7h] BYREF

  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36[0] = 0LL;
  v36[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  memset(v32, 0, sizeof(v32));
  --CurrentThread->KernelApcDisable;
  v11 = Flags & 0xFFFF0000;
  v12 = KeGetCurrentThread()->gap0[10];
  v13 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, v12, &Object, 0LL);
  if ( v13 >= 0 )
  {
    if ( (v11 & 0x40000) != 0 )
    {
      v22 = _InterlockedExchangeAdd((volatile signed __int32 *)Object + 101, 1u);
      v16 = (char *)Object;
      v23 = v22 + 1;
      if ( !*((_QWORD *)Object + 51) )
      {
LABEL_4:
        if ( (v11 & 0x20000) != 0 )
        {
          if ( SendMessageA )
          {
            if ( (v11 & 0x10000) != 0 )
            {
              v13 = -1073741584;
            }
            else if ( (v11 & 0x1000000) != 0 )
            {
              v13 = -1073741584;
            }
            else if ( ReceiveMessage )
            {
              if ( (v11 & 0x100000) != 0 )
                v21 = 1;
              else
                v21 = v12;
              v13 = AlpcpProcessSynchronousRequest(
                      (__int64)v16,
                      v11,
                      (__int64)SendMessageA,
                      (__int64)SendMessageAttributes,
                      (ULONG64)ReceiveMessage,
                      BufferLength,
                      ReceiveMessageAttributes,
                      Timeout,
                      v12,
                      v21);
            }
            else
            {
              v13 = -1073740027;
            }
          }
          else
          {
            v13 = -1073741584;
          }
        }
        else
        {
          v32[0] = v16;
          LODWORD(v36[0]) = v11;
          if ( !SendMessageA )
          {
LABEL_6:
            if ( ReceiveMessage )
              v13 = AlpcpReceiveMessage(v32, ReceiveMessage, BufferLength, ReceiveMessageAttributes, Timeout);
            if ( _bittestandreset((signed __int32 *)v36, 2u) )
            {
              AlpcpSignal((__int64)v32, 0, v14, v15);
              if ( v34 )
                ObfDereferenceObject(v34);
            }
            goto LABEL_9;
          }
          if ( (v11 & 0x1000000) != 0 )
          {
            v13 = -1073741584;
          }
          else
          {
            v34 = 0LL;
            LODWORD(v36[0]) = v11 | 4;
            v33 = 0LL;
            v35 = 0LL;
            v13 = AlpcpSendMessage(v32, SendMessageA, SendMessageAttributes, v12);
            if ( v13 >= 0 )
              goto LABEL_6;
          }
        }
LABEL_9:
        ObfDereferenceObject(v16);
        goto LABEL_10;
      }
      BugCheckParameter2 = (ULONG_PTR)Object + 352;
      v24 = KeAbPreAcquire((ULONG_PTR)Object + 352, 0LL, 0LL, v15);
      v26 = (unsigned __int64 *)(v16 + 352);
      v31 = v24;
      v27 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v16 + 88, 0LL) )
      {
        ExfAcquirePushLockExclusiveEx(v26, v24, (ULONG_PTR)(v16 + 352), v25);
        v27 = v31;
        v26 = (unsigned __int64 *)(v16 + 352);
      }
      if ( v27 )
        *(_BYTE *)(v27 + 26) |= 1u;
      v28 = *((_QWORD *)v16 + 51);
      if ( v28 && v23 == *(_DWORD *)(v28 + 24) )
      {
        KeSetEvent(*((PRKEVENT *)v16 + 51), 0, 0);
        v26 = (unsigned __int64 *)BugCheckParameter2;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock((volatile signed __int64 *)v26);
        v26 = (unsigned __int64 *)BugCheckParameter2;
      }
      KeAbPostRelease((ULONG_PTR)v26);
    }
    v16 = (char *)Object;
    goto LABEL_4;
  }
LABEL_10:
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v13;
}
