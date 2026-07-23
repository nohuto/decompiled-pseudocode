/*
 * XREFs of NtCommitRegistryTransaction @ 0x14053ACE8
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     CmpCommitLightWeightTransaction @ 0x14053ADB0 (CmpCommitLightWeightTransaction.c)
 */

NTSTATUS __cdecl NtCommitRegistryTransaction(HANDLE RegistryTransactionHandle, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  NTSTATUS v8; // eax
  PVOID v9; // rdi
  NTSTATUS v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    if ( Flags )
    {
      v10 = -1073741811;
    }
    else
    {
      v8 = ObReferenceObjectByHandle(
             RegistryTransactionHandle,
             8u,
             CmRegistryTransactionType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
      v9 = Object;
      v10 = v8;
      if ( v8 >= 0 )
      {
        v10 = CmpCommitLightWeightTransaction(Object);
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
    return -1073741431;
  }
  return v10;
}
