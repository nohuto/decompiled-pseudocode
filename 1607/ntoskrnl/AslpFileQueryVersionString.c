/*
 * XREFs of AslpFileQueryVersionString @ 0x1406C8FB4
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x1406C89A0 (AslpFileMakeStringVersionAttributes.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     RtlStringCchCopyW @ 0x14010B1EC (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x14010B540 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 *     AslpFileVerQueryBlock @ 0x1406C91EC (AslpFileVerQueryBlock.c)
 *     AslpFileVerStringBlockGetValue @ 0x1406C93DC (AslpFileVerStringBlockGetValue.c)
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
  NTSTATUS v11; // ebx
  int v12; // eax
  unsigned __int64 v13; // rdi
  int v14; // eax
  __int64 v16; // [rsp+20h] [rbp-E0h]
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  NTSTRSAFE_PCWSTR v21; // [rsp+50h] [rbp-B0h]
  wchar_t pszDest[128]; // [rsp+60h] [rbp-A0h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  v21 = pszSrc;
  pszDest[0] = 0;
  v20 = 0LL;
  v10 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  while ( 1 )
  {
    v11 = RtlStringCchCopyW(pszDest, 0x80uLL, off_14025D3C8[v10]);
    if ( v11 < 0 )
      break;
    v11 = RtlStringCchCatW(pszDest, 0x80uLL, pszSrc);
    if ( v11 < 0 )
      break;
    v12 = AslpFileVerQueryBlock(a3, pszDest, &v18, &v17);
    v11 = v12;
    if ( v12 >= 0 )
    {
      if ( (int)AslpFileVerStringBlockGetValue(&v20, &v19, v18, v17) >= 0 )
      {
LABEL_16:
        *a2 = v19;
        *a1 = v20;
        return 0LL;
      }
LABEL_7:
      if ( !a4 )
        return 3221226021LL;
      v13 = 0LL;
      if ( !a5 )
        return 3221226021LL;
      while ( 1 )
      {
        LODWORD(v16) = a4[1];
        v11 = RtlStringCchPrintfW(pszDest, 0x80uLL, L"\\StringFileInfo\\%04X%04X\\%s", *a4, v16, v21);
        if ( v11 < 0 )
          goto LABEL_20;
        v14 = AslpFileVerQueryBlock(a3, pszDest, &v18, &v17);
        v11 = v14;
        if ( v14 >= 0 )
        {
          if ( (int)AslpFileVerStringBlockGetValue(&v20, &v19, v18, v17) >= 0 )
            goto LABEL_16;
          return 3221226021LL;
        }
        if ( v14 != -1073741275 )
          goto LABEL_20;
        ++v13;
        a4 += 2;
        if ( v13 >= a5 )
          return 3221226021LL;
      }
    }
    if ( v12 != -1073741275 )
      break;
    if ( (unsigned __int64)++v10 >= 4 )
      goto LABEL_7;
  }
LABEL_20:
  AslLogCallPrintf(1LL);
  return (unsigned int)v11;
}
