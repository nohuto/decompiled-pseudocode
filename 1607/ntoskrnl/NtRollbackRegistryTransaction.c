/*
 * XREFs of NtRollbackRegistryTransaction @ 0x140546394
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     CmpRollbackLightWeightTransaction @ 0x1404E979C (CmpRollbackLightWeightTransaction.c)
 */

__int64 __fastcall NtRollbackRegistryTransaction(HANDLE Handle, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  NTSTATUS v8; // eax
  PVOID v9; // rdi
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    if ( a2 )
    {
      v10 = -1073741811;
    }
    else
    {
      v8 = ObReferenceObjectByHandle(
             Handle,
             0x10u,
             CmRegistryTransactionType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
      v9 = Object;
      v10 = v8;
      if ( v8 >= 0 )
      {
        v10 = CmpRollbackLightWeightTransaction((volatile signed __int32 *)Object);
        if ( v10 >= 0 )
          v10 = 0;
      }
      if ( v9 )
        ObfDereferenceObject(v9);
    }
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v10;
}
