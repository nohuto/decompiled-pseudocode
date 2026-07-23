/*
 * XREFs of SdbpOpenDatabaseInMemory @ 0x140495E04
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x140495C8C (SdbInitDatabaseInMemory.c)
 * Callees:
 *     SdbGetDatabaseID @ 0x140495EA8 (SdbGetDatabaseID.c)
 *     SdbpReadMappedData @ 0x1404E3A0C (SdbpReadMappedData.c)
 *     AslFree @ 0x140514714 (AslFree.c)
 *     AslAlloc @ 0x1405148D4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpOpenDatabaseInMemory(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v7; // rcx
  _DWORD v8[6]; // [rsp+40h] [rbp-18h] BYREF

  v4 = AslAlloc(a1, 1392LL);
  v5 = v4;
  if ( !v4 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", 712, (unsigned int)"Failed to allocate DB structure");
    return 0LL;
  }
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)v4 = 0LL;
  *(_DWORD *)(v4 + 20) = a2;
  *(_QWORD *)(v4 + 8) = a1;
  *(_DWORD *)(v4 + 24) |= 1u;
  if ( !(unsigned int)SdbpReadMappedData(v4, 0LL, v8, 12LL) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", 723, (unsigned int)"Can't read database header");
LABEL_11:
    AslFree(v7, v5);
    return 0LL;
  }
  if ( v8[2] != 1717724275 || v8[0] != 3 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpOpenDatabaseInMemory",
      733,
      (unsigned int)"Magic or MajorVersion doesn't match.Magic: %08X, Expected: %08X; MajorVersion: %08X, Expected: %08X.");
    goto LABEL_11;
  }
  if ( !(unsigned int)SdbGetDatabaseID(v5, v5 + 28) )
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", 738, (unsigned int)"Failed to get the database ID");
  return v5;
}
