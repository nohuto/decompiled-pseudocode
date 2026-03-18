/*
 * XREFs of AslpFileGetFileKindDetailAttribute @ 0x1406C7900
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1406C6A84 (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x1406C747C (AslpFileGetClrVersionAttribute.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslFileMappingGetFileKindDetail @ 0x1406C59F0 (AslFileMappingGetFileKindDetail.c)
 */

__int64 __fastcall AslpFileGetFileKindDetailAttribute(__int64 a1, __int64 a2)
{
  int FileKindDetail; // eax
  unsigned int v4; // edi
  __int64 v5; // rax
  int v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  FileKindDetail = AslFileMappingGetFileKindDetail(&v8, a2);
  v4 = FileKindDetail;
  if ( FileKindDetail >= 0 )
  {
    v5 = v8;
    *(_DWORD *)(a1 + 920) |= 1u;
    *(_QWORD *)(a1 + 912) = v5;
    v4 = 0;
    *(_DWORD *)(a1 + 896) = 2;
    *(_QWORD *)(a1 + 904) = 4LL;
  }
  else
  {
    v7 = FileKindDetail;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileGetFileKindDetailAttribute",
      4253,
      (unsigned int)"AslFileMappingGetFileKindDetails failed [%x]",
      v7);
  }
  return v4;
}
