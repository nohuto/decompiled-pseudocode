/*
 * XREFs of MiFreeAweInfo @ 0x1406A6124
 * Callers:
 *     MiInsertAweInfo @ 0x140224760 (MiInsertAweInfo.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     MiDeletePhysicalProcessPages @ 0x1406A60B8 (MiDeletePhysicalProcessPages.c)
 *     NtAllocateUserPhysicalPages @ 0x1406A6328 (NtAllocateUserPhysicalPages.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x14011C67C (ExCleanupAutoExpandPushLock.c)
 */

void __fastcall MiFreeAweInfo(void *a1)
{
  ExCleanupAutoExpandPushLock((__int64)a1 + 8);
  ExFreePoolWithTag(a1, 0);
}
