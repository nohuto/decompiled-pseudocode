/*
 * XREFs of CmpDelayFreeRMWorker @ 0x1404C2A84
 * Callers:
 *     <none>
 * Callees:
 *     ExDeleteResourceLite @ 0x14000D800 (ExDeleteResourceLite.c)
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 */

void CmpDelayFreeRMWorker()
{
  PERESOURCE *v0; // rbx
  __int64 v1; // rax

  ExAcquireFastMutex(&CmpDelayFreeRMLock);
  while ( 1 )
  {
    v0 = (PERESOURCE *)CmpDelayFreeRMListHead;
    if ( CmpDelayFreeRMListHead == &CmpDelayFreeRMListHead )
      break;
    v1 = *(_QWORD *)CmpDelayFreeRMListHead;
    if ( *((PVOID **)CmpDelayFreeRMListHead + 1) != &CmpDelayFreeRMListHead
      || *(PVOID *)(v1 + 8) != CmpDelayFreeRMListHead )
    {
      __fastfail(3u);
    }
    CmpDelayFreeRMListHead = *(PVOID *)CmpDelayFreeRMListHead;
    *(_QWORD *)(v1 + 8) = &CmpDelayFreeRMListHead;
    KeReleaseGuardedMutex(&CmpDelayFreeRMLock);
    CmpLockRegistryExclusive();
    ExDeleteResourceLite(v0[16]);
    ExFreePoolWithTag(v0[16], 0);
    ExFreePoolWithTag(v0, 0x6D524D43u);
    CmpUnlockRegistry();
    ExAcquireFastMutex(&CmpDelayFreeRMLock);
  }
  CmpDelayFreeRMWorkItemActive = 0;
  KeReleaseGuardedMutex(&CmpDelayFreeRMLock);
}
