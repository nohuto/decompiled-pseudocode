/*
 * XREFs of AslEnvResolveVars @ 0x1405AA358
 * Callers:
 *     AslEnvExpandStrings2 @ 0x1405AA20C (AslEnvExpandStrings2.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14011BAF4 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x140166888 (RtlStringCchCatW.c)
 *     _wcsnicmp @ 0x140172500 (_wcsnicmp.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvResolveVars(
        const wchar_t *a1,
        unsigned int a2,
        wchar_t *a3,
        unsigned int a4,
        int a5,
        unsigned int *a6)
{
  size_t v6; // r12
  int v7; // r15d
  unsigned int v8; // edi
  unsigned __int64 i; // r14
  const wchar_t *v11; // rdx
  __int64 v12; // rbx
  wchar_t *v13; // r13
  __int64 v14; // rbp
  NTSTATUS v15; // ebx
  const wchar_t *v17; // r8
  wchar_t *v18; // r13
  const char *v19; // r9
  int v20; // r8d
  __int64 v21; // [rsp+30h] [rbp-48h]
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+80h] [rbp+8h]

  pszSrc = a1;
  v6 = a4;
  v7 = 0;
  v8 = 0;
  for ( i = 0LL; i < 12; i += 3LL )
  {
    if ( v7 )
      goto LABEL_20;
    v11 = off_140322350[i];
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    if ( a5 )
      v13 = off_140322350[i + 2];
    else
      v13 = off_140322350[i + 1];
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    if ( a2 <= (unsigned int)v12 )
      goto LABEL_23;
    v21 = (unsigned int)v12;
    if ( wcsnicmp(a1, v11, (unsigned int)v12) )
    {
      a1 = pszSrc;
LABEL_23:
      v18 = a3;
      continue;
    }
    v8 = a2 + v14 - v12;
    if ( v8 > (unsigned int)v6 )
    {
      v15 = -1073741789;
LABEL_13:
      *a6 = v8;
      return (unsigned int)v15;
    }
    v17 = v13;
    v18 = a3;
    v15 = RtlStringCchCopyW(a3, v6, v17);
    if ( v15 < 0 )
    {
      v20 = 847;
      goto LABEL_26;
    }
    v15 = RtlStringCchCatW(a3, v6, &pszSrc[v21]);
    if ( v15 < 0 )
    {
      v19 = "RtlStringCchCatW failed [%x]";
      v20 = 853;
      goto LABEL_27;
    }
    a1 = pszSrc;
    v7 = 1;
  }
  if ( v7 )
    goto LABEL_20;
  v8 = a2;
  if ( a2 > (unsigned int)v6 )
  {
    v15 = -1073741789;
    *a6 = a2;
    return (unsigned int)v15;
  }
  v15 = RtlStringCchCopyW(v18, v6, a1);
  if ( v15 >= 0 )
  {
LABEL_20:
    v15 = 0;
    goto LABEL_13;
  }
  v20 = 884;
LABEL_26:
  v19 = "RtlStringCchCopyW failed [%x]";
LABEL_27:
  AslLogCallPrintf(1, (unsigned int)"AslEnvResolveVars", v20, (_DWORD)v19);
  return (unsigned int)v15;
}
