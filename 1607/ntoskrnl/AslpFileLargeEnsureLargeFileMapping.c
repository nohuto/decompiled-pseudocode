/*
 * XREFs of AslpFileLargeEnsureLargeFileMapping @ 0x1406C94E0
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1406C6A84 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslpFileLargeAssignViewAndDelete @ 0x1406C9444 (AslpFileLargeAssignViewAndDelete.c)
 *     AslpFileLargeGetChecksumAttributes @ 0x1406C96A4 (AslpFileLargeGetChecksumAttributes.c)
 *     AslpFileLargeMapCreate @ 0x1406C9970 (AslpFileLargeMapCreate.c)
 *     AslpFileLargeMapDelete @ 0x1406C9BD4 (AslpFileLargeMapDelete.c)
 */

__int64 __fastcall AslpFileLargeEnsureLargeFileMapping(__int64 a1, __int64 a2)
{
  _DWORD *v5; // rdx
  int i; // ecx
  int v7; // ebx
  int ChecksumAttributes; // eax
  int v9; // [rsp+20h] [rbp-18h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_QWORD *)(a2 + 536) < 0x100000uLL )
    return 3221225712LL;
  v10 = 0LL;
  v5 = (_DWORD *)(a1 + 24);
  for ( i = 0; i < 33; ++i )
  {
    if ( i < 0 || i > 19 && i != 22 && i != 24 && (unsigned int)(i - 26) > 5 )
      *v5 |= 2u;
    v5 += 8;
  }
  v7 = AslpFileLargeMapCreate(&v10, a2 + 520);
  if ( v7 >= 0 )
  {
    ChecksumAttributes = AslpFileLargeGetChecksumAttributes(a1, v10);
    if ( ChecksumAttributes < 0 )
    {
      v9 = ChecksumAttributes;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpFileLargeEnsureLargeFileMapping",
        248,
        (unsigned int)"AslpFileLargeGetChecksumAttributes failed to get checksum attributes [%x]",
        v9);
    }
    v7 = AslpFileLargeAssignViewAndDelete(a2, &v10);
  }
  AslpFileLargeMapDelete(&v10);
  return (unsigned int)v7;
}
