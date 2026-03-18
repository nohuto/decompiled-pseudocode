/*
 * XREFs of NtOpenKeyTransacted @ 0x1405DBABC
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     CmOpenKey @ 0x1404128E0 (CmOpenKey.c)
 */

__int64 __fastcall NtOpenKeyTransacted(HANDLE *a1, int a2, __int64 a3, void *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // edi
  PVOID v10; // rbx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v9 = ObReferenceObjectByHandle(
           a4,
           4u,
           (POBJECT_TYPE)TmTransactionObjectType,
           KeGetCurrentThread()->PreviousMode,
           &Object,
           0LL);
    if ( v9 >= 0 )
    {
      v10 = Object;
      v9 = CmOpenKey(a1, a2, a3, 0, (__int64)Object);
      ObfDereferenceObject(v10);
    }
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
  }
  else
  {
    v9 = -1073741431;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v9;
}
