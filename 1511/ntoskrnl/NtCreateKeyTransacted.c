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

__int64 __fastcall NtCreateKeyTransacted(
        HANDLE *a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int a6,
        HANDLE Handle,
        _DWORD *a8)
{
  struct _KTHREAD *CurrentThread; // rax
  int Key; // edi
  __int64 v13; // r9
  PVOID v14; // rbx
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    Key = ObReferenceObjectByHandle(
            Handle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &Object,
            0LL);
    if ( Key >= 0 )
    {
      v14 = Object;
      Key = CmCreateKey(a1, a2, a3, v13, a5, a6, a8, (__int64)Object);
      ObfDereferenceObject(v14);
    }
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
  }
  else
  {
    Key = -1073741431;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)Key;
}
