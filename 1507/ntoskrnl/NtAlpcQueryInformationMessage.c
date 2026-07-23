/*
 * XREFs of NtAlpcQueryInformationMessage @ 0x140530090
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpLookupMessage @ 0x14047A7B0 (AlpcpLookupMessage.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     AlpcpQuerySidMessage @ 0x140530388 (AlpcpQuerySidMessage.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x14069F504 (AlpcpQueryTokenModifiedIdMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcQueryInformationMessage(
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ALPC_MESSAGE_INFORMATION_CLASS MessageInformationClass,
        PVOID MessageInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  HANDLE v7; // r10
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // si
  unsigned int MessageId; // r14d
  unsigned int CallbackId; // r13d
  PULONG v12; // r15
  _DWORD *v13; // rcx
  NTSTATUS v14; // esi
  int v15; // r8d
  PVOID v16; // r13
  ULONG_PTR v17; // r14
  __int32 v18; // r12d
  int v19; // r15d
  char v20; // cl
  signed __int64 v21; // rcx
  PVOID v22; // rcx
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  NTSTATUS TokenModifiedIdMessage; // eax
  unsigned int v27; // [rsp+34h] [rbp-44h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-40h] BYREF
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF

  v7 = PortHandle;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && ((unsigned __int8)PortMessage & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (PortMessage->u2.s2.Type & 0x1000) != 0 )
  {
    MessageId = *((_DWORD *)&PortMessage->DoNotUseThisField + 2);
    v27 = MessageId;
    CallbackId = *((_DWORD *)&PortMessage->DoNotUseThisField + 3);
  }
  else
  {
    if ( PreviousMode && ((unsigned __int8)PortMessage & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    MessageId = PortMessage->MessageId;
    v27 = MessageId;
    CallbackId = PortMessage->CallbackId;
  }
  if ( PreviousMode )
  {
    ProbeForWrite(MessageInformation, Length, 4u);
    v12 = ReturnLength;
    if ( ReturnLength )
    {
      v13 = ReturnLength;
      if ( (unsigned __int64)ReturnLength >= MmUserProbeAddress )
        v13 = (_DWORD *)MmUserProbeAddress;
      *v13 = *v13;
      MessageId = v27;
    }
    v7 = PortHandle;
  }
  else
  {
    v12 = ReturnLength;
  }
  if ( !MessageId )
  {
    v14 = -1073741811;
    goto LABEL_39;
  }
  v14 = ObReferenceObjectByHandle(v7, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v14 >= 0 )
  {
    v15 = CallbackId;
    v16 = Object;
    v14 = AlpcpLookupMessage((__int64)Object, MessageId, v15, &BugCheckParameter2);
    if ( v14 < 0 )
    {
      v22 = v16;
LABEL_38:
      ObfDereferenceObject(v22);
      goto LABEL_39;
    }
    v17 = BugCheckParameter2;
    if ( *(_QWORD *)(BugCheckParameter2 + 24) )
    {
      if ( MessageInformationClass )
      {
        v18 = MessageInformationClass - 1;
        if ( v18 )
        {
          if ( v18 != 1 || MessageInformation || Length || v12 )
          {
            v14 = -1073741811;
          }
          else
          {
            v14 = 0;
            if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 7) != 4 )
              v14 = 259;
          }
          goto LABEL_29;
        }
        TokenModifiedIdMessage = AlpcpQueryTokenModifiedIdMessage(
                                   (_DWORD)v16,
                                   BugCheckParameter2,
                                   (_DWORD)MessageInformation,
                                   Length,
                                   (__int64)v12);
      }
      else
      {
        TokenModifiedIdMessage = AlpcpQuerySidMessage(
                                   (_DWORD)v16,
                                   BugCheckParameter2,
                                   (_DWORD)MessageInformation,
                                   Length,
                                   (__int64)v12);
      }
      v14 = TokenModifiedIdMessage;
    }
    else
    {
      v14 = -1073740029;
    }
LABEL_29:
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v17);
    v19 = 0;
    v20 = *(_BYTE *)(v17 - 32);
    if ( (v20 & 1) != 0 )
    {
      v19 = 0x10000 - *(__int16 *)(v17 - 30);
      *(_BYTE *)(v17 - 32) = v20 & 0xFE;
      *(_WORD *)(v17 - 30) = 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v17 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v17 - 16));
    KeAbPostRelease(v17 - 16);
    if ( v19 > 0 )
    {
      v21 = -v19 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 - 24), -v19);
      if ( v21 <= 0 )
      {
        if ( v21 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v21);
        AlpcpDestroyBlob(BugCheckParameter2);
      }
    }
    v22 = Object;
    goto LABEL_38;
  }
LABEL_39:
  v23 = KeGetCurrentThread();
  v24 = v23->KernelApcDisable + 1;
  v23->KernelApcDisable = v24;
  if ( !v24
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
    && !v23->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v14;
}
