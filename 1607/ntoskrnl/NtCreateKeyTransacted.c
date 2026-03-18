/*
 * XREFs of NtCreateKeyTransacted @ 0x1404E0B28
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     CmpTransDereferenceTransaction @ 0x1403FF128 (CmpTransDereferenceTransaction.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     CmCreateKey @ 0x140464100 (CmCreateKey.c)
 */

__int64 __fastcall NtCreateKeyTransacted(
        HANDLE *a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        __int128 *a5,
        int a6,
        HANDLE Handle,
        _DWORD *a8)
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
  int Key; // edi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  PVOID v25; // [rsp+48h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
    return (unsigned int)-1073741431;
  }
  v15 = ObReferenceObjectByHandle(
          Handle,
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
            Handle,
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
      Key = CmCreateKey(a1, a2, a3, v16, a5, a6, a8, v17);
  }
  if ( v17 )
    CmpTransDereferenceTransaction(v17);
  ExReleaseRundownProtection(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v19, v20, v21);
  return (unsigned int)Key;
}
