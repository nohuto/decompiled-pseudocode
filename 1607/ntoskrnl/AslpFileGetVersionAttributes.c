/*
 * XREFs of AslpFileGetVersionAttributes @ 0x1406C8160
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1406C6BBC (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 *     AslpFileGetVersionBlock @ 0x1406C820C (AslpFileGetVersionBlock.c)
 *     AslpFileMakeBinVersionAttributes @ 0x1406C8894 (AslpFileMakeBinVersionAttributes.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1406C89A0 (AslpFileMakeStringVersionAttributes.c)
 */

__int64 __fastcall AslpFileGetVersionAttributes(__int64 a1, __int64 a2)
{
  int VersionBlock; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r10
  int StringVersionAttributes; // ebx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  VersionBlock = AslpFileGetVersionBlock(&v9, &v10, a2);
  if ( VersionBlock >= 0 )
  {
    v4 = v10;
  }
  else
  {
    if ( (unsigned int)(VersionBlock + 1073741687) > 2 )
      AslLogCallPrintf(3LL);
    v4 = 0LL;
  }
  AslpFileMakeBinVersionAttributes(a1, v4);
  StringVersionAttributes = AslpFileMakeStringVersionAttributes(v5, v6);
  if ( StringVersionAttributes >= 0 )
    return 0;
  else
    AslLogCallPrintf(1LL);
  return (unsigned int)StringVersionAttributes;
}
