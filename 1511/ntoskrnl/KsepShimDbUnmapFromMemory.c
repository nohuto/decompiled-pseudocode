/*
 * XREFs of KsepShimDbUnmapFromMemory @ 0x1403B5DE0
 * Callers:
 *     KseShimDatabaseClose @ 0x1403B71B0 (KseShimDatabaseClose.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     SdbReleaseDatabase @ 0x1403B607C (SdbReleaseDatabase.c)
 *     MmUnmapViewInSystemSpace @ 0x1403C7C24 (MmUnmapViewInSystemSpace.c)
 */

int KsepShimDbUnmapFromMemory()
{
  int result; // eax

  if ( KsepShimDbHandle )
    result = SdbReleaseDatabase();
  if ( KsepShimDbAddress )
  {
    result = MmUnmapViewInSystemSpace(KsepShimDbAddress);
    KsepShimDbAddress = 0LL;
  }
  if ( KsepShimDbSectionPointer )
  {
    result = ObfDereferenceObject(KsepShimDbSectionPointer);
    KsepShimDbSectionPointer = 0LL;
  }
  if ( KsepShimDbSectionHandle )
  {
    result = ZwClose(KsepShimDbSectionHandle);
    KsepShimDbSectionHandle = 0LL;
  }
  if ( KsepShimDbFileHandle )
  {
    result = ZwClose(KsepShimDbFileHandle);
    KsepShimDbFileHandle = 0LL;
  }
  return result;
}
