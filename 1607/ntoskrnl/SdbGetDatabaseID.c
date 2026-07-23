/*
 * XREFs of SdbGetDatabaseID @ 0x140495EA8
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x140495E04 (SdbpOpenDatabaseInMemory.c)
 *     SdbOpenDatabaseEx @ 0x1406C175C (SdbOpenDatabaseEx.c)
 *     SdbReadEntryInformation @ 0x1406C1EF0 (SdbReadEntryInformation.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     SdbReadBinaryTag @ 0x140495F50 (SdbReadBinaryTag.c)
 *     SdbFindFirstTag @ 0x1404E7954 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetDatabaseID(__int64 a1, void *a2)
{
  unsigned int v2; // edi
  unsigned int FirstTag; // eax
  unsigned int v6; // eax
  const char *v8; // r9
  int v9; // r8d

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 24) & 2) == 0 )
  {
    FirstTag = SdbFindFirstTag(a1, 0LL, 28673LL);
    if ( FirstTag )
    {
      v6 = SdbFindFirstTag(a1, FirstTag, 36871LL);
      if ( v6 )
      {
        if ( !(unsigned int)SdbReadBinaryTag(a1, v6, a1 + 28, 16LL) )
        {
          AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseID", 246, (unsigned int)"Failed to read database id 0x%lx");
          return v2;
        }
        *(_DWORD *)(a1 + 24) |= 2u;
        goto LABEL_6;
      }
      v8 = "Failed to get the database id";
      v9 = 241;
    }
    else
    {
      v8 = "Failed to get root tag";
      v9 = 235;
    }
    AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseID", v9, (_DWORD)v8);
    return v2;
  }
LABEL_6:
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    memmove(a2, (const void *)(a1 + 28), 0x10uLL);
    return 1;
  }
  return v2;
}
