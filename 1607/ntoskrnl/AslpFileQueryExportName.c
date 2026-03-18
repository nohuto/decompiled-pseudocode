/*
 * XREFs of AslpFileQueryExportName @ 0x1406C8CA4
 * Callers:
 *     AslpFileGetExportName @ 0x1406C783C (AslpFileGetExportName.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14007BAEC (RtlImageDirectoryEntryToData.c)
 *     RtlStringCchCopyA @ 0x14013CD74 (RtlStringCchCopyA.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x1406C7CD4 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x1406C93D0 (AslpImageRvaToVa.c)
 */

__int64 __fastcall AslpFileQueryExportName(NTSTRSAFE_PSTR pszDest, __int64 a2)
{
  int ImageNtHeader; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  int v7; // r8d
  unsigned int *v8; // rax
  unsigned __int64 v9; // rdx
  const char *v10; // rax
  unsigned int v11; // ecx
  int v13; // [rsp+20h] [rbp-28h]
  ULONG Size; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  Size = 0;
  v15 = 0LL;
  *pszDest = 0;
  ImageNtHeader = AslpFileGetImageNtHeader(&v15, a2);
  v5 = ImageNtHeader;
  if ( ImageNtHeader < 0 )
  {
    v6 = "AslpFileGetImageNtHeader failed [%x]";
    v7 = 3231;
LABEL_3:
    v13 = ImageNtHeader;
    AslLogCallPrintf(1LL, (unsigned int)"AslpFileQueryExportName", v7, (_DWORD)v6, v13);
    return v5;
  }
  v8 = (unsigned int *)RtlImageDirectoryEntryToData(*(PVOID *)(a2 + 544), *(_BYTE *)(a2 + 571), 0, &Size);
  if ( v8 && Size >= 0x28 )
  {
    v9 = *(_QWORD *)(a2 + 544);
    if ( (unsigned __int64)v8 < v9 || (unsigned __int64)(v8 + 10) > *(_QWORD *)(a2 + 536) + v9 )
    {
      v5 = -1073741701;
      AslLogCallPrintf(
        2LL,
        (unsigned int)"AslpFileQueryExportName",
        3262,
        (unsigned int)"Export directory pointer invalid (points to location outside file), invalid image format");
      return v5;
    }
    v10 = (const char *)AslpImageRvaToVa(v15, a2 + 520, v8[3]);
    if ( !v10 || (unsigned __int64)v10 >= *(_QWORD *)(a2 + 544) + *(_QWORD *)(a2 + 536) || !*v10 )
    {
      v5 = -1073741701;
      AslLogCallPrintf(
        2LL,
        (unsigned int)"AslpFileQueryExportName",
        3271,
        (unsigned int)"Export directory invalid or invalid image format");
      return v5;
    }
    v11 = *(_DWORD *)(a2 + 544) + *(_DWORD *)(a2 + 536) - (_DWORD)v10;
    if ( v11 > 0x100 )
      v11 = 256;
    ImageNtHeader = RtlStringCchCopyA(pszDest, v11, v10);
    v5 = ImageNtHeader;
    if ( ImageNtHeader >= 0 )
      return 0;
    v6 = "RtlStringCchCopyA failed [%x]";
    v7 = 3283;
    goto LABEL_3;
  }
  v5 = -1073741275;
  if ( v8 )
    AslLogCallPrintf(
      2LL,
      (unsigned int)"AslpFileQueryExportName",
      3248,
      (unsigned int)"RtlImageDirectoryEntryToData returned ExportDirectory that was too small");
  return v5;
}
