/*
 * XREFs of CmpCheckKey @ 0x14043C4E0
 * Callers:
 *     CmpCheckRegistry2 @ 0x14043DE40 (CmpCheckRegistry2.c)
 * Callees:
 *     HvpReleaseHCell @ 0x14002CEB0 (HvpReleaseHCell.c)
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     HvpMapEntryReleaseBinAddress @ 0x14002CF80 (HvpMapEntryReleaseBinAddress.c)
 *     HvpMapEntryGetBinAddress @ 0x14002D1E0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryIsDiscardable @ 0x14002D250 (HvpMapEntryIsDiscardable.c)
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     HvpGetBinContextInitialize @ 0x14002D300 (HvpGetBinContextInitialize.c)
 *     RtlUIntAdd @ 0x1400C1B78 (RtlUIntAdd.c)
 *     SetFailureLocation @ 0x1401B29DC (SetFailureLocation.c)
 *     RtlULongMult @ 0x1401B4C40 (RtlULongMult.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x1401B64B8 (CmpKeySecurityIncrementReferenceCount.c)
 *     HvMarkCellDirty @ 0x1403FC340 (HvMarkCellDirty.c)
 *     HvIsCellAllocated @ 0x140438890 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x14043B810 (CmpCheckValueList.c)
 *     CmpCheckLeaf @ 0x14043EC90 (CmpCheckLeaf.c)
 */

__int64 __fastcall CmpCheckKey(
        ULONG_PTR a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        PRTL_BITMAP BitMapHeader)
{
  __int64 v6; // r15
  unsigned int v8; // esi
  int v9; // r12d
  unsigned int v10; // edi
  unsigned __int64 v11; // r14
  unsigned int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rax
  struct _EX_RUNDOWN_REF *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  int *v18; // r14
  __int64 v19; // rcx
  unsigned __int64 BinAddress; // r9
  unsigned int v21; // r8d
  unsigned int v22; // edx
  __int64 v23; // r10
  bool v24; // r14
  __int64 v26; // rax
  __int64 v27; // r13
  unsigned int v28; // ecx
  unsigned int v29; // edx
  __int64 v30; // rcx
  unsigned int v31; // eax
  unsigned int v32; // esi
  int v33; // r14d
  __int64 v34; // rcx
  unsigned int v35; // edx
  __int64 v36; // rax
  unsigned int v37; // esi
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // r14
  int v41; // eax
  __int64 v42; // rsi
  unsigned int v43; // edx
  __int16 v44; // cx
  __int16 v45; // ax
  __int16 v46; // ax
  int v47; // ecx
  int v48; // eax
  __int16 v49; // r11
  unsigned int v50; // r9d
  unsigned int v51; // r10d
  unsigned int v52; // edx
  int v53; // esi
  __int64 v54; // r14
  int v55; // eax
  int v56; // r8d
  int v57; // edx
  NTSTATUS v58; // r9d
  __int64 v59; // r10
  ULONG v60; // r14d
  unsigned int v61; // r9d
  unsigned int v62; // esi
  __int64 v63; // rax
  __int64 v64; // rax
  struct _EX_RUNDOWN_REF *v65; // r14
  unsigned int v66; // r9d
  __int64 v67; // rax
  __int64 v68; // rcx
  int *v69; // rsi
  __int64 v70; // rcx
  unsigned __int64 v71; // r10
  unsigned int v72; // r8d
  unsigned int v73; // edx
  __int64 v74; // r9
  bool v75; // si
  __int64 v76; // rsi
  unsigned int v77; // r14d
  int v78; // eax
  int v79; // esi
  unsigned int v80; // r14d
  bool v81; // zf
  __int64 v82; // rax
  __int16 *v83; // rax
  __int16 *v84; // r10
  unsigned int v85; // edx
  __int16 v86; // cx
  int v87; // eax
  int v88; // r8d
  int v89; // eax
  __int16 v90; // cx
  int v91; // esi
  int v92; // r12d
  int v93; // r14d
  __int16 *v94; // rdi
  _WORD *v95; // rax
  _WORD *v96; // rsi
  unsigned int v97; // edx
  __int16 v98; // r8
  int v99; // r9d
  __int16 v100; // cx
  int v101; // eax
  int v102; // eax
  ULONG_PTR v103; // [rsp+20h] [rbp-99h]
  int v104; // [rsp+20h] [rbp-99h]
  int v105; // [rsp+20h] [rbp-99h]
  int v106; // [rsp+50h] [rbp-69h]
  _DWORD v107[2]; // [rsp+58h] [rbp-61h] BYREF
  __int16 *v108; // [rsp+60h] [rbp-59h]
  _DWORD v109[2]; // [rsp+68h] [rbp-51h] BYREF
  ULONG ulMultiplicand; // [rsp+70h] [rbp-49h]
  unsigned int v111; // [rsp+74h] [rbp-45h]
  _DWORD v112[2]; // [rsp+78h] [rbp-41h] BYREF
  __int64 v113; // [rsp+80h] [rbp-39h] BYREF
  int v114; // [rsp+88h] [rbp-31h]
  _DWORD v115[2]; // [rsp+90h] [rbp-29h] BYREF
  _DWORD v116[2]; // [rsp+98h] [rbp-21h] BYREF
  _DWORD v117[2]; // [rsp+A0h] [rbp-19h] BYREF
  ULONG pulResult; // [rsp+A8h] [rbp-11h] BYREF
  _DWORD v119[2]; // [rsp+B0h] [rbp-9h] BYREF
  UINT puResult[18]; // [rsp+B8h] [rbp-1h] BYREF
  unsigned int v121; // [rsp+110h] [rbp+57h] BYREF
  int v122; // [rsp+114h] [rbp+5Bh]
  int v123; // [rsp+118h] [rbp+5Fh]
  int v124; // [rsp+120h] [rbp+67h]
  unsigned int v125; // [rsp+128h] [rbp+6Fh]

  v125 = a4;
  v124 = a3;
  v123 = a2;
  v6 = *(_QWORD *)(a1 + 56);
  v112[0] = -1;
  v112[1] = 0;
  v117[0] = -1;
  v117[1] = 0;
  v8 = a4;
  v115[0] = -1;
  v9 = a2;
  v115[1] = 0;
  v10 = 0;
  v107[0] = -1;
  v107[1] = 0;
  v119[0] = -1;
  v119[1] = 0;
  v11 = a3;
  *(_DWORD *)(v6 + 240) = a3;
  *(_QWORD *)(v6 + 248) = 0LL;
  *(_QWORD *)(v6 + 256) = 0LL;
  *(_DWORD *)(v6 + 264) = -1;
  v106 = 0;
  v113 = 0LL;
  v114 = 0;
  pulResult = 0;
  v108 = 0LL;
  HvpGetCellContextReinitialize((__int64)v109);
  HvpGetBinContextInitialize(&v121);
  if ( (*(_BYTE *)(a1 + 124) & 1) != 0 )
    goto LABEL_26;
  v12 = (unsigned int)v11 >> 31;
  if ( (v11 & 0x7FFFFFFF) >= *(_DWORD *)(632LL * ((unsigned int)v11 >> 31) + a1 + 1400) || (v11 & 7) != 0 )
    goto LABEL_23;
  if ( BitMapHeader && (v11 & 0x80000000) == 0LL )
  {
    if ( _bittest64((const signed __int64 *)BitMapHeader->Buffer, (unsigned int)v11 >> 3) )
    {
      RtlClearBits(BitMapHeader, (unsigned int)v11 >> 3, 1u);
      goto LABEL_8;
    }
LABEL_23:
    SetFailureLocation(v6, 0, 14, 4010, 0);
    return 4010LL;
  }
LABEL_8:
  v13 = 632LL * v12;
  if ( (unsigned int)v11 + (v12 << 31) >= *(_DWORD *)(v13 + a1 + 1400) )
    goto LABEL_23;
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + a1 + 1408) + 8 * ((v11 >> 21) & 0x3FF));
  v15 = (struct _EX_RUNDOWN_REF *)(v14 + 40 * ((v11 >> 12) & 0x1FF));
  if ( !v15 || HvpMapEntryIsDiscardable(v14 + 40 * ((v11 >> 12) & 0x1FF)) )
    goto LABEL_23;
  v16 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, (unsigned int)v11, v109);
  if ( v16 )
  {
    v18 = (int *)(v16 - 4);
    if ( v16 != 4 )
    {
      BinAddress = HvpMapEntryGetBinAddress(v17, v15, &v121);
      v21 = (_DWORD)v18 - BinAddress;
      v22 = -*v18;
      v24 = 0;
      if ( *v18 < 0 && v22 - 8 <= 0xFFFF8 )
      {
        v23 = *(unsigned int *)(BinAddress + 8);
        v19 = v23 - 32;
        if ( v22 <= (unsigned __int64)(v23 - 32) && v21 - *v18 <= (unsigned int)v23 && v21 >= 0x20 )
          v24 = 1;
      }
      if ( BinAddress )
        HvpMapEntryReleaseBinAddress(v19, v15, &v121);
      HvpReleaseHCell(a1);
      if ( !v24 )
        goto LABEL_23;
    }
    LODWORD(v11) = v124;
  }
  v8 = v125;
LABEL_26:
  v26 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, (unsigned int)v11, v117);
  v27 = v26;
  if ( !v26 )
  {
    SetFailureLocation(v6, 0, 14, 4095, 16);
    return 4095LL;
  }
  *(_QWORD *)(v6 + 248) = v26;
  v28 = -4 - *(_DWORD *)(v26 - 4);
  if ( v28 - 76 > 0x410 )
  {
    v10 = 4020;
    SetFailureLocation(v6, 0, 14, 4020, 32);
    goto LABEL_377;
  }
  v29 = *(unsigned __int16 *)(v26 + 72);
  if ( !(_WORD)v29 || v29 + 76 > v28 )
  {
    v10 = 4030;
    SetFailureLocation(v6, 0, 14, 4030, 48);
    goto LABEL_377;
  }
  if ( (*(_BYTE *)(v26 + 2) & 0x20) != 0 )
  {
    if ( (unsigned __int16)v29 > 0x100u )
    {
      v10 = 4036;
      SetFailureLocation(v6, 0, 14, 4036, 53);
      goto LABEL_377;
    }
    if ( !*(_BYTE *)(v26 + 76) )
    {
      v10 = 4031;
      SetFailureLocation(v6, 0, 14, 4031, 64);
      goto LABEL_377;
    }
    v30 = 0LL;
    do
    {
      if ( *(_BYTE *)(v30 + v26 + 76) == 92 )
      {
        v10 = 4034;
        SetFailureLocation(v6, 0, 14, 4034, 1280);
        goto LABEL_377;
      }
      v30 = (unsigned int)(v30 + 1);
    }
    while ( (unsigned int)v30 < v29 );
  }
  else
  {
    if ( (unsigned __int16)v29 > 0x200u )
    {
      v10 = 4037;
      SetFailureLocation(v6, 0, 14, 4037, 69);
      goto LABEL_377;
    }
    if ( (v29 & 1) != 0 )
    {
      v10 = 4032;
      SetFailureLocation(v6, 0, 14, 4032, 80);
      goto LABEL_377;
    }
    if ( !*(_WORD *)(v26 + 76) )
    {
      v10 = 4033;
      SetFailureLocation(v6, 0, 14, 4033, 96);
      goto LABEL_377;
    }
    v34 = 0LL;
    v35 = v29 >> 1;
    if ( v35 )
    {
      do
      {
        if ( *(_WORD *)(v26 + 2 * v34 + 76) == 92 )
        {
          v10 = 4035;
          SetFailureLocation(v6, 0, 14, 4035, 1296);
          goto LABEL_377;
        }
        v34 = (unsigned int)(v34 + 1);
      }
      while ( (unsigned int)v34 < v35 );
    }
  }
  if ( *(_WORD *)v26 != 27502 )
  {
    v10 = 4040;
    if ( (v9 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(v6, 0, 14, 4040, 144);
      goto LABEL_377;
    }
    SetFailureLocation(v6, 1, 14, 4040, 112);
    if ( !(unsigned __int8)HvMarkCellDirty(a1, (unsigned int)v11) )
    {
      SetFailureLocation(v6, 0, 14, 4040, 128);
      goto LABEL_377;
    }
    v10 = 0;
    *(_WORD *)v27 = 27502;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) & 2) == 0 && (*(_BYTE *)(v27 + 13) & 3) != 0 )
  {
    v10 = 4051;
    if ( (v9 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(v6, 0, 14, 4051, 150);
      goto LABEL_377;
    }
    SetFailureLocation(v6, 1, 14, 4051, 146);
    if ( !(unsigned __int8)HvMarkCellDirty(a1, (unsigned int)v11) )
    {
      SetFailureLocation(v6, 0, 14, 4051, 148);
      goto LABEL_377;
    }
    *(_BYTE *)(v27 + 13) &= 0xFCu;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    v10 = 0;
  }
  if ( v8 == -1 )
  {
    if ( (*(_BYTE *)(v27 + 13) & 3) != 0 )
    {
      v10 = 4050;
      if ( (v9 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(v6, 0, 14, 4050, 492);
        goto LABEL_377;
      }
      SetFailureLocation(v6, 1, 14, 4050, 484);
      if ( !(unsigned __int8)HvMarkCellDirty(a1, (unsigned int)v11) )
      {
        SetFailureLocation(v6, 0, 14, 4050, 488);
        goto LABEL_377;
      }
      *(_BYTE *)(v27 + 13) &= 0xFCu;
      goto LABEL_60;
    }
  }
  else
  {
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v8, v115) + 13) & 3) == 3
      && (((*(_BYTE *)(v27 + 13) & 3) - 1) & 0xFD) != 0 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v115);
      v10 = 4053;
      if ( (v9 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(v6, 0, 14, 4053, 156);
        goto LABEL_377;
      }
      SetFailureLocation(v6, 1, 14, 4053, 152);
      if ( !(unsigned __int8)HvMarkCellDirty(a1, (unsigned int)v11) )
      {
        SetFailureLocation(v6, 0, 14, 4053, 154);
        goto LABEL_377;
      }
      *(_BYTE *)(v27 + 13) |= 3u;
LABEL_60:
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
      v10 = 0;
      goto LABEL_61;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v115);
  }
LABEL_61:
  v31 = *(unsigned __int16 *)(v27 + 74);
  v32 = *(_DWORD *)(v27 + 48);
  v33 = *(_DWORD *)(v27 + 44);
  ulMultiplicand = *(_DWORD *)(v27 + 36);
  v111 = *(_DWORD *)(v27 + 40);
  v121 = v31;
  if ( !v31 )
  {
    if ( v32 == -1 || (v9 & 0x20000) != 0 )
      goto LABEL_112;
    HvMarkCellDirty(a1, (unsigned int)v124);
LABEL_111:
    *(_DWORD *)(v27 + 48) = -1;
    goto LABEL_112;
  }
  if ( v32 != -1 )
  {
    if ( (*(_BYTE *)(v27 + 13) & 3) == 1 )
    {
      v10 = 4054;
      SetFailureLocation(v6, 1, 14, 4054, 158);
    }
    else if ( HvIsCellAllocated(a1, v32) )
    {
      v36 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v32, v119);
      if ( !v36 )
      {
        v10 = 4081;
        SetFailureLocation(v6, 0, 14, 4081, 208);
        goto LABEL_377;
      }
      if ( v121 <= -4 - *(_DWORD *)(v36 - 4) )
      {
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v119);
        goto LABEL_112;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v119);
      v10 = 4080;
      SetFailureLocation(v6, 1, 14, 4080, 224);
    }
    else
    {
      v10 = 4080;
    }
    if ( (v9 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(v6, 0, 14, v10, 192);
      goto LABEL_377;
    }
    SetFailureLocation(v6, 1, 14, v10, 160);
    if ( !(unsigned __int8)HvMarkCellDirty(a1, (unsigned int)v124) )
    {
      SetFailureLocation(v6, 0, 14, v10, 176);
      goto LABEL_377;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    *(_WORD *)(v27 + 74) = 0;
    v10 = 0;
    v121 = 0;
    goto LABEL_111;
  }
  if ( (v9 & 0x20000) == 0 )
  {
    HvMarkCellDirty(a1, (unsigned int)v124);
    *(_WORD *)(v27 + 74) = 0;
    v121 = 0;
  }
LABEL_112:
  v37 = v125;
  if ( v33 == -1 )
  {
    v10 = 4130;
  }
  else
  {
    if ( v125 == -1 || (v9 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 || !a5 )
      goto LABEL_130;
    v10 = 4090;
    SetFailureLocation(v6, 1, 14, 4090, 240);
  }
  while ( 1 )
  {
    if ( (v9 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(v6, 0, 14, v10, 304);
      goto LABEL_373;
    }
    v116[0] = -1;
    v116[1] = 0;
    v109[1] = 0;
    v109[0] = -1;
    SetFailureLocation(v6, 1, 14, v10, 256);
    if ( v37 == -1 )
      goto LABEL_371;
    v38 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v37, v116);
    v39 = v38;
    if ( !v38 )
      goto LABEL_371;
    v40 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, *(unsigned int *)(v38 + 44), v109);
    if ( !v40 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v116);
LABEL_371:
      SetFailureLocation(v6, 0, 14, v10, 272);
      goto LABEL_373;
    }
    if ( !(unsigned __int8)HvMarkCellDirty(a1, (unsigned int)v124)
      || !(unsigned __int8)HvMarkCellDirty(a1, *(unsigned int *)(v39 + 44)) )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v109);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v116);
      SetFailureLocation(v6, 0, 14, v10, 288);
      goto LABEL_373;
    }
    v41 = CmpKeySecurityIncrementReferenceCount(v40, a1, *(_DWORD *)(v39 + 44), 1);
    if ( v41 < 0 )
    {
      SetFailureLocation(v6, 0, 14, v41, 292);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v109);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v116);
      goto LABEL_373;
    }
    *(_DWORD *)(v27 + 44) = *(_DWORD *)(v39 + 44);
    v10 = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v109);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v116);
    v37 = v125;
LABEL_130:
    if ( v37 == -1 )
    {
      v46 = *(_WORD *)(v27 + 2);
      if ( (v46 & 0x50) != 0 )
      {
        v10 = 4048;
        SetFailureLocation(v6, 0, 14, 4048, 432);
        goto LABEL_373;
      }
      if ( (v46 & 2) != 0 )
      {
        v10 = 4049;
        if ( (v9 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(v6, 0, 14, 4049, 480);
          goto LABEL_373;
        }
        SetFailureLocation(v6, 1, 14, 4049, 448);
        if ( !(unsigned __int8)HvMarkCellDirty(a1, (unsigned int)v124) )
        {
          SetFailureLocation(v6, 0, 14, 4049, 464);
          goto LABEL_373;
        }
        v45 = -3;
LABEL_164:
        *(_WORD *)(v27 + 2) &= v45;
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
        v10 = 0;
      }
    }
    else
    {
      if ( *(_DWORD *)(v27 + 16) != v37 )
      {
        v10 = 4045;
        if ( (v9 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(v6, 0, 14, 4045, 352);
          goto LABEL_373;
        }
        SetFailureLocation(v6, 1, 14, 4045, 320);
        if ( !(unsigned __int8)HvMarkCellDirty(a1, (unsigned int)v124) )
        {
          SetFailureLocation(v6, 0, 14, 4045, 336);
          goto LABEL_373;
        }
        *(_DWORD *)(v27 + 16) = v37;
        v10 = 0;
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
      }
      v42 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v37, v115);
      if ( !v42 )
      {
        v10 = 4046;
        SetFailureLocation(v6, 0, 14, 4046, 368);
        goto LABEL_373;
      }
      if ( (v9 & 0x20000) == 0 )
      {
        if ( (*(_BYTE *)(v27 + 2) & 0x20) != 0 )
          v43 = (unsigned __int16)(2 * *(_WORD *)(v27 + 72));
        else
          v43 = *(unsigned __int16 *)(v27 + 72);
        if ( (unsigned __int16)*(_DWORD *)(v42 + 52) < v43 && (unsigned __int8)HvMarkCellDirty(a1, v125) )
        {
          if ( (*(_BYTE *)(v27 + 2) & 0x20) != 0 )
            v44 = 2 * *(_WORD *)(v27 + 72);
          else
            v44 = *(_WORD *)(v27 + 72);
          *(_WORD *)(v42 + 52) = v44;
        }
        if ( *(_DWORD *)(v42 + 56) < v121 && (unsigned __int8)HvMarkCellDirty(a1, v125) )
          *(_DWORD *)(v42 + 56) = v121;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v115);
      if ( (*(_BYTE *)(v27 + 2) & 0xE) != 0 )
      {
        v10 = 4047;
        if ( (v9 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(v6, 0, 14, 4047, 416);
          goto LABEL_373;
        }
        SetFailureLocation(v6, 1, 14, 4047, 384);
        if ( !(unsigned __int8)HvMarkCellDirty(a1, (unsigned int)v124) )
        {
          SetFailureLocation(v6, 0, 14, 4047, 400);
          goto LABEL_373;
        }
        v45 = -15;
        goto LABEL_164;
      }
    }
    v47 = *(_DWORD *)(v27 + 44);
    if ( v47 == -1 )
      goto LABEL_202;
    v48 = *(_DWORD *)(a1 + 3040);
    v49 = 0;
    if ( v48 )
    {
      v50 = 0;
      v51 = v48 - 1;
      v52 = *(_DWORD *)(a1 + 3048);
      if ( (v52 & 0x80000000) != 0 || v52 > v51 )
        v52 = v51 >> 1;
      v53 = v47 & 0x7FFFFFFF;
      if ( v47 < 0 )
        v53 = -v53;
      v54 = *(_QWORD *)(a1 + 3056);
      while ( 1 )
      {
        v55 = *(_DWORD *)(v54 + 16LL * v52) & 0x7FFFFFFF;
        if ( *(int *)(v54 + 16LL * v52) < 0 )
          v55 = -v55;
        v56 = v53 - v55;
        if ( v53 == v55 )
          break;
        if ( v49 )
        {
          if ( v49 == 1 )
          {
            if ( v56 < 0 || v50 == v51 )
              goto LABEL_192;
            v49 = 2;
            v52 = v51;
          }
          else if ( v49 == 2 )
          {
            goto LABEL_192;
          }
        }
        else
        {
          if ( v56 >= 0 )
            v50 = v52;
          else
            v51 = v52;
          if ( v51 - v50 > 1 )
          {
            v52 = v50 + ((v51 - v50) >> 1);
          }
          else
          {
            v52 = v50;
            v49 = 1;
          }
        }
      }
      *(_DWORD *)(a1 + 3048) = v52;
      v58 = RtlUIntAdd(*(_DWORD *)(*(_QWORD *)(v54 + 16LL * v52 + 8) + 28LL), 1u, puResult);
      if ( v58 >= 0 )
        *(_DWORD *)(v59 + 28) = puResult[0];
      if ( v58 != -1073741275 )
        break;
    }
LABEL_192:
    v10 = 4130;
    SetFailureLocation(v6, 1, 14, 4130, 496);
    v37 = v125;
  }
  if ( v58 < 0 )
  {
    v10 = 4130;
    SetFailureLocation(v6, v57, 14, v58, 500);
    goto LABEL_373;
  }
LABEL_202:
  if ( (*(_BYTE *)(v27 + 2) & 0x40) != 0 )
  {
    v10 = 4097;
    if ( (v9 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(v6, 0, 14, 4097, 648);
      goto LABEL_373;
    }
    SetFailureLocation(v6, 1, 14, 4097, 624);
    v80 = v124;
    if ( !(unsigned __int8)HvMarkCellDirty(a1, (unsigned int)v124) )
    {
      SetFailureLocation(v6, 0, 14, 4097, 652);
      goto LABEL_373;
    }
    *(_DWORD *)(v27 + 40) = -1;
    *(_DWORD *)(v27 + 36) = 0;
    *(_WORD *)(v27 + 2) &= ~0x40u;
    v10 = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    goto LABEL_264;
  }
  v60 = ulMultiplicand;
  if ( !ulMultiplicand )
  {
    if ( v111 != -1 )
    {
      v10 = 4096;
      SetFailureLocation(v6, 1, 14, 4096, 608);
      goto LABEL_240;
    }
    v79 = v114;
    v78 = 0;
LABEL_248:
    v80 = v124;
    goto LABEL_249;
  }
  if ( (*(_BYTE *)(v27 + 13) & 3) != 1 )
  {
    HvpGetCellContextReinitialize((__int64)v109);
    HvpGetBinContextInitialize(&v121);
    if ( (*(_BYTE *)(a1 + 124) & 1) != 0 )
    {
LABEL_230:
      v121 = -1;
      v122 = 0;
      v76 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, unsigned int *))(a1 + 8))(a1, v111, &v121);
      if ( !v76 )
      {
        v10 = 4094;
        SetFailureLocation(v6, 0, 14, 4094, 528);
        goto LABEL_373;
      }
      if ( RtlULongMult(v60, 4u, &pulResult) < 0 || pulResult > -4 - *(_DWORD *)(v76 - 4) )
      {
        (*(void (__fastcall **)(ULONG_PTR, unsigned int *))(a1 + 16))(a1, &v121);
        v10 = 4095;
        SetFailureLocation(v6, 1, 14, 4095, 544);
        goto LABEL_240;
      }
      LODWORD(v103) = v124;
      v77 = CmpCheckValueList(
              a1,
              (*(_BYTE *)(v27 + 2) & 0x10) != 0,
              v76,
              v60,
              v103,
              BitMapHeader,
              (unsigned int *)&v113 + 1,
              (unsigned int *)&v113,
              v9);
      (*(void (__fastcall **)(ULONG_PTR, unsigned int *))(a1 + 16))(a1, &v121);
      v78 = v113;
      v106 = v113;
      if ( v77 )
      {
        v10 = v77;
        v114 = HIDWORD(v113);
        *(_QWORD *)(v6 + 248) = v76;
        goto LABEL_240;
      }
      v79 = HIDWORD(v113);
      goto LABEL_248;
    }
    v61 = v111;
    v62 = v111 >> 31;
    if ( (v111 & 0x7FFFFFFF) < *(_DWORD *)(632LL * (v111 >> 31) + a1 + 1400) && (v111 & 7) == 0 )
    {
      if ( !BitMapHeader || (v111 & 0x80000000) != 0 )
      {
LABEL_213:
        v63 = 632LL * v62;
        if ( v61 + (v62 << 31) >= *(_DWORD *)(v63 + a1 + 1400) )
          goto LABEL_228;
        v64 = *(_QWORD *)(*(_QWORD *)(v63 + a1 + 1408) + 8LL * ((v61 >> 21) & 0x3FF));
        v65 = (struct _EX_RUNDOWN_REF *)(v64 + 40LL * ((v61 >> 12) & 0x1FF));
        if ( !v65 || HvpMapEntryIsDiscardable(v64 + 40LL * ((v61 >> 12) & 0x1FF)) )
          goto LABEL_228;
        v67 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v66, v109);
        if ( v67 )
        {
          v69 = (int *)(v67 - 4);
          if ( v67 != 4 )
          {
            v71 = HvpMapEntryGetBinAddress(v68, v65, &v121);
            v72 = (_DWORD)v69 - v71;
            v73 = -*v69;
            v75 = 0;
            if ( *v69 < 0 && v73 - 8 <= 0xFFFF8 )
            {
              v74 = *(unsigned int *)(v71 + 8);
              v70 = v74 - 32;
              if ( v73 <= (unsigned __int64)(v74 - 32) && v72 - *v69 <= (unsigned int)v74 && v72 >= 0x20 )
                v75 = 1;
            }
            if ( v71 )
              HvpMapEntryReleaseBinAddress(v70, v65, &v121);
            HvpReleaseHCell(a1);
            if ( !v75 )
              goto LABEL_228;
          }
        }
        v60 = ulMultiplicand;
        goto LABEL_230;
      }
      if ( _bittest64((const signed __int64 *)BitMapHeader->Buffer, v111 >> 3) )
      {
        RtlClearBits(BitMapHeader, v111 >> 3, 1u);
        v61 = v111;
        goto LABEL_213;
      }
    }
LABEL_228:
    v10 = 4100;
    SetFailureLocation(v6, 1, 14, 4100, 512);
    goto LABEL_240;
  }
  v10 = 4058;
  SetFailureLocation(v6, 1, 14, 4058, 504);
LABEL_240:
  if ( (v9 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
  {
    SetFailureLocation(v6, 0, 14, v10, 592);
    goto LABEL_373;
  }
  SetFailureLocation(v6, 1, 14, v10, 560);
  v80 = v124;
  if ( !(unsigned __int8)HvMarkCellDirty(a1, (unsigned int)v124) )
  {
    SetFailureLocation(v6, 0, 14, v10, 576);
    goto LABEL_373;
  }
  v79 = v114;
  *(_DWORD *)(v27 + 36) = 0;
  v10 = 0;
  *(_DWORD *)(v27 + 40) = -1;
  *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
  v78 = v106;
LABEL_249:
  if ( !*(_DWORD *)(v27 + 36) )
  {
    v79 = 0;
    v106 = 0;
    v78 = 0;
  }
  if ( *(_DWORD *)(v27 + 60) != v79 && (v9 & 0x20000) == 0 )
  {
    v81 = (unsigned __int8)HvMarkCellDirty(a1, v80) == 0;
    v78 = v106;
    if ( !v81 )
      *(_DWORD *)(v27 + 60) = v79;
  }
  if ( *(_DWORD *)(v27 + 64) != v78 && (v9 & 0x20000) == 0 && (unsigned __int8)HvMarkCellDirty(a1, v80) )
    *(_DWORD *)(v27 + 64) = v106;
LABEL_264:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v117);
  v82 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v80, v117);
  v27 = v82;
  if ( !v82 )
  {
    v10 = 4093;
    SetFailureLocation(v6, 0, 14, 4093, 688);
    goto LABEL_373;
  }
  *(_QWORD *)(v6 + 248) = v82;
  if ( (v80 & 0x80000000) != 0 )
  {
    if ( *(_DWORD *)(v82 + 20) )
    {
      v10 = 4108;
      SetFailureLocation(v6, 0, 14, 4108, 704);
      goto LABEL_373;
    }
    goto LABEL_298;
  }
  if ( !*(_DWORD *)(v82 + 20) )
    goto LABEL_298;
  if ( (*(_BYTE *)(v82 + 13) & 3) == 1 )
  {
    v10 = 4059;
    SetFailureLocation(v6, 1, 14, 4059, 712);
    goto LABEL_345;
  }
  if ( !HvIsCellAllocated(a1, *(_DWORD *)(v82 + 28)) )
  {
    v10 = 4110;
    SetFailureLocation(v6, 1, 14, 4110, 720);
    goto LABEL_345;
  }
  v83 = (__int16 *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(
                     a1,
                     *(unsigned int *)(v27 + 28),
                     v107);
  v108 = v83;
  v84 = v83;
  if ( !v83 )
  {
    v10 = 4094;
    SetFailureLocation(v6, 0, 14, 4094, 736);
    goto LABEL_377;
  }
  v85 = -4 - *((_DWORD *)v83 - 1);
  if ( v85 < 8 )
    goto LABEL_341;
  v86 = *v83;
  v81 = ((*v83 - 26220) & 0xFDFF) == 0;
  v87 = 8;
  if ( !v81 )
    v87 = 4;
  v88 = (unsigned __int16)v84[1];
  if ( (unsigned __int64)(unsigned int)(v88 * v87) + 4 < 4 )
    goto LABEL_341;
  v89 = 8;
  if ( ((v86 - 26220) & 0xFDFF) != 0 )
    v89 = 4;
  if ( (unsigned __int64)(unsigned int)(v88 * v89) + 4 > v85 )
  {
LABEL_341:
    v10 = 4095;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v107);
    v108 = 0LL;
    if ( (v9 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(v6, 0, 14, 4095, 768);
      goto LABEL_377;
    }
    SetFailureLocation(v6, 1, 14, 4095, 752);
    goto LABEL_345;
  }
  if ( !(_WORD)v88 )
  {
    v10 = 4105;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v107);
    v108 = 0LL;
    if ( (v9 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(v6, 0, 14, 4105, 800);
      goto LABEL_377;
    }
    SetFailureLocation(v6, 1, 14, 4105, 784);
    goto LABEL_345;
  }
  *(_QWORD *)(v6 + 256) = v84;
  v90 = *v84;
  if ( ((*v84 - 26220) & 0xFCFF) == 0 && v90 != 26476 )
  {
    if ( (unsigned __int16)v84[1] != *(_DWORD *)(v27 + 20) )
    {
      v10 = 4120;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v107);
      v108 = 0LL;
      if ( (v9 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(v6, 0, 14, 4120, 832);
        goto LABEL_377;
      }
      SetFailureLocation(v6, 1, 14, 4120, 816);
      goto LABEL_345;
    }
    v10 = CmpCheckLeaf(a1);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v107);
    v108 = 0LL;
    if ( v10 )
      goto LABEL_345;
LABEL_298:
    if ( (v9 & 4) != 0 && *(_DWORD *)(a1 + 196) >= 4u )
      v91 = -1163005939;
    else
      v91 = -1;
    if ( (v9 & 2) != 0
      || (v9 & 5) != 0 && (*(_DWORD *)(v27 + 24) || *(_DWORD *)(v27 + 32) != -1)
      || (v9 & 8) != 0 && (*(_DWORD *)(v27 + 32) != -1 || *(_DWORD *)(v27 + 24) || *(_DWORD *)(a1 + 196) < 4u) )
    {
      if ( (unsigned __int8)HvMarkCellDirty(a1, v80) )
      {
        *(_DWORD *)(v27 + 32) = v91;
        *(_DWORD *)(v27 + 24) = 0;
      }
      else
      {
        v10 = 4121;
        SetFailureLocation(v6, 0, 14, 4121, 1056);
      }
    }
    goto LABEL_373;
  }
  if ( v90 != 26994 )
  {
    v10 = 4120;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v107);
    v108 = 0LL;
    SetFailureLocation(v6, 1, 14, 4120, 992);
    goto LABEL_345;
  }
  v92 = 0;
  v93 = 0;
  if ( !v84[1] )
  {
LABEL_317:
    if ( *(_DWORD *)(v27 + 20) == v92 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v107);
      LOBYTE(v9) = v123;
      v80 = v124;
      v108 = 0LL;
      goto LABEL_298;
    }
    v10 = 4150;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v107);
    v9 = v123;
    v108 = 0LL;
    if ( (v123 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(v6, 0, 14, 4150, 976);
      goto LABEL_377;
    }
    SetFailureLocation(v6, 1, 14, 4150, 960);
    v80 = v124;
LABEL_345:
    if ( (v9 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(v6, 0, 14, v10, 1040);
      goto LABEL_373;
    }
    SetFailureLocation(v6, 1, 14, v10, 1008);
    if ( !(unsigned __int8)HvMarkCellDirty(a1, v80) )
    {
      SetFailureLocation(v6, 0, 14, v10, 1024);
      goto LABEL_373;
    }
    *(_DWORD *)(v27 + 20) = 0;
    v10 = 0;
    *(_DWORD *)(v27 + 28) = -1;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    goto LABEL_298;
  }
  while ( 2 )
  {
    v94 = &v84[2 * v93];
    *(_DWORD *)(v6 + 264) = v93;
    if ( !HvIsCellAllocated(a1, *((_DWORD *)v94 + 1)) )
    {
      v10 = 4130;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v107);
      v104 = 848;
      goto LABEL_337;
    }
    v95 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(
                     a1,
                     *((unsigned int *)v94 + 1),
                     v112);
    v96 = v95;
    if ( !v95 )
    {
      v10 = 4092;
      SetFailureLocation(v6, 0, 14, 4092, 864);
      goto LABEL_373;
    }
    v97 = -4 - *((_DWORD *)v95 - 1);
    if ( v97 >= 8 )
    {
      v98 = *v95;
      v99 = (unsigned __int16)v95[1];
      v100 = *v95 - 26220;
      v101 = 8;
      if ( (v100 & 0xFDFF) != 0 )
        v101 = 4;
      if ( (unsigned __int64)(unsigned int)(v99 * v101) + 4 >= 4 )
      {
        v102 = 8;
        if ( ((v98 - 26220) & 0xFDFF) != 0 )
          v102 = 4;
        if ( (unsigned __int64)(unsigned int)(v99 * v102) + 4 <= v97 )
        {
          if ( !(_WORD)v99 )
          {
            v10 = 4135;
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v112);
            v9 = v123;
            if ( (v123 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
            {
              SetFailureLocation(v6, 0, 14, 4135, 928);
              goto LABEL_373;
            }
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v107);
            v105 = 912;
            goto LABEL_333;
          }
          if ( ((v98 - 26220) & 0xFCFF) == 0 && v98 != 26476 )
          {
            v10 = CmpCheckLeaf(a1);
            if ( v10 )
            {
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v112);
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v107);
              v9 = v123;
              v80 = v124;
              v108 = 0LL;
              goto LABEL_345;
            }
            v92 += (unsigned __int16)v96[1];
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v112);
            v84 = v108;
            if ( ++v93 >= (unsigned int)(unsigned __int16)v108[1] )
              goto LABEL_317;
            continue;
          }
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v112);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v107);
          v10 = 4140;
          v104 = 944;
LABEL_337:
          v108 = 0LL;
          SetFailureLocation(v6, 1, 14, v10, v104);
          v9 = v123;
          v80 = v124;
          goto LABEL_345;
        }
      }
    }
    break;
  }
  v10 = 4131;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v112);
  v9 = v123;
  if ( (v123 & 0x20000) == 0 && (CmpSelfHeal || (CmpBootType & 6) != 0) )
  {
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v107);
    v105 = 880;
LABEL_333:
    v108 = 0LL;
    SetFailureLocation(v6, 1, 14, v10, v105);
    v80 = v124;
    goto LABEL_345;
  }
  SetFailureLocation(v6, 0, 14, 4131, 896);
LABEL_373:
  if ( v108 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v107);
LABEL_377:
  if ( v27 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v117);
  return v10;
}
