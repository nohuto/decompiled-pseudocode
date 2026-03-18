/*
 * XREFs of MiBuildImageControlArea @ 0x1404FC19C
 * Callers:
 *     MiCreateImageFileMap @ 0x1404FCC48 (MiCreateImageFileMap.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x140225C5C (MiMakeSubsectionPte.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiParseImageSectionHeaders @ 0x1404FC730 (MiParseImageSectionHeaders.c)
 */

__int64 __fastcall MiBuildImageControlArea(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        _WORD *a5,
        char a6,
        unsigned int *a7,
        _QWORD *a8)
{
  __int64 v8; // rsi
  unsigned int v9; // r13d
  __int64 v11; // rax
  ULONG v12; // r8d
  __int64 v13; // r14
  size_t v14; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // r15
  _QWORD *v17; // r14
  _BYTE *v18; // rax
  _BYTE *v19; // rbp
  int v20; // edi
  __int64 v21; // r8
  __int64 v22; // rdx
  unsigned int v23; // eax
  char v24; // al
  int v25; // eax
  char v26; // cl
  __int64 SubsectionPte; // rdi
  __int64 DemandZeroPte; // rsi
  unsigned int v29; // eax
  __int64 v30; // rdx
  bool v31; // zf
  __int64 v32; // rax
  unsigned int v33; // r10d
  unsigned int v34; // r8d
  __int16 v35; // cx
  __int16 v36; // ax
  __int64 v37; // rdi
  unsigned int v38; // r11d
  unsigned int v39; // [rsp+30h] [rbp-68h]
  __int64 v40; // [rsp+30h] [rbp-68h]
  int v41; // [rsp+38h] [rbp-60h]
  _QWORD *v42; // [rsp+40h] [rbp-58h]
  __int64 v43; // [rsp+48h] [rbp-50h]
  unsigned int v48; // [rsp+B8h] [rbp+20h]
  int v49; // [rsp+C0h] [rbp+28h]
  int v50; // [rsp+C0h] [rbp+28h]

  v8 = a4;
  v41 = (unsigned __int16)a5[1];
  v9 = ((*(_DWORD *)(a4 + 16) & 0xFFF) != 0) + (*(_DWORD *)(a4 + 16) >> 12);
  if ( !v9 )
    return 3221225595LL;
  v11 = (unsigned int)(unsigned __int16)a5[1] + 1;
  v12 = 1766026573;
  if ( (a1 & 8) != 0 )
  {
    v11 = 1LL;
    v12 = 1631808845;
  }
  v13 = 7 * v11;
  v14 = ((unsigned __int16)MiFlags & 0x8000 | 0x10000uLL) >> 12;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 56 * v11 + v14 + 120, v12);
  v16 = PoolWithTag;
  if ( !PoolWithTag )
  {
    dword_14034E980 = 12;
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, 0xB0uLL);
  v42 = &v16[v13 + 15];
  v17 = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * v9, 0x74536D4Du);
  if ( !v17 )
  {
    dword_14034E980 = 13;
    ExFreePoolWithTag(v16, 0);
    return 3221225626LL;
  }
  v18 = ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x6765534Du);
  v19 = v18;
  if ( !v18 )
  {
    dword_14034E980 = 13;
    ExFreePoolWithTag(v17, 0);
    v20 = -1073741670;
LABEL_44:
    ExFreePoolWithTag(v16, 0);
    return (unsigned int)v20;
  }
  memset(v18, 0, 0x90uLL);
  v21 = *(_QWORD *)v8;
  v22 = *(unsigned int *)(v8 + 28);
  *((_QWORD *)v19 + 5) = 0LL;
  *((_QWORD *)v19 + 8) = v17;
  *(_QWORD *)v19 = v16;
  *((_DWORD *)v19 + 2) = v9;
  *((_QWORD *)v19 + 7) = v19 + 72;
  *((_QWORD *)v19 + 3) = (unsigned __int64)v9 << 12;
  v23 = *(_DWORD *)(v8 + 24);
  *((_DWORD *)v19 + 34) = v23;
  v39 = v23;
  *((_DWORD *)v19 + 35) = *(_DWORD *)(v8 + 16);
  v43 = v21;
  *((_DWORD *)v19 + 32) = *a7;
  *((_QWORD *)v19 + 9) = v21 + v22;
  *((_QWORD *)v19 + 11) = *(_QWORD *)(v8 + 32);
  *((_QWORD *)v19 + 12) = *(_QWORD *)(v8 + 40);
  *((_DWORD *)v19 + 26) = *(unsigned __int16 *)(v8 + 50);
  *((_WORD *)v19 + 55) = *(_WORD *)(v8 + 52);
  *((_WORD *)v19 + 54) = *(_WORD *)(v8 + 54);
  *((_WORD *)v19 + 56) = *(_WORD *)(v8 + 56);
  *((_WORD *)v19 + 57) = *(_WORD *)(v8 + 58);
  *((_WORD *)v19 + 59) = *(_WORD *)(v8 + 60);
  *((_DWORD *)v19 + 33) = *(_DWORD *)(v8 + 64);
  if ( *(_DWORD *)(v8 + 68) || (v24 = 0, (_DWORD)v22) )
    v24 = 1;
  v19[122] = v24;
  *((_WORD *)v19 + 58) = a5[9];
  *((_WORD *)v19 + 60) = *a5;
  *((_DWORD *)v19 + 31) = *(_DWORD *)(v8 + 20);
  *v16 = v19;
  v16[2] = v16 + 1;
  v16[1] = v16 + 1;
  v16[13] = 1LL;
  v16[3] = 1LL;
  if ( (a6 & 1) == 0 )
    v16[6] = 1LL;
  *((_DWORD *)v16 + 22) = -1;
  v25 = (*((_DWORD *)v16 + 14) ^ (a2 << 20)) & 0x3F00000;
  v16[14] = 0LL;
  *((_DWORD *)v16 + 14) = *((_DWORD *)v16 + 14) ^ v25 | 0xA2;
  memset(v42, 0, v14);
  v26 = *(_BYTE *)(v8 + 104);
  v16[12] = v42;
  v49 = 0;
  v19[14] = v19[14] & 0x7F | (v26 << 7);
  v16[15] = v16;
  *((_QWORD *)v19 + 4) = v43;
  v16[16] = v17;
  if ( (a1 & 8) != 0 )
  {
    *((_DWORD *)v16 + 41) = v9;
    *((_DWORD *)v16 + 40) = *(__int64 *)a7 >> 9;
    *((_WORD *)v16 + 77) = *((_WORD *)v16 + 77) & 0xF | (16 * (*(_WORD *)a7 & 0x1FF));
    v19[123] |= 8u;
    v19[122] = 1;
    *((_WORD *)v16 + 76) = v16[19] & 0xFFC1 | 0xE;
    SubsectionPte = MiMakeSubsectionPte((__int64)(v16 + 15));
    v19[14] = v19[14] & 0xC1 | 0xE;
    v50 = 0;
    DemandZeroPte = MiMakeDemandZeroPte(7);
    v29 = 0;
    v40 = v9;
    while ( 1 )
    {
      if ( v29 >= *a7 )
      {
        *v17 = DemandZeroPte;
        if ( MiPteInShadowRange((__int64)v17) )
        {
          v30 = DemandZeroPte;
          goto LABEL_24;
        }
      }
      else
      {
        *v17 = SubsectionPte;
        if ( MiPteInShadowRange((__int64)v17) )
        {
          v30 = SubsectionPte;
LABEL_24:
          MiWritePteShadow((__int64)v17, v30);
        }
      }
      ++v17;
      v29 = v50 + 4096;
      v31 = v40-- == 1;
      v50 += 4096;
      if ( v31 )
      {
        v8 = a4;
        *((_QWORD *)v19 + 6) = v9;
        *((_DWORD *)v16 + 43) = 0;
        goto LABEL_42;
      }
    }
  }
  if ( !v39 )
  {
    dword_14034E980 = 49;
LABEL_29:
    ExFreePoolWithTag(v19, 0);
    v20 = -1073741701;
    goto LABEL_44;
  }
  v32 = *(unsigned int *)(v8 + 12);
  v33 = v32 + v39 - 1;
  if ( v33 <= v39 )
  {
    dword_14034E980 = 50;
    goto LABEL_29;
  }
  v34 = ((((unsigned __int16)v33 & (unsigned __int16)~(v32 - 1) & 0xFFFu) + 4095) >> 12)
      + (((unsigned int)~(v32 - 1) >> 12) & ((v32 + (unsigned __int64)v39 - 1) >> 12));
  *((_DWORD *)v16 + 41) = v34;
  if ( v34 > v9 )
  {
    dword_14034E980 = 17;
    goto LABEL_29;
  }
  v9 -= v34;
  v35 = *((_WORD *)v16 + 77) & 0xF | (16 * (*(_WORD *)(v8 + 24) & 0x1FF));
  *((_DWORD *)v16 + 40) = v39 >> 9;
  v36 = *((_WORD *)v16 + 76);
  *((_WORD *)v16 + 77) = v35;
  *((_WORD *)v16 + 76) = v36 & 0xFFC1 | 2;
  v37 = MiMakeSubsectionPte((__int64)(v16 + 15));
  v48 = 0;
  v19[14] = v19[14] & 0xC1 | 2;
  for ( *((_DWORD *)v16 + 43) = 0; v48 < *((_DWORD *)v16 + 41); ++v48 )
  {
    if ( v38 >= *(_DWORD *)(v8 + 24) )
    {
      *v17 = 0LL;
      if ( MiPteInShadowRange((__int64)v17) )
        MiWritePteShadow((__int64)v17, 0LL);
      ++*((_DWORD *)v16 + 43);
    }
    else
    {
      *v17 = v37;
      if ( MiPteInShadowRange((__int64)v17) )
        MiWritePteShadow((__int64)v17, v37);
    }
    ++v17;
    v38 = v49 + 4096;
    v49 += 4096;
  }
LABEL_42:
  v20 = MiParseImageSectionHeaders(a1, (_DWORD)v16, a3, v41, v8, v9);
  if ( v20 < 0 )
  {
    ExFreePoolWithTag(v19, 0);
    goto LABEL_44;
  }
  *a8 = v16;
  return 0LL;
}
