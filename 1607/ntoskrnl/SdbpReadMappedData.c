/*
 * XREFs of SdbpReadMappedData @ 0x140500A7C
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x140495374 (SdbpOpenDatabaseInMemory.c)
 *     SdbGetTagFromTagID @ 0x140501250 (SdbGetTagFromTagID.c)
 *     SdbGetTagDataSize @ 0x140503D74 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x1405040C0 (SdbpGetTagHeadSize.c)
 *     SdbpReadTagData @ 0x1405069B4 (SdbpReadTagData.c)
 *     SdbOpenDatabaseEx @ 0x1406C1624 (SdbOpenDatabaseEx.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadMappedData(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  int v7; // [rsp+30h] [rbp-18h]

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
    v7 = *(_DWORD *)(a1 + 20);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadMappedData",
      410,
      (unsigned int)"Attempt to read past the end of the database offset 0x%lx size 0x%lx (0x%lx)",
      a2,
      a4,
      v7);
  }
  return 0LL;
}
