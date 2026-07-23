/*
 * XREFs of MiBuildImageControlArea @ 0x1405065E4
 * Callers:
 *     MiCreateImageFileMap @ 0x140505A1C (MiCreateImageFileMap.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x1401F25A8 (MiMakeSubsectionPte.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiParseImageSectionHeaders @ 0x140506B60 (MiParseImageSectionHeaders.c)
 */

__int64 __fastcall MiBuildImageControlArea(int a1, int a2, __int64 a3, _WORD *a4, int a5, unsigned int *a6, _QWORD *a7)
{
  unsigned int v8; // ebp
  __int64 v10; // rax
  ULONG v11; // r8d
  __int64 v12; // rdi
  size_t v13; // r13
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // rsi
  _QWORD *v16; // rdi
  _BYTE *v17; // rax
  _BYTE *v18; // r14
  int v19; // edi
  __int64 v20; // r8
  __int64 v21; // rdx
  unsigned int v22; // eax
  char v23; // al
  int v24; // eax
  char v25; // cl
  unsigned int v26; // r13d
  unsigned int *v27; // rdx
  __int64 v28; // r9
  __int64 DemandZeroPte; // r10
  unsigned int v30; // r11d
  __int64 v31; // r13
  __int64 v32; // rcx
  int v33; // r11d
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned int v36; // r10d
  unsigned int v37; // r8d
  __int16 v38; // cx
  __int16 v39; // ax
  __int64 SubsectionPte; // r9
  __int64 v41; // rcx
  int v42; // r11d
  __int64 v43; // rcx
  int v44; // r10d
  int v45; // [rsp+30h] [rbp-68h]
  _QWORD *v46; // [rsp+38h] [rbp-60h]
  __int64 v47; // [rsp+40h] [rbp-58h]
  unsigned int v50; // [rsp+B0h] [rbp+18h]

  v45 = (unsigned __int16)a4[1];
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
  v13 = (MiFlags & 0x2000 | 0x4000uLL) >> 10;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 56 * v10 + v13 + 128, v11);
  v15 = PoolWithTag;
  if ( !PoolWithTag )
  {
    dword_1403267C0 = 12;
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, 0xB8uLL);
  v46 = &v15[v12 + 16];
  v16 = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * v8, 0x74536D4Du);
  if ( !v16 )
  {
    dword_1403267C0 = 13;
    ExFreePoolWithTag(v15, 0);
    return 3221225626LL;
  }
  v17 = ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x6765534Du);
  v18 = v17;
  if ( !v17 )
  {
    dword_1403267C0 = 13;
    ExFreePoolWithTag(v16, 0);
    v19 = -1073741670;
LABEL_45:
    ExFreePoolWithTag(v15, 0);
    return (unsigned int)v19;
  }
  memset(v17, 0, 0x90uLL);
  v20 = *(_QWORD *)a3;
  v21 = *(unsigned int *)(a3 + 28);
  *((_QWORD *)v18 + 5) = 0LL;
  *((_QWORD *)v18 + 8) = v16;
  *(_QWORD *)v18 = v15;
  *((_DWORD *)v18 + 2) = v8;
  *((_QWORD *)v18 + 7) = v18 + 72;
  *((_QWORD *)v18 + 3) = (unsigned __int64)v8 << 12;
  v22 = *(_DWORD *)(a3 + 24);
  *((_DWORD *)v18 + 34) = v22;
  v50 = v22;
  *((_DWORD *)v18 + 35) = *(_DWORD *)(a3 + 16);
  v47 = v20;
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
  *v15 = v18;
  v15[2] = v15 + 1;
  v15[1] = v15 + 1;
  v15[14] = 1LL;
  v15[3] = 1LL;
  if ( (a5 & 1) == 0 )
    v15[6] = 1LL;
  *((_DWORD *)v15 + 22) = -1;
  v24 = (*((_DWORD *)v15 + 14) ^ (a1 << 20)) & 0x3F00000;
  v15[13] = 0LL;
  *((_DWORD *)v15 + 14) = *((_DWORD *)v15 + 14) ^ v24 | 0xA2;
  memset(v46, 0, v13);
  v25 = *(_BYTE *)(a3 + 104);
  v15[12] = v46;
  v26 = 0;
  v18[14] = v18[14] & 0x7F | (v25 << 7);
  v15[16] = v15;
  *((_QWORD *)v18 + 4) = v47;
  v15[17] = v16;
  if ( (a5 & 0x80000) != 0 )
  {
    *((_DWORD *)v15 + 43) = v8;
    *((_DWORD *)v15 + 42) = *(__int64 *)a6 >> 9;
    *((_WORD *)v15 + 81) = *((_WORD *)v15 + 81) & 0xF | (16 * (*(_WORD *)a6 & 0x1FF));
    v18[123] |= 8u;
    v18[122] = 1;
    *((_WORD *)v15 + 80) = v15[20] & 0xFFC1 | 0xE;
    MiMakeSubsectionPte((__int64)(v15 + 16));
    v18[14] = v18[14] & 0xC1 | 0xE;
    DemandZeroPte = MiMakeDemandZeroPte(7);
    v30 = 0;
    v31 = v8;
    while ( 1 )
    {
      if ( v30 >= *v27 )
      {
        *v16 = DemandZeroPte;
        if ( MiPteInShadowRange((unsigned __int64)v16) )
        {
          v34 = DemandZeroPte;
          goto LABEL_25;
        }
      }
      else
      {
        *v16 = v28;
        if ( MiPteInShadowRange((unsigned __int64)v16) )
        {
          v34 = v28;
LABEL_25:
          MiWritePteShadow(v32, v34);
          v27 = a6;
        }
      }
      v30 = v33 + 4096;
      ++v16;
      if ( !--v31 )
      {
        *((_QWORD *)v18 + 6) = v8;
        *((_DWORD *)v15 + 45) = 0;
        goto LABEL_43;
      }
    }
  }
  if ( !v50 )
  {
    dword_1403267C0 = 49;
LABEL_30:
    ExFreePoolWithTag(v18, 0);
    v19 = -1073741701;
    goto LABEL_45;
  }
  v35 = *(unsigned int *)(a3 + 12);
  v36 = v35 + v50 - 1;
  if ( v36 <= v50 )
  {
    dword_1403267C0 = 50;
    goto LABEL_30;
  }
  v37 = ((((unsigned __int16)v36 & (unsigned __int16)~(v35 - 1) & 0xFFFu) + 4095) >> 12)
      + (((unsigned int)~(v35 - 1) >> 12) & ((v35 + (unsigned __int64)v50 - 1) >> 12));
  *((_DWORD *)v15 + 43) = v37;
  if ( v37 > v8 )
  {
    dword_1403267C0 = 17;
    goto LABEL_30;
  }
  v8 -= v37;
  v38 = *((_WORD *)v15 + 81) & 0xF | (16 * (*(_WORD *)(a3 + 24) & 0x1FF));
  *((_DWORD *)v15 + 42) = v50 >> 9;
  v39 = *((_WORD *)v15 + 80);
  *((_WORD *)v15 + 81) = v38;
  *((_WORD *)v15 + 80) = v39 & 0xFFC1 | 2;
  SubsectionPte = MiMakeSubsectionPte((__int64)(v15 + 16));
  v18[14] = v18[14] & 0xC1 | 2;
  *((_DWORD *)v15 + 45) = 0;
  if ( *((_DWORD *)v15 + 43) )
  {
    do
    {
      if ( v26 >= *(_DWORD *)(a3 + 24) )
      {
        *v16 = 0LL;
        if ( MiPteInShadowRange((unsigned __int64)v16) )
          MiWritePteShadow(v43, 0LL);
        *((_DWORD *)v15 + 45) ^= v44 & (*((_DWORD *)v15 + 45) ^ (*((_DWORD *)v15 + 45) + 1));
      }
      else
      {
        *v16 = SubsectionPte;
        if ( MiPteInShadowRange((unsigned __int64)v16) )
          MiWritePteShadow(v41, SubsectionPte);
      }
      v26 += 4096;
      ++v16;
    }
    while ( (unsigned int)(v42 + 1) < *((_DWORD *)v15 + 43) );
  }
LABEL_43:
  v19 = MiParseImageSectionHeaders(a5, (_DWORD)v15, a2, v45, a3, v8);
  if ( v19 < 0 )
  {
    ExFreePoolWithTag(v18, 0);
    goto LABEL_45;
  }
  *a7 = v15;
  return 0LL;
}
