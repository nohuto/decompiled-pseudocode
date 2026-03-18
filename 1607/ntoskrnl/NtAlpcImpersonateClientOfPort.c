/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x14050DF50
 * Callers:
 *     NtImpersonateClientOfPort @ 0x140654900 (NtImpersonateClientOfPort.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     AlpcpImpersonateMessage @ 0x14050E0D0 (AlpcpImpersonateMessage.c)
 *     AlpcpLookupMessage @ 0x14050E300 (AlpcpLookupMessage.c)
 *     AlpcpUnlockBlob @ 0x14050E530 (AlpcpUnlockBlob.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140654ED8 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAlpcImpersonateClientOfPort(HANDLE Handle, __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  unsigned int v6; // edi
  unsigned int v7; // esi
  unsigned int v8; // r14d
  NTSTATUS v9; // ebx
  __int64 v10; // rdx
  PVOID v11; // rdi
  ULONG_PTR v12; // rsi
  ULONG_PTR BugCheckParameter2[4]; // [rsp+38h] [rbp-20h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (*(_WORD *)(a2 + 4) & 0x1000) != 0 )
  {
    v6 = *(_DWORD *)(a2 + 16);
    v7 = *(_DWORD *)(a2 + 20);
  }
  else
  {
    if ( PreviousMode && (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = *(_DWORD *)(a2 + 24);
    v7 = *(_DWORD *)(a2 + 32);
  }
  if ( v6 && a3 < 2 )
  {
    v8 = 0;
    v9 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v9 >= 0 )
    {
      v10 = v6;
      v11 = Object;
      v9 = AlpcpLookupMessage(Object, v10, v7, BugCheckParameter2);
      if ( v9 >= 0 )
      {
        LOBYTE(v8) = a3 == 1;
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
  return (unsigned int)v9;
}
