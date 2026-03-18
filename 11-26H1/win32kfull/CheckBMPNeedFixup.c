/*
 * XREFs of CheckBMPNeedFixup @ 0x140144330
 * Callers:
 *     SetupAAHeader @ 0x140142A9C (SetupAAHeader.c)
 * Callees:
 *     ComputeByteOffset @ 0x140143948 (ComputeByteOffset.c)
 *     IntersectRECTL @ 0x1401E8284 (IntersectRECTL.c)
 *     _local_unwind_0 @ 0x14034FC84 (_local_unwind_0.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall CheckBMPNeedFixup(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int *v4; // r14
  void *v7; // r12
  unsigned int v8; // esi
  int v9; // r15d
  int v10; // ebx
  int v11; // eax
  int v12; // edx
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  unsigned int v15; // ecx
  char *v17; // rax
  unsigned int *v18; // rbx
  unsigned int *v19; // rsi
  char *v20; // rdi
  int v21; // r14d
  unsigned __int64 v22; // r8
  unsigned int v23; // eax
  unsigned int *v24; // rcx
  int v25; // eax
  int v26; // r13d
  bool v27; // cc
  unsigned int v28; // ebx
  int v29; // eax
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // [rsp+0h] [rbp-148h] BYREF
  int v34; // [rsp+20h] [rbp-128h]
  unsigned int v35; // [rsp+24h] [rbp-124h]
  int v36; // [rsp+28h] [rbp-120h]
  int *v37; // [rsp+30h] [rbp-118h]
  int v38; // [rsp+38h] [rbp-110h]
  int v39; // [rsp+3Ch] [rbp-10Ch]
  int v40; // [rsp+40h] [rbp-108h]
  __int64 v41; // [rsp+48h] [rbp-100h]
  __int64 *v42; // [rsp+50h] [rbp-F8h]
  __int128 v43; // [rsp+58h] [rbp-F0h] BYREF
  int v44; // [rsp+68h] [rbp-E0h]
  unsigned __int64 v45; // [rsp+70h] [rbp-D8h]
  char *v46; // [rsp+78h] [rbp-D0h]
  unsigned int *v47; // [rsp+80h] [rbp-C8h]
  unsigned int *v48; // [rsp+88h] [rbp-C0h]
  unsigned __int64 v49; // [rsp+90h] [rbp-B8h]
  __m128i v50; // [rsp+A0h] [rbp-A8h] BYREF
  __int128 v51; // [rsp+B0h] [rbp-98h]
  __int128 v52; // [rsp+C0h] [rbp-88h]
  __int128 v53; // [rsp+D0h] [rbp-78h]
  __int128 v54; // [rsp+E0h] [rbp-68h]
  __int64 v55; // [rsp+F0h] [rbp-58h]

  v42 = &v33;
  v4 = a4;
  v37 = a4;
  v7 = 0LL;
  v46 = 0LL;
  memset_0(&v50, 0, 0x58uLL);
  v43 = 0LL;
  v8 = *(unsigned __int8 *)(a3 + 10);
  v9 = *v4;
  v36 = v9;
  if ( (v9 & 0x40) == 0 )
  {
LABEL_55:
    v32 = local_unwind_0(v42, &loc_14014480D);
    goto LABEL_56;
  }
  if ( v8 == 6 )
  {
LABEL_3:
    *(_QWORD *)&v43 = 0LL;
    *((_QWORD *)&v43 + 1) = *(_QWORD *)(a3 + 12);
    if ( (unsigned int)IntersectRECTL(&v43, v4 + 16) )
    {
      v50 = *(__m128i *)(a2 + 8);
      v51 = *(_OWORD *)(a2 + 24);
      v52 = *(_OWORD *)(a2 + 40);
      v53 = *(_OWORD *)(a2 + 56);
      v54 = *(_OWORD *)(a2 + 72);
      v55 = *(_QWORD *)(a2 + 88);
      v50.m128i_i8[0] = _mm_cvtsi128_si32(v50) & 0xF3;
      HIDWORD(v53) = *(_DWORD *)(a3 + 20);
      v10 = HIDWORD(v53);
      LODWORD(v4) = HIDWORD(v43) - DWORD1(v43);
      DWORD1(v53) = HIDWORD(v43) - DWORD1(v43);
      v11 = ComputeByteOffset(v8, v43, &v50.m128i_i8[1]);
      *((_QWORD *)&v52 + 1) = *(_QWORD *)(a3 + 24) + DWORD1(v43) * v10 + (__int64)v11;
      v12 = DWORD2(v43) - v43;
      v44 = DWORD2(v43) - v43;
      LODWORD(v53) = DWORD2(v43) - v43;
      a3 = 3LL * (DWORD2(v43) - (int)v43);
      DWORD2(v53) = 3 * (DWORD2(v43) - v43);
      v13 = (unsigned int)(DWORD2(v43) - v43 + 2);
      v14 = 0xFFFFFFFFLL;
      if ( (unsigned int)v13 < DWORD2(v43) - (int)v43 )
        goto LABEL_6;
      v34 = v12 + 2;
      v15 = 3 * v13;
      v41 = 3 * v13;
      if ( (unsigned __int64)(3 * v13) > 0xFFFFFFFF )
        goto LABEL_6;
      goto LABEL_51;
    }
    local_unwind_0(v42, &loc_14014481B);
    goto LABEL_55;
  }
  if ( v8 != 255 )
  {
    v32 = v8 - 1;
LABEL_56:
    switch ( v32 )
    {
      case 0u:
      case 1u:
        break;
      case 2u:
      case 3u:
      case 4u:
      case 0xFBu:
      case 0xFCu:
      case 0xFDu:
        goto LABEL_3;
      default:
        goto LABEL_57;
    }
  }
  v9 |= 0x240u;
  *v4 = v9;
  local_unwind_0(v42, &loc_1401444D4);
LABEL_51:
  v34 = v15;
  if ( v15 + 8 < v15 )
  {
LABEL_6:
    v34 = v14;
    local_unwind_0(v42, &loc_140144806);
    return 1LL;
  }
  v28 = (v15 + 8) & 0xFFFFFFF8;
  v34 = v28;
  v29 = v12 * (_DWORD)v4;
  LODWORD(v41) = v12 * (_DWORD)v4;
  v38 = v12 * (_DWORD)v4;
  if ( v12 * (int)v4 <= 2304 )
  {
    v9 |= 0x200u;
    goto LABEL_34;
  }
  if ( v29 <= 0x4000 )
  {
    v26 = v29 >> 3;
  }
  else
  {
    DWORD1(v53) = ((int)v4 + 5) / 6;
    HIDWORD(v53) *= 6;
    v26 = 20;
  }
  v40 = v26;
  v30 = (unsigned int)(v26 + 1);
  if ( (unsigned int)v30 >= v26 )
    goto LABEL_41;
  while ( 1 )
  {
    v9 &= ~0x40u;
    *v37 = v9;
    v30 = local_unwind_0(v42, &loc_140144814);
LABEL_41:
    v31 = 4 * v30;
    v49 = v31;
    if ( v31 <= v14 && (unsigned int)v31 + v28 >= v28 )
    {
      v17 = (char *)EngAllocMem(1u, (unsigned int)v31 + v28, 0x38355448u);
      v7 = v17;
      v46 = v17;
      if ( v17 )
        break;
    }
  }
  v18 = (unsigned int *)&v17[v28];
  v19 = v18;
  v48 = v18;
  v20 = &v17[a3];
  v21 = 0;
  v38 = 0;
  v34 = v41;
  v35 = 0;
  while ( 2 )
  {
    v45 = 0LL;
    v39 = 0;
    v22 = ((__int64 (__fastcall *)(__m128i *, void *))v51)(&v50, v7);
    v45 = v22;
    do
    {
      LOWORD(v35) = *(_WORD *)(v22 + 1);
      BYTE2(v35) = *(_BYTE *)v22;
      v23 = v35;
      if ( BYTE1(v35) == BYTE2(v35) )
      {
        v23 = v35 & 0xFCFCFCFC;
        v35 &= 0xFCFCFCFC;
      }
      *v18 = v23;
      v24 = v19;
      v47 = v19;
      while ( *v24 != v23 )
        v47 = --v24;
      if ( v24 != v18 )
        goto LABEL_16;
      v38 = ++v21;
      if ( v21 > v26 )
        break;
      v48 = ++v19;
      *v19 = v23;
      v39 = 1;
LABEL_16:
      v22 += 3LL;
      v45 = v22;
    }
    while ( v22 < (unsigned __int64)v20 );
    if ( v26 == 20 || v39 )
    {
LABEL_18:
      if ( v21 > v26 || !DWORD1(v53) )
        goto LABEL_27;
      continue;
    }
    break;
  }
  v25 = v41 - v44;
  LODWORD(v41) = v25;
  v34 = v25;
  if ( v25 > 2304 )
  {
    v26 = v25 >> 4;
    v40 = v25 >> 4;
    goto LABEL_18;
  }
  v9 |= 0x200u;
  v36 = v9;
LABEL_27:
  if ( v21 < 20 )
  {
    v9 |= 0x200u;
    v36 = v9;
  }
  if ( v26 != 20 )
  {
    if ( v21 > v26 && v21 <= 20 )
      goto LABEL_35;
    v9 &= ~0x40u;
LABEL_34:
    v36 = v9;
LABEL_35:
    v4 = v37;
    goto LABEL_57;
  }
  v27 = v21 <= 20;
  v4 = v37;
  if ( !v27 )
  {
    v9 &= ~0x40u;
    v36 = v9;
  }
LABEL_57:
  if ( v7 )
    EngFreeMem(v7);
  *v4 = v9;
  return v9 & 0x40;
}
