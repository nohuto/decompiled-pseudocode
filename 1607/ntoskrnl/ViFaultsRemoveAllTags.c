/*
 * XREFs of ViFaultsRemoveAllTags @ 0x140711730
 * Callers:
 *     VfFaultsSetParameters @ 0x140710F7C (VfFaultsSetParameters.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void ViFaultsRemoveAllTags()
{
  KIRQL v0; // al
  PVOID **v1; // rcx
  KIRQL v2; // di
  PVOID *v3; // rbx

  v0 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  v1 = (PVOID **)ViFaultTagsList;
  v2 = v0;
  if ( ViFaultTagsList != &ViFaultTagsList )
  {
    do
    {
      v3 = *v1;
      ExFreePoolWithTag(v1, 0);
      v1 = (PVOID **)v3;
    }
    while ( v3 != &ViFaultTagsList );
  }
  ViHaveFaultTags = 0;
  qword_1403005C8 = (__int64)&ViFaultTagsList;
  ViFaultTagsList = &ViFaultTagsList;
  KeReleaseSpinLock(&ViFaultInjectionLock, v2);
}
