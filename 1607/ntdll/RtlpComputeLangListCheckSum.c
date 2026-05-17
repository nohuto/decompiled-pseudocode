/*
 * XREFs of RtlpComputeLangListCheckSum @ 0x180011954
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180013DA0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180011910 (RtlInitUnicodeStringEx.c)
 *     RtlUpcaseUnicodeChar @ 0x180011C40 (RtlUpcaseUnicodeChar.c)
 *     RtlIntegerToUnicodeString @ 0x180011CA0 (RtlIntegerToUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x180011E30 (RtlUpcaseUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x180015220 (RtlCopyUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x1800448B0 (RtlLCIDToCultureName.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpComputeLangListCheckSum(__int64 a1)
{
  __int64 v2; // rbx
  int inited; // edi
  __int64 v4; // r13
  unsigned int v5; // r12d
  __int64 v6; // r8
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  char *v10; // rcx
  __int16 v11; // ax
  unsigned int v12; // r14d
  unsigned __int16 *v13; // rbx
  unsigned __int64 v14; // r15
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int8 *v18; // r9
  int v19; // r8d
  int v20; // r8d
  int v21; // r8d
  int v22; // r8d
  unsigned __int64 v23; // r10
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // r8d
  int v27; // r8d
  __int128 v28; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v29; // [rsp+38h] [rbp-D0h]
  _BYTE v30[10]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+4Ah] [rbp-BEh] BYREF
  __int64 v32; // [rsp+52h] [rbp-B6h]
  __int64 v33; // [rsp+5Ah] [rbp-AEh]
  __int64 v34; // [rsp+62h] [rbp-A6h]
  __int16 v35; // [rsp+6Ah] [rbp-9Eh]
  _BYTE v36[176]; // [rsp+78h] [rbp-90h] BYREF

  v2 = 0LL;
  memset(v36, 0, 0xAAuLL);
  v28 = 0uLL;
  inited = 0;
  if ( !a1 )
    return 3221225485LL;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
    return 3221225485LL;
  v5 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_18;
  while ( 1 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    HIWORD(v31) = 0;
    v7 = *(unsigned __int16 *)(v6 + 6LL * v5);
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    v35 = 0;
    if ( v7 )
      break;
LABEL_16:
    if ( ++v5 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_17;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      v10 = (char *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 16LL) + 28LL * *(__int16 *)(v6 + 6LL * v5 + 4));
      goto LABEL_8;
    }
    if ( v9 != 1 )
      return (unsigned int)-1073741595;
    WORD2(v32) = *(_WORD *)(v6 + 6LL * v5 + 4);
  }
  else
  {
    WORD1(v32) = *(_WORD *)(v6 + 6LL * v5 + 4);
  }
  v10 = (char *)&v31 + 6;
LABEL_8:
  v11 = *((_WORD *)v10 + 3);
  if ( v11 > 0 )
  {
    inited = RtlInitUnicodeStringEx(
               (__int64)v30,
               *(_QWORD *)(*(_QWORD *)(v4 + 32) + 24LL)
             + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 16LL) + 2LL * v11));
    if ( inited < 0 )
      return (unsigned int)inited;
    LODWORD(v28) = 11141120;
    *((_QWORD *)&v28 + 1) = v36;
    RtlCopyUnicodeString(&v28, v30);
LABEL_11:
    if ( !v2 )
    {
      v12 = 314159;
      v13 = (unsigned __int16 *)*((_QWORD *)&v28 + 1);
      v14 = *((_QWORD *)&v28 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v28 >> 1);
      while ( (unsigned __int64)v13 < v14 )
      {
        v29 = RtlUpcaseUnicodeChar(*v13++);
        v12 = HIBYTE(v29) + 37 * ((unsigned __int8)v29 + 37 * v12);
      }
      v2 = v12;
      goto LABEL_16;
    }
    RtlUpcaseUnicodeString(&v28, &v28, 0LL);
    v17 = (unsigned __int16)v28;
    v18 = (unsigned __int8 *)*((_QWORD *)&v28 + 1);
    if ( (unsigned __int16)v28 >= 8uLL )
    {
      v23 = (unsigned __int64)(unsigned __int16)v28 >> 3;
      v17 = (unsigned __int16)v28 - 8 * v23;
      do
      {
        v24 = v18[6]
            + 37 * (v18[5] + 37 * (v18[4] + 37 * (v18[3] + 37 * (v18[2] + 37 * (v18[1] + 37 * (*v18 + 37 * v2))))));
        v25 = v18[7];
        v18 += 8;
        v2 = v25 + 37 * v24;
        --v23;
      }
      while ( v23 );
    }
    if ( (unsigned __int64)(v17 - 1) > 6 )
      goto LABEL_34;
    v19 = v17 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v26 = v22 - 1;
            if ( v26 )
            {
              v27 = v26 - 1;
              if ( v27 )
              {
                if ( v27 != 1 )
                  goto LABEL_34;
                LODWORD(v2) = *v18++ + 37 * v2;
              }
              LODWORD(v2) = *v18++ + 37 * v2;
            }
            LODWORD(v2) = *v18++ + 37 * v2;
          }
          LODWORD(v2) = *v18++ + 37 * v2;
        }
        LODWORD(v2) = *v18++ + 37 * v2;
      }
      LODWORD(v2) = *v18++ + 37 * v2;
    }
    LODWORD(v2) = *v18 + 37 * v2;
LABEL_34:
    v2 = (unsigned int)v2;
    goto LABEL_16;
  }
  v16 = *((unsigned __int16 *)v10 + 2);
  *((_QWORD *)&v28 + 1) = v36;
  LODWORD(v28) = 11141120;
  if ( (unsigned __int8)RtlLCIDToCultureName(v16, &v28) )
    goto LABEL_11;
  inited = -1073741595;
LABEL_17:
  if ( inited < 0 )
    return (unsigned int)inited;
LABEL_18:
  LODWORD(v28) = 1310720;
  *((_QWORD *)&v28 + 1) = a1 + 44;
  return (unsigned int)RtlIntegerToUnicodeString((unsigned int)v2, 16LL, &v28);
}
