/*
 * XREFs of AslpFileGetClrVersionAttribute @ 0x1406C747C
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1406C6A84 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     AslStringAnsiToUnicode @ 0x1406C523C (AslStringAnsiToUnicode.c)
 *     AslStringXmlSanitize @ 0x1406C5610 (AslStringXmlSanitize.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x1406C582C (AslFileMappingEnsure.c)
 *     AslpFileGetClrVersion @ 0x1406C72A8 (AslpFileGetClrVersion.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x1406C7900 (AslpFileGetFileKindDetailAttribute.c)
 */

__int64 __fastcall AslpFileGetClrVersionAttribute(__int64 a1, __int64 a2)
{
  int FileKindDetailAttribute; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // rax
  int v11; // [rsp+20h] [rbp-148h]
  wchar_t *v12; // [rsp+30h] [rbp-138h] BYREF
  char v13[256]; // [rsp+40h] [rbp-128h] BYREF

  memset(v13, 0, sizeof(v13));
  v12 = 0LL;
  FileKindDetailAttribute = AslFileMappingEnsure(a2);
  v5 = FileKindDetailAttribute;
  if ( FileKindDetailAttribute >= 0 )
  {
    if ( *(_DWORD *)(a2 + 576) != 6 )
      goto LABEL_5;
    if ( (*(_DWORD *)(a1 + 920) & 1) == 0 )
    {
      FileKindDetailAttribute = AslpFileGetFileKindDetailAttribute(a1, a2);
      v5 = FileKindDetailAttribute;
      if ( FileKindDetailAttribute < 0 )
      {
        v6 = "AslpFileGetFileKindDetailAttribute failed [%x]";
        v7 = 4047;
        goto LABEL_3;
      }
    }
    if ( (unsigned int)(*(_DWORD *)(a1 + 912) - 12) <= 3 )
    {
      FileKindDetailAttribute = AslpFileGetClrVersion(v13, a2);
      v5 = FileKindDetailAttribute;
      if ( FileKindDetailAttribute < 0 )
      {
        v6 = "AslpFileGetClrVersion failed [%x]";
        v7 = 4066;
        goto LABEL_3;
      }
      FileKindDetailAttribute = AslStringAnsiToUnicode(&v12, v13);
      v5 = FileKindDetailAttribute;
      if ( FileKindDetailAttribute < 0 )
      {
        v6 = "AslStringAnsiToUnicode failed [%x]";
        v7 = 4072;
        goto LABEL_3;
      }
      FileKindDetailAttribute = AslStringXmlSanitize(v12);
      v5 = FileKindDetailAttribute;
      if ( FileKindDetailAttribute < 0 )
      {
        v6 = "AslStringXmlSanitize failed [%x]";
        v7 = 4078;
        goto LABEL_3;
      }
      *(_DWORD *)(a1 + 864) = 4;
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)(v8 + 2 * v9) );
      *(_DWORD *)(a1 + 888) |= 5u;
      *(_QWORD *)(a1 + 872) = v9;
      *(_QWORD *)(a1 + 880) = v8;
    }
    else
    {
LABEL_5:
      *(_DWORD *)(a1 + 888) |= 2u;
    }
    return 0;
  }
  v6 = "AslFileMappingEnsure failed [%x]";
  v7 = 4030;
LABEL_3:
  v11 = FileKindDetailAttribute;
  AslLogCallPrintf(1LL, (unsigned int)"AslpFileGetClrVersionAttribute", v7, (_DWORD)v6, v11);
  return v5;
}
