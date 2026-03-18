/*
 * XREFs of KsepDbGetShimInfo @ 0x14061D424
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x1403B8AC4 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1400028CC (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x1400028EC (KsepPoolAllocatePaged.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     SdbReadDWORDTag @ 0x1403B62A0 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1403B6498 (SdbFindFirstTag.c)
 *     KseShimDatabaseClose @ 0x1403B71B0 (KseShimDatabaseClose.c)
 *     SdbFindFirstStringIndexedTag @ 0x1403B767C (SdbFindFirstStringIndexedTag.c)
 *     KseShimDatabaseOpen @ 0x1403B8594 (KseShimDatabaseOpen.c)
 *     KsepStringFree @ 0x1403B8B6C (KsepStringFree.c)
 *     SdbTagIDToTagRef @ 0x14054EFAC (SdbTagIDToTagRef.c)
 *     SdbTagRefToTagID @ 0x14054F2BC (SdbTagRefToTagID.c)
 *     KsepDbGetSdbString @ 0x14061D3F4 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x14067EE48 (SdbReadGUIDTag.c)
 */

__int64 __fastcall KsepDbGetShimInfo(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 *v3; // rdi
  __int64 v4; // r15
  int SdbString; // r14d
  __int64 v6; // rsi
  __m128i *Paged; // rax
  __int64 v8; // r13
  __int128 v9; // xmm6
  __m128i *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  const WCHAR *v14; // r9
  __int64 v15; // rbx
  unsigned int FirstStringIndexedTag; // eax
  __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rbx
  unsigned int FirstTag; // eax
  __m128i *v22; // rax
  __m128i v23; // xmm1
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int32 DWORDTag; // eax
  _DWORD *v29; // rdx
  char *v30; // r8
  __int128 v31; // xmm0
  __int64 v32; // rbx
  _QWORD *v33; // rsi
  unsigned int v35; // [rsp+38h] [rbp-89h] BYREF
  int v36; // [rsp+3Ch] [rbp-85h] BYREF
  __int64 v37; // [rsp+40h] [rbp-81h] BYREF
  __int64 v38; // [rsp+48h] [rbp-79h] BYREF
  __int64 v39; // [rsp+50h] [rbp-71h]
  __int64 v40; // [rsp+58h] [rbp-69h]
  __int128 v41; // [rsp+68h] [rbp-59h] BYREF
  char v42[16]; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v43[12]; // [rsp+88h] [rbp-39h] BYREF
  __int128 v44; // [rsp+B8h] [rbp-9h]

  v37 = 0LL;
  v38 = 0LL;
  v2 = a1;
  v44 = 0uLL;
  v3 = 0LL;
  v40 = a1;
  v4 = a2;
  SdbString = KseShimDatabaseOpen(&v37);
  if ( SdbString >= 0 )
  {
    v6 = (unsigned int)v4;
    Paged = (__m128i *)KsepPoolAllocatePaged(80 * v4);
    v8 = 0LL;
    v3 = (__int64 *)Paged;
    SdbString = -1073741275;
    if ( (_DWORD)v4 )
    {
      v9 = v44;
      v10 = Paged + 4;
      v11 = v2;
      v12 = v37;
      v13 = v11 - (_QWORD)v3;
      v39 = v13;
      while ( 1 )
      {
        v14 = *(const WCHAR **)((char *)&v10[-2] + v13 - 8);
        v15 = *(_QWORD *)(v12 + 8);
        v36 = 0;
        FirstStringIndexedTag = SdbFindFirstStringIndexedTag(v15, 28709LL, 24577LL, v14, v43);
        v17 = v15;
        v12 = v37;
        v18 = SdbTagIDToTagRef(v37, v17, FirstStringIndexedTag, &v36);
        v19 = v18 != 0 ? v36 : 0;
        if ( !v19 )
          break;
        if ( (unsigned int)SdbTagRefToTagID(v12, v19, &v38, (int *)&v35) )
        {
          v20 = v38;
          FirstTag = SdbFindFirstTag(v38, v35, 36880);
          if ( !FirstTag )
            break;
          v41 = v9;
          v22 = (__m128i *)SdbReadGUIDTag(v42, v20, FirstTag, &v41);
          v23 = *v22;
          v24 = v22->m128i_i64[0] - v44;
          if ( !v24 )
            v24 = _mm_srli_si128(v23, 8).m128i_u64[0] - *((_QWORD *)&v44 + 1);
          if ( !v24 )
            break;
          v25 = v35;
          v10[-4] = v23;
          v26 = SdbFindFirstTag(v20, v25, 24579);
          if ( !v26 )
            break;
          SdbString = KsepDbGetSdbString(v20, v26, (__int64)&v3[10 * v8 + 4]);
          if ( SdbString < 0 )
            break;
          v27 = SdbFindFirstTag(v20, v35, 16407);
          if ( !v27 )
            break;
          DWORDTag = SdbReadDWORDTag(v20, v27, 0);
          v12 = v37;
          v10->m128i_i32[0] = DWORDTag;
        }
        v13 = v39;
        v8 = (unsigned int)(v8 + 1);
        v10 += 5;
        if ( (unsigned int)v8 >= (unsigned int)v4 )
        {
          v2 = v40;
          goto LABEL_16;
        }
      }
    }
    else
    {
LABEL_16:
      SdbString = 0;
      if ( (_DWORD)v4 )
      {
        v29 = (_DWORD *)(v2 + 64);
        v30 = (char *)v3 - v2;
        do
        {
          *v29 = *(_DWORD *)((char *)v29 + (_QWORD)v30);
          v31 = *(_OWORD *)((char *)v29 + (_QWORD)v30 - 32);
          v29 += 20;
          *((_OWORD *)v29 - 7) = v31;
          *((_OWORD *)v29 - 9) = *(_OWORD *)((char *)v29 + (_QWORD)v30 - 144);
          --v6;
        }
        while ( v6 );
      }
    }
  }
  if ( v37 )
    KseShimDatabaseClose(v37);
  if ( SdbString >= 0 )
    goto LABEL_32;
  if ( v3 )
  {
    v32 = 0LL;
    if ( (_DWORD)v4 )
    {
      v33 = v3 + 3;
      do
      {
        if ( v33[2] )
          KsepStringFree(&v3[10 * v32 + 4]);
        if ( *v33 )
          KsepStringFree(&v3[10 * v32 + 2]);
        if ( v33[4] )
          KsepStringFree(&v3[10 * v32 + 6]);
        v32 = (unsigned int)(v32 + 1);
        v33 += 10;
      }
      while ( (unsigned int)v32 < (unsigned int)v4 );
    }
LABEL_32:
    KsepPoolFreePaged(v3);
  }
  return (unsigned int)SdbString;
}
