/*
 * XREFs of RtlpFindUnicodeStringInSection @ 0x1800256D0
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x180025160 (RtlFindActivationContextSectionString.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180071930 (RtlQueryActivationContextApplicationSettings.c)
 * Callees:
 *     DbgPrintEx @ 0x18000F9B0 (DbgPrintEx.c)
 *     RtlHashUnicodeString @ 0x180026F30 (RtlHashUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x180035820 (RtlCompareUnicodeStrings.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     bsearch @ 0x180086890 (bsearch.c)
 */

__int64 __fastcall RtlpFindUnicodeStringInSection(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int16 *a3,
        unsigned int *a4,
        _DWORD *a5,
        unsigned int *a6)
{
  char v6; // bl
  char v7; // r10
  bool v8; // zf
  unsigned __int64 v11; // r11
  char v13; // r12
  int v14; // ebp
  __int64 v15; // r8
  __int64 result; // rax
  __int64 v17; // rdx
  char v18; // dl
  unsigned int v19; // r9d
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int *v23; // r15
  int *v24; // r14
  unsigned __int64 v25; // rcx
  unsigned int *v26; // rbx
  size_t v27; // r8
  char *v28; // r14
  char *v29; // r12
  char *v30; // rax
  unsigned int v31; // ebp
  __int64 v32; // r15
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // ebp
  char v37; // [rsp+50h] [rbp-78h]
  int v38; // [rsp+54h] [rbp-74h] BYREF
  unsigned int v39; // [rsp+58h] [rbp-70h]
  unsigned __int64 v40; // [rsp+60h] [rbp-68h]
  unsigned int Key[6]; // [rsp+68h] [rbp-60h] BYREF

  v6 = 1;
  v7 = *(_BYTE *)(a1 + 16) & 1;
  v8 = *(_DWORD *)a1 == 1682469715;
  v11 = a2;
  v40 = a2;
  v37 = v7;
  v13 = 1;
  if ( !v8 )
    return 3222601731LL;
  v14 = 0;
  if ( !*(_DWORD *)(a1 + 20) )
    return 3222601736LL;
  v15 = *(unsigned int *)(a1 + 28);
  if ( (_DWORD)v15 == -1 )
  {
    v6 = 0;
    v13 = 0;
  }
  else if ( *a5 != (_DWORD)v15 )
  {
    LOBYTE(a2) = v7;
    result = RtlHashUnicodeString(a3, a2, v15, a6);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741811 )
        return result;
      LOBYTE(v17) = v37;
      result = RtlHashUnicodeString(a3, v17, 0LL, &v38);
      if ( (int)result < 0 )
        return result;
      DbgPrintEx(
        51,
        0,
        "RtlpFindUnicodeStringInSection: Unsupported hash algorithm %lu found in string section.\n",
        *(_DWORD *)(a1 + 28));
      v6 = 0;
      v13 = 0;
    }
    else
    {
      *a5 = *(_DWORD *)(a1 + 28);
    }
    v11 = v40;
    v7 = v37;
  }
  v18 = v6;
  if ( *(_DWORD *)(a1 + 8) != 1 )
    v18 = 0;
  if ( ((unsigned __int8)v18 & (unsigned __int8)-(*(_DWORD *)(a1 + 32) != 0)) != 0 )
  {
    v20 = *(unsigned int *)(a1 + 32);
    v39 = *a6;
    v19 = v39;
    v21 = v39 % *(_DWORD *)(v20 + a1);
    v22 = a1 + *(unsigned int *)(v20 + a1 + 4);
    v38 = v21;
    v23 = (unsigned int *)(v22 + 8 * v21);
    v24 = (int *)(a1 + v23[1]);
    if ( *v23 )
    {
      while ( 1 )
      {
        v25 = v24[v14];
        if ( v25 > v11 )
          break;
        v26 = (unsigned int *)(v25 + a1);
        if ( !v13 || *v26 == v19 )
        {
          v34 = v26[1];
          if ( v34 > v11 )
          {
            DbgPrintEx(
              51,
              0,
              "SXS: String hash table entry at %p has invalid key offset (= %ld)\n"
              "   Header = %p; Index = %lu; Bucket = %p; Chain = %p\n",
              (const void *)(v25 + a1),
              v26[1],
              (const void *)a1,
              v38,
              v23,
              v24);
            return 3222601731LL;
          }
          if ( !(unsigned int)RtlCompareUnicodeStrings(
                                *((_QWORD *)a3 + 1),
                                (unsigned __int64)*a3 >> 1,
                                (int)v34 + (int)a1,
                                (unsigned __int64)*((unsigned __int16 *)v26 + 4) >> 1,
                                v7) )
            goto LABEL_31;
          v19 = v39;
          v11 = v40;
        }
        v7 = v37;
        if ( ++v14 >= *v23 )
          return 3222601736LL;
      }
      DbgPrintEx(51, 0, "SXS: String hash collision chain offset at %p (= %ld) out of bounds\n", &v24[v14], v25);
      return 3222601731LL;
    }
    return 3222601736LL;
  }
  if ( v13 && (*(_BYTE *)(a1 + 16) & 2) != 0 )
  {
    v27 = *(unsigned int *)(a1 + 20);
    v28 = (char *)(a1 + *(unsigned int *)(a1 + 24));
    v29 = &v28[24 * (unsigned int)(v27 - 1)];
    Key[0] = *a6;
    v30 = (char *)bsearch(Key, v28, v27, 0x18uLL, RtlpCompareActivationContextStringSectionEntryByPseudoKey);
    v26 = (unsigned int *)v30;
    if ( v30 )
    {
      if ( v30 != v28 )
      {
        do
        {
          if ( *v26 != *a6 )
            break;
          v26 -= 6;
        }
        while ( v26 != (unsigned int *)v28 );
      }
      v31 = *a6;
      if ( *v26 != *a6 )
        v26 += 6;
      v32 = *((_QWORD *)a3 + 1);
      v33 = (unsigned __int64)*a3 >> 1;
      do
      {
        if ( !(unsigned int)RtlCompareUnicodeStrings(
                              v32,
                              v33,
                              (unsigned int)a1 + v26[1],
                              (unsigned __int64)*((unsigned __int16 *)v26 + 4) >> 1,
                              v37) )
          break;
        v26 += 6;
        if ( v26 > (unsigned int *)v29 )
          goto LABEL_28;
      }
      while ( *v26 == v31 );
      if ( v26 > (unsigned int *)v29 || *v26 != v31 )
      {
LABEL_28:
        v26 = 0LL;
        goto LABEL_31;
      }
      goto LABEL_31;
    }
    return 3222601736LL;
  }
  v36 = *(_DWORD *)(a1 + 20);
  v26 = (unsigned int *)(a1 + *(unsigned int *)(a1 + 24));
  if ( !v36 )
    return 3222601736LL;
  while ( v13 && *v26 != *a6
       || (unsigned int)RtlCompareUnicodeStrings(
                          *((_QWORD *)a3 + 1),
                          (unsigned __int64)*a3 >> 1,
                          (unsigned int)a1 + v26[1],
                          (unsigned __int64)*((unsigned __int16 *)v26 + 4) >> 1,
                          v7) )
  {
    v7 = v37;
    v26 += 6;
    if ( !--v36 )
      return 3222601736LL;
  }
LABEL_31:
  if ( !v26 || !v26[3] )
    return 3222601736LL;
  if ( a4 )
  {
    v35 = *a4;
    a4[1] = *(_DWORD *)(a1 + 12);
    *((_QWORD *)a4 + 1) = a1 + v26[3];
    a4[4] = v26[4];
    if ( a4 + 17 <= (unsigned int *)((char *)a4 + v35) )
      a4[16] = v26[5];
  }
  return 0LL;
}
