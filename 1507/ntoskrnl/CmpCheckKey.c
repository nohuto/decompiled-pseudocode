/*
 * XREFs of CmpCheckKey @ 0x1404C2C40
 * Callers:
 *     CmpCheckRegistry2 @ 0x1404AE1C0 (CmpCheckRegistry2.c)
 * Callees:
 *     SetFailureLocation @ 0x1401DE608 (SetFailureLocation.c)
 *     RtlULongMult @ 0x1401DFDCC (RtlULongMult.c)
 *     RtlULongAdd @ 0x1401E04A8 (RtlULongAdd.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x1401E0EEC (CmpKeySecurityIncrementReferenceCount.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvIsCellAllocated @ 0x1404C29A0 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1404C48A0 (CmpCheckValueList.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404CC7A0 (CmpFindSecurityCellCacheIndex.c)
 *     CmpCheckLeaf @ 0x1404CD0D0 (CmpCheckLeaf.c)
 */

__int64 __fastcall CmpCheckKey(
        ULONG_PTR BugCheckParameter2,
        int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        __int64 a6)
{
  __int64 v6; // rsi
  unsigned int v11; // edi
  __int64 v12; // r8
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // edx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // r15d
  int v23; // r12d
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // r12
  int v28; // eax
  __int64 v29; // r15
  unsigned int v30; // edx
  __int16 v31; // cx
  unsigned int v32; // r12d
  __int16 v33; // ax
  int v34; // edx
  NTSTATUS v35; // r9d
  __int64 v36; // r10
  ULONG v37; // r12d
  __int64 v38; // r13
  unsigned int v39; // r15d
  __int64 v40; // r15
  unsigned int v41; // r13d
  unsigned int v42; // r12d
  int v43; // r12d
  int v44; // r15d
  int v45; // eax
  bool v46; // zf
  __int64 v47; // rax
  __int64 v48; // r15
  _WORD *v49; // rax
  _WORD *v50; // r10
  unsigned int v51; // edx
  int v52; // ecx
  int v53; // r9d
  int v54; // ecx
  __int16 v55; // cx
  int v56; // r13d
  unsigned int v57; // r12d
  _WORD *v58; // rdi
  _WORD *v59; // rax
  _WORD *v60; // r15
  unsigned int v61; // r8d
  __int16 v62; // r10
  int v63; // r9d
  int v64; // edx
  int v65; // ecx
  int v66; // r15d
  ULONG_PTR v67; // [rsp+20h] [rbp-59h]
  int v68; // [rsp+20h] [rbp-59h]
  __int64 v69; // [rsp+28h] [rbp-51h]
  int v70; // [rsp+40h] [rbp-39h] BYREF
  _WORD *v71; // [rsp+48h] [rbp-31h]
  int v72; // [rsp+50h] [rbp-29h] BYREF
  int v73; // [rsp+54h] [rbp-25h] BYREF
  unsigned int v74; // [rsp+58h] [rbp-21h]
  int v75; // [rsp+5Ch] [rbp-1Dh] BYREF
  int v76; // [rsp+60h] [rbp-19h]
  int v77; // [rsp+64h] [rbp-15h] BYREF
  int v78; // [rsp+68h] [rbp-11h]
  __int64 v79; // [rsp+6Ch] [rbp-Dh] BYREF
  ULONG v80; // [rsp+74h] [rbp-5h] BYREF
  int v81; // [rsp+78h] [rbp-1h] BYREF
  unsigned int v82; // [rsp+7Ch] [rbp+3h]
  ULONG pulResult; // [rsp+80h] [rbp+7h] BYREF
  ULONG ulMultiplicand; // [rsp+84h] [rbp+Bh]
  unsigned int v85[14]; // [rsp+88h] [rbp+Fh] BYREF
  int v86; // [rsp+D0h] [rbp+57h] BYREF
  int v87; // [rsp+D8h] [rbp+5Fh]
  ULONG_PTR BugCheckParameter3; // [rsp+E0h] [rbp+67h]

  LODWORD(BugCheckParameter3) = a3;
  v87 = a2;
  v6 = *(_QWORD *)(BugCheckParameter2 + 56);
  v72 = -1;
  v75 = -1;
  v81 = -1;
  v86 = -1;
  v77 = -1;
  *(_DWORD *)(v6 + 240) = a3;
  v11 = 0;
  v12 = a6;
  v78 = 0;
  v79 = 0LL;
  v76 = 0;
  v80 = 0;
  v71 = 0LL;
  *(_QWORD *)(v6 + 248) = 0LL;
  *(_QWORD *)(v6 + 256) = 0LL;
  *(_DWORD *)(v6 + 264) = -1;
  if ( !HvIsCellAllocated(BugCheckParameter2, a3, v12) )
  {
    SetFailureLocation(v6, 0, 14, 4010, 0);
    return 4010LL;
  }
  v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, &v75);
  v15 = v14;
  if ( !v14 )
  {
    SetFailureLocation(v6, 0, 14, 4095, 16);
    return 4095LL;
  }
  *(_QWORD *)(v6 + 248) = v14;
  v16 = -4 - *(_DWORD *)(v14 - 4);
  if ( v16 - 76 > 0x410 )
  {
    v11 = 4020;
    SetFailureLocation(v6, 0, 14, 4020, 32);
    goto LABEL_258;
  }
  v17 = *(unsigned __int16 *)(v14 + 72);
  if ( !(_WORD)v17 || v17 + 76 > v16 )
  {
    v11 = 4030;
    SetFailureLocation(v6, 0, 14, 4030, 48);
    goto LABEL_258;
  }
  if ( (*(_BYTE *)(v14 + 2) & 0x20) != 0 )
  {
    if ( (unsigned __int16)v17 <= 0x100u )
    {
      if ( *(_BYTE *)(v14 + 76) )
      {
        v18 = 0;
        while ( *(_BYTE *)(v18 + v14 + 76) != 92 )
        {
          if ( ++v18 >= v17 )
            goto LABEL_16;
        }
        v11 = 4034;
        SetFailureLocation(v6, 0, 14, 4034, 1280);
      }
      else
      {
        v11 = 4031;
        SetFailureLocation(v6, 0, 14, 4031, 64);
      }
    }
    else
    {
      v11 = 4036;
      SetFailureLocation(v6, 0, 14, 4036, 53);
    }
    goto LABEL_258;
  }
  if ( (unsigned __int16)v17 > 0x200u )
  {
    v11 = 4037;
    SetFailureLocation(v6, 0, 14, 4037, 69);
    goto LABEL_258;
  }
  if ( (v17 & 1) != 0 )
  {
    v11 = 4032;
    SetFailureLocation(v6, 0, 14, 4032, 80);
    goto LABEL_258;
  }
  if ( !*(_WORD *)(v14 + 76) )
  {
    v11 = 4033;
    SetFailureLocation(v6, 0, 14, 4033, 96);
    goto LABEL_258;
  }
  v19 = v17 >> 1;
  v20 = 0;
  if ( v19 )
  {
    while ( *(_WORD *)(v14 + 2LL * v20 + 76) != 92 )
    {
      if ( ++v20 >= v19 )
        goto LABEL_16;
    }
    v11 = 4035;
    SetFailureLocation(v6, 0, 14, 4035, 1296);
    goto LABEL_258;
  }
LABEL_16:
  if ( *(_WORD *)v14 == 27502 )
  {
LABEL_34:
    v21 = *(unsigned __int16 *)(v15 + 74);
    v22 = *(_DWORD *)(v15 + 48);
    v23 = *(_DWORD *)(v15 + 44);
    ulMultiplicand = *(_DWORD *)(v15 + 36);
    v82 = *(_DWORD *)(v15 + 40);
    v74 = v21;
    if ( v21 )
    {
      if ( v22 == -1 )
      {
        if ( (v87 & 0x20000) == 0 )
        {
          HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0, 0LL);
          *(_WORD *)(v15 + 74) = 0;
          v74 = 0;
        }
      }
      else
      {
        if ( HvIsCellAllocated(BugCheckParameter2, v22, a6) )
        {
          v24 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  v22,
                  &v77);
          if ( !v24 )
          {
            v11 = 4081;
            SetFailureLocation(v6, 0, 14, 4081, 208);
            goto LABEL_258;
          }
          if ( v74 <= -4 - *(_DWORD *)(v24 - 4) )
          {
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v77);
            goto LABEL_55;
          }
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v77);
          v11 = 4080;
          SetFailureLocation(v6, 1, 14, 4080, 224);
        }
        else
        {
          v11 = 4080;
        }
        if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(v6, 0, 14, 4080, 192);
          goto LABEL_258;
        }
        SetFailureLocation(v6, 1, 14, 4080, 160);
        if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0, 0LL) )
        {
          SetFailureLocation(v6, 0, 14, 4080, 176);
          goto LABEL_258;
        }
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
        *(_DWORD *)(v15 + 48) = -1;
        *(_WORD *)(v15 + 74) = 0;
        v11 = 0;
        v74 = 0;
      }
    }
    else if ( v22 != -1 && (v87 & 0x20000) == 0 )
    {
      HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0, 0LL);
      *(_DWORD *)(v15 + 48) = -1;
    }
LABEL_55:
    if ( v23 == -1 )
    {
      v11 = 4130;
      goto LABEL_62;
    }
    if ( a4 == -1 )
    {
      v33 = *(_WORD *)(v15 + 2);
      if ( (v33 & 0x50) != 0 )
      {
        v11 = 4048;
        SetFailureLocation(v6, 0, 14, 4048, 432);
      }
      else
      {
        if ( (v33 & 2) == 0 )
          goto LABEL_103;
        v11 = 4049;
        if ( CmpSelfHeal || (CmpBootType & 6) != 0 )
        {
          SetFailureLocation(v6, 1, 14, 4049, 448);
          if ( HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0, 0LL) )
          {
            *(_WORD *)(v15 + 2) &= ~2u;
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
            goto LABEL_102;
          }
          SetFailureLocation(v6, 0, 14, 4049, 464);
        }
        else
        {
          SetFailureLocation(v6, 0, 14, 4049, 480);
        }
      }
      goto LABEL_254;
    }
    if ( !CmpSelfHeal && (CmpBootType & 6) == 0 || !a5 )
      goto LABEL_71;
    v11 = 4090;
    SetFailureLocation(v6, 1, 14, 4090, 240);
    while ( 1 )
    {
LABEL_62:
      if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(v6, 0, 14, v11, 304);
        goto LABEL_254;
      }
      v73 = -1;
      v70 = -1;
      SetFailureLocation(v6, 1, 14, v11, 256);
      if ( a4 == -1 )
        goto LABEL_253;
      v25 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a4, &v73);
      v26 = v25;
      if ( !v25 )
        goto LABEL_253;
      v27 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              *(unsigned int *)(v25 + 44),
              &v70);
      if ( !v27 )
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v73);
LABEL_253:
        SetFailureLocation(v6, 0, 14, v11, 272);
        goto LABEL_254;
      }
      if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0, 0LL)
        || !HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v26 + 44), 0, 0LL) )
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v70);
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v73);
        SetFailureLocation(v6, 0, 14, v11, 288);
        goto LABEL_254;
      }
      v28 = CmpKeySecurityIncrementReferenceCount(v27, BugCheckParameter2, *(_DWORD *)(v26 + 44), 1);
      if ( v28 < 0 )
      {
        SetFailureLocation(v6, 0, 14, v28, 292);
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v70);
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v73);
        goto LABEL_254;
      }
      *(_DWORD *)(v15 + 44) = *(_DWORD *)(v26 + 44);
      v11 = 0;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v70);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v73);
LABEL_71:
      if ( *(_DWORD *)(v15 + 16) != a4 )
      {
        v11 = 4045;
        if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(v6, 0, 14, 4045, 352);
          goto LABEL_254;
        }
        SetFailureLocation(v6, 1, 14, 4045, 320);
        if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0, 0LL) )
        {
          SetFailureLocation(v6, 0, 14, 4045, 336);
          goto LABEL_254;
        }
        *(_DWORD *)(v15 + 16) = a4;
        v11 = 0;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      }
      v29 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a4, &v81);
      if ( !v29 )
      {
        v11 = 4046;
        SetFailureLocation(v6, 0, 14, 4046, 368);
        goto LABEL_254;
      }
      if ( (v87 & 0x20000) == 0 )
      {
        if ( (*(_BYTE *)(v15 + 2) & 0x20) != 0 )
          v30 = (unsigned __int16)(2 * *(_WORD *)(v15 + 72));
        else
          v30 = *(unsigned __int16 *)(v15 + 72);
        if ( (unsigned __int16)*(_DWORD *)(v29 + 52) < v30 && HvpMarkCellDirty(BugCheckParameter2, a4, 0, 0LL) )
        {
          if ( (*(_BYTE *)(v15 + 2) & 0x20) != 0 )
            v31 = 2 * *(_WORD *)(v15 + 72);
          else
            v31 = *(_WORD *)(v15 + 72);
          *(_WORD *)(v29 + 52) = v31;
        }
        v32 = v74;
        if ( *(_DWORD *)(v29 + 56) < v74 && HvpMarkCellDirty(BugCheckParameter2, a4, 0, 0LL) )
          *(_DWORD *)(v29 + 56) = v32;
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v81);
      if ( (*(_BYTE *)(v15 + 2) & 0xE) != 0 )
      {
        v11 = 4047;
        if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(v6, 0, 14, 4047, 416);
          goto LABEL_254;
        }
        SetFailureLocation(v6, 1, 14, 4047, 384);
        if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0, 0LL) )
        {
          SetFailureLocation(v6, 0, 14, 4047, 400);
          goto LABEL_254;
        }
        *(_WORD *)(v15 + 2) &= 0xFFF1u;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
LABEL_102:
        v11 = 0;
      }
LABEL_103:
      if ( (unsigned __int8)CmpFindSecurityCellCacheIndex(BugCheckParameter2, *(unsigned int *)(v15 + 44), v85) )
      {
        v35 = RtlULongAdd(
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 3056) + 16LL * v85[0] + 8) + 28LL),
                1u,
                &pulResult);
        if ( v35 >= 0 )
          *(_DWORD *)(v36 + 28) = pulResult;
        if ( v35 != -1073741275 )
          break;
      }
      v11 = 4130;
      SetFailureLocation(v6, 1, 14, 4130, 496);
    }
    if ( v35 < 0 )
    {
      v11 = 4130;
      SetFailureLocation(v6, v34, 14, v35, 500);
      goto LABEL_254;
    }
    if ( (*(_BYTE *)(v15 + 2) & 0x40) != 0 )
    {
      v11 = 4097;
      if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(v6, 0, 14, 4097, 648);
        goto LABEL_254;
      }
      SetFailureLocation(v6, v34, 14, 4097, 624);
      v41 = BugCheckParameter3;
      if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0, 0LL) )
      {
        SetFailureLocation(v6, 0, 14, 4097, 652);
        goto LABEL_254;
      }
      *(_DWORD *)(v15 + 36) = 0;
      *(_WORD *)(v15 + 2) &= ~0x40u;
      v11 = 0;
      *(_DWORD *)(v15 + 40) = -1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
LABEL_155:
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v75);
      v47 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v41,
              &v75);
      v15 = v47;
      if ( !v47 )
      {
        v11 = 4093;
        SetFailureLocation(v6, 0, 14, 4093, 688);
        goto LABEL_254;
      }
      *(_QWORD *)(v6 + 248) = v47;
      if ( (v41 & 0x80000000) != 0 )
      {
        if ( *(_DWORD *)(v47 + 20) )
        {
          v11 = 4108;
          SetFailureLocation(v6, 0, 14, 4108, 704);
          goto LABEL_254;
        }
        goto LABEL_233;
      }
      if ( !*(_DWORD *)(v47 + 20) )
        goto LABEL_233;
      v48 = a6;
      if ( !HvIsCellAllocated(BugCheckParameter2, *(_DWORD *)(v47 + 28), a6) )
      {
        v11 = 4110;
        SetFailureLocation(v6, 1, 14, 4110, 720);
        goto LABEL_227;
      }
      v49 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       *(unsigned int *)(v15 + 28),
                       &v86);
      v71 = v49;
      v50 = v49;
      if ( !v49 )
      {
        v11 = 4094;
        SetFailureLocation(v6, 0, 14, 4094, 736);
        goto LABEL_258;
      }
      v51 = -4 - *((_DWORD *)v49 - 1);
      if ( v51 < 8 )
        goto LABEL_223;
      v52 = 8;
      v53 = (unsigned __int16)v49[1];
      if ( ((*v49 - 26220) & 0xFDFF) != 0 )
        v52 = 4;
      if ( (unsigned __int64)(unsigned int)(v53 * v52) + 4 < 4 )
        goto LABEL_223;
      v54 = 8;
      if ( ((*v49 - 26220) & 0xFDFF) != 0 )
        v54 = 4;
      if ( (unsigned __int64)(unsigned int)(v53 * v54) + 4 > v51 )
      {
LABEL_223:
        v11 = 4095;
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v86);
        v71 = 0LL;
        if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(v6, 0, 14, 4095, 768);
          goto LABEL_258;
        }
        SetFailureLocation(v6, 1, 14, 4095, 752);
        goto LABEL_227;
      }
      if ( !(_WORD)v53 )
      {
        v11 = 4105;
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v86);
        v71 = 0LL;
        if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(v6, 0, 14, 4105, 800);
          goto LABEL_258;
        }
        SetFailureLocation(v6, 1, 14, 4105, 784);
        goto LABEL_227;
      }
      *(_QWORD *)(v6 + 256) = v49;
      v55 = *v49;
      if ( ((*v49 - 26220) & 0xFCFF) != 0 || v55 == 26476 )
      {
        if ( v55 == 26994 )
        {
          v56 = 0;
          v57 = 0;
          if ( v49[1] )
          {
            while ( 1 )
            {
              v58 = &v50[2 * v57];
              *(_DWORD *)(v6 + 264) = v57;
              if ( !HvIsCellAllocated(BugCheckParameter2, *((_DWORD *)v58 + 1), v48) )
              {
                v11 = 4130;
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v86);
                v68 = 848;
                goto LABEL_218;
              }
              v59 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                               BugCheckParameter2,
                               *((unsigned int *)v58 + 1),
                               &v72);
              v60 = v59;
              if ( !v59 )
              {
                v11 = 4092;
                SetFailureLocation(v6, 0, 14, 4092, 864);
                goto LABEL_254;
              }
              v61 = -4 - *((_DWORD *)v59 - 1);
              if ( v61 < 8 )
                break;
              v62 = *v59;
              v63 = (unsigned __int16)v59[1];
              v64 = 8;
              if ( ((*v59 - 26220) & 0xFDFF) != 0 )
                v64 = 4;
              if ( (unsigned __int64)(v64 * (unsigned int)(unsigned __int16)v59[1]) + 4 < 4 )
                break;
              v65 = 8;
              if ( ((v62 - 26220) & 0xFDFF) != 0 )
                v65 = 4;
              if ( (unsigned __int64)(unsigned int)(v63 * v65) + 4 > v61 )
                break;
              if ( !(_WORD)v63 )
              {
                v11 = 4135;
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v72);
                if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
                {
                  SetFailureLocation(v6, 0, 14, 4135, 928);
                  goto LABEL_254;
                }
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v86);
                v68 = 912;
                goto LABEL_218;
              }
              if ( ((v62 - 26220) & 0xFCFF) != 0 || v62 == 26476 )
              {
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v72);
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v86);
                v11 = 4140;
                v68 = 944;
                goto LABEL_218;
              }
              v11 = CmpCheckLeaf(BugCheckParameter2);
              if ( v11 )
              {
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v72);
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v86);
                v41 = BugCheckParameter3;
                v71 = 0LL;
                goto LABEL_227;
              }
              v56 += (unsigned __int16)v60[1];
              (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v72);
              v50 = v71;
              ++v57;
              v48 = a6;
              if ( v57 >= (unsigned __int16)v71[1] )
                goto LABEL_202;
            }
            v11 = 4131;
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v72);
            if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
            {
              SetFailureLocation(v6, 0, 14, 4131, 896);
              goto LABEL_254;
            }
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v86);
            v68 = 880;
LABEL_218:
            v71 = 0LL;
            SetFailureLocation(v6, 1, 14, v11, v68);
          }
          else
          {
LABEL_202:
            if ( *(_DWORD *)(v15 + 20) == v56 )
            {
              (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v86);
              v41 = BugCheckParameter3;
              v71 = 0LL;
              goto LABEL_233;
            }
            v11 = 4150;
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v86);
            v71 = 0LL;
            if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
            {
              SetFailureLocation(v6, 0, 14, 4150, 976);
              goto LABEL_258;
            }
            SetFailureLocation(v6, 1, 14, 4150, 960);
          }
          v41 = BugCheckParameter3;
        }
        else
        {
          v11 = 4120;
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v86);
          v71 = 0LL;
          SetFailureLocation(v6, 1, 14, 4120, 992);
        }
      }
      else
      {
        if ( (unsigned __int16)v49[1] != *(_DWORD *)(v15 + 20) )
        {
          v11 = 4120;
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v86);
          v71 = 0LL;
          if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
          {
            SetFailureLocation(v6, 0, 14, 4120, 832);
            goto LABEL_258;
          }
          SetFailureLocation(v6, 1, 14, 4120, 816);
          goto LABEL_227;
        }
        v11 = CmpCheckLeaf(BugCheckParameter2);
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v86);
        v71 = 0LL;
        if ( !v11 )
        {
LABEL_233:
          if ( (v87 & 4) != 0 && *(_DWORD *)(BugCheckParameter2 + 196) >= 4u )
            v66 = -1163005939;
          else
            v66 = -1;
          if ( (v87 & 2) != 0
            || (v87 & 5) != 0 && (*(_DWORD *)(v15 + 24) || *(_DWORD *)(v15 + 32) != -1)
            || (v87 & 8) != 0
            && (*(_DWORD *)(v15 + 32) != -1 || *(_DWORD *)(v15 + 24) || *(_DWORD *)(BugCheckParameter2 + 196) < 4u) )
          {
            if ( HvpMarkCellDirty(BugCheckParameter2, v41, 0, 0LL) )
            {
              *(_DWORD *)(v15 + 24) = 0;
              *(_DWORD *)(v15 + 32) = v66;
            }
            else
            {
              v11 = 4121;
              SetFailureLocation(v6, 0, 14, 4121, 1056);
            }
          }
LABEL_254:
          if ( v71 )
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v86);
          goto LABEL_258;
        }
      }
LABEL_227:
      if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(v6, 0, 14, v11, 1040);
        goto LABEL_254;
      }
      SetFailureLocation(v6, 1, 14, v11, 1008);
      if ( !HvpMarkCellDirty(BugCheckParameter2, v41, 0, 0LL) )
      {
        SetFailureLocation(v6, 0, 14, v11, 1024);
        goto LABEL_254;
      }
      *(_DWORD *)(v15 + 20) = 0;
      v11 = 0;
      *(_DWORD *)(v15 + 28) = -1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      goto LABEL_233;
    }
    v37 = ulMultiplicand;
    if ( ulMultiplicand )
    {
      v38 = a6;
      v39 = v82;
      if ( !HvIsCellAllocated(BugCheckParameter2, v82, a6) )
      {
        v11 = 4100;
        SetFailureLocation(v6, 1, 14, 4100, 512);
LABEL_132:
        v41 = BugCheckParameter3;
LABEL_133:
        if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(v6, 0, 14, v11, 592);
          goto LABEL_254;
        }
        SetFailureLocation(v6, 1, 14, v11, 560);
        if ( !HvpMarkCellDirty(BugCheckParameter2, v41, 0, 0LL) )
        {
          SetFailureLocation(v6, 0, 14, v11, 576);
          goto LABEL_254;
        }
        v44 = v76;
        v43 = v78;
        v11 = 0;
        *(_DWORD *)(v15 + 36) = 0;
        *(_DWORD *)(v15 + 40) = -1;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
        goto LABEL_140;
      }
      v70 = -1;
      v40 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v39,
              &v70);
      if ( !v40 )
      {
        v11 = 4094;
        SetFailureLocation(v6, 0, 14, 4094, 528);
        goto LABEL_254;
      }
      if ( RtlULongMult(v37, 4u, &v80) < 0 || v80 > -4 - *(_DWORD *)(v40 - 4) )
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v70);
        v11 = 4095;
        SetFailureLocation(v6, 1, 14, 4095, 544);
        goto LABEL_132;
      }
      v69 = v38;
      v41 = BugCheckParameter3;
      LODWORD(v67) = BugCheckParameter3;
      v42 = CmpCheckValueList(BugCheckParameter2, v67, v69, (__int64)&v79 + 4, (__int64)&v79);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v70);
      if ( v42 )
      {
        v11 = v42;
        v76 = HIDWORD(v79);
        v78 = v79;
        *(_QWORD *)(v6 + 248) = v40;
        goto LABEL_133;
      }
      v43 = v79;
      v44 = HIDWORD(v79);
    }
    else
    {
      if ( v82 != -1 )
      {
        v11 = 4096;
        SetFailureLocation(v6, v34, 14, 4096, 608);
        goto LABEL_132;
      }
      v41 = BugCheckParameter3;
      v44 = v76;
      v43 = v78;
    }
LABEL_140:
    if ( !*(_DWORD *)(v15 + 36) )
    {
      v44 = 0;
      v43 = 0;
    }
    v45 = v87;
    if ( *(_DWORD *)(v15 + 60) != v44 && (v87 & 0x20000) == 0 )
    {
      v46 = HvpMarkCellDirty(BugCheckParameter2, v41, 0, 0LL) == 0;
      v45 = v87;
      if ( !v46 )
        *(_DWORD *)(v15 + 60) = v44;
    }
    if ( *(_DWORD *)(v15 + 64) != v43 && (v45 & 0x20000) == 0 && HvpMarkCellDirty(BugCheckParameter2, v41, 0, 0LL) )
      *(_DWORD *)(v15 + 64) = v43;
    goto LABEL_155;
  }
  v11 = 4040;
  if ( CmpSelfHeal || (CmpBootType & 6) != 0 )
  {
    SetFailureLocation(v6, 1, 14, 4040, 112);
    if ( !HvpMarkCellDirty(BugCheckParameter2, a3, 0, 0LL) )
    {
      SetFailureLocation(v6, 0, 14, 4040, 128);
      goto LABEL_258;
    }
    *(_WORD *)v15 = 27502;
    v11 = 0;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    goto LABEL_34;
  }
  SetFailureLocation(v6, 0, 14, 4040, 144);
LABEL_258:
  if ( v15 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v75);
  return v11;
}
