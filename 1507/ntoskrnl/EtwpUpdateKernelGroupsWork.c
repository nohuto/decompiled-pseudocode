/*
 * XREFs of EtwpUpdateKernelGroupsWork @ 0x14054A34C
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateKernelGroupsWork(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return EtwpUpdateKernelGroupMasks(0LL, 8LL);
}
