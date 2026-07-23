/*
 * XREFs of SdbReadEntryInformation @ 0x1406C1EF0
 * Callers:
 *     PiIsDriverBlocked @ 0x140515678 (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SdbGetDatabaseID @ 0x140495EA8 (SdbGetDatabaseID.c)
 *     SdbReadBinaryTag @ 0x140495F50 (SdbReadBinaryTag.c)
 *     SdbFindFirstTag @ 0x1404E7954 (SdbFindFirstTag.c)
 *     SdbGetEntryFlags @ 0x140573930 (SdbGetEntryFlags.c)
 *     SdbTagRefToTagID @ 0x14057F580 (SdbTagRefToTagID.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadEntryInformation(__int64 a1, unsigned int a2, void *a3)
{
  unsigned int BinaryTag; // ebx
  const char *v7; // r9
  int v8; // r8d
  __int64 v9; // rdi
  unsigned int v10; // r14d
  unsigned int FirstTag; // eax
  int EntryFlags; // eax
  unsigned int v14; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+38h] [rbp-38h] BYREF
  _DWORD Src[10]; // [rsp+40h] [rbp-30h] BYREF

  memset(Src, 0, sizeof(Src));
  BinaryTag = SdbTagRefToTagID(a1, a2, &v15, (int *)&v14);
  if ( !BinaryTag )
  {
    v7 = "Failed to convert tagref 0x%x to tagid";
    v8 = 5109;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbReadEntryInformation", v8, (_DWORD)v7);
    return BinaryTag;
  }
  v9 = v15;
  v10 = v14;
  FirstTag = SdbFindFirstTag(v15, v14, 36868);
  if ( !FirstTag )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadEntryInformation",
      5119,
      (unsigned int)"Failed to read TAG_EXE_ID for tiExe 0x%x");
    return 0;
  }
  BinaryTag = SdbReadBinaryTag(v9, FirstTag, (__int64)Src, 0x10u);
  if ( !BinaryTag )
  {
    v7 = "Failed to read GUID referenced by 0x%x";
    v8 = 5129;
    goto LABEL_3;
  }
  if ( !(unsigned int)SdbGetDatabaseID(v9, &Src[6]) )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadEntryInformation",
      5137,
      (unsigned int)"Failed to read GUID of the database");
    return 0;
  }
  EntryFlags = SdbGetEntryFlags((__int64)Src, &Src[4]);
  Src[4] &= -(EntryFlags != 0);
  Src[5] = SdbFindFirstTag(v9, v10, 28687);
  if ( a3 )
    memmove(a3, Src, 0x28uLL);
  return 1;
}
