/*
 * XREFs of FixupColorScan @ 0x1400F2CA4
 * Callers:
 *     ShrinkDIB_CY_SrkCX @ 0x1400F09B0 (ShrinkDIB_CY_SrkCX.c)
 *     BltDIB_CY @ 0x1400F16E0 (BltDIB_CY.c)
 *     GetFixupScan @ 0x1400F27B8 (GetFixupScan.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void *__fastcall FixupColorScan(__m128i *a1, void *a2)
{
  int v2; // eax
  void *v3; // rdi
  unsigned int v4; // edx
  __m128i *v5; // r14
  __int64 v6; // rsi
  __m128i v7; // xmm1
  int v8; // ebx
  __m128i v9; // xmm1
  _DWORD *v10; // xmm1_8
  _WORD *v11; // xmm0_8
  _WORD *v12; // rcx
  int v13; // r11d
  int v14; // r10d
  int v15; // r9d
  int v16; // edi
  unsigned __int64 v17; // rcx
  _BYTE *v18; // rsi
  char *v19; // r12
  char *v20; // r13
  _DWORD *v21; // r15
  __int64 v22; // r14
  int v23; // ebx
  int v24; // edx
  bool v25; // zf
  void *result; // rax
  int v27; // r8d
  int v28; // r11d
  unsigned int v29; // eax
  int v30; // r10d
  int v31; // r8d
  int v32; // r8d
  int v33; // r10d
  int v34; // edi
  int v35; // r8d
  unsigned int v36; // ecx
  unsigned int v37; // edx
  unsigned int v38; // edx
  int v39; // [rsp+20h] [rbp-A9h]
  int v40; // [rsp+24h] [rbp-A5h]
  int v41; // [rsp+28h] [rbp-A1h]
  int v42; // [rsp+2Ch] [rbp-9Dh]
  unsigned int v43; // [rsp+30h] [rbp-99h]
  int v44; // [rsp+34h] [rbp-95h]
  int v45; // [rsp+38h] [rbp-91h]
  int v46; // [rsp+3Ch] [rbp-8Dh]
  int v47; // [rsp+40h] [rbp-89h]
  int v48; // [rsp+44h] [rbp-85h]
  int v49; // [rsp+48h] [rbp-81h]
  __int64 v50; // [rsp+50h] [rbp-79h]
  unsigned int v51; // [rsp+58h] [rbp-71h]
  int v52; // [rsp+5Ch] [rbp-6Dh]
  int v53; // [rsp+60h] [rbp-69h]
  int v54; // [rsp+64h] [rbp-65h]
  unsigned int v55; // [rsp+68h] [rbp-61h]
  _BYTE v56[48]; // [rsp+70h] [rbp-59h]
  size_t Size; // [rsp+A0h] [rbp-29h]
  __m128i v58; // [rsp+A8h] [rbp-21h]
  __int64 v59; // [rsp+A8h] [rbp-21h]
  __m128i v60; // [rsp+B8h] [rbp-11h]
  __m128i v61; // [rsp+C8h] [rbp-1h]
  int v64; // [rsp+140h] [rbp+77h]

  v2 = a1->m128i_i32[0];
  v3 = a2;
  v4 = a1[4].m128i_u32[0];
  v5 = a1;
  v6 = a1[3].m128i_u32[2];
  v55 = v4;
  v7 = a1[32];
  v60 = a1[30];
  *(__m128i *)v56 = v60;
  v58 = v7;
  v61 = a1[31];
  *(__m128i *)&v56[16] = v61;
  Size = a1[33].m128i_u64[0];
  v8 = HIDWORD(Size);
  *(__m128i *)&v56[32] = v7;
  if ( (a1->m128i_i32[0] & 0x20) != 0 )
  {
    v17 = v7.m128i_i64[0];
    v5->m128i_i32[0] = v2 & 0xFFFFFFDF;
    v8 = HIDWORD(Size) + 1;
  }
  else
  {
    v54 = HIDWORD(a1[33].m128i_i64[0]);
    if ( SHIDWORD(Size) <= 1 )
    {
      v17 = _mm_srli_si128(v7, 8).m128i_u64[0];
    }
    else
    {
      v9 = *(__m128i *)&v56[24];
      v60 = *(__m128i *)&v56[8];
      *(_QWORD *)&v56[32] = *(_QWORD *)&v56[40];
      v61 = v9;
      *(_QWORD *)&v56[40] = *(_QWORD *)v56;
      memmove(*(void **)v56, *(const void **)&v56[24], (unsigned int)Size);
      v10 = (_DWORD *)_mm_srli_si128(*(__m128i *)&v56[8], 8).m128i_u64[0];
      v11 = (_WORD *)_mm_srli_si128(v61, 8).m128i_u64[0];
      if ( v5[3].m128i_i32[3] <= 0 )
      {
        memmove(v11, v10, (unsigned int)Size);
      }
      else
      {
        ((void (__fastcall *)(__int64 *, __int64))v5[1].m128i_i64[1])(&v5->m128i_i64[1], (__int64)v11 + 3);
        *v11 = v11[3];
        v12 = &v11[v6];
        *((_BYTE *)v11 + 2) = *((_BYTE *)v11 + 8);
        *(_WORD *)((char *)v12 + v6 + 3) = *(_WORD *)((char *)v12 + v6 - 3);
        *((_BYTE *)v12 + v6 + 5) = *((_BYTE *)v12 + v6 - 1);
      }
      v13 = *v10 & 0xFFFFFF;
      v14 = **(_DWORD **)&v56[24] & 0xFFFFFF;
      v15 = *(_DWORD *)((char *)v10 + 3) & 0xFFFFFF;
      v16 = *(_DWORD *)(*(_QWORD *)&v56[24] + 3LL) & 0xFFFFFF;
      v64 = *(_DWORD *)(*(_QWORD *)&v56[24] + 6LL) & 0xFFFFFF;
      v49 = v6 - 1;
      v17 = *(_QWORD *)&v56[32];
      v43 = *((unsigned __int8 *)v10 + 3) + 4 * (*((unsigned __int8 *)v10 + 5) + 2 * *((unsigned __int8 *)v10 + 4));
      if ( (_DWORD)v6 != 1 )
      {
        v18 = (_BYTE *)(*(_QWORD *)v56 + 5LL);
        v50 = *(_QWORD *)v56 + 5LL;
        v19 = (char *)v10 - *(_QWORD *)&v56[24];
        v59 = *(_QWORD *)&v56[8] - *(_QWORD *)&v56[24];
        v20 = (char *)v11 - *(_QWORD *)&v56[24];
        v21 = (_DWORD *)(*(_QWORD *)&v56[24] + 9LL);
        v22 = *(_QWORD *)&v56[32] - *(_QWORD *)&v56[24];
        v23 = *(_DWORD *)((char *)v10 + 6) & 0xFFFFFF;
        do
        {
          v48 = v23;
          v24 = v15;
          v41 = v13;
          v44 = v14;
          v13 = v15;
          v42 = v15;
          v15 = v23;
          v45 = v16;
          v14 = v16;
          v16 = v64;
          v23 = *(_DWORD *)&v19[(_QWORD)v21] & 0xFFFFFF;
          v64 = *v21 & 0xFFFFFF;
          v51 = v43;
          v53 = (unsigned __int8)v19[(_QWORD)v21 - 1];
          v46 = v16;
          v43 = (unsigned __int8)v19[(_QWORD)v21 - 3] + 4 * (v53 + 2 * (unsigned __int8)v19[(_QWORD)v21 - 2]);
          if ( v24 != v15 && !(v13 ^ v16 | v15 ^ v14) )
          {
            v47 = *(_DWORD *)((char *)v21 + v59 - 6) & 0xFFFFFF;
            v39 = *(_DWORD *)&v20[(_QWORD)v21 - 6] & 0xFFFFFF;
            v52 = *(_DWORD *)((char *)v21 + v59 - 3) & 0xFFFFFF;
            v40 = *(_DWORD *)&v20[(_QWORD)v21 - 3] & 0xFFFFFF;
            if ( v13 ^ v23 | v15 ^ v41 | v14 ^ v64 | v16 ^ v44
              && v13 ^ v39 | v14 ^ *(_DWORD *)((char *)v21 + v59 - 6) & 0xFFFFFF | v15 ^ v40 | v16 ^ *(_DWORD *)((char *)v21 + v59 - 3) & 0xFFFFFF )
            {
              if ( v51 < v43 )
              {
                v32 = *(_DWORD *)((char *)v21 + v22 - 3);
                v33 = (unsigned __int8)v16;
                v34 = v13 & 0xFF00;
                *((_BYTE *)v21 + v22 - 3) = ((unsigned __int8)v13
                                           + (unsigned __int8)v41
                                           + 8
                                           + v33
                                           + (unsigned __int8)v20[(_QWORD)v21 - 3]
                                           + 12 * (unsigned int)(unsigned __int8)v32) >> 4;
                *((_BYTE *)v21 + v22 - 2) = (v34
                                           + (v41 & 0xFF00)
                                           + 2048
                                           + (v46 & 0xFF00)
                                           + (v40 & 0xFF00)
                                           + 12 * (v32 & 0xFF00u)) >> 12;
                *((_BYTE *)v21 + v22 - 1) = (v42
                                           + (v40 & 0xFF0000)
                                           + 12 * (v32 & 0xFF0000)
                                           + (v41 & 0xFF0000)
                                           + (v46 & 0xFF0000)
                                           + 0x80000) >> 20;
                v35 = *(_DWORD *)(v18 - 2);
                *(v18 - 2) = (v33
                            + (unsigned __int8)v64
                            + 12 * (unsigned __int8)v35
                            + (unsigned __int8)v47
                            + (unsigned int)(unsigned __int8)v13
                            + 8) >> 4;
                *(v18 - 1) = ((v46 & 0xFF00) + (v64 & 0xFF00) + 12 * (v35 & 0xFF00) + (v47 & 0xFF00u) + v34 + 2048) >> 12;
                *v18 = (v42 + (v64 & 0xFF0000) + 12 * (v35 & 0xFF0000) + (v47 & 0xFF0000) + (v46 & 0xFF0000) + 0x80000) >> 20;
              }
              else
              {
                v27 = *(_DWORD *)((char *)v21 + v22 - 6);
                v28 = (unsigned __int8)v14;
                v29 = ((unsigned __int8)v15
                     + (unsigned __int8)v23
                     + 8
                     + (unsigned __int8)v14
                     + (unsigned __int8)v20[(_QWORD)v21 - 6]
                     + 12 * (unsigned int)(unsigned __int8)v27) >> 4;
                v30 = v14 & 0xFF00;
                *((_BYTE *)v21 + v22 - 6) = v29;
                *((_BYTE *)v21 + v22 - 5) = ((v15 & 0xFF00)
                                           + (v23 & 0xFF00)
                                           + 2048
                                           + v30
                                           + (v39 & 0xFF00)
                                           + 12 * (v27 & 0xFF00u)) >> 12;
                *((_BYTE *)v21 + v22 - 4) = ((v15 & 0xFF0000)
                                           + (v45 & 0xFF0000)
                                           + (v39 & 0xFF0000)
                                           + v23
                                           + 12 * (v27 & 0xFF0000)
                                           + 0x80000) >> 20;
                v31 = *(_DWORD *)(v50 + 1);
                *(_BYTE *)(v50 + 1) = (v28
                                     + (unsigned __int8)v44
                                     + 12 * (unsigned __int8)v31
                                     + (unsigned __int8)v52
                                     + (unsigned int)(unsigned __int8)v15
                                     + 8) >> 4;
                v18 = (_BYTE *)v50;
                *(_BYTE *)(v50 + 2) = (v30
                                     + (v44 & 0xFF00)
                                     + 12 * (v31 & 0xFF00)
                                     + (v52 & 0xFF00)
                                     + (v15 & 0xFF00u)
                                     + 2048) >> 12;
                *(_BYTE *)(v50 + 3) = ((v15 & 0xFF0000)
                                     + (v52 & 0xFF0000)
                                     + 0x80000
                                     + (v45 & 0xFF0000)
                                     + (v44 & 0xFF0000)
                                     + 12 * (v31 & 0xFF0000)) >> 20;
              }
              v15 = v48;
              v13 = v42;
              v14 = v45;
              v16 = v46;
            }
            else
            {
              v36 = ((unsigned int)(unsigned __int8)v19[(_QWORD)v21 - 4] + v53 + 1) >> 1;
              v18[3] = v36;
              *v18 = v36;
              *((_BYTE *)v21 + v22 - 1) = v36;
              *((_BYTE *)v21 + v22 - 4) = v36;
              v37 = ((unsigned __int8)v19[(_QWORD)v21 - 5] + 1 + (unsigned int)(unsigned __int8)v19[(_QWORD)v21 - 2]) >> 1;
              v18[2] = v37;
              *(v18 - 1) = v37;
              *((_BYTE *)v21 + v22 - 2) = v37;
              *((_BYTE *)v21 + v22 - 5) = v37;
              v38 = ((unsigned __int8)v19[(_QWORD)v21 - 6] + (unsigned int)(unsigned __int8)v19[(_QWORD)v21 - 3] + 1) >> 1;
              v18[1] = v38;
              *(v18 - 2) = v38;
              *((_BYTE *)v21 + v22 - 3) = v38;
              *((_BYTE *)v21 + v22 - 6) = v38;
            }
          }
          v18 += 3;
          v21 = (_DWORD *)((char *)v21 + 3);
          v25 = v49-- == 1;
          v50 = (__int64)v18;
        }
        while ( !v25 );
        v5 = a1;
        v17 = *(_QWORD *)&v56[32];
      }
      v8 = v54;
      v3 = a2;
      v4 = v55;
      v58 = *(__m128i *)&v56[32];
    }
  }
  if ( v3 )
    memmove(v3, (const void *)(v17 + 3), v4);
  result = v3;
  HIDWORD(Size) = v8 - 1;
  v5[30] = v60;
  v5[31] = v61;
  v5[32] = v58;
  v5[33].m128i_i64[0] = Size;
  return result;
}
