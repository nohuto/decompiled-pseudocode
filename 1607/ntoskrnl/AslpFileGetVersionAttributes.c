/*
 * XREFs of AslpFileGetVersionAttributes @ 0x1406C8028
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1406C6A84 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslpFileGetVersionBlock @ 0x1406C80D4 (AslpFileGetVersionBlock.c)
 *     AslpFileMakeBinVersionAttributes @ 0x1406C875C (AslpFileMakeBinVersionAttributes.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1406C8868 (AslpFileMakeStringVersionAttributes.c)
 */

__int64 __fastcall AslpFileGetVersionAttributes(__int64 a1, __int64 a2)
{
  int VersionBlock; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r10
  int StringVersionAttributes; // eax
  unsigned int v8; // ebx
  __int64 v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+20h] [rbp-18h]
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  VersionBlock = AslpFileGetVersionBlock(&v12, &v13, a2);
  if ( VersionBlock >= 0 )
  {
    v4 = v13;
  }
  else
  {
    if ( (unsigned int)(VersionBlock + 1073741687) > 2 )
    {
      v11 = VersionBlock;
      AslLogCallPrintf(
        3LL,
        (unsigned int)"AslpFileGetVersionAttributes",
        1227,
        (unsigned int)"AslpFileGetVersionBlock failed [%x]",
        v11);
    }
    v4 = 0LL;
  }
  AslpFileMakeBinVersionAttributes(a1, v4);
  StringVersionAttributes = AslpFileMakeStringVersionAttributes(v5, v6);
  v8 = StringVersionAttributes;
  if ( StringVersionAttributes >= 0 )
  {
    return 0;
  }
  else
  {
    LODWORD(v10) = StringVersionAttributes;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileGetVersionAttributes",
      1250,
      (unsigned int)"AslpFileMakeStringVersionAttributes failed [%x]",
      v10);
  }
  return v8;
}
