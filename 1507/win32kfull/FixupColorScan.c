/*
 * XREFs of FixupColorScan @ 0x1C0009E04
 * Callers:
 *     GetFixupScan @ 0x1C0009D98 (GetFixupScan.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

void *__fastcall FixupColorScan(__m128i *a1, void *a2)
{
  int v2; // eax
  void *v3; // rdi
  unsigned int v4; // edx
  __m128i *v5; // r14
  __int64 v6; // r15
  __m128i v7; // xmm0
  int v8; // ebx
  __m128i v9; // xmm1
  void *v10; // rcx
  __int64 v11; // rcx
  int v12; // esi
  int v13; // r9d
  int v14; // edi
  int v15; // r8d
  unsigned __int64 v16; // rcx
  _DWORD *v17; // r15
  _BYTE *v18; // r11
  int v19; // r14d
  int v20; // edx
  __int64 v21; // r13
  __int64 v22; // r12
  unsigned int v23; // eax
  __int64 v24; // r10
  bool v25; // zf
  void *result; // rax
  int v27; // r8d
  int v28; // ebx
  int v29; // r8d
  int v30; // eax
  int v31; // eax
  int v32; // r8d
  int v33; // r8d
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // edx
  int v38; // [rsp+20h] [rbp-99h]
  int v39; // [rsp+24h] [rbp-95h]
  int v40; // [rsp+28h] [rbp-91h]
  int v41; // [rsp+2Ch] [rbp-8Dh]
  int v42; // [rsp+30h] [rbp-89h]
  int v43; // [rsp+34h] [rbp-85h]
  int v44; // [rsp+38h] [rbp-81h]
  int v45; // [rsp+3Ch] [rbp-7Dh]
  int v46; // [rsp+40h] [rbp-79h]
  __int64 v47; // [rsp+48h] [rbp-71h]
  __int64 v48; // [rsp+48h] [rbp-71h]
  int v49; // [rsp+50h] [rbp-69h]
  _BYTE *v50; // [rsp+58h] [rbp-61h]
  int v51; // [rsp+60h] [rbp-59h]
  unsigned int v52; // [rsp+64h] [rbp-55h]
  int v53; // [rsp+68h] [rbp-51h]
  unsigned int v54; // [rsp+6Ch] [rbp-4Dh]
  int v55; // [rsp+70h] [rbp-49h]
  _BYTE v56[48]; // [rsp+78h] [rbp-41h]
  size_t Size; // [rsp+A8h] [rbp-11h]
  __m128i v58; // [rsp+B0h] [rbp-9h]
  __int64 v59; // [rsp+C0h] [rbp+7h]
  int v62; // [rsp+130h] [rbp+77h]
  unsigned int v63; // [rsp+138h] [rbp+7Fh]

  v2 = a1->m128i_i32[0];
  v3 = a2;
  v4 = a1[4].m128i_u32[0];
  v5 = a1;
  v6 = a1[3].m128i_u32[2];
  v54 = v4;
  v58 = a1[31];
  *(__m128i *)v56 = a1[30];
  v7 = a1[32];
  *(__m128i *)&v56[16] = v58;
  Size = a1[33].m128i_u64[0];
  v8 = HIDWORD(Size);
  *(__m128i *)&v56[32] = v7;
  if ( (a1->m128i_i32[0] & 0x20) != 0 )
  {
    v16 = v7.m128i_i64[0];
    v5->m128i_i32[0] = v2 & 0xFFFFFFDF;
    v8 = HIDWORD(Size) + 1;
  }
  else
  {
    v53 = HIDWORD(a1[33].m128i_i64[0]);
    if ( SHIDWORD(Size) <= 1 )
    {
      v16 = _mm_srli_si128(v7, 8).m128i_u64[0];
    }
    else
    {
      v9 = *(__m128i *)&v56[24];
      v10 = *(void **)v56;
      v47 = *(_QWORD *)v56;
      *(_OWORD *)v56 = *(_OWORD *)&v56[8];
      *(_QWORD *)&v56[32] = v7.m128i_i64[1];
      v58 = v9;
      *(_QWORD *)&v56[40] = v47;
      memmove(v10, *(const void **)&v56[24], (unsigned int)Size);
      v7.m128i_i64[0] = _mm_srli_si128(v9, 8).m128i_u64[0];
      if ( v5[3].m128i_i32[3] <= 0 )
      {
        memmove((void *)v7.m128i_i64[0], *(const void **)&v56[8], (unsigned int)Size);
      }
      else
      {
        ((void (__fastcall *)(__int64 *, __int64))v5[1].m128i_i64[1])(&v5->m128i_i64[1], v7.m128i_i64[0] + 3);
        *(_WORD *)v7.m128i_i64[0] = *(_WORD *)(v7.m128i_i64[0] + 6);
        v11 = v7.m128i_i64[0] + 2 * v6;
        *(_BYTE *)(v7.m128i_i64[0] + 2) = *(_BYTE *)(v7.m128i_i64[0] + 8);
        *(_WORD *)(v6 + v11 + 3) = *(_WORD *)(v6 + v11 - 3);
        *(_BYTE *)(v6 + v11 + 5) = *(_BYTE *)(v6 + v11 - 1);
      }
      v12 = **(_DWORD **)&v56[24] & 0xFFFFFF;
      v13 = *(_DWORD *)(*(_QWORD *)&v56[8] + 3LL) & 0xFFFFFF;
      v14 = *(_DWORD *)(*(_QWORD *)&v56[24] + 3LL) & 0xFFFFFF;
      v15 = *(_DWORD *)(*(_QWORD *)&v56[8] + 6LL) & 0xFFFFFF;
      v49 = v6 - 1;
      v16 = v7.m128i_u64[1];
      if ( (_DWORD)v6 != 1 )
      {
        v17 = (_DWORD *)(*(_QWORD *)&v56[24] + 9LL);
        v18 = (_BYTE *)(v47 + 5);
        v19 = **(_DWORD **)&v56[8] & 0xFFFFFF;
        v20 = *(_DWORD *)(*(_QWORD *)&v56[24] + 6LL) & 0xFFFFFF;
        v21 = v7.m128i_i64[0] - *(_QWORD *)&v56[24];
        v22 = *(_QWORD *)&v56[8] - *(_QWORD *)&v56[24];
        v59 = *(_QWORD *)v56 - *(_QWORD *)&v56[24];
        v23 = *(unsigned __int8 *)(*(_QWORD *)&v56[8] + 3LL)
            + 4 * (*(unsigned __int8 *)(*(_QWORD *)&v56[8] + 5LL) + 2 * *(unsigned __int8 *)(*(_QWORD *)&v56[8] + 4LL));
        v24 = v7.m128i_i64[1] - *(_QWORD *)&v56[24];
        v50 = (_BYTE *)(v47 + 5);
        v48 = v7.m128i_i64[1] - *(_QWORD *)&v56[24];
        while ( 1 )
        {
          v52 = v23;
          v38 = v15;
          v43 = v20;
          v41 = v19;
          v19 = v13;
          v13 = v15;
          v42 = v12;
          v12 = v14;
          v15 = *(_DWORD *)((char *)v17 + v22) & 0xFFFFFF;
          v40 = v14;
          v14 = v20;
          v39 = v15;
          v20 = *v17 & 0xFFFFFF;
          v55 = *((unsigned __int8 *)v17 + v22 - 1);
          v62 = v20;
          v23 = *((unsigned __int8 *)v17 + v22 - 3) + 4 * (v55 + 2 * *((unsigned __int8 *)v17 + v22 - 2));
          v63 = v23;
          if ( v19 != v13 )
            break;
LABEL_8:
          v18 += 3;
          v17 = (_DWORD *)((char *)v17 + 3);
          v25 = v49-- == 1;
          v50 = v18;
          if ( v25 )
          {
            v5 = a1;
            v16 = v7.m128i_u64[1];
            goto LABEL_10;
          }
        }
        if ( v19 ^ v14 | v12 ^ v13 )
        {
LABEL_15:
          v23 = v63;
          goto LABEL_8;
        }
        v51 = *(_DWORD *)((char *)v17 + v59 - 6) & 0xFFFFFF;
        v45 = *(_DWORD *)((char *)v17 + v59 - 3) & 0xFFFFFF;
        v46 = *(_DWORD *)((char *)v17 + v21 - 6) & 0xFFFFFF;
        v44 = *(_DWORD *)((char *)v17 + v21 - 3) & 0xFFFFFF;
        if ( v19 ^ v15 | v12 ^ v20 | v13 ^ v41 | v14 ^ v42
          && v19 ^ v46 | v12 ^ *(_DWORD *)((char *)v17 + v59 - 6) & 0xFFFFFF | v13 ^ v44 | v14 ^ v45 )
        {
          if ( v52 < v23 )
          {
            v32 = *(_DWORD *)((char *)v17 + v24 - 3) & 0xFFFFFF;
            *((_BYTE *)v17 + v24 - 3) = ((unsigned __int8)v14
                                       + (unsigned __int8)v41
                                       + 8
                                       + (unsigned __int8)v19
                                       + *((unsigned __int8 *)v17 + v21 - 3)
                                       + 12 * *((unsigned __int8 *)v17 + v24 - 3)) >> 4;
            *((_BYTE *)v17 + v48 - 2) = ((v19 & 0xFF00)
                                       + (v44 & 0xFF00)
                                       + 12 * (v32 & 0xFF00)
                                       + (v41 & 0xFF00)
                                       + (v43 & 0xFF00)
                                       + 2048) >> 12;
            *((_BYTE *)v17 + v48 - 1) = ((v19 & 0xFF0000)
                                       + (v44 & 0xFF0000)
                                       + 12 * (v32 & 0xFF0000)
                                       + (v41 & 0xFF0000)
                                       + (v43 & 0xFF0000)
                                       + 0x80000) >> 20;
            v33 = *(_DWORD *)(v50 - 2) & 0xFFFFFF;
            v18 = v50;
            *(v50 - 2) = ((unsigned __int8)v19
                        + (unsigned __int8)v51
                        + 12 * (unsigned __int8)*(v50 - 2)
                        + (unsigned __int8)v20
                        + (unsigned __int8)v14
                        + 8) >> 4;
            v12 = v40;
            *(v50 - 1) = ((v19 & 0xFF00) + (v51 & 0xFF00) + 12 * (v33 & 0xFF00) + (v20 & 0xFF00) + (v43 & 0xFF00) + 2048) >> 12;
            v13 = v38;
            v24 = v7.m128i_i64[1] - *(_QWORD *)&v56[24];
            v34 = 3 * (v33 & 0xFF0000);
            v15 = v39;
            v14 = v43;
            *v50 = ((v19 & 0xFF0000) + (v51 & 0xFF0000) + 4 * v34 + (v20 & 0xFF0000) + (v43 & 0xFF0000) + 0x80000) >> 20;
            goto LABEL_15;
          }
          v27 = *(_DWORD *)((char *)v17 + v24 - 6) & 0xFFFFFF;
          *((_BYTE *)v17 + v24 - 6) = ((unsigned __int8)v13
                                     + *((unsigned __int8 *)v17 + v22)
                                     + 8
                                     + (unsigned __int8)v12
                                     + *((unsigned __int8 *)v17 + v21 - 6)
                                     + 12 * *((unsigned __int8 *)v17 + v24 - 6)) >> 4;
          *((_BYTE *)v17 + v48 - 5) = ((v13 & 0xFF00)
                                     + (v39 & 0xFF00)
                                     + 2048
                                     + (v40 & 0xFF00)
                                     + (v46 & 0xFF00)
                                     + 12 * (v27 & 0xFF00)) >> 12;
          v28 = v13 & 0xFF0000;
          *((_BYTE *)v17 + v48 - 4) = ((v13 & 0xFF0000)
                                     + (v39 & 0xFF0000)
                                     + 0x80000
                                     + (v40 & 0xFF0000)
                                     + (v46 & 0xFF0000)
                                     + 12 * (v27 & 0xFF0000)) >> 20;
          v29 = *(_DWORD *)(v50 + 1) & 0xFFFFFF;
          v18 = v50;
          v50[1] = ((unsigned __int8)v12
                  + (unsigned __int8)v45
                  + 12 * (unsigned __int8)v50[1]
                  + (unsigned __int8)v42
                  + (unsigned __int8)v13
                  + 8) >> 4;
          v30 = (v13 & 0xFF00) + (v42 & 0xFF00) + 2048 + (v40 & 0xFF00) + (v45 & 0xFF00) + 12 * (v29 & 0xFF00);
          v12 = v40;
          v13 = v38;
          v50[2] = v30 >> 12;
          v31 = 3 * (v29 & 0xFF0000);
          v15 = v39;
          v14 = v43;
          v24 = v7.m128i_i64[1] - *(_QWORD *)&v56[24];
          v50[3] = (v28 + (v42 & 0xFF0000) + 0x80000 + (v40 & 0xFF0000) + (v45 & 0xFF0000) + 4 * v31) >> 20;
        }
        else
        {
          v35 = (*((unsigned __int8 *)v17 + v22 - 4) + v55 + 1) >> 1;
          v18[3] = v35;
          *v18 = v35;
          *((_BYTE *)v17 + v24 - 1) = v35;
          *((_BYTE *)v17 + v24 - 4) = v35;
          v36 = (*((unsigned __int8 *)v17 + v22 - 5) + 1 + *((unsigned __int8 *)v17 + v22 - 2)) >> 1;
          v18[2] = v36;
          *(v18 - 1) = v36;
          *((_BYTE *)v17 + v24 - 2) = v36;
          *((_BYTE *)v17 + v24 - 5) = v36;
          v37 = (*((unsigned __int8 *)v17 + v22 - 6) + *((unsigned __int8 *)v17 + v22 - 3) + 1) >> 1;
          v18[1] = v37;
          *(v18 - 2) = v37;
          *((_BYTE *)v17 + v24 - 3) = v37;
          *((_BYTE *)v17 + v24 - 6) = v37;
        }
        v20 = v62;
        goto LABEL_15;
      }
LABEL_10:
      v8 = v53;
      v3 = a2;
      v4 = v54;
    }
  }
  if ( v3 )
    memmove(v3, (const void *)(v16 + 3), v4);
  result = v3;
  HIDWORD(Size) = v8 - 1;
  v5[30] = *(__m128i *)v56;
  v5[31] = v58;
  v5[32] = *(__m128i *)&v56[32];
  v5[33].m128i_i64[0] = Size;
  return result;
}
