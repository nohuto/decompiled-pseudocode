/*
 * XREFs of FreeOwnedObjects @ 0x1C0044974
 * Callers:
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C0042FEC (AMLIRemoveNativeObjectsFromNamespace.c)
 *     ParseUnload @ 0x1C0049D10 (ParseUnload.c)
 *     AMLIInitialize @ 0x1C0084CC0 (AMLIInitialize.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     ListRemoveEntry @ 0x1C0011778 (ListRemoveEntry.c)
 *     FreeNameSpaceObjects @ 0x1C0013710 (FreeNameSpaceObjects.c)
 */

void __fastcall FreeOwnedObjects(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx
  __int64 v4; // rdi

  NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
  ListRemoveEntry((_QWORD **)a1, (__int64)&gplistObjOwners);
  KeReleaseSpinLock(&gmutOwnerList, NewIrql);
  v2 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    do
    {
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v2);
      v4 = *(_QWORD *)(v3 + 48);
      if ( (gdwfAMLI & 4) != 0 )
        AMLIDereferenceHandleEx((volatile signed __int32 *)(v3 + 112));
      else
        FreeNameSpaceObjects(v3);
      v2 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
      v3 = v4;
    }
    while ( v4 );
  }
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v2);
}
