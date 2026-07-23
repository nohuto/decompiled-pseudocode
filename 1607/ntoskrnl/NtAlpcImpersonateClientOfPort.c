/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x1404F0EE0
 * Callers:
 *     NtImpersonateClientOfPort @ 0x1406549E4 (NtImpersonateClientOfPort.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     AlpcpImpersonateMessage @ 0x1404F1060 (AlpcpImpersonateMessage.c)
 *     AlpcpLookupMessage @ 0x1404F1290 (AlpcpLookupMessage.c)
 *     AlpcpUnlockBlob @ 0x1404F14C0 (AlpcpUnlockBlob.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140654FBC (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, PVOID Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  unsigned int MessageId; // edi
  unsigned int CallbackId; // esi
  unsigned int v8; // r14d
  int v9; // ebx
  __int64 v10; // rdx
  PVOID v11; // rdi
  ULONG_PTR v12; // rsi
  ULONG_PTR BugCheckParameter2[4]; // [rsp+38h] [rbp-20h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

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
    v8 = 0;
    v9 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v9 >= 0 )
    {
      v10 = MessageId;
      v11 = Object;
      v9 = AlpcpLookupMessage(Object, v10, CallbackId, BugCheckParameter2);
      if ( v9 >= 0 )
      {
        LOBYTE(v8) = Flags == (PVOID)1;
        v12 = BugCheckParameter2[0];
        v9 = AlpcpImpersonateMessage(v11, BugCheckParameter2[0], v8);
        if ( AlpcpMessageLogEnabled )
          AlpcpEnterStateChangeEventMessageLog(v12);
        AlpcpUnlockBlob(v12);
      }
      ObfDereferenceObject(v11);
    }
  }
  else
  {
    v9 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return v9;
}
