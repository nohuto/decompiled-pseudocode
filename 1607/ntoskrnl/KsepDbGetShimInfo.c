/*
 * XREFs of KsepDbGetShimInfo @ 0x140652718
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x140485B50 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140084D54 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x140084D74 (KsepPoolAllocatePaged.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     KseShimDatabaseClose @ 0x140484800 (KseShimDatabaseClose.c)
 *     KsepDbFreeDriverShims @ 0x140484914 (KsepDbFreeDriverShims.c)
 *     SdbFindFirstStringIndexedTag @ 0x140484C74 (SdbFindFirstStringIndexedTag.c)
 *     KseShimDatabaseOpen @ 0x14048558C (KseShimDatabaseOpen.c)
 *     SdbReadDWORDTag @ 0x1404EA9AC (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1405049C4 (SdbFindFirstTag.c)
 *     SdbTagIDToTagRef @ 0x14057DDEC (SdbTagIDToTagRef.c)
 *     SdbTagRefToTagID @ 0x14057F0D4 (SdbTagRefToTagID.c)
 *     KsepDbGetSdbString @ 0x1406526E8 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x1406C3FB0 (SdbReadGUIDTag.c)
 */

__int64 __fastcall KsepDbGetShimInfo(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __m128i *v4; // rsi
  int v5; // eax
  __int64 v6; // r13
  int SdbString; // edi
  __int64 v8; // r15
  __m128i *Paged; // rax
  __int128 v10; // xmm6
  __m128i *v11; // r12
  __int64 v12; // rax
  const WCHAR *v13; // r9
  __int64 v14; // rbx
  unsigned int FirstStringIndexedTag; // eax
  int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rbx
  unsigned int FirstTag; // eax
  __m128i *v20; // rax
  __m128i v21; // xmm1
  unsigned __int64 v22; // rax
  unsigned int v23; // edx
  unsigned int v24; // eax
  unsigned int v25; // eax
  _DWORD *v26; // r8
  char *v27; // r9
  __int128 v28; // xmm0
  unsigned int v30; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v31; // [rsp+3Ch] [rbp-75h]
  __int128 v32; // [rsp+48h] [rbp-69h] BYREF
  __int64 v33; // [rsp+58h] [rbp-59h] BYREF
  __int64 v34; // [rsp+60h] [rbp-51h]
  __int64 v35; // [rsp+68h] [rbp-49h]
  char v36[16]; // [rsp+70h] [rbp-41h] BYREF
  unsigned int v37[10]; // [rsp+80h] [rbp-31h] BYREF
  __int128 v38; // [rsp+A8h] [rbp-9h]

  v2 = a1;
  v35 = a1;
  v3 = a2;
  *(_QWORD *)&v32 = 0LL;
  v33 = 0LL;
  v4 = 0LL;
  v38 = 0uLL;
  v5 = KseShimDatabaseOpen(&v32);
  v6 = v32;
  SdbString = v5;
  if ( v5 >= 0 )
  {
    v8 = (unsigned int)v3;
    Paged = (__m128i *)KsepPoolAllocatePaged(80 * v3);
    v31 = 0;
    v4 = Paged;
    SdbString = -1073741275;
    if ( (_DWORD)v3 )
    {
      v10 = v38;
      v11 = Paged + 4;
      v12 = v2 - (_QWORD)Paged;
      v34 = v2 - (_QWORD)v4;
      while ( 1 )
      {
        v13 = *(const WCHAR **)((char *)&v11[-2] + v12 - 8);
        v14 = *(_QWORD *)(v6 + 8);
        LODWORD(v32) = 0;
        FirstStringIndexedTag = SdbFindFirstStringIndexedTag(v14, 28709LL, 24577LL, v13, v37);
        v16 = SdbTagIDToTagRef(v6, v14, FirstStringIndexedTag, (int *)&v32);
        v17 = v16 != 0 ? v32 : 0;
        if ( !v17 )
          break;
        if ( (unsigned int)SdbTagRefToTagID(v6, v17, &v33, (int *)&v30) )
        {
          v18 = v33;
          FirstTag = SdbFindFirstTag(v33, v30, 36880);
          if ( !FirstTag )
            break;
          v32 = v10;
          v20 = (__m128i *)SdbReadGUIDTag(v36, v18, FirstTag, &v32);
          v21 = *v20;
          v22 = v20->m128i_i64[0] - v38;
          if ( !v22 )
            v22 = _mm_srli_si128(v21, 8).m128i_u64[0] - *((_QWORD *)&v38 + 1);
          if ( !v22 )
            break;
          v23 = v30;
          v11[-4] = v21;
          v24 = SdbFindFirstTag(v18, v23, 24579);
          if ( !v24 )
            break;
          SdbString = KsepDbGetSdbString(v18, v24, (__int64)v4[5 * v31 + 2].m128i_i64);
          if ( SdbString < 0 )
            break;
          v25 = SdbFindFirstTag(v18, v30, 16407);
          if ( !v25 )
            break;
          v11->m128i_i32[0] = SdbReadDWORDTag(v18, v25, 0);
        }
        v11 += 5;
        ++v31;
        v12 = v34;
        if ( v31 >= (unsigned int)v3 )
        {
          v2 = v35;
          goto LABEL_16;
        }
      }
    }
    else
    {
LABEL_16:
      SdbString = 0;
      if ( (_DWORD)v3 )
      {
        v26 = (_DWORD *)(v2 + 64);
        v27 = &v4->m128i_i8[-v2];
        do
        {
          *v26 = *(_DWORD *)((char *)v26 + (_QWORD)v27);
          v28 = *(_OWORD *)((char *)v26 + (_QWORD)v27 - 32);
          v26 += 20;
          *((_OWORD *)v26 - 7) = v28;
          *((_OWORD *)v26 - 9) = *(_OWORD *)((char *)v26 + (_QWORD)v27 - 144);
          --v8;
        }
        while ( v8 );
      }
    }
  }
  if ( v6 )
    KseShimDatabaseClose(v6);
  if ( SdbString >= 0 )
    KsepPoolFreePaged(v4);
  else
    KsepDbFreeDriverShims(v4, v3);
  return (unsigned int)SdbString;
}
