/*
 * XREFs of VfPoolIsInternalFree @ 0x14020BE28
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x1406C1D54 (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x1406C8BF0 (VfCheckForLookaside.c)
 *     VfCheckForResource @ 0x1406C97D4 (VfCheckForResource.c)
 * Callees:
 *     <none>
 */

__int64 VfPoolIsInternalFree()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v1; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (struct _KTHREAD **)&unk_140306C68;
  while ( CurrentThread != *v1 )
  {
    v1 += 8;
    if ( (__int64)v1 >= (__int64)&PcwpSynchCounterSet )
      return 0LL;
  }
  return 1LL;
}
