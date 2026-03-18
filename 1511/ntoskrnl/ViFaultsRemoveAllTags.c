/*
 * XREFs of ViFaultsRemoveAllTags @ 0x1406C56E4
 * Callers:
 *     VfFaultsSetParameters @ 0x1406C4EDC (VfFaultsSetParameters.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void ViFaultsRemoveAllTags()
{
  KIRQL v0; // al
  KIRQL v1; // di
  PVOID **v2; // rcx
  PVOID *v3; // rbx

  v0 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  ViFaultLockOwner = (__int64)KeGetCurrentThread();
  v1 = v0;
  v2 = (PVOID **)ViFaultTagsList;
  if ( ViFaultTagsList != &ViFaultTagsList )
  {
    do
    {
      v3 = *v2;
      ExFreePoolWithTag(v2, 0);
      v2 = (PVOID **)v3;
    }
    while ( v3 != &ViFaultTagsList );
  }
  ViHaveFaultTags = 0;
  ViFaultLockOwner = 0LL;
  qword_1402DB258 = (__int64)&ViFaultTagsList;
  ViFaultTagsList = &ViFaultTagsList;
  KeReleaseSpinLock(&ViFaultInjectionLock, v1);
}
