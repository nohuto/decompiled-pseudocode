/*
 * XREFs of CmpDelayFreeRMWorker @ 0x1404EB204
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     ExDeleteResourceLite @ 0x1400885B0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpLockRegistryExclusive @ 0x1403FD9E8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
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
