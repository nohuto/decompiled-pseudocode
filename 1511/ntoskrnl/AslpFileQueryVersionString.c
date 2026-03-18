/*
 * XREFs of AslpFileQueryVersionString @ 0x1406832F8
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x140682D1C (AslpFileMakeStringVersionAttributes.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140002AB0 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x140002BC8 (RtlStringCchCatW.c)
 *     RtlStringCchPrintfW @ 0x140003C28 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     AslpFileVerQueryValue @ 0x1406834D4 (AslpFileVerQueryValue.c)
 */

__int64 __fastcall AslpFileQueryVersionString(
        _QWORD *a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int64 a4,
        NTSTRSAFE_PCWSTR pszSrc)
{
  unsigned __int64 v5; // rdi
  NTSTATUS v10; // ebx
  __int64 result; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // [rsp+20h] [rbp-E0h]
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszDest[128]; // [rsp+40h] [rbp-C0h] BYREF

  pszDest[0] = 0;
  v5 = 0LL;
  v15 = 0LL;
  LODWORD(v14) = 0;
  *a1 = 0LL;
  do
  {
    v10 = RtlStringCchCopyW(pszDest, 0x80uLL, off_14025DCD0[v5]);
    if ( v10 < 0 )
      goto LABEL_18;
    v10 = RtlStringCchCatW(pszDest, 0x80uLL, pszSrc);
    if ( v10 < 0 )
      goto LABEL_18;
    v10 = AslpFileVerQueryValue(a2, pszDest, &v15, &v14);
    if ( v10 >= 0 )
    {
LABEL_17:
      *a1 = v15;
      return 0LL;
    }
    result = 3221226021LL;
    if ( v10 != -1073741275 )
      goto LABEL_18;
    ++v5;
  }
  while ( v5 < 4 );
  if ( a3 )
  {
    v12 = 0LL;
    if ( a4 )
    {
      while ( 1 )
      {
        LODWORD(v13) = a3[1];
        v10 = RtlStringCchPrintfW(pszDest, 0x80uLL, L"\\StringFileInfo\\%04X%04X\\%s", *a3, v13, pszSrc, v14);
        if ( v10 < 0 )
          break;
        v10 = AslpFileVerQueryValue(a2, pszDest, &v15, &v14);
        if ( v10 >= 0 )
          goto LABEL_17;
        result = 3221226021LL;
        if ( v10 != -1073741275 )
          break;
        ++v12;
        a3 += 2;
        if ( v12 >= a4 )
          return result;
      }
LABEL_18:
      AslLogCallPrintf(1LL);
      return (unsigned int)v10;
    }
  }
  return result;
}
