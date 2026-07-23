/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x140479CB0
 * Callers:
 *     NtImpersonateClientOfPort @ 0x14069E444 (NtImpersonateClientOfPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpImpersonateMessage @ 0x140479ED0 (AlpcpImpersonateMessage.c)
 *     AlpcpLookupMessage @ 0x14047A7B0 (AlpcpLookupMessage.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, PVOID Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  unsigned int MessageId; // ebx
  unsigned int CallbackId; // edi
  int v8; // r14d
  __int64 v9; // r8
  PVOID v10; // rdi
  ULONG_PTR v11; // rbx
  int v12; // edi
  char v13; // cl
  signed __int64 v14; // rcx
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && ((unsigned __int8)Message & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (Message->u2.s2.Type & 0x1000) != 0 )
  {
    MessageId = *((_DWORD *)&Message->DoNotUseThisField + 2);
    CallbackId = *((_DWORD *)&Message->DoNotUseThisField + 3);
  }
  else
  {
    if ( PreviousMode && ((unsigned __int8)Message & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    MessageId = Message->MessageId;
    CallbackId = Message->CallbackId;
  }
  if ( MessageId && (unsigned __int64)Flags < 2 )
  {
    v8 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v8 >= 0 )
    {
      v9 = CallbackId;
      v10 = Object;
      v8 = AlpcpLookupMessage(Object, MessageId, v9, &BugCheckParameter2);
      if ( v8 >= 0 )
      {
        v11 = BugCheckParameter2;
        v8 = AlpcpImpersonateMessage(v10, BugCheckParameter2, Flags == (PVOID)1);
        if ( AlpcpMessageLogEnabled )
          AlpcpEnterStateChangeEventMessageLog(v11);
        v12 = 0;
        v13 = *(_BYTE *)(v11 - 32);
        if ( (v13 & 1) != 0 )
        {
          v12 = 0x10000 - *(__int16 *)(v11 - 30);
          *(_BYTE *)(v11 - 32) = v13 & 0xFE;
          *(_WORD *)(v11 - 30) = 0;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v11 - 16));
        KeAbPostRelease(v11 - 16);
        if ( v12 > 0 )
        {
          v14 = -v12 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 24), -v12);
          if ( v14 <= 0 )
          {
            if ( v14 )
              KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v14);
            AlpcpDestroyBlob(BugCheckParameter2);
          }
        }
        v10 = Object;
      }
      ObfDereferenceObject(v10);
    }
  }
  else
  {
    v8 = -1073741811;
  }
  v15 = KeGetCurrentThread();
  v16 = v15->KernelApcDisable + 1;
  v15->KernelApcDisable = v16;
  if ( !v16
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
    && !v15->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v8;
}
