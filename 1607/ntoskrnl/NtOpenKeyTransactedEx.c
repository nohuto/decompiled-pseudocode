/*
 * XREFs of NtOpenKeyTransactedEx @ 0x1404DEB08
 * Callers:
 *     NtOpenKeyTransacted @ 0x1405F97D0 (NtOpenKeyTransacted.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     CmpTransDereferenceTransaction @ 0x1403FF128 (CmpTransDereferenceTransaction.c)
 *     CmOpenKey @ 0x140418C90 (CmOpenKey.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtOpenKeyTransactedEx(HANDLE *a1, int a2, __int64 a3, int a4, HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  NTSTATUS v13; // eax
  __int64 v14; // rbx
  int v15; // edi
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  PVOID v22; // [rsp+38h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
    return (unsigned int)-1073741431;
  }
  v13 = ObReferenceObjectByHandle(
          Handle,
          4u,
          CmRegistryTransactionType,
          KeGetCurrentThread()->PreviousMode,
          &Object,
          0LL);
  v14 = (__int64)Object;
  v15 = v13;
  if ( v13 == -1073741788 )
  {
    v16 = ObReferenceObjectByHandle(
            Handle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &v22,
            0LL);
    v14 = (__int64)v22;
    v15 = v16;
    goto LABEL_4;
  }
  if ( v13 >= 0 )
  {
    v14 = (unsigned __int64)Object | 1;
LABEL_4:
    if ( v15 >= 0 )
      v15 = CmOpenKey(a1, a2, a3, a4, v14);
  }
  if ( v14 )
    CmpTransDereferenceTransaction(v14);
  ExReleaseRundownProtection(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v17, v18, v19);
  return (unsigned int)v15;
}
