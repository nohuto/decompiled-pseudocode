/*
 * XREFs of MiDeletePhysicalProcessPages @ 0x140626D3C
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1403E6E18 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x14006DCC4 (PsReturnProcessPagedPoolQuota.c)
 *     ExCleanupAutoExpandPushLock @ 0x1400E1AB4 (ExCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePhysicalProcessPages(struct _KPROCESS *a1)
{
  PVOID *v1; // rbx

  v1 = (PVOID *)a1[1].ActiveProcessors.Bitmap[3];
  a1[1].ActiveProcessors.Bitmap[3] = 0LL;
  PsReturnProcessPagedPoolQuota(a1, 8 * ((((unsigned __int8)*v1 & 0x3F) != 0) + ((unsigned __int64)*v1 >> 6)));
  ExFreePoolWithTag(v1[1], 0);
  ExCleanupAutoExpandPushLock();
  ExFreePoolWithTag(v1, 0);
}
