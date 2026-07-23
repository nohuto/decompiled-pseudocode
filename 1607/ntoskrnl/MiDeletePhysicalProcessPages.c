/*
 * XREFs of MiDeletePhysicalProcessPages @ 0x14065C570
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x14045F548 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1400276FC (PsReturnProcessPagedPoolQuota.c)
 *     ExCleanupAutoExpandPushLock @ 0x14009C5FC (ExCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePhysicalProcessPages(ULONG_PTR a1)
{
  PVOID *v1; // rbx

  v1 = *(PVOID **)(a1 + 1032);
  *(_QWORD *)(a1 + 1032) = 0LL;
  PsReturnProcessPagedPoolQuota(a1, 8 * ((((unsigned __int8)*v1 & 0x3F) != 0) + ((unsigned __int64)*v1 >> 6)));
  ExFreePoolWithTag(v1[1], 0);
  ExCleanupAutoExpandPushLock();
  ExFreePoolWithTag(v1, 0);
}
