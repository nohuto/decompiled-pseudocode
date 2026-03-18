/*
 * XREFs of AslpFileQueryVersionString @ 0x1406C8E7C
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x1406C8868 (AslpFileMakeStringVersionAttributes.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14007F50C (RtlStringCchPrintfW.c)
 *     RtlStringCchCopyW @ 0x140084F38 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1400B03B8 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslpFileVerQueryBlock @ 0x1406C90B4 (AslpFileVerQueryBlock.c)
 *     AslpFileVerStringBlockGetValue @ 0x1406C92A4 (AslpFileVerStringBlockGetValue.c)
 */

__int64 __fastcall AslpFileQueryVersionString(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int64 a5,
        NTSTRSAFE_PCWSTR pszSrc)
{
  __int64 v10; // rdi
  NTSTATUS v11; // eax
  unsigned int v12; // ebx
  unsigned __int64 v13; // rdi
  const char *v14; // r9
  int v15; // r8d
  __int64 v17; // [rsp+20h] [rbp-E0h]
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  NTSTRSAFE_PCWSTR v22; // [rsp+50h] [rbp-B0h]
  wchar_t pszDest[128]; // [rsp+60h] [rbp-A0h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  v22 = pszSrc;
  pszDest[0] = 0;
  v21 = 0LL;
  v10 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  while ( 1 )
  {
    v11 = RtlStringCchCopyW(pszDest, 0x80uLL, off_14025D3C8[v10]);
    v12 = v11;
    if ( v11 < 0 )
    {
      v14 = "RtlStringCchCopyW failed [%x]";
      v15 = 2241;
      goto LABEL_23;
    }
    v11 = RtlStringCchCatW(pszDest, 0x80uLL, pszSrc);
    v12 = v11;
    if ( v11 < 0 )
    {
      v14 = "RtlStringCchCatW failed [%x]";
      v15 = 2247;
      goto LABEL_23;
    }
    v11 = AslpFileVerQueryBlock(a3, pszDest, &v19, &v18);
    v12 = v11;
    if ( v11 >= 0 )
      break;
    if ( v11 != -1073741275 )
    {
      v14 = "AslpFileVerQueryBlock failed [%x]";
      v15 = 2277;
LABEL_23:
      LODWORD(v17) = v11;
      AslLogCallPrintf(1LL, (unsigned int)"AslpFileQueryVersionString", v15, (_DWORD)v14, v17);
      return v12;
    }
    if ( (unsigned __int64)++v10 >= 4 )
      goto LABEL_7;
  }
  if ( (int)AslpFileVerStringBlockGetValue(&v21, &v20, v19, v18) >= 0 )
  {
LABEL_16:
    *a2 = v20;
    *a1 = v21;
    return 0LL;
  }
LABEL_7:
  if ( a4 )
  {
    v13 = 0LL;
    if ( a5 )
    {
      while ( 1 )
      {
        LODWORD(v17) = a4[1];
        v11 = RtlStringCchPrintfW(pszDest, 0x80uLL, L"\\StringFileInfo\\%04X%04X\\%s", *a4, v17, v22);
        v12 = v11;
        if ( v11 < 0 )
        {
          v14 = "RtlStringCchPrintfW failed [%x]";
          v15 = 2295;
          goto LABEL_23;
        }
        v11 = AslpFileVerQueryBlock(a3, pszDest, &v19, &v18);
        v12 = v11;
        if ( v11 >= 0 )
          break;
        if ( v11 != -1073741275 )
        {
          v14 = "AslpFileVerQueryBlock failed [%x]";
          v15 = 2325;
          goto LABEL_23;
        }
        ++v13;
        a4 += 2;
        if ( v13 >= a5 )
          return 3221226021LL;
      }
      if ( (int)AslpFileVerStringBlockGetValue(&v21, &v20, v19, v18) >= 0 )
        goto LABEL_16;
    }
  }
  return 3221226021LL;
}
