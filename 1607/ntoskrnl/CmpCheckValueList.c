/*
 * XREFs of CmpCheckValueList @ 0x14043B810
 * Callers:
 *     CmpCheckKey @ 0x14043C4E0 (CmpCheckKey.c)
 * Callees:
 *     HvpReleaseHCell @ 0x14002CEB0 (HvpReleaseHCell.c)
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     HvpMapEntryReleaseBinAddress @ 0x14002CF80 (HvpMapEntryReleaseBinAddress.c)
 *     HvpMapEntryGetBinAddress @ 0x14002D1E0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryIsDiscardable @ 0x14002D250 (HvpMapEntryIsDiscardable.c)
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     HvpGetBinContextInitialize @ 0x14002D300 (HvpGetBinContextInitialize.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     SetFailureLocation @ 0x1401B29DC (SetFailureLocation.c)
 *     HvIsCellAllocated @ 0x140438890 (HvIsCellAllocated.c)
 *     CmpCompareUnicodeString @ 0x1404B6020 (CmpCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x1404F5D50 (CmpCompareCompressedName.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpCheckValueList(
        ULONG_PTR a1,
        char a2,
        __int64 a3,
        unsigned int a4,
        ULONG_PTR BugCheckParameter3,
        PRTL_BITMAP BitMapHeader,
        unsigned int *a7,
        unsigned int *a8,
        int a9)
{
  unsigned int v10; // r14d
  unsigned int v11; // r15d
  __int64 v12; // rdi
  unsigned int v13; // esi
  unsigned int *v14; // rax
  unsigned __int64 v15; // r12
  int *v16; // r13
  unsigned int v17; // esi
  __int64 v18; // rax
  __int64 v19; // rax
  struct _EX_RUNDOWN_REF *v20; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // rsi
  unsigned __int64 BinAddress; // rax
  __int64 v25; // rcx
  unsigned int v26; // r9d
  unsigned int v27; // edx
  __int64 v28; // r8
  bool v29; // si
  _WORD *v30; // rax
  _WORD *v31; // r13
  unsigned int v32; // ecx
  int v33; // edx
  __int16 v34; // r8
  bool v35; // zf
  char v36; // r14
  __int16 v37; // si
  int v38; // eax
  __int16 v39; // r9
  unsigned __int16 v40; // cx
  unsigned int v41; // edx
  unsigned int v42; // esi
  unsigned int v43; // r14d
  __int64 v44; // r15
  unsigned int v45; // edx
  __int64 v46; // rax
  __int64 v47; // r12
  unsigned __int64 v48; // rcx
  __int64 v49; // r14
  __int64 v50; // rax
  unsigned int v51; // eax
  unsigned int v52; // r12d
  __int64 v53; // r14
  __int64 v54; // rax
  int v56; // [rsp+20h] [rbp-71h]
  __int64 v57; // [rsp+28h] [rbp-69h]
  unsigned int v58; // [rsp+30h] [rbp-61h]
  _DWORD v59[2]; // [rsp+38h] [rbp-59h] BYREF
  void *v60; // [rsp+40h] [rbp-51h]
  _DWORD v61[2]; // [rsp+48h] [rbp-49h] BYREF
  _DWORD v62[2]; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v63; // [rsp+58h] [rbp-39h]
  int v64; // [rsp+5Ch] [rbp-35h]
  _DWORD v65[2]; // [rsp+60h] [rbp-31h] BYREF
  _DWORD v66[2]; // [rsp+68h] [rbp-29h] BYREF
  char v67[8]; // [rsp+70h] [rbp-21h] BYREF
  _WORD v68[4]; // [rsp+78h] [rbp-19h] BYREF
  _WORD *v69; // [rsp+80h] [rbp-11h]
  __int16 v70; // [rsp+E0h] [rbp+4Fh] BYREF
  char v71; // [rsp+E8h] [rbp+57h]
  __int64 v72; // [rsp+F0h] [rbp+5Fh]
  unsigned int v73; // [rsp+F8h] [rbp+67h]

  v73 = a4;
  v72 = a3;
  v71 = a2;
  v59[0] = -1;
  v59[1] = 0;
  v10 = a4;
  v61[0] = -1;
  v11 = 0;
  v12 = *(_QWORD *)(a1 + 56);
  v13 = 0;
  v61[1] = 0;
  v66[0] = -1;
  v66[1] = 0;
  v65[0] = -1;
  v65[1] = 0;
  v62[0] = -1;
  v62[1] = 0;
  *a7 = 0;
  v14 = a8;
  v58 = 0;
  v63 = 0;
  *(_QWORD *)(v12 + 272) = a3;
  *v14 = 0;
  *(_DWORD *)(v12 + 280) = -1;
  *(_DWORD *)(v12 + 284) = 0;
  *(_QWORD *)(v12 + 288) = 0LL;
  if ( !a4 )
    return v13;
  while ( 1 )
  {
    v15 = *(unsigned int *)(a3 + 4LL * v11);
    v16 = (int *)(a3 + 4LL * v11);
    v64 = *v16;
    v60 = v16;
    if ( a2 && v10 != 1 )
    {
      v13 = 5005;
      SetFailureLocation(v12, 0, 15, 5005, 64);
      *(_DWORD *)(v12 + 280) = v11;
      *(_DWORD *)(v12 + 284) = v15;
      return v13;
    }
    if ( (_DWORD)v15 == -1 )
    {
      v13 = 5010;
      SetFailureLocation(v12, 1, 15, 5010, 80);
      *(_DWORD *)(v12 + 284) = -1;
      goto LABEL_117;
    }
    HvpGetCellContextReinitialize((__int64)v67);
    HvpGetBinContextInitialize(&v70);
    if ( (*(_BYTE *)(a1 + 124) & 1) != 0 )
      goto LABEL_28;
    v17 = (unsigned int)v15 >> 31;
    if ( (v15 & 0x7FFFFFFF) < *(_DWORD *)(632LL * ((unsigned int)v15 >> 31) + a1 + 1400) && (v15 & 7) == 0 )
    {
      if ( !BitMapHeader || (v15 & 0x80000000) != 0LL )
        goto LABEL_12;
      if ( _bittest64((const signed __int64 *)BitMapHeader->Buffer, (unsigned int)v15 >> 3) )
        break;
    }
LABEL_27:
    v13 = 5020;
    SetFailureLocation(v12, 1, 15, 5020, 96);
    *(_DWORD *)(v12 + 284) = v15;
LABEL_117:
    *(_DWORD *)(v12 + 280) = v11;
LABEL_118:
    if ( (a9 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(v12, 1, 15, v13, 48);
      return v13;
    }
    v52 = BugCheckParameter3;
    v53 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, (unsigned int)BugCheckParameter3, v66);
    SetFailureLocation(v12, 1, 15, v13, 0);
    if ( !v53 )
    {
      SetFailureLocation(v12, 0, 15, v13, 16);
      return v13;
    }
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, v52)
      || !(unsigned __int8)HvpMarkCellDirty(a1, *(unsigned int *)(v53 + 40)) )
    {
      SetFailureLocation(v12, 1, 15, v13, 32);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v66);
      return v13;
    }
    --*(_DWORD *)(v53 + 36);
    v10 = --v73;
    memmove(v16, (const void *)(v72 + 4LL * (v11 + 1)), 4LL * (v73 - v11));
    v54 = *(_QWORD *)(a1 + 64);
    v13 = 0;
    v63 = 0;
    *(_DWORD *)(v54 + 4088) |= 4u;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v66);
LABEL_125:
    if ( v11 >= v10 )
      return v13;
    a2 = v71;
    a3 = v72;
  }
  RtlClearBits(BitMapHeader, (unsigned int)v15 >> 3, 1u);
LABEL_12:
  v18 = 632LL * v17;
  if ( (unsigned int)v15 + (v17 << 31) >= *(_DWORD *)(v18 + a1 + 1400) )
    goto LABEL_27;
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + a1 + 1408) + 8 * ((v15 >> 21) & 0x3FF));
  v20 = (struct _EX_RUNDOWN_REF *)(v19 + 40 * ((v15 >> 12) & 0x1FF));
  if ( !v20 || HvpMapEntryIsDiscardable(v19 + 40 * ((v15 >> 12) & 0x1FF)) )
    goto LABEL_27;
  v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(a1 + 8))(a1, (unsigned int)v15, v67);
  if ( v21 )
  {
    v23 = (_DWORD *)(v21 - 4);
    if ( v21 != 4 )
    {
      BinAddress = HvpMapEntryGetBinAddress(v22, v20, &v70);
      v25 = (unsigned int)*v23;
      v26 = (_DWORD)v23 - BinAddress;
      v27 = -*v23;
      v29 = 0;
      if ( (int)v25 < 0 )
      {
        v25 = v27 - 8;
        if ( (unsigned int)v25 <= 0xFFFF8 )
        {
          v28 = *(unsigned int *)(BinAddress + 8);
          v25 = v28 - 32;
          if ( v27 <= (unsigned __int64)(v28 - 32) && v26 - *v23 <= (unsigned int)v28 && v26 >= 0x20 )
            v29 = 1;
        }
      }
      if ( BinAddress )
        HvpMapEntryReleaseBinAddress(v25, v20, &v70);
      HvpReleaseHCell(a1);
      if ( !v29 )
        goto LABEL_27;
    }
  }
LABEL_28:
  v30 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, (unsigned int)v15, v59);
  v31 = v30;
  if ( !v30 )
  {
    *(_DWORD *)(v12 + 280) = v11;
    v13 = 5099;
    *(_DWORD *)(v12 + 284) = v15;
    SetFailureLocation(v12, 0, 15, 5099, 112);
    return v13;
  }
  v32 = -4 - *((_DWORD *)v30 - 1);
  if ( v32 < 0x14 || *v30 != 27510 )
  {
    v13 = 5030;
    SetFailureLocation(v12, 1, 15, 5030, 128);
    goto LABEL_114;
  }
  v33 = (unsigned __int16)v30[1];
  if ( v33 + 20 > v32 )
  {
    v13 = 5040;
    SetFailureLocation(v12, 1, 15, 5040, 144);
    goto LABEL_114;
  }
  v34 = v30[8];
  if ( (v34 & 1) != 0 )
  {
    if ( (unsigned __int16)v33 > 0x3FFFu )
    {
      v13 = 5041;
      SetFailureLocation(v12, 1, 15, 5041, 146);
LABEL_114:
      *(_DWORD *)(v12 + 280) = v11;
      *(_DWORD *)(v12 + 284) = v15;
      *(_QWORD *)(v12 + 288) = v31;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v59);
      v16 = (int *)v60;
      goto LABEL_118;
    }
  }
  else
  {
    if ( (v33 & 1) != 0 )
    {
      v13 = 5043;
      SetFailureLocation(v12, 1, 15, 5043, 148);
      goto LABEL_114;
    }
    if ( (unsigned __int16)v33 > 0x7FFFu )
    {
      v13 = 5044;
      SetFailureLocation(v12, 1, 15, 5044, 150);
      goto LABEL_114;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) & 2) == 0 && (v34 & 2) != 0 )
  {
    v13 = 5042;
    SetFailureLocation(v12, 1, 15, 5042, 152);
    v35 = (a9 & 0x20000) == 0;
    *(_DWORD *)(v12 + 280) = v11;
    *(_DWORD *)(v12 + 284) = v15;
    *(_QWORD *)(v12 + 288) = v31;
    if ( !v35 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(v12, 1, 15, 5042, 156);
      goto LABEL_129;
    }
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, (unsigned int)v15) )
    {
      SetFailureLocation(v12, 1, 15, 5042, 154);
LABEL_129:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v59);
      return v13;
    }
    v63 = 0;
    v31[8] &= ~2u;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
  }
  v36 = v71;
  if ( v71 )
  {
    v37 = v31[8];
    if ( (v37 & 1) != 0 )
    {
      v38 = CmpCompareCompressedName(&CmSymbolicLinkValueName, v31 + 10, (unsigned __int16)v31[1], 0LL, v56, v57);
    }
    else
    {
      v69 = v31 + 10;
      v68[0] = v31[1];
      v68[1] = v68[0];
      v38 = CmpCompareUnicodeString(&CmSymbolicLinkValueName, v68, 0LL);
    }
    if ( v38 )
    {
      v13 = 5045;
      SetFailureLocation(v12, 0, 15, 5045, 160);
      goto LABEL_133;
    }
    if ( *((_DWORD *)v31 + 3) != 6 && (v37 & 2) == 0 )
    {
      v13 = 5046;
      SetFailureLocation(v12, 0, 15, 5046, 176);
      goto LABEL_133;
    }
  }
  v39 = v31[8];
  v40 = v31[1];
  if ( (v39 & 1) != 0 )
    v41 = (unsigned __int16)(2 * v40);
  else
    v41 = v40;
  if ( *a7 < v41 )
  {
    if ( (v39 & 1) != 0 )
      v40 *= 2;
    *a7 = v40;
  }
  v42 = *((_DWORD *)v31 + 1);
  if ( v36 )
  {
    if ( (v42 & 1) != 0 )
    {
      v13 = 5047;
      SetFailureLocation(v12, 0, 15, 5047, 192);
    }
    else
    {
      if ( v42 <= 0xFFFF )
        goto LABEL_61;
      v13 = 5048;
      SetFailureLocation(v12, 0, 15, 5048, 208);
    }
LABEL_133:
    *(_DWORD *)(v12 + 280) = v11;
    *(_DWORD *)(v12 + 284) = v15;
    *(_QWORD *)(v12 + 288) = v31;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v59);
    return v13;
  }
LABEL_61:
  if ( (v39 & 2) != 0 )
  {
    if ( v42 || *((_DWORD *)v31 + 3) )
    {
      v13 = 5049;
      SetFailureLocation(v12, 1, 15, 5049, 224);
      goto LABEL_114;
    }
  }
  else if ( v42 >= 0x80000000 )
  {
    if ( v42 + 0x80000000 <= 4 )
      goto LABEL_92;
    v13 = 5051;
    SetFailureLocation(v12, 1, 15, 5051, 416);
    goto LABEL_114;
  }
  v43 = *((_DWORD *)v31 + 2);
  v44 = 0LL;
  if ( !v42 )
  {
    if ( v43 == -1 )
      goto LABEL_72;
    v13 = 5050;
    SetFailureLocation(v12, 1, 15, 5050, 224);
    goto LABEL_69;
  }
  if ( !HvIsCellAllocated(a1, v43) )
  {
    v13 = 5060;
    SetFailureLocation(v12, 1, 15, 5060, 240);
LABEL_69:
    v11 = v58;
    goto LABEL_114;
  }
  v44 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v43, v61);
  if ( !v44 )
  {
    v13 = 5098;
    *(_DWORD *)(v12 + 280) = v58;
    *(_DWORD *)(v12 + 284) = v43;
    SetFailureLocation(v12, 0, 15, 5098, 256);
    goto LABEL_129;
  }
LABEL_72:
  if ( *(_DWORD *)(a1 + 196) < 4u || v42 <= 0x3FD8 )
  {
    if ( !v42 || v42 <= -4 - *(_DWORD *)(v44 - 4) )
      goto LABEL_89;
    v13 = 5052;
    SetFailureLocation(v12, 1, 15, 5052, 400);
    v11 = v58;
    *(_DWORD *)(v12 + 280) = v58;
    *(_DWORD *)(v12 + 284) = v15;
    *(_QWORD *)(v12 + 288) = v31;
    goto LABEL_103;
  }
  if ( (unsigned int)(-4 - *(_DWORD *)(v44 - 4)) < 8
    || *(_WORD *)v44 != 25188
    || !*(_WORD *)(v44 + 2)
    || (v45 = *(_DWORD *)(v44 + 4), v45 == -1) )
  {
    v11 = v58;
    v13 = 5097;
    *(_DWORD *)(v12 + 280) = v58;
    *(_DWORD *)(v12 + 284) = v43;
    SetFailureLocation(v12, 1, 15, 5097, 272);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v61);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v59);
    v16 = (int *)v60;
    goto LABEL_118;
  }
  if ( !HvIsCellAllocated(a1, v45) )
  {
    v13 = 5096;
    SetFailureLocation(v12, 1, 15, 5096, 288);
    *(_DWORD *)(v12 + 280) = v58;
    *(_DWORD *)(v12 + 284) = *(_DWORD *)(v44 + 4);
    *(_QWORD *)(v12 + 288) = v44;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v61);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v59);
    v11 = v58;
    v16 = (int *)v60;
    goto LABEL_118;
  }
  v46 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, *(unsigned int *)(v44 + 4), v62);
  v47 = v46;
  if ( !v46 )
  {
    *(_DWORD *)(v12 + 280) = v58;
    v13 = 5095;
    *(_DWORD *)(v12 + 284) = *(_DWORD *)(v44 + 4);
    SetFailureLocation(v12, 0, 15, 5095, 304);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v61);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v59);
    return v13;
  }
  v48 = 4LL * *(unsigned __int16 *)(v44 + 2);
  if ( v48 < 4 || v48 > (unsigned int)(-4 - *(_DWORD *)(v46 - 4)) )
  {
    v13 = 5100;
    SetFailureLocation(v12, 1, 15, 5100, 320);
    goto LABEL_102;
  }
  if ( *(unsigned __int16 *)(v44 + 2) != (v42 + 16343) / 0x3FD8 )
  {
    v13 = 5101;
    SetFailureLocation(v12, 1, 15, 5101, 336);
LABEL_102:
    v11 = v58;
    *(_DWORD *)(v12 + 284) = v64;
    *(_DWORD *)(v12 + 280) = v58;
    *(_QWORD *)(v12 + 288) = v31;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v62);
LABEL_103:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v61);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v59);
    v16 = (int *)v60;
    goto LABEL_118;
  }
  v49 = 0LL;
  if ( !*(_WORD *)(v44 + 2) )
  {
LABEL_88:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v62);
LABEL_89:
    if ( v44 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v61);
    v11 = v58;
LABEL_92:
    v51 = *((_DWORD *)v31 + 1);
    if ( v51 >= 0x80000000 )
      v51 += 0x80000000;
    if ( *a8 < v51 )
      *a8 = v51;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v59);
    v13 = v63;
    ++v11;
    v10 = v73;
    v58 = v11;
    goto LABEL_125;
  }
  while ( 1 )
  {
    if ( !HvIsCellAllocated(a1, *(_DWORD *)(v47 + 4 * v49)) )
    {
      v13 = 5094;
      SetFailureLocation(v12, 1, 15, 5094, 352);
      *(_DWORD *)(v12 + 280) = v49;
      *(_DWORD *)(v12 + 284) = *(_DWORD *)(v47 + 4 * v49);
      *(_QWORD *)(v12 + 288) = v44;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v62);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v61);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v59);
      v11 = v58;
      v16 = (int *)v60;
      goto LABEL_118;
    }
    v50 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, *(unsigned int *)(v47 + 4 * v49), v65);
    if ( !v50 )
      break;
    if ( (unsigned int)(-4 - *(_DWORD *)(v50 - 4)) < 0x3FD8 )
    {
      v13 = 5036;
      SetFailureLocation(v12, 1, 15, 5036, 384);
      *(_DWORD *)(v12 + 280) = v49;
      *(_DWORD *)(v12 + 284) = *(_DWORD *)(v47 + 4 * v49);
      *(_QWORD *)(v12 + 288) = v44;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v65);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v62);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v61);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v59);
      v11 = v58;
      v16 = (int *)v60;
      goto LABEL_118;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v65);
    v49 = (unsigned int)(v49 + 1);
    if ( (unsigned int)v49 >= *(unsigned __int16 *)(v44 + 2) )
      goto LABEL_88;
  }
  v13 = 5034;
  SetFailureLocation(v12, 0, 15, 5034, 368);
  *(_DWORD *)(v12 + 280) = v49;
  *(_DWORD *)(v12 + 284) = *(_DWORD *)(v47 + 4 * v49);
  *(_QWORD *)(v12 + 288) = v44;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v62);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v61);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v59);
  return v13;
}
