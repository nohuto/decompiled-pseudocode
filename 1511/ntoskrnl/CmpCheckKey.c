/*
 * XREFs of CmpCheckKey @ 0x140404270
 * Callers:
 *     CmpCheckRegistry2 @ 0x140405850 (CmpCheckRegistry2.c)
 * Callees:
 *     HvpMapEntryGetBinAddress @ 0x14003B3D0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryIsDiscardable @ 0x14003B420 (HvpMapEntryIsDiscardable.c)
 *     RtlClearBits @ 0x14003B430 (RtlClearBits.c)
 *     HvpReleaseHCell @ 0x140040C50 (HvpReleaseHCell.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14014FEAC (HvpMapEntryReleaseBlockAddress.c)
 *     SetFailureLocation @ 0x1401A9C98 (SetFailureLocation.c)
 *     RtlULongMult @ 0x1401A9F28 (RtlULongMult.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     HvIsCellAllocated @ 0x1403F94C0 (HvIsCellAllocated.c)
 *     CmpCheckLeaf @ 0x1403F9670 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x140403CF0 (CmpCheckValueList.c)
 */

__int64 __fastcall CmpCheckKey(
        ULONG_PTR BugCheckParameter2,
        int a2,
        unsigned int a3,
        int a4,
        char a5,
        PRTL_BITMAP BitMapHeader)
{
  __int64 v6; // r13
  int *v7; // r14
  unsigned int v9; // edi
  char v10; // r15
  unsigned __int64 v11; // r12
  unsigned int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rax
  struct _EX_RUNDOWN_REF *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 BinAddress; // rcx
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  __int64 v21; // rdx
  __int64 v23; // rax
  __int64 v24; // r12
  unsigned int v25; // ecx
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned int v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // r15d
  unsigned int v31; // esi
  int v32; // r14d
  __int64 v33; // rax
  unsigned int v34; // r15d
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // r14
  __int64 v38; // rsi
  unsigned int v39; // edx
  __int16 v40; // cx
  unsigned int v41; // r14d
  __int16 v42; // ax
  int v43; // eax
  __int16 v44; // r11
  int v45; // ecx
  unsigned int v46; // edx
  unsigned int v47; // r10d
  __int64 v48; // r9
  int v49; // esi
  __int64 v50; // r14
  int v51; // eax
  int v52; // r8d
  __int64 v53; // rax
  __int64 v54; // rcx
  __int16 v55; // ax
  ULONG v56; // r14d
  char v57; // r15
  unsigned int v58; // r9d
  unsigned int v59; // esi
  __int64 v60; // rax
  __int64 v61; // rax
  struct _EX_RUNDOWN_REF *v62; // r14
  unsigned int v63; // r9d
  __int64 v64; // rax
  __int64 v65; // rcx
  int *v66; // rsi
  unsigned __int64 v67; // rcx
  unsigned int v68; // r9d
  unsigned int v69; // r8d
  __int64 v70; // r10
  __int64 v71; // rsi
  unsigned int v72; // r15d
  unsigned int v73; // r14d
  int v74; // eax
  unsigned int v75; // r14d
  int v76; // esi
  int v77; // eax
  bool v78; // zf
  int v79; // r14d
  __int64 v80; // rax
  PRTL_BITMAP v81; // rsi
  __int16 *v82; // rax
  __int16 *v83; // r10
  unsigned int v84; // edx
  __int16 v85; // r8
  int v86; // ecx
  int v87; // r9d
  int v88; // eax
  __int16 v89; // cx
  int v90; // r15d
  unsigned int v91; // r14d
  __int16 *v92; // rdi
  _WORD *v93; // rax
  _WORD *v94; // rsi
  unsigned int v95; // edx
  __int16 v96; // r8
  int v97; // r9d
  __int16 v98; // cx
  int v99; // eax
  int v100; // ecx
  int v101; // esi
  int i; // [rsp+20h] [rbp-59h]
  int v103; // [rsp+20h] [rbp-59h]
  int v104; // [rsp+20h] [rbp-59h]
  int v105; // [rsp+20h] [rbp-59h]
  int v106; // [rsp+40h] [rbp-39h] BYREF
  int v107; // [rsp+44h] [rbp-35h] BYREF
  __int16 *v108; // [rsp+48h] [rbp-31h]
  int v109; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v110; // [rsp+54h] [rbp-25h] BYREF
  unsigned int v111; // [rsp+58h] [rbp-21h]
  int v112; // [rsp+5Ch] [rbp-1Dh] BYREF
  ULONG ulMultiplicand; // [rsp+60h] [rbp-19h]
  unsigned int v114; // [rsp+64h] [rbp-15h] BYREF
  int v115; // [rsp+68h] [rbp-11h] BYREF
  int v116; // [rsp+6Ch] [rbp-Dh]
  __int64 v117; // [rsp+70h] [rbp-9h] BYREF
  int v118; // [rsp+78h] [rbp-1h] BYREF
  ULONG pulResult[17]; // [rsp+7Ch] [rbp+3h] BYREF
  int v120; // [rsp+D0h] [rbp+57h] BYREF
  int v121; // [rsp+D8h] [rbp+5Fh]
  ULONG_PTR BugCheckParameter3; // [rsp+E0h] [rbp+67h]
  ULONG_PTR v123; // [rsp+E8h] [rbp+6Fh]

  LODWORD(v123) = a4;
  LODWORD(BugCheckParameter3) = a3;
  v121 = a2;
  v6 = *(_QWORD *)(BugCheckParameter2 + 56);
  LODWORD(v7) = 0;
  v109 = -1;
  v112 = -1;
  v118 = -1;
  v9 = 0;
  v106 = -1;
  v10 = 1;
  v115 = -1;
  v11 = a3;
  *(_DWORD *)(v6 + 240) = a3;
  *(_QWORD *)(v6 + 248) = 0LL;
  *(_QWORD *)(v6 + 256) = 0LL;
  *(_DWORD *)(v6 + 264) = -1;
  v114 = 0;
  v116 = 0;
  v117 = 0LL;
  pulResult[0] = 0;
  v108 = 0LL;
  v107 = -1;
  if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 1) != 0 )
    goto LABEL_23;
  v12 = a3 >> 31;
  if ( (a3 & 0x7FFFFFFF) >= *(_DWORD *)(632LL * (a3 >> 31) + BugCheckParameter2 + 1400) || (a3 & 7) != 0 )
    goto LABEL_22;
  if ( !BitMapHeader || (a3 & 0x80000000) != 0 )
    goto LABEL_8;
  if ( !_bittest64((const signed __int64 *)BitMapHeader->Buffer, a3 >> 3) )
  {
LABEL_22:
    SetFailureLocation(v6, 0, 14, 4010, 0);
    return 4010LL;
  }
  RtlClearBits(BitMapHeader, a3 >> 3, 1u);
LABEL_8:
  v13 = 632LL * v12;
  if ( (unsigned int)v11 + (v12 << 31) >= *(_DWORD *)(v13 + BugCheckParameter2 + 1400) )
    goto LABEL_22;
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + BugCheckParameter2 + 1408) + 8 * ((v11 >> 21) & 0x3FF));
  v15 = (struct _EX_RUNDOWN_REF *)(v14 + 40 * ((v11 >> 12) & 0x1FF));
  if ( !v15 || HvpMapEntryIsDiscardable(v14 + 40 * ((v11 >> 12) & 0x1FF)) )
    goto LABEL_22;
  v16 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          (unsigned int)v11,
          &v107);
  if ( v16 )
  {
    v7 = (int *)(v16 - 4);
    if ( v16 != 4 )
    {
      BinAddress = HvpMapEntryGetBinAddress(v17, v15, (BOOLEAN *)&v120, &v110);
      v19 = (_DWORD)v7 - BinAddress;
      v20 = -*v7;
      if ( *v7 >= 0
        || v20 - 8 > 0xFFFF8
        || (v21 = *(unsigned int *)(BinAddress + 8), BinAddress = v21 - 32, v20 > (unsigned __int64)(v21 - 32))
        || v19 - *v7 > (unsigned int)v21
        || v19 < 0x20 )
      {
        v10 = 0;
      }
      if ( (_BYTE)v120 )
        HvpMapEntryReleaseBlockAddress(BinAddress, v15);
      HvpReleaseHCell(BugCheckParameter2);
      LODWORD(v7) = 0;
      if ( !v10 )
        goto LABEL_22;
    }
  }
LABEL_23:
  v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          (unsigned int)v11,
          &v112);
  v24 = v23;
  if ( !v23 )
  {
    SetFailureLocation(v6, 0, 14, 4095, 16);
    return 4095LL;
  }
  *(_QWORD *)(v6 + 248) = v23;
  v25 = -4 - *(_DWORD *)(v23 - 4);
  if ( v25 - 76 <= 0x410 )
  {
    v26 = *(unsigned __int16 *)(v23 + 72);
    if ( !(_WORD)v26 || v26 + 76 > v25 )
    {
      v9 = 4030;
      SetFailureLocation(v6, 0, 14, 4030, 48);
      goto LABEL_314;
    }
    if ( (*(_BYTE *)(v23 + 2) & 0x20) != 0 )
    {
      if ( *(_BYTE *)(v23 + 76) )
      {
        v27 = (unsigned int)v7;
        while ( *(_BYTE *)(v27 + v23 + 76) != 92 )
        {
          if ( ++v27 >= v26 )
            goto LABEL_34;
        }
        v9 = 4034;
        SetFailureLocation(v6, 0, 14, 4034, 1280);
      }
      else
      {
        v9 = 4031;
        SetFailureLocation(v6, 0, 14, 4031, 64);
      }
      goto LABEL_314;
    }
    if ( (v26 & 1) != 0 )
    {
      v9 = 4032;
      SetFailureLocation(v6, 0, 14, 4032, 80);
      goto LABEL_314;
    }
    if ( !*(_WORD *)(v23 + 76) )
    {
      v9 = 4033;
      SetFailureLocation(v6, 0, 14, 4033, 96);
      goto LABEL_314;
    }
    v28 = v26 >> 1;
    v29 = (unsigned int)v7;
    if ( v28 )
    {
      while ( *(_WORD *)(v23 + 2LL * v29 + 76) != 92 )
      {
        if ( ++v29 >= v28 )
          goto LABEL_34;
      }
      v9 = 4035;
      SetFailureLocation(v6, 0, 14, 4035, 1296);
      goto LABEL_314;
    }
LABEL_34:
    if ( *(_WORD *)v23 != 27502 )
    {
      v9 = 4040;
      if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(v6, 0, 14, 4040, 144);
        goto LABEL_314;
      }
      SetFailureLocation(v6, 1, 14, 4040, 112);
      if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0) )
      {
        SetFailureLocation(v6, 0, 14, 4040, 128);
        goto LABEL_314;
      }
      *(_WORD *)v24 = 27502;
      v9 = (unsigned int)v7;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    }
    v30 = *(unsigned __int16 *)(v24 + 74);
    v31 = *(_DWORD *)(v24 + 48);
    v32 = *(_DWORD *)(v24 + 44);
    ulMultiplicand = *(_DWORD *)(v24 + 36);
    v111 = *(_DWORD *)(v24 + 40);
    v110 = v30;
    if ( v30 )
    {
      if ( v31 == -1 )
      {
        if ( (v121 & 0x20000) == 0 )
        {
          HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0);
          *(_WORD *)(v24 + 74) = 0;
          v110 = 0;
        }
      }
      else
      {
        if ( HvIsCellAllocated(BugCheckParameter2, v31, (__int64)BitMapHeader) )
        {
          v33 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  v31,
                  &v115);
          if ( !v33 )
          {
            v9 = 4081;
            SetFailureLocation(v6, 0, 14, 4081, 208);
            goto LABEL_314;
          }
          if ( v30 <= -4 - *(_DWORD *)(v33 - 4) )
          {
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v115);
            goto LABEL_71;
          }
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v115);
          v9 = 4080;
          SetFailureLocation(v6, 1, 14, 4080, 224);
        }
        else
        {
          v9 = 4080;
        }
        if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(v6, 0, 14, 4080, 192);
          goto LABEL_314;
        }
        SetFailureLocation(v6, 1, 14, 4080, 160);
        if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0) )
        {
          SetFailureLocation(v6, 0, 14, 4080, 176);
          goto LABEL_314;
        }
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
        *(_DWORD *)(v24 + 48) = -1;
        *(_WORD *)(v24 + 74) = 0;
        v110 = 0;
        v9 = 0;
      }
    }
    else if ( v31 != -1 && (v121 & 0x20000) == 0 )
    {
      HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0);
      *(_DWORD *)(v24 + 48) = -1;
    }
LABEL_71:
    v34 = v123;
    if ( v32 == -1 )
    {
      v9 = 4130;
      goto LABEL_79;
    }
    if ( (_DWORD)v123 == -1 )
    {
      v42 = *(_WORD *)(v24 + 2);
      if ( (v42 & 0x50) != 0 )
      {
        v9 = 4048;
        SetFailureLocation(v6, 0, 14, 4048, 432);
      }
      else
      {
        if ( (v42 & 2) == 0 )
          goto LABEL_119;
        v9 = 4049;
        if ( CmpSelfHeal || (CmpBootType & 6) != 0 )
        {
          SetFailureLocation(v6, 1, 14, 4049, 448);
          if ( HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0) )
          {
            *(_WORD *)(v24 + 2) &= ~2u;
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
            goto LABEL_118;
          }
          SetFailureLocation(v6, 0, 14, 4049, 464);
        }
        else
        {
          SetFailureLocation(v6, 0, 14, 4049, 480);
        }
      }
      goto LABEL_309;
    }
    if ( !CmpSelfHeal && (CmpBootType & 6) == 0 || !a5 )
      goto LABEL_87;
    v9 = 4090;
    for ( i = 240; ; i = 496 )
    {
      SetFailureLocation(v6, 1, 14, v9, i);
LABEL_79:
      if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(v6, 0, 14, v9, 304);
        goto LABEL_309;
      }
      v120 = -1;
      v107 = -1;
      SetFailureLocation(v6, 1, 14, v9, 256);
      if ( v34 == -1 )
        goto LABEL_308;
      v35 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v34,
              &v120);
      v36 = v35;
      if ( !v35 )
        goto LABEL_308;
      v37 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              *(unsigned int *)(v35 + 44),
              &v107);
      if ( !v37 )
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v120);
LABEL_308:
        SetFailureLocation(v6, 0, 14, v9, 272);
        goto LABEL_309;
      }
      if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0)
        || !HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v36 + 44), 0) )
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v107);
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v120);
        SetFailureLocation(v6, 0, 14, v9, 288);
        goto LABEL_309;
      }
      *(_DWORD *)(v24 + 44) = *(_DWORD *)(v36 + 44);
      ++*(_DWORD *)(v37 + 12);
      v9 = 0;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v107);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v120);
LABEL_87:
      if ( *(_DWORD *)(v24 + 16) != v34 )
      {
        v9 = 4045;
        if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(v6, 0, 14, 4045, 352);
          goto LABEL_309;
        }
        SetFailureLocation(v6, 1, 14, 4045, 320);
        if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0) )
        {
          SetFailureLocation(v6, 0, 14, 4045, 336);
          goto LABEL_309;
        }
        *(_DWORD *)(v24 + 16) = v34;
        v9 = 0;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      }
      v38 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v34,
              &v118);
      if ( !v38 )
      {
        v9 = 4046;
        SetFailureLocation(v6, 0, 14, 4046, 368);
        goto LABEL_309;
      }
      if ( (v121 & 0x20000) == 0 )
      {
        if ( (*(_BYTE *)(v24 + 2) & 0x20) != 0 )
          v39 = (unsigned __int16)(2 * *(_WORD *)(v24 + 72));
        else
          v39 = *(unsigned __int16 *)(v24 + 72);
        if ( (unsigned __int16)*(_DWORD *)(v38 + 52) < v39 && HvpMarkCellDirty(BugCheckParameter2, v34, 0) )
        {
          if ( (*(_BYTE *)(v24 + 2) & 0x20) != 0 )
            v40 = 2 * *(_WORD *)(v24 + 72);
          else
            v40 = *(_WORD *)(v24 + 72);
          *(_WORD *)(v38 + 52) = v40;
        }
        v41 = v110;
        if ( *(_DWORD *)(v38 + 56) < v110 && HvpMarkCellDirty(BugCheckParameter2, v34, 0) )
          *(_DWORD *)(v38 + 56) = v41;
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v118);
      if ( (*(_BYTE *)(v24 + 2) & 0xE) != 0 )
      {
        v9 = 4047;
        if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(v6, 0, 14, 4047, 416);
          goto LABEL_309;
        }
        SetFailureLocation(v6, 1, 14, 4047, 384);
        if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0) )
        {
          SetFailureLocation(v6, 0, 14, 4047, 400);
          goto LABEL_309;
        }
        *(_WORD *)(v24 + 2) &= 0xFFF1u;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
LABEL_118:
        v9 = 0;
      }
LABEL_119:
      v43 = *(_DWORD *)(BugCheckParameter2 + 3040);
      v44 = 0;
      v45 = *(_DWORD *)(v24 + 44);
      if ( v43 )
        break;
LABEL_132:
      v9 = 4130;
    }
    v46 = *(_DWORD *)(BugCheckParameter2 + 3048);
    v47 = v43 - 1;
    v48 = 0LL;
    if ( (v46 & 0x80000000) != 0 || v46 > v47 )
      v46 = v47 >> 1;
    v49 = v45 & 0x7FFFFFFF;
    if ( v45 < 0 )
      v49 = -v49;
    v50 = *(_QWORD *)(BugCheckParameter2 + 3056);
    while ( 1 )
    {
      v51 = *(_DWORD *)(v50 + 16LL * v46) & 0x7FFFFFFF;
      if ( *(int *)(v50 + 16LL * v46) < 0 )
        v51 = -v51;
      v52 = v49 - v51;
      if ( v49 == v51 )
        break;
      if ( v44 )
      {
        if ( v44 == 1 )
        {
          if ( v52 < 0 || (_DWORD)v48 == v47 )
            goto LABEL_132;
          v44 = 2;
          v46 = v47;
        }
        else if ( v44 == 2 )
        {
          goto LABEL_132;
        }
      }
      else
      {
        if ( v52 >= 0 )
          v48 = v46;
        else
          v47 = v46;
        if ( v47 - (unsigned int)v48 > 1 )
        {
          v46 = v48 + ((v47 - (unsigned int)v48) >> 1);
        }
        else
        {
          v46 = v48;
          v44 = 1;
        }
      }
    }
    v53 = *(_QWORD *)(BugCheckParameter2 + 3056);
    *(_DWORD *)(BugCheckParameter2 + 3048) = v46;
    v54 = *(_QWORD *)(v53 + 16LL * v46 + 8);
    ++*(_DWORD *)(v54 + 28);
    v55 = *(_WORD *)(v24 + 2);
    if ( (v55 & 0x40) != 0 )
    {
      if ( (v55 & 0x1E) != 0 )
      {
        v9 = 4097;
        if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(v6, 0, 14, 4097, 656);
          goto LABEL_309;
        }
        SetFailureLocation(v6, 1, 14, 4097, 624);
        if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0) )
        {
          SetFailureLocation(v6, 0, 14, 4097, 640);
          goto LABEL_309;
        }
        *(_WORD *)(v24 + 2) &= 0xFFE1u;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
        v9 = 0;
      }
      if ( *(int *)(v24 + 36) >= 0 )
      {
        v9 = 4098;
        SetFailureLocation(v6, 0, 14, 4098, 672);
        goto LABEL_309;
      }
LABEL_203:
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v112);
      v79 = BugCheckParameter3;
      v80 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              (unsigned int)BugCheckParameter3,
              &v112);
      v24 = v80;
      if ( !v80 )
      {
        v9 = 4093;
        SetFailureLocation(v6, 0, 14, 4093, 688);
        goto LABEL_309;
      }
      *(_QWORD *)(v6 + 248) = v80;
      if ( v79 < 0 )
      {
        if ( *(_DWORD *)(v80 + 20) )
        {
          v9 = 4108;
          SetFailureLocation(v6, 0, 14, 4108, 704);
          goto LABEL_309;
        }
        goto LABEL_290;
      }
      if ( *(_DWORD *)(v80 + 20) )
      {
        v81 = BitMapHeader;
        if ( !HvIsCellAllocated(BugCheckParameter2, *(_DWORD *)(v80 + 28), (__int64)BitMapHeader) )
        {
          v9 = 4110;
          SetFailureLocation(v6, 1, 14, 4110, 720);
          goto LABEL_243;
        }
        v82 = (__int16 *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                           BugCheckParameter2,
                           *(unsigned int *)(v24 + 28),
                           &v106);
        v108 = v82;
        v83 = v82;
        if ( !v82 )
        {
          v9 = 4094;
          SetFailureLocation(v6, 0, 14, 4094, 736);
          goto LABEL_314;
        }
        v84 = -4 - *((_DWORD *)v82 - 1);
        if ( v84 < 8 )
          goto LABEL_283;
        v85 = *v82;
        v86 = 8;
        v87 = (unsigned __int16)v82[1];
        if ( ((*v82 - 26220) & 0xFDFF) != 0 )
          v86 = 4;
        if ( (unsigned __int64)(unsigned int)(v87 * v86) + 4 < 4 )
          goto LABEL_283;
        v88 = 8;
        if ( ((v85 - 26220) & 0xFDFF) != 0 )
          v88 = 4;
        if ( (unsigned __int64)(unsigned int)(v87 * v88) + 4 > v84 )
        {
LABEL_283:
          v9 = 4095;
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v106);
          v108 = 0LL;
          if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
          {
            SetFailureLocation(v6, 0, 14, 4095, 768);
            goto LABEL_314;
          }
          v104 = 752;
          goto LABEL_234;
        }
        if ( !(_WORD)v87 )
        {
          v9 = 4105;
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v106);
          v108 = 0LL;
          if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
          {
            SetFailureLocation(v6, 0, 14, 4105, 800);
            goto LABEL_314;
          }
          v104 = 784;
          goto LABEL_234;
        }
        *(_QWORD *)(v6 + 256) = v83;
        v89 = *v83;
        if ( ((*v83 - 26220) & 0xFCFF) != 0 || v89 == 26476 )
        {
          if ( v89 != 26994 )
          {
            v9 = 4120;
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v106);
            v104 = 992;
            v108 = 0LL;
LABEL_234:
            SetFailureLocation(v6, 1, 14, v9, v104);
            goto LABEL_243;
          }
          v90 = 0;
          v91 = 0;
          if ( v83[1] )
          {
            while ( 1 )
            {
              v92 = &v83[2 * v91];
              *(_DWORD *)(v6 + 264) = v91;
              if ( !HvIsCellAllocated(BugCheckParameter2, *((_DWORD *)v92 + 1), (__int64)v81) )
                break;
              v93 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                               BugCheckParameter2,
                               *((unsigned int *)v92 + 1),
                               &v109);
              v94 = v93;
              if ( !v93 )
              {
                v9 = 4092;
                SetFailureLocation(v6, 0, 14, 4092, 864);
                goto LABEL_309;
              }
              v95 = -4 - *((_DWORD *)v93 - 1);
              if ( v95 < 8 )
                goto LABEL_272;
              v96 = *v93;
              v97 = (unsigned __int16)v93[1];
              v98 = *v93 - 26220;
              v99 = 8;
              if ( (v98 & 0xFDFF) != 0 )
                v99 = 4;
              if ( (unsigned __int64)(unsigned int)(v97 * v99) + 4 < 4 )
                goto LABEL_272;
              v100 = 8;
              if ( ((v96 - 26220) & 0xFDFF) != 0 )
                v100 = 4;
              if ( (unsigned __int64)(unsigned int)(v97 * v100) + 4 > v95 )
              {
LABEL_272:
                v9 = 4131;
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v109);
                if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
                {
                  SetFailureLocation(v6, 0, 14, 4131, 896);
                  goto LABEL_309;
                }
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v106);
                v105 = 880;
                goto LABEL_276;
              }
              if ( !(_WORD)v97 )
              {
                v9 = 4135;
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v109);
                if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
                {
                  SetFailureLocation(v6, 0, 14, 4135, 928);
                  goto LABEL_309;
                }
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v106);
                v105 = 912;
                goto LABEL_276;
              }
              if ( ((v96 - 26220) & 0xFCFF) != 0 || v96 == 26476 )
              {
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v109);
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v106);
                v9 = 4140;
                v105 = 944;
LABEL_276:
                v108 = 0LL;
                goto LABEL_277;
              }
              v9 = CmpCheckLeaf(BugCheckParameter2, v121, v94, *((_DWORD *)v92 + 1));
              if ( v9 )
              {
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v109);
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v106);
                v79 = BugCheckParameter3;
                v108 = 0LL;
                goto LABEL_243;
              }
              v90 += (unsigned __int16)v94[1];
              (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v109);
              v83 = v108;
              ++v91;
              v81 = BitMapHeader;
              if ( v91 >= (unsigned __int16)v108[1] )
                goto LABEL_262;
            }
            v9 = 4130;
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v106);
            v108 = 0LL;
            SetFailureLocation(v6, 1, 14, 4130, 848);
            v79 = BugCheckParameter3;
            goto LABEL_243;
          }
LABEL_262:
          if ( *(_DWORD *)(v24 + 20) != v90 )
          {
            v9 = 4150;
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v106);
            v108 = 0LL;
            if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
            {
              SetFailureLocation(v6, 0, 14, 4150, 976);
              goto LABEL_314;
            }
            v105 = 960;
LABEL_277:
            SetFailureLocation(v6, 1, 14, v9, v105);
            v79 = BugCheckParameter3;
            goto LABEL_243;
          }
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v106);
          v79 = BugCheckParameter3;
          v108 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)v83[1] != *(_DWORD *)(v24 + 20) )
          {
            v9 = 4120;
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v106);
            v108 = 0LL;
            if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
            {
              SetFailureLocation(v6, 0, 14, 4120, 832);
              goto LABEL_314;
            }
            v104 = 816;
            goto LABEL_234;
          }
          v9 = CmpCheckLeaf(BugCheckParameter2, v121, v83, *(_DWORD *)(v24 + 28));
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v106);
          v108 = 0LL;
          if ( v9 )
          {
LABEL_243:
            if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
            {
              SetFailureLocation(v6, 0, 14, v9, 1040);
              goto LABEL_309;
            }
            SetFailureLocation(v6, 1, 14, v9, 1008);
            if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)v79, 0) )
            {
              SetFailureLocation(v6, 0, 14, v9, 1024);
              goto LABEL_309;
            }
            *(_DWORD *)(v24 + 20) = 0;
            v9 = 0;
            *(_DWORD *)(v24 + 28) = -1;
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
          }
        }
      }
LABEL_290:
      if ( (v121 & 4) != 0 && *(_DWORD *)(BugCheckParameter2 + 196) >= 4u )
        v101 = -1163005939;
      else
        v101 = -1;
      if ( (v121 & 2) != 0
        || (v121 & 5) != 0 && (*(_DWORD *)(v24 + 24) || *(_DWORD *)(v24 + 32) != -1)
        || (v121 & 8) != 0
        && (*(_DWORD *)(v24 + 32) != -1 || *(_DWORD *)(v24 + 24) || *(_DWORD *)(BugCheckParameter2 + 196) < 4u) )
      {
        if ( HvpMarkCellDirty(BugCheckParameter2, (unsigned int)v79, 0) )
        {
          *(_DWORD *)(v24 + 24) = 0;
          *(_DWORD *)(v24 + 32) = v101;
        }
        else
        {
          v9 = 4121;
          SetFailureLocation(v6, 0, 14, 4121, 1056);
        }
      }
LABEL_309:
      if ( v108 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v106);
      goto LABEL_314;
    }
    v56 = ulMultiplicand;
    if ( !ulMultiplicand )
    {
      if ( v111 != -1 )
      {
        v9 = 4096;
        v103 = 608;
        goto LABEL_185;
      }
      v72 = BugCheckParameter3;
      v76 = v116;
      v75 = HIDWORD(v117);
      goto LABEL_193;
    }
    v57 = 1;
    v107 = -1;
    if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 1) != 0 )
    {
LABEL_175:
      v120 = -1;
      v71 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *, __int64))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v111,
              &v120,
              v48);
      if ( !v71 )
      {
        v9 = 4094;
        SetFailureLocation(v6, 0, 14, 4094, 528);
        goto LABEL_309;
      }
      if ( RtlULongMult(v56, 4u, pulResult) < 0 || pulResult[0] > -4 - *(_DWORD *)(v71 - 4) )
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v120);
        v9 = 4095;
        v103 = 544;
        goto LABEL_185;
      }
      v72 = BugCheckParameter3;
      v73 = CmpCheckValueList(
              BugCheckParameter2,
              (*(_BYTE *)(v24 + 2) & 0x10) != 0,
              v71,
              v56,
              BugCheckParameter3,
              BitMapHeader,
              (unsigned int *)&v117,
              &v114);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v120);
      if ( v73 )
      {
        v9 = v73;
        HIDWORD(v117) = v114;
        v74 = v117;
        *(_QWORD *)(v6 + 248) = v71;
        v116 = v74;
        goto LABEL_186;
      }
      v75 = v114;
      v76 = v117;
LABEL_193:
      if ( !*(_DWORD *)(v24 + 36) )
      {
        v76 = 0;
        v75 = 0;
      }
      v77 = v121;
      if ( *(_DWORD *)(v24 + 60) != v76 && (v121 & 0x20000) == 0 )
      {
        v78 = HvpMarkCellDirty(BugCheckParameter2, v72, 0) == 0;
        v77 = v121;
        if ( !v78 )
          *(_DWORD *)(v24 + 60) = v76;
      }
      if ( *(_DWORD *)(v24 + 64) != v75 && (v77 & 0x20000) == 0 && HvpMarkCellDirty(BugCheckParameter2, v72, 0) )
        *(_DWORD *)(v24 + 64) = v75;
      goto LABEL_203;
    }
    v58 = v111;
    v59 = v111 >> 31;
    if ( (v111 & 0x7FFFFFFF) < *(_DWORD *)(632LL * (v111 >> 31) + BugCheckParameter2 + 1400) && (v111 & 7) == 0 )
    {
      if ( !BitMapHeader || (v111 & 0x80000000) != 0 )
      {
LABEL_159:
        v60 = 632LL * v59;
        if ( v58 + (v59 << 31) >= *(_DWORD *)(v60 + BugCheckParameter2 + 1400) )
          goto LABEL_173;
        v61 = *(_QWORD *)(*(_QWORD *)(v60 + BugCheckParameter2 + 1408) + 8LL * ((v58 >> 21) & 0x3FF));
        v62 = (struct _EX_RUNDOWN_REF *)(v61 + 40LL * ((v58 >> 12) & 0x1FF));
        if ( !v62 || HvpMapEntryIsDiscardable(v61 + 40LL * ((v58 >> 12) & 0x1FF)) )
          goto LABEL_173;
        v64 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v63,
                &v107);
        if ( v64 )
        {
          v66 = (int *)(v64 - 4);
          if ( v64 != 4 )
          {
            v67 = HvpMapEntryGetBinAddress(v65, v62, (BOOLEAN *)&v120, &v110);
            v68 = (_DWORD)v66 - v67;
            v69 = -*v66;
            if ( *v66 >= 0
              || v69 - 8 > 0xFFFF8
              || (v70 = *(unsigned int *)(v67 + 8), v67 = v70 - 32, v69 > (unsigned __int64)(v70 - 32))
              || v68 - *v66 > (unsigned int)v70
              || v68 < 0x20 )
            {
              v57 = 0;
            }
            if ( (_BYTE)v120 )
              HvpMapEntryReleaseBlockAddress(v67, v62);
            HvpReleaseHCell(BugCheckParameter2);
            if ( !v57 )
              goto LABEL_173;
          }
        }
        v56 = ulMultiplicand;
        goto LABEL_175;
      }
      if ( _bittest64((const signed __int64 *)BitMapHeader->Buffer, v111 >> 3) )
      {
        RtlClearBits(BitMapHeader, v111 >> 3, 1u);
        v58 = v111;
        goto LABEL_159;
      }
    }
LABEL_173:
    v9 = 4100;
    v103 = 512;
LABEL_185:
    SetFailureLocation(v6, 1, 14, v9, v103);
    v72 = BugCheckParameter3;
LABEL_186:
    if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(v6, 0, 14, v9, 592);
      goto LABEL_309;
    }
    SetFailureLocation(v6, 1, 14, v9, 560);
    if ( !HvpMarkCellDirty(BugCheckParameter2, v72, 0) )
    {
      SetFailureLocation(v6, 0, 14, v9, 576);
      goto LABEL_309;
    }
    v76 = v116;
    v75 = HIDWORD(v117);
    v9 = 0;
    *(_DWORD *)(v24 + 36) = 0;
    *(_DWORD *)(v24 + 40) = -1;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    goto LABEL_193;
  }
  v9 = 4020;
  SetFailureLocation(v6, 0, 14, 4020, 32);
LABEL_314:
  if ( v24 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v112);
  return v9;
}
