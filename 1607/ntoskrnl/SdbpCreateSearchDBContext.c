/*
 * XREFs of SdbpCreateSearchDBContext @ 0x1404853AC
 * Callers:
 *     SdbGetDatabaseMatch @ 0x14049D418 (SdbGetDatabaseMatch.c)
 *     SdbpCheckKObject @ 0x140572FBC (SdbpCheckKObject.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140084F38 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1400B03B8 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     AslPathSplit @ 0x140486A70 (AslPathSplit.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCreateSearchDBContext(_QWORD *a1, const wchar_t *a2)
{
  unsigned int v4; // ebx
  wchar_t *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // r15d
  wchar_t *v9; // rbp
  __int64 v10; // rcx
  wchar_t *v11; // rax
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _WORD *v16; // rax
  __int64 v17; // rcx
  int v18; // [rsp+20h] [rbp-478h]
  wchar_t pszSrc[264]; // [rsp+40h] [rbp-458h] BYREF
  wchar_t v20[264]; // [rsp+250h] [rbp-248h] BYREF

  v4 = 0;
  memset(v20, 0, 0x208uLL);
  v5 = 0LL;
  memset(pszSrc, 0, 0x208uLL);
  if ( !a2 )
  {
    v9 = (wchar_t *)AslAlloc(v6, 4LL);
    RtlStringCchCopyW(v9, 2uLL, L".");
    v5 = (wchar_t *)AslAlloc(v14, 2LL);
    *v5 = 0;
    v16 = (_WORD *)AslAlloc(v15, 2LL);
    *v16 = 0;
    a1[3] = v16;
LABEL_9:
    a1[7] = 0LL;
    a1[6] = 0LL;
    a1[9] = 0LL;
    a1[8] = 0LL;
    a1[11] = 0LL;
    v4 = 1;
    a1[1] = a2;
    a1[4] = v9;
    a1[5] = v5;
    return v4;
  }
  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  v8 = v7 + 1;
  v9 = (wchar_t *)AslAlloc(v6, 2LL * (unsigned int)(v7 + 1));
  if ( !v9 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCreateSearchDBContext",
      179,
      (unsigned int)"Unable to allocate memory for directory path");
    return v4;
  }
  if ( (int)AslPathSplit(a2, v9, v8, pszSrc, v18, v20) < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCreateSearchDBContext",
      190,
      (unsigned int)"Unable to parse executable path for \"%ws\"",
      a2);
  }
  else
  {
    v11 = (wchar_t *)AslAlloc(v10, 520LL);
    v5 = v11;
    if ( v11 )
    {
      if ( RtlStringCchCopyW(v11, 0x104uLL, pszSrc) >= 0 && RtlStringCchCatW(v5, 0x104uLL, v20) >= 0 )
        goto LABEL_9;
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCreateSearchDBContext",
        196,
        (unsigned int)"Unable to allocate memory for full name");
    }
  }
  AslFree(v12, v9);
  if ( v5 )
    AslFree(v17, v5);
  return v4;
}
