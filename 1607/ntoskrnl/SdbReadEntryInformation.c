/*
 * XREFs of SdbReadEntryInformation @ 0x1406C1DB8
 * Callers:
 *     PiIsDriverBlocked @ 0x14049D1BC (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     SdbGetDatabaseID @ 0x140495418 (SdbGetDatabaseID.c)
 *     SdbReadBinaryTag @ 0x1404954C0 (SdbReadBinaryTag.c)
 *     SdbFindFirstTag @ 0x1405049C4 (SdbFindFirstTag.c)
 *     SdbGetEntryFlags @ 0x1405733F0 (SdbGetEntryFlags.c)
 *     SdbTagRefToTagID @ 0x14057F0D4 (SdbTagRefToTagID.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadEntryInformation(__int64 a1, unsigned int a2, void *a3)
{
  unsigned int BinaryTag; // ebx
  __int64 v7; // rdi
  unsigned int v8; // r14d
  unsigned int FirstTag; // eax
  unsigned int v10; // esi
  int EntryFlags; // eax
  unsigned int v13; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+38h] [rbp-38h] BYREF
  _DWORD Src[10]; // [rsp+40h] [rbp-30h] BYREF

  memset(Src, 0, sizeof(Src));
  BinaryTag = SdbTagRefToTagID(a1, a2, &v14, (int *)&v13);
  if ( !BinaryTag )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadEntryInformation",
      5109,
      (unsigned int)"Failed to convert tagref 0x%x to tagid",
      a2);
    return BinaryTag;
  }
  v7 = v14;
  v8 = v13;
  FirstTag = SdbFindFirstTag(v14, v13, 36868);
  v10 = FirstTag;
  if ( !FirstTag )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadEntryInformation",
      5119,
      (unsigned int)"Failed to read TAG_EXE_ID for tiExe 0x%x",
      v8);
    return 0;
  }
  BinaryTag = SdbReadBinaryTag(v7, FirstTag, (__int64)Src, 0x10u);
  if ( !BinaryTag )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadEntryInformation",
      5129,
      (unsigned int)"Failed to read GUID referenced by 0x%x",
      v10);
    return BinaryTag;
  }
  if ( !(unsigned int)SdbGetDatabaseID(v7, &Src[6]) )
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
  Src[5] = SdbFindFirstTag(v7, v8, 28687);
  if ( a3 )
    memmove(a3, Src, 0x28uLL);
  return 1;
}
