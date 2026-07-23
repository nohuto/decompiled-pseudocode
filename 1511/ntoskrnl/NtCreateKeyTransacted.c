/*
 * XREFs of NtCreateKeyTransacted @ 0x1404B9030
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     CmCreateKey @ 0x140422220 (CmCreateKey.c)
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
  NTSTATUS Key; // edi
  __int64 v13; // r9
  PVOID v14; // rbx
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    Key = ObReferenceObjectByHandle(
            TransactionHandle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &Object,
            0LL);
    if ( Key >= 0 )
    {
      v14 = Object;
      Key = CmCreateKey(
              KeyHandle,
              DesiredAccess,
              (ULONG_PTR)ObjectAttributes,
              v13,
              (unsigned int *)&Class->Length,
              CreateOptions,
              Disposition,
              (__int64)Object);
      ObfDereferenceObject(v14);
    }
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
  }
  else
  {
    Key = -1073741431;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return Key;
}
