/*
 * XREFs of KsepShimDbUnmapFromMemory @ 0x1404CEA10
 * Callers:
 *     KseShimDatabaseClose @ 0x140513B88 (KseShimDatabaseClose.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     SdbReleaseDatabase @ 0x1404CEA90 (SdbReleaseDatabase.c)
 *     MmUnmapViewInSystemSpace @ 0x140508E94 (MmUnmapViewInSystemSpace.c)
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
