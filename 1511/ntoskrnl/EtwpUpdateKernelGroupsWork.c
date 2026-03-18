/*
 * XREFs of EtwpUpdateKernelGroupsWork @ 0x1404B8108
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateKernelGroupsWork(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return EtwpUpdateKernelGroupMasks(0LL, 8LL);
}
