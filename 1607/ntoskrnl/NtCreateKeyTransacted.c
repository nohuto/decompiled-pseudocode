/*
 * XREFs of NtCreateKeyTransacted @ 0x1404C412C
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     CmpTransDereferenceTransaction @ 0x1403FDFE8 (CmpTransDereferenceTransaction.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     CmCreateKey @ 0x140462FD0 (CmCreateKey.c)
 */

NTSTATUS __cdecl NtCreateKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        HANDLE TransactionHandle,
        PULONG Disposition)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  NTSTATUS v15; // eax
  __int64 v16; // r9
  __int64 v17; // rbx
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  NTSTATUS Key; // edi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  PVOID v25; // [rsp+48h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
    return -1073741431;
  }
  v15 = ObReferenceObjectByHandle(
          TransactionHandle,
          4u,
          CmRegistryTransactionType,
          KeGetCurrentThread()->PreviousMode,
          &Object,
          0LL);
  v17 = (__int64)Object;
  Key = v15;
  if ( v15 == -1073741788 )
  {
    v18 = ObReferenceObjectByHandle(
            TransactionHandle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &v25,
            0LL);
    v17 = (__int64)v25;
    Key = v18;
    goto LABEL_5;
  }
  if ( v15 >= 0 )
  {
    v17 = (unsigned __int64)Object | 1;
LABEL_5:
    if ( Key >= 0 )
      Key = CmCreateKey(
              KeyHandle,
              DesiredAccess,
              (ULONG_PTR)ObjectAttributes,
              v16,
              (__int128 *)Class,
              CreateOptions,
              Disposition,
              v17);
  }
  if ( v17 )
    CmpTransDereferenceTransaction(v17);
  ExReleaseRundownProtection(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v19, v20, v21);
  return Key;
}
