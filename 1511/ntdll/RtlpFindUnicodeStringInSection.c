/*
 * XREFs of RtlpFindUnicodeStringInSection @ 0x18001653C
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x180015E40 (RtlFindActivationContextSectionString.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007D330 (RtlQueryActivationContextApplicationSettings.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x180017DC0 (RtlHashUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x18002F010 (RtlCompareUnicodeStrings.c)
 *     DbgPrintEx @ 0x1800492F0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     bsearch @ 0x180098050 (bsearch.c)
 */

NTSTATUS __fastcall RtlpFindUnicodeStringInSection(
        __int64 a1,
        unsigned __int64 a2,
        _UNICODE_STRING *a3,
        unsigned int *a4,
        _DWORD *a5,
        ULONG *HashValue)
{
  char v6; // bl
  BOOLEAN v7; // r10
  bool v8; // zf
  unsigned __int64 v11; // r11
  char v13; // r12
  int v14; // ebp
  ULONG v15; // r8d
  NTSTATUS result; // eax
  char v17; // dl
  ULONG v18; // r9d
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int *v22; // r15
  int *v23; // r14
  unsigned __int64 v24; // rcx
  unsigned int *v25; // rbx
  unsigned __int64 v26; // rax
  size_t v27; // r8
  char *v28; // r14
  char *v29; // r12
  char *v30; // rax
  ULONG v31; // ebp
  const WCHAR *Buffer; // r15
  SIZE_T v33; // r14
  __int64 v34; // rcx
  int v35; // ebp
  BOOLEAN CaseInSensitive; // [rsp+50h] [rbp-78h]
  ULONG v37; // [rsp+54h] [rbp-74h] BYREF
  ULONG v38; // [rsp+58h] [rbp-70h]
  unsigned __int64 v39; // [rsp+60h] [rbp-68h]
  ULONG Key[6]; // [rsp+68h] [rbp-60h] BYREF

  v6 = 1;
  v7 = *(_BYTE *)(a1 + 16) & 1;
  v8 = *(_DWORD *)a1 == 1682469715;
  v11 = a2;
  v39 = a2;
  CaseInSensitive = v7;
  v13 = 1;
  if ( !v8 )
    return -1072365565;
  v14 = 0;
  if ( !*(_DWORD *)(a1 + 20) )
    return -1072365560;
  v15 = *(_DWORD *)(a1 + 28);
  if ( v15 == -1 )
  {
    v6 = 0;
    v13 = 0;
  }
  else if ( *a5 != v15 )
  {
    result = RtlHashUnicodeString(a3, v7, v15, HashValue);
    if ( result >= 0 )
    {
      *a5 = *(_DWORD *)(a1 + 28);
    }
    else
    {
      if ( result != -1073741811 )
        return result;
      result = RtlHashUnicodeString(a3, CaseInSensitive, 0, &v37);
      if ( result < 0 )
        return result;
      DbgPrintEx(
        0x33u,
        0,
        "RtlpFindUnicodeStringInSection: Unsupported hash algorithm %lu found in string section.\n",
        *(_DWORD *)(a1 + 28));
      v6 = 0;
      v13 = 0;
    }
    v11 = v39;
    v7 = CaseInSensitive;
  }
  v17 = v6;
  if ( *(_DWORD *)(a1 + 8) != 1 )
    v17 = 0;
  if ( ((unsigned __int8)v17 & (unsigned __int8)-(*(_DWORD *)(a1 + 32) != 0)) != 0 )
  {
    v19 = *(unsigned int *)(a1 + 32);
    v38 = *HashValue;
    v18 = v38;
    v20 = v38 % *(_DWORD *)(v19 + a1);
    v21 = a1 + *(unsigned int *)(v19 + a1 + 4);
    v37 = v20;
    v22 = (unsigned int *)(v21 + 8 * v20);
    v23 = (int *)(a1 + v22[1]);
    if ( *v22 )
    {
      while ( 1 )
      {
        v24 = v23[v14];
        if ( v24 > v11 )
          break;
        v25 = (unsigned int *)(v24 + a1);
        if ( !v13 || *v25 == v18 )
        {
          v26 = v25[1];
          if ( v26 > v11 )
          {
            DbgPrintEx(
              0x33u,
              0,
              "SXS: String hash table entry at %p has invalid key offset (= %ld)\n"
              "   Header = %p; Index = %lu; Bucket = %p; Chain = %p\n",
              (const void *)(v24 + a1),
              v25[1],
              (const void *)a1,
              v37,
              v22,
              v23);
            return -1072365565;
          }
          if ( !RtlCompareUnicodeStrings(
                  a3->Buffer,
                  (unsigned __int64)a3->Length >> 1,
                  (PCWCH)(v26 + a1),
                  (unsigned __int64)*((unsigned __int16 *)v25 + 4) >> 1,
                  v7) )
            goto LABEL_43;
          v18 = v38;
          v11 = v39;
        }
        v7 = CaseInSensitive;
        if ( ++v14 >= *v22 )
          return -1072365560;
      }
      DbgPrintEx(0x33u, 0, "SXS: String hash collision chain offset at %p (= %ld) out of bounds\n", &v23[v14], v24);
      return -1072365565;
    }
    return -1072365560;
  }
  if ( v13 && (*(_BYTE *)(a1 + 16) & 2) != 0 )
  {
    v27 = *(unsigned int *)(a1 + 20);
    v28 = (char *)(a1 + *(unsigned int *)(a1 + 24));
    v29 = &v28[24 * (unsigned int)(v27 - 1)];
    Key[0] = *HashValue;
    v30 = (char *)bsearch(Key, v28, v27, 0x18uLL, RtlpCompareActivationContextStringSectionEntryByPseudoKey);
    v25 = (unsigned int *)v30;
    if ( v30 )
    {
      if ( v30 != v28 )
      {
        do
        {
          if ( *v25 != *HashValue )
            break;
          v25 -= 6;
        }
        while ( v25 != (unsigned int *)v28 );
      }
      v31 = *HashValue;
      if ( *v25 != *HashValue )
        v25 += 6;
      Buffer = a3->Buffer;
      v33 = (unsigned __int64)a3->Length >> 1;
      do
      {
        if ( !RtlCompareUnicodeStrings(
                Buffer,
                v33,
                (PCWCH)(a1 + v25[1]),
                (unsigned __int64)*((unsigned __int16 *)v25 + 4) >> 1,
                CaseInSensitive) )
          break;
        v25 += 6;
        if ( v25 > (unsigned int *)v29 )
          goto LABEL_42;
      }
      while ( *v25 == v31 );
      if ( v25 > (unsigned int *)v29 || *v25 != v31 )
      {
LABEL_42:
        v25 = 0LL;
        goto LABEL_43;
      }
      goto LABEL_43;
    }
    return -1072365560;
  }
  v35 = *(_DWORD *)(a1 + 20);
  v25 = (unsigned int *)(a1 + *(unsigned int *)(a1 + 24));
  if ( !v35 )
    return -1072365560;
  while ( v13 && *v25 != *HashValue
       || RtlCompareUnicodeStrings(
            a3->Buffer,
            (unsigned __int64)a3->Length >> 1,
            (PCWCH)(a1 + v25[1]),
            (unsigned __int64)*((unsigned __int16 *)v25 + 4) >> 1,
            v7) )
  {
    v7 = CaseInSensitive;
    v25 += 6;
    if ( !--v35 )
      return -1072365560;
  }
LABEL_43:
  if ( !v25 || !v25[3] )
    return -1072365560;
  if ( a4 )
  {
    v34 = *a4;
    a4[1] = *(_DWORD *)(a1 + 12);
    *((_QWORD *)a4 + 1) = a1 + v25[3];
    a4[4] = v25[4];
    if ( a4 + 17 <= (unsigned int *)((char *)a4 + v34) )
      a4[16] = v25[5];
  }
  return 0;
}
