/*
 * XREFs of KsepShimDbUnmapFromMemory @ 0x140578CBC
 * Callers:
 *     KseShimDatabaseClose @ 0x1405770FC (KseShimDatabaseClose.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     MmUnmapViewInSystemSpace @ 0x14051BEC8 (MmUnmapViewInSystemSpace.c)
 *     SdbReleaseDatabase @ 0x140578BDC (SdbReleaseDatabase.c)
 */

void __fastcall KsepShimDbUnmapFromMemory(__int64 a1, __int64 a2)
{
  if ( KsepShimDbHandle )
    SdbReleaseDatabase(KsepShimDbHandle, a2);
  if ( KsepShimDbAddress )
  {
    MmUnmapViewInSystemSpace(KsepShimDbAddress);
    KsepShimDbAddress = 0LL;
  }
  if ( KsepShimDbSectionPointer )
  {
    ObfDereferenceObject(KsepShimDbSectionPointer);
    KsepShimDbSectionPointer = 0LL;
  }
  if ( KsepShimDbSectionHandle )
  {
    ZwClose(KsepShimDbSectionHandle);
    KsepShimDbSectionHandle = 0LL;
  }
  if ( KsepShimDbFileHandle )
  {
    ZwClose(KsepShimDbFileHandle);
    KsepShimDbFileHandle = 0LL;
  }
}
