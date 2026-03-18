/*
 * XREFs of KsepDbGetShimInfo @ 0x14069C004
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x140578820 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x14012980C (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x140153D50 (KsepPoolFreePaged.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KseShimDatabaseClose @ 0x1405770FC (KseShimDatabaseClose.c)
 *     SdbFindFirstStringIndexedTag @ 0x140577774 (SdbFindFirstStringIndexedTag.c)
 *     SdbReadDWORDTag @ 0x1405778E0 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x140577C74 (SdbFindFirstTag.c)
 *     KseShimDatabaseOpen @ 0x140578424 (KseShimDatabaseOpen.c)
 *     KsepStringFree @ 0x1405788C8 (KsepStringFree.c)
 *     SdbTagIDToTagRef @ 0x1405C6D34 (SdbTagIDToTagRef.c)
 *     SdbTagRefToTagID @ 0x1405C7044 (SdbTagRefToTagID.c)
 *     KsepDbGetSdbString @ 0x14069BFD4 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x140703C9C (SdbReadGUIDTag.c)
 */

__int64 __fastcall KsepDbGetShimInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 *v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int SdbString; // r14d
  __int64 v11; // rsi
  __m128i *Paged; // rax
  __int64 v13; // r13
  __int128 v14; // xmm6
  __m128i *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rbx
  unsigned int FirstStringIndexedTag; // eax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rbx
  unsigned int FirstTag; // eax
  __m128i *v26; // rax
  __m128i v27; // xmm1
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int32 DWORDTag; // eax
  __int128 v33; // xmm0
  __int64 v34; // rbx
  _QWORD *v35; // rsi
  unsigned int v37; // [rsp+38h] [rbp-89h] BYREF
  int v38; // [rsp+3Ch] [rbp-85h] BYREF
  __int64 v39; // [rsp+40h] [rbp-81h] BYREF
  __int64 v40; // [rsp+48h] [rbp-79h] BYREF
  __int64 v41; // [rsp+50h] [rbp-71h]
  __int64 v42; // [rsp+58h] [rbp-69h]
  __int128 v43; // [rsp+68h] [rbp-59h] BYREF
  char v44[16]; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v45[12]; // [rsp+88h] [rbp-39h] BYREF
  __int128 v46; // [rsp+B8h] [rbp-9h]

  v39 = 0LL;
  v40 = 0LL;
  v4 = a1;
  v46 = 0uLL;
  v5 = 0LL;
  v42 = a1;
  v6 = (unsigned int)a2;
  SdbString = KseShimDatabaseOpen(&v39, a2, a3, a4);
  if ( SdbString >= 0 )
  {
    v11 = (unsigned int)v6;
    Paged = (__m128i *)KsepPoolAllocatePaged(80 * v6);
    v13 = 0LL;
    v5 = (__int64 *)Paged;
    SdbString = -1073741275;
    if ( (_DWORD)v6 )
    {
      v14 = v46;
      v15 = Paged + 4;
      v16 = v4;
      v17 = v39;
      v18 = v16 - (_QWORD)v5;
      v41 = v18;
      while ( 1 )
      {
        v19 = *(_QWORD *)((char *)&v15[-2] + v18 - 8);
        v20 = *(_QWORD *)(v17 + 8);
        v38 = 0;
        FirstStringIndexedTag = SdbFindFirstStringIndexedTag(v20, 28709LL, 24577LL, v19, v45);
        v22 = v20;
        v17 = v39;
        v23 = -(int)SdbTagIDToTagRef(v39, v22, FirstStringIndexedTag, &v38);
        v7 = v38 & (unsigned int)-(v23 != 0);
        if ( (v23 != 0 ? v38 : 0) == 0 )
          break;
        if ( (unsigned int)SdbTagRefToTagID(v17, v7, &v40, (int *)&v37) )
        {
          v24 = v40;
          FirstTag = SdbFindFirstTag(v40, v37, 36880);
          if ( !FirstTag )
            break;
          v43 = v14;
          v26 = (__m128i *)SdbReadGUIDTag(v44, v24, FirstTag, &v43);
          v27 = *v26;
          v28 = v26->m128i_i64[0] - v46;
          if ( !v28 )
            v28 = _mm_srli_si128(v27, 8).m128i_u64[0] - *((_QWORD *)&v46 + 1);
          if ( !v28 )
            break;
          v29 = v37;
          v15[-4] = v27;
          v30 = SdbFindFirstTag(v24, v29, 24579);
          if ( !v30 )
            break;
          SdbString = KsepDbGetSdbString(v24, v30, (__int64)&v5[10 * v13 + 4]);
          if ( SdbString < 0 )
            break;
          v31 = SdbFindFirstTag(v24, v37, 16407);
          if ( !v31 )
            break;
          DWORDTag = SdbReadDWORDTag(v24, v31, 0);
          v17 = v39;
          v15->m128i_i32[0] = DWORDTag;
        }
        v18 = v41;
        v13 = (unsigned int)(v13 + 1);
        v15 += 5;
        if ( (unsigned int)v13 >= (unsigned int)v6 )
        {
          v4 = v42;
          goto LABEL_16;
        }
      }
    }
    else
    {
LABEL_16:
      SdbString = 0;
      if ( (_DWORD)v6 )
      {
        v7 = v4 + 64;
        v8 = (__int64)v5 - v4;
        do
        {
          *(_DWORD *)v7 = *(_DWORD *)(v8 + v7);
          v33 = *(_OWORD *)(v8 + v7 - 32);
          v7 += 80LL;
          *(_OWORD *)(v7 - 112) = v33;
          *(_OWORD *)(v7 - 144) = *(_OWORD *)(v8 + v7 - 144);
          --v11;
        }
        while ( v11 );
      }
    }
  }
  if ( v39 )
    KseShimDatabaseClose(v39, v7, v8, v9);
  if ( SdbString >= 0 )
    goto LABEL_32;
  if ( v5 )
  {
    v34 = 0LL;
    if ( (_DWORD)v6 )
    {
      v35 = v5 + 3;
      do
      {
        if ( v35[2] )
          KsepStringFree(&v5[10 * v34 + 4]);
        if ( *v35 )
          KsepStringFree(&v5[10 * v34 + 2]);
        if ( v35[4] )
          KsepStringFree(&v5[10 * v34 + 6]);
        v34 = (unsigned int)(v34 + 1);
        v35 += 10;
      }
      while ( (unsigned int)v34 < (unsigned int)v6 );
    }
LABEL_32:
    KsepPoolFreePaged(v5);
  }
  return (unsigned int)SdbString;
}
