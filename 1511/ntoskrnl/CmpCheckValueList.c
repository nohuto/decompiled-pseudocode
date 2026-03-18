/*
 * XREFs of CmpCheckValueList @ 0x140403CF0
 * Callers:
 *     CmpCheckKey @ 0x140404270 (CmpCheckKey.c)
 * Callees:
 *     HvpMapEntryGetBinAddress @ 0x14003B3D0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryIsDiscardable @ 0x14003B420 (HvpMapEntryIsDiscardable.c)
 *     RtlClearBits @ 0x14003B430 (RtlClearBits.c)
 *     HvpReleaseHCell @ 0x140040C50 (HvpReleaseHCell.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14014FEAC (HvpMapEntryReleaseBlockAddress.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     SetFailureLocation @ 0x1401A9C98 (SetFailureLocation.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     HvIsCellAllocated @ 0x1403F94C0 (HvIsCellAllocated.c)
 */

__int64 __fastcall CmpCheckValueList(
        ULONG_PTR BugCheckParameter2,
        char a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        PRTL_BITMAP BitMapHeader,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int *v8; // rsi
  __int64 v10; // r13
  PRTL_BITMAP v12; // r9
  __int64 v13; // rbx
  unsigned int v14; // ecx
  unsigned int v15; // r15d
  unsigned int v16; // r8d
  bool v17; // zf
  unsigned int v18; // esi
  __int64 v19; // rax
  struct _EX_RUNDOWN_REF *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // rsi
  unsigned __int64 BinAddress; // rax
  __int64 v25; // rcx
  unsigned int v26; // r10d
  unsigned int v27; // r8d
  __int64 v28; // r9
  char v29; // si
  struct _EX_RUNDOWN_REF *v30; // rax
  struct _EX_RUNDOWN_REF *v31; // r9
  unsigned int v32; // eax
  unsigned int v33; // ecx
  char v34; // r10
  __int16 v35; // dx
  unsigned int v36; // r8d
  unsigned int Ptr_high; // esi
  unsigned int v38; // eax
  unsigned int Count; // ecx
  __int64 v41; // r13
  unsigned int v42; // edx
  __int64 v43; // rax
  __int64 v44; // r8
  unsigned __int64 v45; // rcx
  __int64 v46; // rsi
  unsigned int v47; // edx
  __int64 v48; // rax
  unsigned int v49; // esi
  unsigned __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // r15
  __int64 v54; // rcx
  int v55; // [rsp+30h] [rbp-99h]
  unsigned int v56; // [rsp+34h] [rbp-95h]
  unsigned int v57; // [rsp+34h] [rbp-95h]
  int v58; // [rsp+38h] [rbp-91h] BYREF
  int v59; // [rsp+3Ch] [rbp-8Dh] BYREF
  char v60; // [rsp+40h] [rbp-89h]
  struct _EX_RUNDOWN_REF *v61; // [rsp+48h] [rbp-81h]
  BOOLEAN v62[4]; // [rsp+50h] [rbp-79h] BYREF
  int v63; // [rsp+54h] [rbp-75h] BYREF
  char v64; // [rsp+58h] [rbp-71h]
  __int64 v65; // [rsp+60h] [rbp-69h] BYREF
  __int64 v66; // [rsp+68h] [rbp-61h]
  int v67; // [rsp+70h] [rbp-59h] BYREF
  int v68; // [rsp+74h] [rbp-55h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+78h] [rbp-51h]
  unsigned int *v70; // [rsp+80h] [rbp-49h]
  PRTL_BITMAP v71; // [rsp+88h] [rbp-41h]
  unsigned int *v72; // [rsp+90h] [rbp-39h]
  void *v73; // [rsp+98h] [rbp-31h]
  int v74; // [rsp+A0h] [rbp-29h] BYREF
  _QWORD v75[3]; // [rsp+A8h] [rbp-21h] BYREF

  v8 = a7;
  v10 = a3;
  v12 = BitMapHeader;
  v13 = *(_QWORD *)(BugCheckParameter2 + 56);
  v58 = -1;
  v59 = -1;
  v68 = -1;
  v67 = -1;
  v63 = -1;
  v66 = a3;
  LODWORD(BugCheckParameter3) = a5;
  v14 = 0;
  v15 = 0;
  *(_QWORD *)(v13 + 272) = a3;
  *(_DWORD *)(v13 + 280) = -1;
  *(_DWORD *)(v13 + 284) = 0;
  *(_QWORD *)(v13 + 288) = 0LL;
  *a7 = 0;
  *a8 = 0;
  v60 = a2;
  v71 = BitMapHeader;
  v70 = a7;
  v55 = 0;
  strcpy((char *)v75, "SymbolicLinkValue");
  if ( !a4 )
    return v15;
  while ( 1 )
  {
    v73 = (void *)(v10 + 4LL * v14);
    v16 = *(_DWORD *)v73;
    v56 = *(_DWORD *)v73;
    if ( a2 && a4 != 1 )
    {
      v15 = 5005;
      SetFailureLocation(v13, 0, 15, 5005, 64);
      *(_DWORD *)(v13 + 280) = v55;
      *(_DWORD *)(v13 + 284) = v56;
      return v15;
    }
    if ( v16 == -1 )
    {
      v49 = 5010;
      SetFailureLocation(v13, 1, 15, 5010, 80);
      *(_DWORD *)(v13 + 280) = v55;
      *(_DWORD *)(v13 + 284) = -1;
      goto LABEL_108;
    }
    v17 = (*(_BYTE *)(BugCheckParameter2 + 124) & 1) == 0;
    LODWORD(v65) = -1;
    v64 = 1;
    if ( !v17 )
      goto LABEL_26;
    v18 = v16 >> 31;
    if ( (v16 & 0x7FFFFFFF) < *(_DWORD *)(632LL * (v16 >> 31) + BugCheckParameter2 + 1400) && (v16 & 7) == 0 )
    {
      if ( v12 && (v16 & 0x80000000) == 0 )
      {
        if ( !_bittest64((const signed __int64 *)v12->Buffer, v16 >> 3) )
          goto LABEL_78;
        RtlClearBits(v12, v16 >> 3, 1u);
        v16 = v56;
      }
      v19 = 632LL * v18;
      if ( v16 + (v18 << 31) < *(_DWORD *)(v19 + BugCheckParameter2 + 1400) )
      {
        v20 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(*(_QWORD *)(v19 + BugCheckParameter2 + 1408)
                                                   + 8LL * ((v16 >> 21) & 0x3FF))
                                       + 40LL * ((v16 >> 12) & 0x1FF));
        v61 = v20;
        if ( v20 )
        {
          if ( !HvpMapEntryIsDiscardable((__int64)v20) )
          {
            v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
                    BugCheckParameter2,
                    v56,
                    &v65);
            if ( !v21 )
              goto LABEL_25;
            v23 = (_DWORD *)(v21 - 4);
            if ( v21 == 4 )
              goto LABEL_25;
            BinAddress = HvpMapEntryGetBinAddress(v22, v61, v62, &v74);
            v25 = (unsigned int)*v23;
            v26 = (_DWORD)v23 - BinAddress;
            v27 = -*v23;
            if ( (int)v25 >= 0
              || (v25 = v27 - 8, (unsigned int)v25 > 0xFFFF8)
              || (v28 = *(unsigned int *)(BinAddress + 8), v25 = v28 - 32, v27 > (unsigned __int64)(v28 - 32))
              || v26 - *v23 > (unsigned int)v28
              || v26 < 0x20 )
            {
              v29 = 0;
            }
            else
            {
              v29 = v64;
            }
            if ( v62[0] )
              HvpMapEntryReleaseBlockAddress(v25, v61);
            HvpReleaseHCell(BugCheckParameter2);
            if ( v29 )
            {
LABEL_25:
              v8 = v70;
LABEL_26:
              v30 = (struct _EX_RUNDOWN_REF *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2
                                                                                                  + 8))(
                                                BugCheckParameter2,
                                                v56,
                                                &v58);
              v61 = v30;
              v31 = v30;
              if ( !v30 )
              {
                *(_DWORD *)(v13 + 280) = v55;
                v15 = 5099;
                *(_DWORD *)(v13 + 284) = v56;
                SetFailureLocation(v13, 0, 15, 5099, 112);
                return v15;
              }
              v32 = -4 - HIDWORD(v30[-1].Ptr);
              if ( v32 < 0x14 || LOWORD(v31->Count) != 27510 )
              {
                v49 = 5030;
                SetFailureLocation(v13, 1, 15, 5030, 128);
                goto LABEL_106;
              }
              v33 = WORD1(v31->Ptr);
              if ( v33 + 20 > v32 )
              {
                v49 = 5040;
                SetFailureLocation(v13, 1, 15, 5040, 144);
LABEL_106:
                *(_DWORD *)(v13 + 280) = v55;
                *(_DWORD *)(v13 + 284) = v56;
                *(_QWORD *)(v13 + 288) = v61;
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v58);
                goto LABEL_108;
              }
              v34 = v60;
              if ( v60 )
              {
                v50 = *(unsigned __int64 *)((char *)&v31[2].Ptr + 4) - v75[0];
                if ( !v50 )
                {
                  v50 = *(unsigned __int64 *)((char *)&v31[3].Ptr + 4) - v75[1];
                  if ( !v50 )
                    v50 = BYTE4(v31[4].Ptr) - (unsigned __int64)LOBYTE(v75[2]);
                }
                if ( v50 )
                {
                  v15 = 5045;
                  SetFailureLocation(v13, 0, 15, 5045, 160);
                  goto LABEL_117;
                }
                if ( HIDWORD(v31[1].Ptr) != 6 )
                {
                  v15 = 5046;
                  SetFailureLocation(v13, 0, 15, 5046, 176);
                  goto LABEL_117;
                }
              }
              v35 = v31[2].Count & 1;
              if ( v35 )
                v36 = (unsigned __int16)(2 * v33);
              else
                v36 = WORD1(v31->Ptr);
              if ( *v8 < v36 )
              {
                if ( v35 )
                  v33 = (unsigned __int16)(2 * v33);
                *v8 = v33;
              }
              Ptr_high = HIDWORD(v31->Ptr);
              if ( v34 )
              {
                if ( (Ptr_high & 1) != 0 )
                {
                  v15 = 5047;
                  SetFailureLocation(v13, 0, 15, 5047, 192);
LABEL_117:
                  *(_DWORD *)(v13 + 280) = v55;
                  *(_DWORD *)(v13 + 284) = v56;
                  *(_QWORD *)(v13 + 288) = v61;
                  goto LABEL_119;
                }
                if ( Ptr_high > 0xFFFF )
                {
                  v15 = 5048;
                  SetFailureLocation(v13, 0, 15, 5048, 208);
                  goto LABEL_117;
                }
              }
              if ( Ptr_high >= 0x80000000 )
              {
                if ( Ptr_high + 0x80000000 <= 4 )
                  goto LABEL_40;
                v49 = 5051;
                SetFailureLocation(v13, 1, 15, 5051, 416);
                goto LABEL_106;
              }
              Count = v31[1].Count;
              v41 = 0LL;
              LODWORD(v65) = Count;
              if ( Ptr_high )
              {
                if ( HvIsCellAllocated(BugCheckParameter2, Count, (__int64)v71) )
                {
                  v41 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                          BugCheckParameter2,
                          (unsigned int)v65,
                          &v59);
                  if ( v41 )
                  {
                    Count = v65;
                    goto LABEL_52;
                  }
                  *(_DWORD *)(v13 + 280) = v55;
                  v15 = 5098;
                  *(_DWORD *)(v13 + 284) = v65;
                  SetFailureLocation(v13, 0, 15, 5098, 256);
LABEL_119:
                  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v58);
                  return v15;
                }
                v49 = 5060;
                SetFailureLocation(v13, 1, 15, 5060, 240);
              }
              else
              {
                if ( Count == -1 )
                {
LABEL_52:
                  if ( Ptr_high <= 0x3FD8 || *(_DWORD *)(BugCheckParameter2 + 196) < 4u )
                  {
                    if ( !Ptr_high || Ptr_high <= -4 - *(_DWORD *)(v41 - 4) )
                      goto LABEL_55;
                    v49 = 5052;
                    SetFailureLocation(v13, 1, 15, 5052, 400);
                    *(_DWORD *)(v13 + 280) = v55;
                    *(_DWORD *)(v13 + 284) = v56;
                    *(_QWORD *)(v13 + 288) = v61;
                  }
                  else
                  {
                    if ( (unsigned int)(-4 - *(_DWORD *)(v41 - 4)) < 8
                      || *(_WORD *)v41 != 25188
                      || !*(_WORD *)(v41 + 2)
                      || (v42 = *(_DWORD *)(v41 + 4), v42 == -1) )
                    {
                      *(_DWORD *)(v13 + 284) = Count;
                      v49 = 5097;
                      *(_DWORD *)(v13 + 280) = v55;
                      SetFailureLocation(v13, 1, 15, 5097, 272);
                      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v59);
                      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v58);
                      goto LABEL_96;
                    }
                    if ( !HvIsCellAllocated(BugCheckParameter2, v42, (__int64)v71) )
                    {
                      v49 = 5096;
                      SetFailureLocation(v13, 1, 15, 5096, 288);
                      *(_DWORD *)(v13 + 280) = v55;
                      *(_DWORD *)(v13 + 284) = *(_DWORD *)(v41 + 4);
                      *(_QWORD *)(v13 + 288) = v41;
                      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v59);
                      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v58);
                      goto LABEL_96;
                    }
                    v43 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                            BugCheckParameter2,
                            *(unsigned int *)(v41 + 4),
                            &v63);
                    v65 = v43;
                    v44 = v43;
                    if ( !v43 )
                    {
                      *(_DWORD *)(v13 + 280) = v55;
                      v15 = 5095;
                      *(_DWORD *)(v13 + 284) = *(_DWORD *)(v41 + 4);
                      SetFailureLocation(v13, 0, 15, 5095, 304);
LABEL_121:
                      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v59);
                      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v58);
                      return v15;
                    }
                    v45 = 4LL * *(unsigned __int16 *)(v41 + 2);
                    if ( v45 < 4 || v45 > (unsigned int)(-4 - *(_DWORD *)(v43 - 4)) )
                    {
                      v49 = 5100;
                      SetFailureLocation(v13, 1, 15, 5100, 320);
                    }
                    else
                    {
                      if ( *(unsigned __int16 *)(v41 + 2) == (Ptr_high + 16343) / 0x3FD8 )
                      {
                        v46 = 0LL;
                        v57 = 0;
                        if ( !*(_WORD *)(v41 + 2) )
                        {
LABEL_74:
                          (*(void (__fastcall **)(ULONG_PTR, int *, __int64))(BugCheckParameter2 + 16))(
                            BugCheckParameter2,
                            &v63,
                            v44);
LABEL_55:
                          if ( v41 )
                            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(
                              BugCheckParameter2,
                              &v59);
                          v31 = v61;
                          v10 = v66;
LABEL_40:
                          v38 = HIDWORD(v31->Ptr);
                          if ( v38 >= 0x80000000 )
                            v38 += 0x80000000;
                          if ( *a8 < v38 )
                            *a8 = v38;
                          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v58);
                          v14 = ++v55;
                          goto LABEL_45;
                        }
                        while ( 1 )
                        {
                          v47 = *(_DWORD *)(v44 + 4 * v46);
                          v72 = (unsigned int *)(v44 + 4 * v46);
                          if ( !HvIsCellAllocated(BugCheckParameter2, v47, (__int64)v71) )
                          {
                            v49 = 5094;
                            SetFailureLocation(v13, 1, 15, 5094, 352);
                            v52 = v65;
                            *(_DWORD *)(v13 + 280) = v57;
                            *(_DWORD *)(v13 + 284) = *(_DWORD *)(v52 + 4LL * v57);
                            *(_QWORD *)(v13 + 288) = v41;
                            goto LABEL_94;
                          }
                          v48 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                                  BugCheckParameter2,
                                  *v72,
                                  &v67);
                          if ( !v48 )
                            break;
                          if ( (unsigned int)(-4 - *(_DWORD *)(v48 - 4)) < 0x3FD8 )
                          {
                            v49 = 5036;
                            SetFailureLocation(v13, 1, 15, 5036, 384);
                            v51 = v65;
                            *(_DWORD *)(v13 + 280) = v57;
                            *(_DWORD *)(v13 + 284) = *(_DWORD *)(v51 + 4LL * v57);
                            *(_QWORD *)(v13 + 288) = v41;
                            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(
                              BugCheckParameter2,
                              &v67);
                            goto LABEL_94;
                          }
                          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v67);
                          v46 = (unsigned int)(v46 + 1);
                          v44 = v65;
                          v57 = v46;
                          if ( (unsigned int)v46 >= *(unsigned __int16 *)(v41 + 2) )
                            goto LABEL_74;
                        }
                        v15 = 5034;
                        SetFailureLocation(v13, 0, 15, 5034, 368);
                        v54 = v65;
                        *(_DWORD *)(v13 + 280) = v46;
                        *(_DWORD *)(v13 + 284) = *(_DWORD *)(v54 + 4 * v46);
                        *(_QWORD *)(v13 + 288) = v41;
                        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v63);
                        goto LABEL_121;
                      }
                      v49 = 5101;
                      SetFailureLocation(v13, 1, 15, 5101, 336);
                    }
                    *(_DWORD *)(v13 + 280) = v55;
                    *(_DWORD *)(v13 + 284) = v56;
                    *(_QWORD *)(v13 + 288) = v61;
LABEL_94:
                    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v63);
                  }
                  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v59);
                  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v58);
LABEL_96:
                  v10 = v66;
                  goto LABEL_108;
                }
                v49 = 5050;
                SetFailureLocation(v13, 1, 15, 5050, 224);
              }
              *(_DWORD *)(v13 + 280) = v55;
              *(_DWORD *)(v13 + 284) = v56;
              *(_QWORD *)(v13 + 288) = v61;
              (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v58);
              goto LABEL_96;
            }
          }
        }
      }
    }
LABEL_78:
    v49 = 5020;
    SetFailureLocation(v13, 1, 15, 5020, 96);
    *(_DWORD *)(v13 + 280) = v55;
    *(_DWORD *)(v13 + 284) = v56;
LABEL_108:
    if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(v13, 1, 15, v49, 48);
      return v49;
    }
    v53 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            (unsigned int)BugCheckParameter3,
            &v68);
    SetFailureLocation(v13, 1, 15, v49, 0);
    if ( !v53 )
      break;
    if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0)
      || !HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v53 + 40), 0) )
    {
      SetFailureLocation(v13, 1, 15, v49, 32);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v68);
      return v49;
    }
    --a4;
    --*(_DWORD *)(v53 + 36);
    memmove(v73, (const void *)(v10 + 4LL * (unsigned int)(v55 + 1)), 4LL * (a4 - v55));
    v15 = 0;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v68);
    v14 = v55;
LABEL_45:
    if ( v14 >= a4 )
      return v15;
    v8 = v70;
    v12 = v71;
    a2 = v60;
  }
  SetFailureLocation(v13, 0, 15, v49, 16);
  return v49;
}
