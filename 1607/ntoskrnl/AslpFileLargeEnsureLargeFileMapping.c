/*
 * XREFs of AslpFileLargeEnsureLargeFileMapping @ 0x1406C9618
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1406C6BBC (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 *     AslpFileLargeAssignViewAndDelete @ 0x1406C957C (AslpFileLargeAssignViewAndDelete.c)
 *     AslpFileLargeGetChecksumAttributes @ 0x1406C97DC (AslpFileLargeGetChecksumAttributes.c)
 *     AslpFileLargeMapCreate @ 0x1406C9AA8 (AslpFileLargeMapCreate.c)
 *     AslpFileLargeMapDelete @ 0x1406C9D0C (AslpFileLargeMapDelete.c)
 */

__int64 __fastcall AslpFileLargeEnsureLargeFileMapping(__int64 a1, __int64 a2)
{
  _DWORD *v5; // rdx
  int i; // ecx
  int v7; // ebx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_QWORD *)(a2 + 536) < 0x100000uLL )
    return 3221225712LL;
  v8 = 0LL;
  v5 = (_DWORD *)(a1 + 24);
  for ( i = 0; i < 33; ++i )
  {
    if ( i < 0 || i > 19 && i != 22 && i != 24 && (unsigned int)(i - 26) > 5 )
      *v5 |= 2u;
    v5 += 8;
  }
  v7 = AslpFileLargeMapCreate(&v8, a2 + 520);
  if ( v7 >= 0 )
  {
    if ( (int)AslpFileLargeGetChecksumAttributes(a1, v8) < 0 )
      AslLogCallPrintf(1LL);
    v7 = AslpFileLargeAssignViewAndDelete(a2, &v8);
  }
  AslpFileLargeMapDelete(&v8);
  return (unsigned int)v7;
}
