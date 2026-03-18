/*
 * XREFs of AslpFileGetPeExportNameExeWrapper @ 0x140682284
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x140680EBC (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     AslStringXmlSanitize @ 0x140680544 (AslStringXmlSanitize.c)
 *     AslFileMappingEnsure @ 0x140680738 (AslFileMappingEnsure.c)
 *     AslpFileGetExeWrapper @ 0x140681A40 (AslpFileGetExeWrapper.c)
 *     AslpFileGetExportName @ 0x140681BC0 (AslpFileGetExportName.c)
 */

__int64 __fastcall AslpFileGetPeExportNameExeWrapper(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // [rsp+60h] [rbp+18h] BYREF
  wchar_t *v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0;
  v10 = 0LL;
  v4 = AslFileMappingEnsure(a2);
  if ( v4 < 0 )
    goto LABEL_2;
  if ( *(_DWORD *)(a2 + 576) != 6 )
  {
    *(_DWORD *)(a1 + 824) |= 2u;
LABEL_5:
    *(_DWORD *)(a1 + 760) |= 2u;
    return 0;
  }
  if ( (int)AslpFileGetExeWrapper(&v9, a2) < 0 )
  {
    *(_DWORD *)(a1 + 824) |= 2u;
  }
  else
  {
    v6 = v9;
    *(_DWORD *)(a1 + 824) |= 1u;
    *(_QWORD *)(a1 + 816) = v6;
    *(_DWORD *)(a1 + 800) = 2;
    *(_QWORD *)(a1 + 808) = 4LL;
  }
  if ( (int)AslpFileGetExportName(&v10) < 0 )
    goto LABEL_5;
  v4 = AslStringXmlSanitize(v10);
  if ( v4 >= 0 )
  {
    *(_DWORD *)(a1 + 736) = 4;
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(v7 + 2 * v8) );
    *(_DWORD *)(a1 + 760) |= 5u;
    *(_QWORD *)(a1 + 744) = v8;
    *(_QWORD *)(a1 + 752) = v7;
    return 0;
  }
LABEL_2:
  AslLogCallPrintf(1LL);
  return (unsigned int)v4;
}
