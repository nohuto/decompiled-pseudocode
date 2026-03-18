/*
 * XREFs of MiBuildImageControlArea @ 0x1403C9B5C
 * Callers:
 *     MiCreateImageFileMap @ 0x1403C9488 (MiCreateImageFileMap.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiParseImageSectionHeaders @ 0x1403CA140 (MiParseImageSectionHeaders.c)
 */

__int64 __fastcall MiBuildImageControlArea(int a1, int a2, __int64 a3, _WORD *a4, int a5, unsigned int *a6, _QWORD *a7)
{
  unsigned int v8; // esi
  __int64 v10; // rax
  ULONG v11; // r8d
  __int64 v12; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // r15
  _QWORD *v15; // r12
  _QWORD *v16; // r14
  _BYTE *v17; // rax
  _BYTE *v18; // rbp
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // eax
  char v23; // al
  int v24; // eax
  unsigned int v25; // r11d
  char v26; // cl
  char v27; // di
  __int64 v28; // rdi
  unsigned int v29; // eax
  __int64 v30; // rdx
  bool v31; // zf
  __int64 v32; // rax
  unsigned int v33; // r10d
  unsigned int v34; // r8d
  __int16 v35; // cx
  __int16 v36; // ax
  __int16 v37; // ax
  __int64 v38; // rdi
  unsigned int v39; // [rsp+30h] [rbp-78h]
  int v40; // [rsp+34h] [rbp-74h]
  _QWORD *v41; // [rsp+38h] [rbp-70h]
  char *v42; // [rsp+38h] [rbp-70h]
  unsigned __int64 Size; // [rsp+48h] [rbp-60h]
  __int64 v44; // [rsp+50h] [rbp-58h]
  unsigned int v47; // [rsp+C0h] [rbp+18h]
  int v49; // [rsp+C8h] [rbp+20h]
  int v50; // [rsp+C8h] [rbp+20h]

  v40 = (unsigned __int16)a4[1];
  v8 = ((*(_DWORD *)(a3 + 16) & 0xFFF) != 0) + (*(_DWORD *)(a3 + 16) >> 12);
  if ( !v8 )
    return 3221225595LL;
  v10 = (unsigned int)(unsigned __int16)a4[1] + 1;
  v11 = 1766026573;
  if ( (a5 & 0x80000) != 0 )
  {
    v10 = 1LL;
    v11 = 1631808845;
  }
  v12 = 7 * v10;
  Size = ((unsigned __int16)MiFlags & 0x8000 | 0x10000uLL) >> 12;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 56 * v10 + Size + 120, v11);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
  {
    dword_1402FE4B8 = 12;
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, 0xB0uLL);
  v15 = v14 + 15;
  v41 = &v14[v12 + 15];
  v16 = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * v8, 0x74536D4Du);
  if ( !v16 )
  {
    dword_1402FE4B8 = 13;
    ExFreePoolWithTag(v14, 0);
    return 3221225626LL;
  }
  v17 = ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x6765534Du);
  v18 = v17;
  if ( !v17 )
  {
    dword_1402FE4B8 = 13;
    ExFreePoolWithTag(v16, 0);
    v19 = -1073741670;
LABEL_44:
    ExFreePoolWithTag(v14, 0);
    return (unsigned int)v19;
  }
  memset(v17, 0, 0x90uLL);
  v20 = *(_QWORD *)a3;
  v21 = *(unsigned int *)(a3 + 28);
  *((_QWORD *)v18 + 3) = (unsigned __int64)v8 << 12;
  v22 = *(_DWORD *)(a3 + 24);
  *((_QWORD *)v18 + 5) = 0LL;
  *((_QWORD *)v18 + 8) = v16;
  *(_QWORD *)v18 = v14;
  *((_DWORD *)v18 + 2) = v8;
  *((_QWORD *)v18 + 7) = v18 + 72;
  *((_DWORD *)v18 + 34) = v22;
  v39 = v22;
  *((_DWORD *)v18 + 35) = *(_DWORD *)(a3 + 16);
  v44 = v20;
  *((_DWORD *)v18 + 32) = *a6;
  *((_QWORD *)v18 + 9) = v20 + v21;
  *((_QWORD *)v18 + 11) = *(_QWORD *)(a3 + 32);
  *((_QWORD *)v18 + 12) = *(_QWORD *)(a3 + 40);
  *((_DWORD *)v18 + 26) = *(unsigned __int16 *)(a3 + 50);
  *((_WORD *)v18 + 55) = *(_WORD *)(a3 + 52);
  *((_WORD *)v18 + 54) = *(_WORD *)(a3 + 54);
  *((_WORD *)v18 + 56) = *(_WORD *)(a3 + 56);
  *((_WORD *)v18 + 57) = *(_WORD *)(a3 + 58);
  *((_WORD *)v18 + 59) = *(_WORD *)(a3 + 60);
  *((_DWORD *)v18 + 33) = *(_DWORD *)(a3 + 64);
  if ( *(_DWORD *)(a3 + 68) || (v23 = 0, (_DWORD)v21) )
    v23 = 1;
  v18[122] = v23;
  *((_WORD *)v18 + 58) = a4[9];
  *((_WORD *)v18 + 60) = *a4;
  *((_DWORD *)v18 + 31) = *(_DWORD *)(a3 + 20);
  *v14 = v18;
  v14[2] = v14 + 1;
  v14[1] = v14 + 1;
  v14[13] = 1LL;
  v14[3] = 1LL;
  if ( (a5 & 1) == 0 )
    v14[6] = 1LL;
  *((_DWORD *)v14 + 22) = -1;
  v24 = (*((_DWORD *)v14 + 14) ^ (a1 << 20)) & 0x3F00000;
  v14[14] = 0LL;
  *((_DWORD *)v14 + 14) = *((_DWORD *)v14 + 14) ^ v24 | 0xA2;
  memset(v41, 0, Size);
  v25 = 0;
  v26 = *(_BYTE *)(a3 + 104);
  v14[12] = v41;
  v49 = 0;
  v18[14] = v18[14] & 0x7F | (v26 << 7);
  *v15 = v14;
  *((_QWORD *)v18 + 4) = v44;
  v14[16] = v16;
  if ( (a5 & 0x80000) != 0 )
  {
    *((_DWORD *)v14 + 41) = v8;
    v50 = 0;
    *((_DWORD *)v14 + 40) = *(__int64 *)a6 >> 9;
    *((_WORD *)v14 + 77) = *((_WORD *)v14 + 77) & 0xF | (16 * (*(_WORD *)a6 & 0x1FF));
    v18[123] |= 8u;
    v18[122] = 1;
    v27 = v14[19] & 0xC1 | 0xE;
    *((_WORD *)v14 + 76) = v14[19] & 0xFFC1 | 0xE;
    v28 = 16 * (((_QWORD)v15 << 12) | v27 & 0x3E | 0x40LL);
    v18[14] = v18[14] & 0xC1 | 0xE;
    v29 = 0;
    v42 = (char *)v8;
    while ( 1 )
    {
      if ( v29 >= *a6 )
      {
        *v16 = 224LL;
        if ( MiPteInShadowRange((__int64)v16) )
        {
          v30 = 224LL;
          goto LABEL_24;
        }
      }
      else
      {
        *v16 = v28;
        if ( MiPteInShadowRange((__int64)v16) )
        {
          v30 = v28;
LABEL_24:
          MiWritePteShadow((__int64)v16, v30);
        }
      }
      ++v16;
      v29 = v50 + 4096;
      v31 = v42-- == (char *)1;
      v50 += 4096;
      if ( v31 )
      {
        *((_QWORD *)v18 + 6) = v8;
        *((_DWORD *)v14 + 43) = 0;
        goto LABEL_42;
      }
    }
  }
  if ( !v39 )
  {
    dword_1402FE4B8 = 49;
LABEL_29:
    ExFreePoolWithTag(v18, 0);
    v19 = -1073741701;
    goto LABEL_44;
  }
  v32 = *(unsigned int *)(a3 + 12);
  v33 = v32 + v39 - 1;
  if ( v33 <= v39 )
  {
    dword_1402FE4B8 = 50;
    goto LABEL_29;
  }
  v34 = ((((unsigned __int16)v33 & (unsigned __int16)~(v32 - 1) & 0xFFFu) + 4095) >> 12)
      + (((unsigned int)~(v32 - 1) >> 12) & ((v32 + (unsigned __int64)v39 - 1) >> 12));
  *((_DWORD *)v14 + 41) = v34;
  if ( v34 > v8 )
  {
    dword_1402FE4B8 = 17;
    goto LABEL_29;
  }
  v8 -= v34;
  v35 = *((_WORD *)v14 + 77) & 0xF | (16 * (*(_WORD *)(a3 + 24) & 0x1FF));
  *((_DWORD *)v14 + 40) = v39 >> 9;
  v36 = *((_WORD *)v14 + 76);
  *((_WORD *)v14 + 77) = v35;
  v47 = 0;
  v37 = v36 & 0xFFC1 | 2;
  *((_WORD *)v14 + 76) = v37;
  v38 = 16 * (((_QWORD)v15 << 12) | v37 & 0x3E | 0x40LL);
  v18[14] = v18[14] & 0xC1 | 2;
  for ( *((_DWORD *)v14 + 43) = 0; v47 < *((_DWORD *)v14 + 41); ++v47 )
  {
    if ( v25 >= *(_DWORD *)(a3 + 24) )
    {
      *v16 = 0LL;
      if ( MiPteInShadowRange((__int64)v16) )
        MiWritePteShadow((__int64)v16, 0LL);
      *((_DWORD *)v14 + 43) ^= (*((_DWORD *)v14 + 43) ^ (*((_DWORD *)v14 + 43) + 1)) & 0x7FFFFFFF;
    }
    else
    {
      *v16 = v38;
      if ( MiPteInShadowRange((__int64)v16) )
        MiWritePteShadow((__int64)v16, v38);
    }
    ++v16;
    v25 = v49 + 4096;
    v49 += 4096;
  }
LABEL_42:
  v19 = MiParseImageSectionHeaders(a5, (_DWORD)v14, a2, v40, a3, v8);
  if ( v19 < 0 )
  {
    ExFreePoolWithTag(v18, 0);
    goto LABEL_44;
  }
  *a7 = v14;
  return 0LL;
}
