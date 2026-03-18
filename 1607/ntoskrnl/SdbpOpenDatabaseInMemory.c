/*
 * XREFs of SdbpOpenDatabaseInMemory @ 0x140495374
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1404951FC (SdbInitDatabaseInMemory.c)
 * Callees:
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     SdbGetDatabaseID @ 0x140495418 (SdbGetDatabaseID.c)
 *     SdbpReadMappedData @ 0x140500A7C (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

char *__fastcall SdbpOpenDatabaseInMemory(__int64 a1, int a2)
{
  char *v4; // rax
  char *v5; // rbx
  __int64 v7; // rcx
  int v8; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+48h] [rbp-10h]

  v4 = (char *)AslAlloc(a1, 0x570uLL);
  v5 = v4;
  if ( !v4 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", 712, (unsigned int)"Failed to allocate DB structure");
    return 0LL;
  }
  *((_DWORD *)v4 + 4) = 0;
  *(_QWORD *)v4 = 0LL;
  *((_DWORD *)v4 + 5) = a2;
  *((_QWORD *)v4 + 1) = a1;
  *((_DWORD *)v4 + 6) |= 1u;
  if ( !(unsigned int)SdbpReadMappedData(v4, 0LL, &v8, 12LL) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", 723, (unsigned int)"Can't read database header");
LABEL_11:
    AslFree(v7, v5);
    return 0LL;
  }
  if ( v9 != 1717724275 || v8 != 3 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpOpenDatabaseInMemory",
      733,
      (unsigned int)"Magic or MajorVersion doesn't match.Magic: %08X, Expected: %08X; MajorVersion: %08X, Expected: %08X.",
      v9,
      1717724275,
      v8,
      3);
    goto LABEL_11;
  }
  if ( !(unsigned int)SdbGetDatabaseID(v5, v5 + 28) )
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", 738, (unsigned int)"Failed to get the database ID");
  return v5;
}
