/*
 * XREFs of NtLockRegistryKey @ 0x1405B76B4
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmLockKcbForWrite @ 0x1405B77C8 (CmLockKcbForWrite.c)
 */

NTSTATUS __stdcall NtLockRegistryKey(HANDLE KeyHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v3; // rtt
  int v4; // edi
  PVOID v5; // rbx
  unsigned __int64 v6; // rtt
  struct _KTHREAD *v7; // rcx
  __int16 v8; // ax
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  if ( KeGetCurrentThread()->PreviousMode )
    return -1073741727;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v3 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v3 == _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
    || ExfAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v4 = ObReferenceObjectByHandle(KeyHandle, 0x20006u, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
    if ( v4 >= 0 )
    {
      CmpLockRegistry();
      v5 = Object;
      v4 = CmLockKcbForWrite(*((_QWORD *)Object + 1));
      CmpUnlockRegistry();
      ObfDereferenceObject(v5);
    }
    _m_prefetchw(&CmpShutdownRundown);
    v6 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v6 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&CmpShutdownRundown,
                 (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                 CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v7 = KeGetCurrentThread();
    v8 = v7->KernelApcDisable + 1;
    v7->KernelApcDisable = v8;
    if ( !v8
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v7->ApcState.ApcListHead[0].Flink != &v7->152
      && !v7->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return v4;
  }
  else
  {
    v10 = KeGetCurrentThread();
    v11 = v10->KernelApcDisable + 1;
    v10->KernelApcDisable = v11;
    if ( !v11
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
      && !v10->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return -1073741431;
  }
}
