/*
 * XREFs of VfPoolIsInternalFree @ 0x1402238E4
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x14070DDD0 (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x140717598 (VfCheckForLookaside.c)
 *     VfCheckForResource @ 0x1407181D0 (VfCheckForResource.c)
 * Callees:
 *     <none>
 */

__int64 VfPoolIsInternalFree()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v1; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (struct _KTHREAD **)&unk_14033EB48;
  while ( CurrentThread != *v1 )
  {
    v1 += 8;
    if ( (__int64)v1 >= (__int64)&unk_14033EBC8 )
      return 0LL;
  }
  return 1LL;
}
