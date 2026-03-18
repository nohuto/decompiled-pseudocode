/*
 * XREFs of SdbGetDatabaseID @ 0x140495418
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x140495374 (SdbpOpenDatabaseInMemory.c)
 *     SdbOpenDatabaseEx @ 0x1406C1624 (SdbOpenDatabaseEx.c)
 *     SdbReadEntryInformation @ 0x1406C1DB8 (SdbReadEntryInformation.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 *     SdbReadBinaryTag @ 0x1404954C0 (SdbReadBinaryTag.c)
 *     SdbFindFirstTag @ 0x1405049C4 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetDatabaseID(__int64 a1, void *a2)
{
  unsigned int v2; // edi
  unsigned int FirstTag; // eax
  unsigned int v6; // eax
  int v7; // esi

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 24) & 2) == 0 )
  {
    FirstTag = SdbFindFirstTag(a1, 0LL, 28673LL);
    if ( !FirstTag )
    {
      AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseID", 235, (unsigned int)"Failed to get root tag");
      return v2;
    }
    v6 = SdbFindFirstTag(a1, FirstTag, 36871LL);
    v7 = v6;
    if ( !v6 )
    {
      AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseID", 241, (unsigned int)"Failed to get the database id");
      return v2;
    }
    if ( !(unsigned int)SdbReadBinaryTag(a1, v6, a1 + 28, 16LL) )
    {
      AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseID", 246, (unsigned int)"Failed to read database id 0x%lx", v7);
      return v2;
    }
    *(_DWORD *)(a1 + 24) |= 2u;
  }
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    memmove(a2, (const void *)(a1 + 28), 0x10uLL);
    return 1;
  }
  return v2;
}
