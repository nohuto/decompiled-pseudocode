/*
 * XREFs of AslpFileGetExportName @ 0x1406C783C
 * Callers:
 *     AslpFileGetPeExportNameExeWrapper @ 0x1406C7F0C (AslpFileGetPeExportNameExeWrapper.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     AslStringAnsiToUnicode @ 0x1406C523C (AslStringAnsiToUnicode.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslpFileQueryExportName @ 0x1406C8CA4 (AslpFileQueryExportName.c)
 */

__int64 __fastcall AslpFileGetExportName(wchar_t **a1)
{
  int ExportName; // eax
  unsigned int v3; // ebx
  const char *v4; // r9
  int v5; // r8d
  int v7; // [rsp+20h] [rbp-128h]
  char pszDest[256]; // [rsp+30h] [rbp-118h] BYREF

  memset(pszDest, 0, sizeof(pszDest));
  ExportName = AslpFileQueryExportName(pszDest);
  v3 = ExportName;
  if ( ExportName >= 0 )
  {
    ExportName = AslStringAnsiToUnicode(a1, pszDest);
    v3 = ExportName;
    if ( ExportName >= 0 )
      return 0;
    v4 = "AslStringAnsiToUnicode failed [%x]";
    v5 = 3185;
    goto LABEL_5;
  }
  if ( ExportName != -1073741275 && ExportName != -1073741701 )
  {
    v4 = "AslpFileQueryExportName failed [%x]";
    v5 = 3178;
LABEL_5:
    v7 = ExportName;
    AslLogCallPrintf(1LL, (unsigned int)"AslpFileGetExportName", v5, (_DWORD)v4, v7);
  }
  return v3;
}
