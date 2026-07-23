/*
 * XREFs of AslpFileQueryExportName @ 0x1406C8DDC
 * Callers:
 *     AslpFileGetExportName @ 0x1406C7974 (AslpFileGetExportName.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 *     RtlStringCchCopyA @ 0x14013D2E4 (RtlStringCchCopyA.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x1406C7E0C (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x1406C9508 (AslpImageRvaToVa.c)
 */

__int64 __fastcall AslpFileQueryExportName(NTSTRSAFE_PSTR pszDest, __int64 a2)
{
  int ImageNtHeader; // ebx
  unsigned int *v5; // rax
  unsigned __int64 v6; // rdx
  const char *v7; // rax
  unsigned int v8; // ecx
  ULONG Size; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  Size = 0;
  v11 = 0LL;
  *pszDest = 0;
  ImageNtHeader = AslpFileGetImageNtHeader(&v11, a2);
  if ( ImageNtHeader < 0 )
    goto LABEL_2;
  v5 = (unsigned int *)RtlImageDirectoryEntryToData(*(PVOID *)(a2 + 544), *(_BYTE *)(a2 + 571), 0, &Size);
  if ( !v5 || Size < 0x28 )
  {
    ImageNtHeader = -1073741275;
    if ( !v5 )
      return (unsigned int)ImageNtHeader;
LABEL_17:
    AslLogCallPrintf(2LL);
    return (unsigned int)ImageNtHeader;
  }
  v6 = *(_QWORD *)(a2 + 544);
  if ( (unsigned __int64)v5 < v6 || (unsigned __int64)(v5 + 10) > *(_QWORD *)(a2 + 536) + v6 )
  {
    ImageNtHeader = -1073741701;
    goto LABEL_17;
  }
  v7 = (const char *)AslpImageRvaToVa(v11, a2 + 520, v5[3]);
  if ( !v7 || (unsigned __int64)v7 >= *(_QWORD *)(a2 + 544) + *(_QWORD *)(a2 + 536) || !*v7 )
  {
    ImageNtHeader = -1073741701;
    goto LABEL_17;
  }
  v8 = *(_DWORD *)(a2 + 544) + *(_DWORD *)(a2 + 536) - (_DWORD)v7;
  if ( v8 > 0x100 )
    v8 = 256;
  ImageNtHeader = RtlStringCchCopyA(pszDest, v8, v7);
  if ( ImageNtHeader >= 0 )
    return 0;
LABEL_2:
  AslLogCallPrintf(1LL);
  return (unsigned int)ImageNtHeader;
}
