/*
 * XREFs of SdbpCreateSearchDBContext @ 0x1403B83B4
 * Callers:
 *     SdbGetDatabaseMatch @ 0x1403B6D2C (SdbGetDatabaseMatch.c)
 *     SdbpCheckKObject @ 0x14053511C (SdbpCheckKObject.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140002AB0 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x140002BC8 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     AslFree @ 0x1403B7E1C (AslFree.c)
 *     AslAlloc @ 0x1403B8554 (AslAlloc.c)
 *     AslPathSplit @ 0x1403B8D2C (AslPathSplit.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCreateSearchDBContext(_QWORD *a1, const wchar_t *a2)
{
  unsigned int v4; // ebx
  wchar_t *v5; // rsi
  __int64 v6; // rax
  unsigned int v7; // r15d
  wchar_t *v8; // rbp
  __int64 v9; // rcx
  wchar_t *v10; // rax
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _WORD *v15; // rax
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-478h]
  wchar_t pszSrc[264]; // [rsp+40h] [rbp-458h] BYREF
  wchar_t v19[264]; // [rsp+250h] [rbp-248h] BYREF

  v4 = 0;
  memset(v19, 0, 520);
  memset(pszSrc, 0, 520);
  v5 = 0LL;
  if ( !a2 )
  {
    v8 = (wchar_t *)AslAlloc(a1, 4LL);
    RtlStringCchCopyW(v8, 2uLL, L".");
    v5 = (wchar_t *)AslAlloc(v13, 2LL);
    *v5 = 0;
    v15 = (_WORD *)AslAlloc(v14, 2LL);
    *v15 = 0;
    a1[3] = v15;
LABEL_9:
    a1[7] = 0LL;
    a1[6] = 0LL;
    a1[9] = 0LL;
    a1[8] = 0LL;
    a1[11] = 0LL;
    v4 = 1;
    a1[1] = a2;
    a1[4] = v8;
    a1[5] = v5;
    return v4;
  }
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  v7 = v6 + 1;
  v8 = (wchar_t *)AslAlloc(a1, 2LL * (unsigned int)(v6 + 1));
  if ( !v8 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCreateSearchDBContext",
      178,
      (unsigned int)"Unable to allocate memory for directory path");
    return v4;
  }
  if ( (int)AslPathSplit(a2, v8, v7, pszSrc, v17, v19) < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCreateSearchDBContext",
      189,
      (unsigned int)"Unable to parse executable path for \"%ws\"");
  }
  else
  {
    v10 = (wchar_t *)AslAlloc(v9, 520LL);
    v5 = v10;
    if ( v10 )
    {
      if ( RtlStringCchCopyW(v10, 0x104uLL, pszSrc) >= 0 && RtlStringCchCatW(v5, 0x104uLL, v19) >= 0 )
        goto LABEL_9;
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCreateSearchDBContext",
        195,
        (unsigned int)"Unable to allocate memory for full name");
    }
  }
  AslFree(v11, v8);
  if ( v5 )
    AslFree(v16, v5);
  return v4;
}
