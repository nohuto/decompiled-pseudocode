/*
 * XREFs of SdbpReadMappedData @ 0x1404E3A0C
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x140495E04 (SdbpOpenDatabaseInMemory.c)
 *     SdbGetTagFromTagID @ 0x1404E41E0 (SdbGetTagFromTagID.c)
 *     SdbGetTagDataSize @ 0x1404E6D04 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x1404E7050 (SdbpGetTagHeadSize.c)
 *     SdbpReadTagData @ 0x1404E9944 (SdbpReadTagData.c)
 *     SdbOpenDatabaseEx @ 0x1406C175C (SdbOpenDatabaseEx.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadMappedData(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  if ( a2 + a4 < a4 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadMappedData",
      405,
      (unsigned int)"Offset and region size add up to cause an integer overflow or underflow");
  }
  else
  {
    if ( *(_DWORD *)(a1 + 20) >= a2 + a4 )
    {
      memmove(a3, (const void *)(*(_QWORD *)(a1 + 8) + a2), a4);
      return 1LL;
    }
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadMappedData",
      410,
      (unsigned int)"Attempt to read past the end of the database offset 0x%lx size 0x%lx (0x%lx)");
  }
  return 0LL;
}
