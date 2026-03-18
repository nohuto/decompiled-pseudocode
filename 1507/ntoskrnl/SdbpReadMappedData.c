/*
 * XREFs of SdbpReadMappedData @ 0x140577F28
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x140574548 (SdbpOpenDatabaseInMemory.c)
 *     SdbpReadTagData @ 0x140577A6C (SdbpReadTagData.c)
 *     SdbpGetTagHeadSize @ 0x140577D4C (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x140577E14 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140577EF8 (SdbGetTagFromTagID.c)
 *     SdbOpenDatabaseEx @ 0x140701D44 (SdbOpenDatabaseEx.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
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
