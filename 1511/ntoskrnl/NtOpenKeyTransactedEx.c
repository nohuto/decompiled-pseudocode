/*
 * XREFs of NtOpenKeyTransactedEx @ 0x1404B7F94
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

__int64 __fastcall NtOpenKeyTransactedEx(HANDLE *a1, int a2, __int64 a3, int a4, HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rax
  int v10; // edi
  PVOID v11; // rbx
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v10 = ObReferenceObjectByHandle(
            Handle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &Object,
            0LL);
    if ( v10 >= 0 )
    {
      v11 = Object;
      v10 = CmOpenKey(a1, a2, a3, a4, (__int64)Object);
      ObfDereferenceObject(v11);
    }
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
  }
  else
  {
    v10 = -1073741431;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v10;
}
