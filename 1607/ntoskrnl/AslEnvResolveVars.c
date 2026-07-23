/*
 * XREFs of AslEnvResolveVars @ 0x1406C680C
 * Callers:
 *     AslEnvExpandStrings2 @ 0x1406C6668 (AslEnvExpandStrings2.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14010B1EC (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x14010B540 (RtlStringCchCatW.c)
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
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
  unsigned __int64 v9; // r14
  const wchar_t *v11; // rdx
  __int64 v12; // rbx
  wchar_t *v13; // r13
  __int64 v14; // rbp
  const wchar_t *v15; // r8
  wchar_t *v16; // r13
  NTSTATUS v17; // ebx
  __int64 v19; // [rsp+30h] [rbp-48h]
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+80h] [rbp+8h]

  pszSrc = a1;
  v6 = a4;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  while ( !v7 )
  {
    v11 = off_1402F4C30[v9];
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    if ( a5 )
      v13 = off_1402F4C30[v9 + 2];
    else
      v13 = off_1402F4C30[v9 + 1];
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    if ( a2 > (unsigned int)v12 )
    {
      v19 = (unsigned int)v12;
      if ( !wcsnicmp(a1, v11, (unsigned int)v12) )
      {
        v8 = a2 + v14 - v12;
        if ( v8 > (unsigned int)v6 )
        {
          v17 = -1073741789;
          goto LABEL_26;
        }
        v15 = v13;
        v16 = a3;
        v17 = RtlStringCchCopyW(a3, v6, v15);
        if ( v17 < 0 )
          goto LABEL_22;
        v17 = RtlStringCchCatW(a3, v6, &pszSrc[v19]);
        if ( v17 < 0 )
          goto LABEL_22;
        a1 = pszSrc;
        v7 = 1;
        goto LABEL_18;
      }
      a1 = pszSrc;
    }
    v16 = a3;
LABEL_18:
    v9 += 3LL;
    if ( v9 >= 12 )
    {
      if ( !v7 )
      {
        v8 = a2;
        if ( a2 > (unsigned int)v6 )
        {
          v17 = -1073741789;
          *a6 = a2;
          return (unsigned int)v17;
        }
        v17 = RtlStringCchCopyW(v16, v6, a1);
        if ( v17 < 0 )
        {
LABEL_22:
          AslLogCallPrintf(1LL);
          return (unsigned int)v17;
        }
      }
      break;
    }
  }
  v17 = 0;
LABEL_26:
  *a6 = v8;
  return (unsigned int)v17;
}
