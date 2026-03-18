/*
 * XREFs of NtLockRegistryKey @ 0x14054167C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmLockKcbForWrite @ 0x140541740 (CmLockKcbForWrite.c)
 */

NTSTATUS __stdcall NtLockRegistryKey(HANDLE KeyHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // edi
  PVOID v4; // rbx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  if ( KeGetCurrentThread()->PreviousMode )
    return -1073741727;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v3 = ObReferenceObjectByHandle(KeyHandle, 0x20006u, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
    if ( v3 >= 0 )
    {
      CmpLockRegistry();
      v4 = Object;
      v3 = CmLockKcbForWrite(*((PVOID *)Object + 1));
      CmpUnlockRegistry();
      ObfDereferenceObject(v4);
    }
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
  }
  else
  {
    v3 = -1073741431;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v3;
}
