/*
 * XREFs of ViFaultsRemoveAllApps @ 0x1406C565C
 * Callers:
 *     VfFaultsSetParameters @ 0x1406C4EDC (VfFaultsSetParameters.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void ViFaultsRemoveAllApps()
{
  KIRQL v0; // al
  KIRQL v1; // di
  PVOID **v2; // rcx
  PVOID *v3; // rbx

  v0 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  ViFaultLockOwner = (__int64)KeGetCurrentThread();
  v1 = v0;
  v2 = (PVOID **)ViFaultApplicationsList;
  if ( ViFaultApplicationsList != &ViFaultApplicationsList )
  {
    do
    {
      v3 = *v2;
      ExFreePoolWithTag(v2, 0);
      v2 = (PVOID **)v3;
    }
    while ( v3 != &ViFaultApplicationsList );
  }
  ViFaultLockOwner = 0LL;
  qword_1402DB238 = (__int64)&ViFaultApplicationsList;
  ViFaultApplicationsList = &ViFaultApplicationsList;
  KeReleaseSpinLock(&ViFaultInjectionLock, v1);
}
