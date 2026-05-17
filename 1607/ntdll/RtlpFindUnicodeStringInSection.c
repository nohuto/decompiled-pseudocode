/*
 * XREFs of RtlpFindUnicodeStringInSection @ 0x18001B2E0
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x18001AD80 (RtlFindActivationContextSectionString.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180080A50 (RtlQueryActivationContextApplicationSettings.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1800195B0 (RtlCompareUnicodeStrings.c)
 *     RtlHashUnicodeString @ 0x18001A870 (RtlHashUnicodeString.c)
 *     DbgPrintEx @ 0x18005BFC0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     bsearch @ 0x180099410 (bsearch.c)
 */

__int64 __fastcall RtlpFindUnicodeStringInSection(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int16 *a3,
        unsigned int *a4,
        _DWORD *a5,
        int *a6)
{
  char v6; // bl
  char v7; // r10
  bool v8; // zf
  unsigned __int64 v11; // r11
  char v13; // r12
  int v14; // ebp
  unsigned int v15; // r8d
  __int64 result; // rax
  char v17; // dl
  unsigned int v18; // r9d
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int *v22; // r15
  int *v23; // r14
  unsigned __int64 v24; // rcx
  unsigned int *v25; // rbx
  size_t v26; // r8
  char *v27; // r14
  char *v28; // r12
  char *v29; // rax
  int v30; // ebp
  unsigned __int16 *v31; // r15
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // ebp
  char v36; // [rsp+50h] [rbp-78h]
  int v37; // [rsp+54h] [rbp-74h] BYREF
  unsigned int v38; // [rsp+58h] [rbp-70h]
  unsigned __int64 v39; // [rsp+60h] [rbp-68h]
  int Key[6]; // [rsp+68h] [rbp-60h] BYREF

  v6 = 1;
  v7 = *(_BYTE *)(a1 + 16) & 1;
  v8 = *(_DWORD *)a1 == 1682469715;
  v11 = a2;
  v39 = a2;
  v36 = v7;
  v13 = 1;
  if ( !v8 )
    return 3222601731LL;
  v14 = 0;
  if ( !*(_DWORD *)(a1 + 20) )
    return 3222601736LL;
  v15 = *(_DWORD *)(a1 + 28);
  if ( v15 == -1 )
  {
    v6 = 0;
    v13 = 0;
  }
  else if ( *a5 != v15 )
  {
    result = RtlHashUnicodeString(a3, v7, v15, a6);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741811 )
        return result;
      result = RtlHashUnicodeString(a3, v36, 0, &v37);
      if ( (int)result < 0 )
        return result;
      DbgPrintEx(
        51LL,
        0LL,
        "RtlpFindUnicodeStringInSection: Unsupported hash algorithm %lu found in string section.\n",
        *(_DWORD *)(a1 + 28));
      v6 = 0;
      v13 = 0;
    }
    else
    {
      *a5 = *(_DWORD *)(a1 + 28);
    }
    v11 = v39;
    v7 = v36;
  }
  v17 = v6;
  if ( *(_DWORD *)(a1 + 8) != 1 )
    v17 = 0;
  if ( ((unsigned __int8)v17 & (unsigned __int8)-(*(_DWORD *)(a1 + 32) != 0)) != 0 )
  {
    v19 = *(unsigned int *)(a1 + 32);
    v38 = *a6;
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
          v33 = v25[1];
          if ( v33 > v11 )
          {
            DbgPrintEx(
              51LL,
              0LL,
              "SXS: String hash table entry at %p has invalid key offset (= %ld)\n"
              "   Header = %p; Index = %lu; Bucket = %p; Chain = %p\n",
              (const void *)(v24 + a1),
              v25[1],
              (const void *)a1,
              v37,
              v22,
              v23);
            return 3222601731LL;
          }
          if ( !(unsigned int)RtlCompareUnicodeStrings(
                                *((unsigned __int16 **)a3 + 1),
                                (unsigned __int64)*a3 >> 1,
                                v33 + a1,
                                (unsigned __int64)*((unsigned __int16 *)v25 + 4) >> 1,
                                v7) )
            goto LABEL_33;
          v18 = v38;
          v11 = v39;
        }
        v7 = v36;
        if ( ++v14 >= *v22 )
          return 3222601736LL;
      }
      DbgPrintEx(51LL, 0LL, "SXS: String hash collision chain offset at %p (= %ld) out of bounds\n", &v23[v14], v24);
      return 3222601731LL;
    }
    return 3222601736LL;
  }
  if ( v13 && (*(_BYTE *)(a1 + 16) & 2) != 0 )
  {
    v26 = *(unsigned int *)(a1 + 20);
    v27 = (char *)(a1 + *(unsigned int *)(a1 + 24));
    v28 = &v27[24 * (unsigned int)(v26 - 1)];
    Key[0] = *a6;
    v29 = (char *)bsearch(Key, v27, v26, 0x18uLL, RtlpCompareActivationContextStringSectionEntryByPseudoKey);
    v25 = (unsigned int *)v29;
    if ( v29 )
    {
      if ( v29 != v27 )
      {
        do
        {
          if ( *v25 != *a6 )
            break;
          v25 -= 6;
        }
        while ( v25 != (unsigned int *)v27 );
      }
      v30 = *a6;
      if ( *v25 != *a6 )
        v25 += 6;
      v31 = (unsigned __int16 *)*((_QWORD *)a3 + 1);
      v32 = (unsigned __int64)*a3 >> 1;
      do
      {
        if ( !(unsigned int)RtlCompareUnicodeStrings(
                              v31,
                              v32,
                              a1 + v25[1],
                              (unsigned __int64)*((unsigned __int16 *)v25 + 4) >> 1,
                              v36) )
          break;
        v25 += 6;
        if ( v25 > (unsigned int *)v28 )
          goto LABEL_30;
      }
      while ( *v25 == v30 );
      if ( v25 > (unsigned int *)v28 || *v25 != v30 )
      {
LABEL_30:
        v25 = 0LL;
        goto LABEL_33;
      }
      goto LABEL_33;
    }
    return 3222601736LL;
  }
  v35 = *(_DWORD *)(a1 + 20);
  v25 = (unsigned int *)(a1 + *(unsigned int *)(a1 + 24));
  if ( !v35 )
    return 3222601736LL;
  while ( v13 && *v25 != *a6
       || (unsigned int)RtlCompareUnicodeStrings(
                          *((unsigned __int16 **)a3 + 1),
                          (unsigned __int64)*a3 >> 1,
                          a1 + v25[1],
                          (unsigned __int64)*((unsigned __int16 *)v25 + 4) >> 1,
                          v7) )
  {
    v7 = v36;
    v25 += 6;
    if ( !--v35 )
      return 3222601736LL;
  }
LABEL_33:
  if ( !v25 || !v25[3] )
    return 3222601736LL;
  if ( a4 )
  {
    v34 = *a4;
    a4[1] = *(_DWORD *)(a1 + 12);
    *((_QWORD *)a4 + 1) = a1 + v25[3];
    a4[4] = v25[4];
    if ( a4 + 17 <= (unsigned int *)((char *)a4 + v34) )
      a4[16] = v25[5];
  }
  return 0LL;
}
