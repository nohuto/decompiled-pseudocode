/*
 * XREFs of AMLIRemoveNativeObjectsFromNamespace @ 0x1C005A6BC
 * Callers:
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C00449F0 (ACPIBuildProcessNotifyPepDeleteDevice.c)
 * Callees:
 *     NewObjOwner @ 0x1C00066E4 (NewObjOwner.c)
 *     MarkNativeObjectsDefunct @ 0x1C005A794 (MarkNativeObjectsDefunct.c)
 *     FreeObjOwner @ 0x1C005BF90 (FreeObjOwner.c)
 *     FreeOwnedObjects @ 0x1C005C0F4 (FreeOwnedObjects.c)
 *     MigrateDefunctObjectsToNewOwner @ 0x1C005C258 (MigrateDefunctObjectsToNewOwner.c)
 */

void __fastcall AMLIRemoveNativeObjectsFromNamespace(__int64 *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rbx
  __int64 v3; // rbx
  KIRQL v4; // di
  struct _EX_RUNDOWN_REF *v5; // [rsp+38h] [rbp+10h] BYREF
  struct _EX_RUNDOWN_REF *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v2 = 0LL;
  v6 = 0LL;
  if ( (int)NewObjOwner(gpheapGlobal, &v5) >= 0 )
  {
    if ( (int)NewObjOwner(gpheapGlobal, &v6) < 0 )
    {
      v2 = v6;
    }
    else
    {
      v3 = *a1;
      v4 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
      MarkNativeObjectsDefunct(v3, 0LL);
      v2 = v6;
      MigrateDefunctObjectsToNewOwner(gpNativeNameSpaceOwner, v6);
      MigrateDefunctObjectsToNewOwner(v2, v5);
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v4);
    }
  }
  if ( v5 )
  {
    FreeOwnedObjects(v5);
    FreeObjOwner(0LL, v5);
  }
  if ( v2 )
  {
    FreeOwnedObjects(v2);
    FreeObjOwner(0LL, v2);
  }
}
