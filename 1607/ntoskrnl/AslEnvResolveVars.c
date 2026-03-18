/*
 * XREFs of AslEnvResolveVars @ 0x1406C66D4
 * Callers:
 *     AslEnvExpandStrings2 @ 0x1406C6530 (AslEnvExpandStrings2.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140084F38 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1400B03B8 (RtlStringCchCatW.c)
 *     _wcsnicmp @ 0x14014D8A0 (_wcsnicmp.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
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
  const wchar_t *v15; // r8
  wchar_t *v16; // r13
  NTSTATUS v17; // eax
  NTSTATUS v18; // ebx
  int v19; // r8d
  NTSTATUS v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+30h] [rbp-48h]
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+80h] [rbp+8h]

  pszSrc = a1;
  v6 = a4;
  v7 = 0;
  v8 = 0;
  for ( i = 0LL; i < 12; i += 3LL )
  {
    if ( v7 )
      goto LABEL_29;
    v11 = off_1402F4C30[i];
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    if ( a5 )
      v13 = off_1402F4C30[i + 2];
    else
      v13 = off_1402F4C30[i + 1];
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    if ( a2 <= (unsigned int)v12 )
      goto LABEL_17;
    v22 = (unsigned int)v12;
    if ( wcsnicmp(a1, v11, (unsigned int)v12) )
    {
      a1 = pszSrc;
LABEL_17:
      v16 = a3;
      continue;
    }
    v8 = a2 + v14 - v12;
    if ( v8 > (unsigned int)v6 )
    {
      v18 = -1073741789;
      goto LABEL_30;
    }
    v15 = v13;
    v16 = a3;
    v17 = RtlStringCchCopyW(a3, v6, v15);
    v18 = v17;
    if ( v17 < 0 )
    {
      v21 = v17;
      v19 = 860;
LABEL_24:
      AslLogCallPrintf(1LL, (unsigned int)"AslEnvResolveVars", v19, (unsigned int)"RtlStringCchCopyW failed [%x]", v21);
      return (unsigned int)v18;
    }
    v18 = RtlStringCchCatW(a3, v6, &pszSrc[v22]);
    if ( v18 < 0 )
    {
      AslLogCallPrintf(1LL, (unsigned int)"AslEnvResolveVars", 866, (unsigned int)"RtlStringCchCatW failed [%x]", v18);
      return (unsigned int)v18;
    }
    a1 = pszSrc;
    v7 = 1;
  }
  if ( !v7 )
  {
    v8 = a2;
    if ( a2 > (unsigned int)v6 )
    {
      v18 = -1073741789;
      *a6 = a2;
      return (unsigned int)v18;
    }
    v18 = RtlStringCchCopyW(v16, v6, a1);
    if ( v18 < 0 )
    {
      v21 = v18;
      v19 = 897;
      goto LABEL_24;
    }
  }
LABEL_29:
  v18 = 0;
LABEL_30:
  *a6 = v8;
  return (unsigned int)v18;
}
