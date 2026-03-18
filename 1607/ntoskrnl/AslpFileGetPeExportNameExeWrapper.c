/*
 * XREFs of AslpFileGetPeExportNameExeWrapper @ 0x1406C7F0C
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1406C6A84 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslStringXmlSanitize @ 0x1406C5610 (AslStringXmlSanitize.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x1406C582C (AslFileMappingEnsure.c)
 *     AslpFileGetExeWrapper @ 0x1406C76A0 (AslpFileGetExeWrapper.c)
 *     AslpFileGetExportName @ 0x1406C783C (AslpFileGetExportName.c)
 */

__int64 __fastcall AslpFileGetPeExportNameExeWrapper(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // edi
  const char *v6; // r9
  int v7; // r8d
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // [rsp+20h] [rbp-28h]
  unsigned int v13; // [rsp+60h] [rbp+18h] BYREF
  wchar_t *v14; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0;
  v14 = 0LL;
  v4 = AslFileMappingEnsure(a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 576) == 6 )
    {
      if ( (int)AslpFileGetExeWrapper(&v13, a2) < 0 )
      {
        *(_DWORD *)(a1 + 824) |= 2u;
      }
      else
      {
        v9 = v13;
        *(_DWORD *)(a1 + 824) |= 1u;
        *(_QWORD *)(a1 + 816) = v9;
        *(_DWORD *)(a1 + 800) = 2;
        *(_QWORD *)(a1 + 808) = 4LL;
      }
      if ( (int)AslpFileGetExportName(&v14) >= 0 )
      {
        v4 = AslStringXmlSanitize(v14);
        v5 = v4;
        if ( v4 < 0 )
        {
          v6 = "AslStringXmlSanitize failed [%x]";
          v7 = 2394;
          goto LABEL_3;
        }
        *(_DWORD *)(a1 + 736) = 4;
        v11 = -1LL;
        do
          ++v11;
        while ( *(_WORD *)(v10 + 2 * v11) );
        *(_DWORD *)(a1 + 760) |= 5u;
        *(_QWORD *)(a1 + 744) = v11;
        *(_QWORD *)(a1 + 752) = v10;
        return 0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 824) |= 2u;
    }
    *(_DWORD *)(a1 + 760) |= 2u;
    return 0;
  }
  v6 = "AslFileMappingEnsure failed [%x]";
  v7 = 2359;
LABEL_3:
  v12 = v4;
  AslLogCallPrintf(1LL, (unsigned int)"AslpFileGetPeExportNameExeWrapper", v7, (_DWORD)v6, v12);
  return v5;
}
