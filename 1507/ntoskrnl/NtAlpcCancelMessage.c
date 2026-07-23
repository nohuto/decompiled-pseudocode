/*
 * XREFs of NtAlpcCancelMessage @ 0x14052BA0C
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
 *     AlpcpCancelMessage @ 0x14052BBC4 (AlpcpCancelMessage.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  ULONG MessageContext_high; // r14d
  ULONG Sequence; // r12d
  PVOID PortContext_high; // r15
  NTSTATUS v9; // edi
  int v10; // edx
  _DWORD *v11; // r14
  ULONG_PTR v12; // rdi
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  int v17; // r14d
  char v18; // cl
  signed __int64 v19; // rcx
  int v20; // r14d
  char v21; // cl
  signed __int64 v22; // rcx
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF
  PVOID v24; // [rsp+40h] [rbp-38h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (Flags & 0xFFFFFFF0) != 0 )
  {
    v9 = -1073741811;
    goto LABEL_18;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (Flags & 4) != 0 )
    {
      if ( ((unsigned __int8)MessageContext & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      MessageContext_high = HIDWORD(MessageContext->MessageContext);
      Sequence = MessageContext->Sequence;
      PortContext_high = (PVOID)HIDWORD(MessageContext->PortContext);
    }
    else
    {
      if ( ((unsigned __int8)MessageContext & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      MessageContext_high = MessageContext->MessageId;
      Sequence = MessageContext->CallbackId;
      PortContext_high = MessageContext->MessageContext;
    }
    v24 = PortContext_high;
  }
  else
  {
    MessageContext_high = MessageContext->MessageId;
    Sequence = MessageContext->CallbackId;
    PortContext_high = MessageContext->MessageContext;
    v24 = PortContext_high;
  }
  if ( !MessageContext_high )
  {
    v9 = -1073741559;
    goto LABEL_18;
  }
  v9 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v9 >= 0 )
  {
    v10 = MessageContext_high;
    v11 = Object;
    v9 = AlpcpLookupMessage((__int64)Object, v10, Sequence, &BugCheckParameter2);
    if ( v9 >= 0 )
    {
      v12 = BugCheckParameter2;
      if ( (Flags & 8) != 0
        && !((v11[104] & 6) == 4
           ? PortContext_high == *(PVOID *)(BugCheckParameter2 + 104)
           : PortContext_high == *(PVOID *)(BugCheckParameter2 + 112)) )
      {
        if ( AlpcpMessageLogEnabled )
          AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
        v17 = 0;
        v18 = *(_BYTE *)(v12 - 32);
        if ( (v18 & 1) != 0 )
        {
          v17 = 0x10000 - *(__int16 *)(v12 - 30);
          *(_BYTE *)(v12 - 32) = v18 & 0xFE;
          *(_WORD *)(v12 - 30) = 0;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v12 - 16));
        KeAbPostRelease(v12 - 16);
        if ( v17 > 0 )
        {
          v19 = -v17 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 - 24), -v17);
          if ( v19 <= 0 )
          {
            if ( v19 )
              KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v19);
            AlpcpDestroyBlob(BugCheckParameter2);
          }
        }
        v9 = -1073740007;
LABEL_44:
        v11 = Object;
        goto LABEL_17;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
      {
        if ( AlpcpMessageLogEnabled )
          AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
        v20 = 0;
        v21 = *(_BYTE *)(v12 - 32);
        if ( (v21 & 1) != 0 )
        {
          v20 = 0x10000 - *(__int16 *)(v12 - 30);
          *(_BYTE *)(v12 - 32) = v21 & 0xFE;
          *(_WORD *)(v12 - 30) = 0;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v12 - 16));
        KeAbPostRelease(v12 - 16);
        if ( v20 > 0 )
        {
          v22 = -v20 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 - 24), -v20);
          if ( v22 <= 0 )
          {
            if ( v22 )
              KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v22);
            AlpcpDestroyBlob(BugCheckParameter2);
          }
        }
        v9 = -1073740029;
        goto LABEL_44;
      }
      v9 = AlpcpCancelMessage(v11, BugCheckParameter2, Flags);
    }
LABEL_17:
    ObfDereferenceObject(v11);
  }
LABEL_18:
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v9;
}
