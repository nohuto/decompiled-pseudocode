/*
 * XREFs of CmpCheckRegistry2 @ 0x140405850
 * Callers:
 *     CmCheckRegistry @ 0x1403D1730 (CmCheckRegistry.c)
 * Callees:
 *     HvpFaultCellWithClustering @ 0x140040C60 (HvpFaultCellWithClustering.c)
 *     HvpMapEntryGetBlockAddress @ 0x140040CA0 (HvpMapEntryGetBlockAddress.c)
 *     HvpGetCellContextReinitialize @ 0x140040CE8 (HvpGetCellContextReinitialize.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14014FEAC (HvpMapEntryReleaseBlockAddress.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     SetFailureLocation @ 0x1401A9C98 (SetFailureLocation.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlUpcaseUnicodeChar @ 0x1403FB1D0 (RtlUpcaseUnicodeChar.c)
 *     CmpCompareCompressedName @ 0x1403FBC30 (CmpCompareCompressedName.c)
 *     CmpCheckKey @ 0x140404270 (CmpCheckKey.c)
 *     RtlCompareUnicodeString @ 0x14043D980 (RtlCompareUnicodeString.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1404B88F0 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1405E4090 (CmpRemoveSubKeyCellNoCellRef.c)
 */

__int64 __fastcall CmpCheckRegistry2(
        ULONG_PTR BugCheckParameter2,
        int a2,
        int a3,
        int a4,
        char a5,
        PRTL_BITMAP BitMapHeader,
        int *a7)
{
  __int64 v7; // r14
  int v8; // edi
  int v10; // esi
  _DWORD *PoolWithTag; // rax
  int *v13; // rcx
  _DWORD *v14; // r14
  int v15; // ebx
  __int64 v16; // r12
  int *v17; // r15
  int v18; // eax
  unsigned int v19; // esi
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rdi
  unsigned __int16 v25; // di
  unsigned __int8 *v26; // rsi
  unsigned __int16 v27; // bx
  unsigned __int8 *v28; // r14
  unsigned int v29; // r12d
  unsigned int v30; // r15d
  int v31; // ecx
  bool v32; // sf
  char v33; // bl
  __int64 v34; // rax
  unsigned int v35; // esi
  __int64 v36; // rdx
  _WORD *v37; // r14
  int v38; // edi
  unsigned int v39; // r15d
  __int64 (__fastcall *v40)(); // rax
  __int64 v41; // rcx
  _WORD *v42; // rdx
  int v43; // eax
  unsigned int v44; // ecx
  __int64 (__fastcall *v45)(ULONG_PTR); // r8
  ULONG_PTR v46; // r9
  __int64 v47; // rcx
  int v48; // r8d
  __int64 v49; // rcx
  __int64 v50; // rcx
  struct _EX_RUNDOWN_REF *v51; // rdx
  int v52; // ebx
  _DWORD *v53; // r14
  unsigned int v54; // eax
  __int64 v55; // rbx
  PVOID v56; // rdi
  unsigned __int16 v58; // r8
  unsigned __int16 v59; // r8
  int v60; // edx
  __int64 v61; // rax
  int v62; // r9d
  int v63; // edi
  int BugCheckParameter4; // [rsp+20h] [rbp-81h]
  int v65; // [rsp+30h] [rbp-71h]
  int *v66; // [rsp+38h] [rbp-69h]
  int v67; // [rsp+40h] [rbp-61h] BYREF
  PVOID P; // [rsp+48h] [rbp-59h]
  __int64 v69; // [rsp+50h] [rbp-51h]
  unsigned int v70; // [rsp+58h] [rbp-49h]
  int v71; // [rsp+5Ch] [rbp-45h] BYREF
  __int64 v72; // [rsp+60h] [rbp-41h] BYREF
  int v73; // [rsp+68h] [rbp-39h] BYREF
  _DWORD *v74; // [rsp+70h] [rbp-31h]
  UNICODE_STRING String1; // [rsp+78h] [rbp-29h] BYREF
  UNICODE_STRING String2; // [rsp+88h] [rbp-19h] BYREF
  __int64 v77; // [rsp+98h] [rbp-9h]
  int v78[4]; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v79; // [rsp+F0h] [rbp+4Fh] BYREF
  int v80; // [rsp+F8h] [rbp+57h]
  int v81; // [rsp+108h] [rbp+67h] BYREF

  v81 = a4;
  v80 = a2;
  v7 = *(_QWORD *)(BugCheckParameter2 + 56);
  v8 = 0;
  v67 = -1;
  v10 = a2;
  v70 = 0;
  v69 = v7;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x2800uLL, 0x73634D43u);
  P = PoolWithTag;
  if ( !PoolWithTag )
  {
    SetFailureLocation(v7, 0, 13, -1073741801, 0);
    return 4099LL;
  }
  v13 = a7;
  *(_QWORD *)(v7 + 232) = PoolWithTag;
  v14 = PoolWithTag - 5;
  *PoolWithTag = a3;
  v15 = 0;
  v16 = 0LL;
  *v13 = 0;
  v17 = PoolWithTag;
  *(_QWORD *)(PoolWithTag + 1) = -1LL;
  PoolWithTag[3] = 0;
  *((_BYTE *)PoolWithTag + 16) = 0;
  v65 = 0;
  v79 = 0LL;
  v66 = PoolWithTag;
  v74 = PoolWithTag - 5;
LABEL_3:
  if ( *((_BYTE *)v17 + 16) )
    goto LABEL_31;
  v18 = *v13;
  *((_BYTE *)v17 + 16) = 1;
  if ( v18 != -1 )
    *v13 = v18 + 1;
  v70 = CmpCheckKey(BugCheckParameter2, v10, *v17, v17[1], a5, BitMapHeader);
  v19 = v70;
  if ( !v70 )
  {
    if ( v16 <= 0 )
    {
LABEL_31:
      v34 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              (unsigned int)*v17,
              &v67);
      if ( !v34 )
      {
        v55 = v69;
        v19 = 4098;
        SetFailureLocation(v69, 0, 13, 4098, 64);
        goto LABEL_68;
      }
      v35 = v17[3];
      if ( v35 >= *(_DWORD *)(v34 + 20) )
      {
        --v8;
        --v16;
        v14 -= 5;
        v65 = v8;
        v17 -= 5;
        v79 = v16;
        v66 = v17;
        v74 = v14;
        goto LABEL_34;
      }
      v36 = *(unsigned int *)(v34 + 28);
      LODWORD(v72) = -1;
      v37 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64 *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       v36,
                       &v72);
      if ( !v37 )
      {
        v63 = -1073741670;
        goto LABEL_102;
      }
      LODWORD(v79) = -1;
      if ( *v37 != 26994 || (v38 = 0, !v37[1]) )
      {
LABEL_58:
        if ( ((*v37 - 26220) & 0xFDFF) != 0 )
          v52 = *(_DWORD *)&v37[2 * v35 + 2];
        else
          v52 = *(_DWORD *)&v37[4 * v35 + 2];
        goto LABEL_55;
      }
      while ( 1 )
      {
        v39 = *(_DWORD *)&v37[2 * v38 + 2];
        v40 = *(__int64 (__fastcall **)())(BugCheckParameter2 + 8);
        if ( v40 == HvpGetCellPaged )
        {
          if ( HvShutdownComplete != 1 )
          {
            HvpMapEntryGetBlockAddress(
              5LL * ((v39 >> 12) & 0x1FF),
              (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(*(_QWORD *)(632 * ((unsigned __int64)v39 >> 31)
                                                               + BugCheckParameter2
                                                               + 1408)
                                                   + 8LL * ((v39 >> 21) & 0x3FF))
                                       + 40LL * ((v39 >> 12) & 0x1FF)),
              (BOOLEAN *)&v81,
              v78);
            HvpFaultCellWithClustering();
            v42 = (_WORD *)(v41 + 4);
            v43 = v39 ^ ((unsigned __int8)v39 ^ (unsigned __int8)v81) & 1;
            LODWORD(v79) = v43;
            goto LABEL_42;
          }
          v42 = 0LL;
        }
        else
        {
          v42 = (_WORD *)((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64 *))v40)(BugCheckParameter2, v39, &v79);
        }
        v43 = v79;
LABEL_42:
        if ( !v42 )
        {
          v17 = v66;
          v52 = -1;
          goto LABEL_55;
        }
        v44 = (unsigned __int16)v42[1];
        if ( v35 < v44 )
        {
          if ( ((*v42 - 26220) & 0xFDFF) != 0 )
            v52 = *(_DWORD *)&v42[2 * v35 + 2];
          else
            v52 = *(_DWORD *)&v42[4 * v35 + 2];
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v79);
          v17 = v66;
LABEL_55:
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v72);
          if ( v52 == -1 )
          {
            v63 = 0;
LABEL_102:
            v19 = 4097;
            BugCheckParameter4 = 80;
            v62 = v63;
            goto LABEL_103;
          }
          ++v16;
          v53 = v74;
          v8 = v65 + 1;
          ++v17[3];
          v14 = v53 + 5;
          v17 += 5;
          ++v65;
          v79 = v16;
          v74 = v14;
          v66 = v17;
          if ( v16 == 512 )
          {
            v19 = 4096;
            BugCheckParameter4 = 96;
            v62 = 4096;
LABEL_103:
            v55 = v69;
            SetFailureLocation(v69, 0, 13, v62, BugCheckParameter4);
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v67);
            goto LABEL_68;
          }
          v54 = *v14;
          *v17 = v52;
          v15 = 0;
          v17[3] = 0;
          *((_BYTE *)v17 + 16) = 0;
          v17[1] = v54;
          v17[2] = -1;
LABEL_34:
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v67);
          if ( v16 < 0 )
          {
            v19 = v70;
            v55 = v69;
LABEL_68:
            v56 = P;
            goto LABEL_69;
          }
          v13 = a7;
          v10 = v80;
          goto LABEL_3;
        }
        v45 = *(__int64 (__fastcall **)(ULONG_PTR))(BugCheckParameter2 + 16);
        v35 -= v44;
        if ( v45 == HvpReleaseCellPaged )
        {
          v46 = v43 & 0xFFFFFFFE;
          v47 = (v43 & 0xFFFFFFFE) >> 31;
          v48 = (_DWORD)v47 << 31;
          v49 = 632 * v47;
          if ( (unsigned int)(v46 + v48) >= *(_DWORD *)(v49 + BugCheckParameter2 + 1400)
            || (v50 = *(_QWORD *)(*(_QWORD *)(v49 + BugCheckParameter2 + 1408)
                                + 8LL * (((unsigned int)v46 >> 21) & 0x3FF)),
                (v51 = (struct _EX_RUNDOWN_REF *)(v50 + 40LL * (((unsigned int)v46 >> 12) & 0x1FF))) == 0LL) )
          {
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v46, 0x291uLL);
          }
          if ( (v43 & 1) != 0 )
            HvpMapEntryReleaseBlockAddress(v50, v51);
          HvpGetCellContextReinitialize(&v79);
        }
        else
        {
          ((void (__fastcall *)(ULONG_PTR, __int64 *))v45)(BugCheckParameter2, &v79);
        }
        if ( ++v38 >= (unsigned int)(unsigned __int16)v37[1] )
        {
          v17 = v66;
          goto LABEL_58;
        }
      }
    }
    v20 = v14[2];
    if ( v20 == -1 )
    {
LABEL_30:
      v15 = 0;
      v14[2] = *v17;
      goto LABEL_31;
    }
    v21 = (unsigned int)*v17;
    v73 = -1;
    v71 = -1;
    v77 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v21, &v73);
    v22 = v77;
    v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v20, &v71);
    v72 = v23;
    v24 = v23;
    if ( !v22 || !v23 )
      goto LABEL_76;
    if ( (*(_BYTE *)(v22 + 2) & 0x20) != 0 )
    {
      if ( (*(_BYTE *)(v23 + 2) & 0x20) != 0 )
      {
        v25 = *(_WORD *)(v23 + 72);
        v26 = (unsigned __int8 *)(v23 + 76);
        v27 = *(_WORD *)(v22 + 72);
        v28 = (unsigned __int8 *)(v22 + 76);
        if ( v25 )
        {
          while ( v27 )
          {
            v29 = *v26++;
            v30 = *v28++;
            if ( (_WORD)v29 != (_WORD)v30 )
            {
              if ( v29 >= 0x61 )
              {
                if ( v29 > 0x7A )
                  LOWORD(v29) = RtlUpcaseUnicodeChar(v29);
                else
                  LOWORD(v29) = v29 - 32;
              }
              if ( v30 >= 0x61 )
              {
                if ( v30 > 0x7A )
                  LOWORD(v30) = RtlUpcaseUnicodeChar(v30);
                else
                  LOWORD(v30) = v30 - 32;
              }
              v31 = (unsigned __int16)v29 - (unsigned __int16)v30;
              if ( (unsigned __int16)v29 != (unsigned __int16)v30 )
                goto LABEL_21;
            }
            --v27;
            if ( !--v25 )
              break;
          }
        }
        v31 = v25 - v27;
LABEL_21:
        v17 = v66;
        v32 = v31 < 0;
        v24 = v72;
        v22 = v77;
        v14 = v74;
      }
      else
      {
        v59 = *(_WORD *)(v22 + 72);
        String1.Buffer = (wchar_t *)(v23 + 76);
        String1.Length = *(_WORD *)(v23 + 72);
        String1.MaximumLength = String1.Length;
        v32 = (int)CmpCompareCompressedName((__int64)&String1, (unsigned __int8 *)(v22 + 76), v59, 0) < 0;
      }
      if ( v32 )
        goto LABEL_23;
LABEL_76:
      v33 = 0;
      goto LABEL_24;
    }
    if ( (*(_BYTE *)(v23 + 2) & 0x20) != 0 )
    {
      v58 = *(_WORD *)(v23 + 72);
      String2.Buffer = (wchar_t *)(v22 + 76);
      String2.Length = *(_WORD *)(v22 + 72);
      String2.MaximumLength = String2.Length;
      if ( (int)CmpCompareCompressedName((__int64)&String2, (unsigned __int8 *)(v23 + 76), v58, 0) <= 0 )
        goto LABEL_76;
    }
    else
    {
      String1.Buffer = (wchar_t *)(v23 + 76);
      String1.Length = *(_WORD *)(v23 + 72);
      String1.MaximumLength = String1.Length;
      String2.Buffer = (wchar_t *)(v22 + 76);
      String2.Length = *(_WORD *)(v22 + 72);
      String2.MaximumLength = String2.Length;
      if ( RtlCompareUnicodeString(&String1, &String2, 1u) >= 0 )
        goto LABEL_76;
    }
LABEL_23:
    v33 = 1;
LABEL_24:
    if ( v22 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v73);
    if ( v24 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v71);
    if ( !v33 )
    {
      v55 = v69;
      v19 = 4091;
      SetFailureLocation(v69, 0, 13, 4091, 48);
      v8 = v65;
      goto LABEL_92;
    }
    v16 = v79;
    v8 = v65;
    goto LABEL_30;
  }
  if ( CmpSelfHeal || (CmpBootType & 6) != 0 )
    v15 = 1;
  v60 = v15;
  v55 = v69;
  SetFailureLocation(v69, v60, 13, v70, 16);
LABEL_92:
  if ( !CmpSelfHeal && (CmpBootType & 6) == 0 || !v8 )
    goto LABEL_68;
  v61 = v8;
  v56 = P;
  if ( (unsigned __int8)CmpRemoveSubKeyCellNoCellRef(BugCheckParameter2, *((unsigned int *)P + 5 * v61 + 1)) )
  {
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    v19 = -1;
  }
  else
  {
    SetFailureLocation(v55, 0, 13, v19, 32);
  }
LABEL_69:
  ExFreePoolWithTag(v56, 0x73634D43u);
  if ( !v19 && (v80 & 0x20000) == 0 && !(unsigned __int8)CmpCheckAndFixSecurityCellsRefcount(BugCheckParameter2) )
  {
    v19 = 4099;
    SetFailureLocation(v55, 0, 13, 4099, 112);
  }
  return v19;
}
