/*
 * XREFs of MiMapContiguousMemory @ 0x14009B0AC
 * Callers:
 *     MiAllocateContiguousMemory @ 0x14009A740 (MiAllocateContiguousMemory.c)
 *     MmMapIoSpaceEx @ 0x14009B070 (MmMapIoSpaceEx.c)
 * Callees:
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiZeroAndFlushPtes @ 0x14009AE08 (MiZeroAndFlushPtes.c)
 *     MiDereferenceIoPages @ 0x14009B770 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x14009BB00 (MiReferenceIoPages.c)
 *     MiIoSpaceIsConstant @ 0x14009BF58 (MiIoSpaceIsConstant.c)
 *     MiMappingHasIoReferences @ 0x14009BF74 (MiMappingHasIoReferences.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x140108388 (MiMakeProtectionPfnCompatible.c)
 *     MiMapWithLargePages @ 0x14012E7FC (MiMapWithLargePages.c)
 *     MiAssignInitialPageAttribute @ 0x1401472A8 (MiAssignInitialPageAttribute.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiShowBadMapper @ 0x1401E1300 (MiShowBadMapper.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiInsertPteTracker @ 0x1401FC618 (MiInsertPteTracker.c)
 */

unsigned __int64 __fastcall MiMapContiguousMemory(unsigned __int64 a1, __int64 a2, unsigned int a3, int a4)
{
  int v4; // r13d
  unsigned int v5; // r15d
  unsigned int v7; // eax
  unsigned __int64 v8; // rcx
  unsigned int v9; // r14d
  int v10; // ecx
  unsigned __int64 v11; // r12
  int v12; // edx
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r11
  BOOL v15; // ecx
  __int64 v16; // r8
  __int64 v17; // rbx
  unsigned __int64 v18; // rsi
  _BYTE *v19; // r13
  unsigned int v20; // r9d
  __int64 CurrentIrql; // r9
  __int64 IsConstant; // rax
  unsigned __int8 v23; // r9
  __int64 v24; // r9
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // r9
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // rax
  _QWORD *v31; // r12
  unsigned int ProtectionPfnCompatible; // r15d
  unsigned __int64 ValidKernelPte; // rax
  __int64 v34; // rsi
  unsigned __int64 v35; // r10
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // r8
  __int64 v40; // r10
  __int64 v41; // r11
  unsigned __int64 v42; // rax
  __int64 v43; // r9
  __int64 v44; // rax
  unsigned __int8 v45; // r9
  int v46; // ecx
  __int64 v47; // rbx
  unsigned __int64 v48; // rdx
  __int64 v49; // rdx
  int v50; // r10d
  __int64 v51; // r11
  unsigned __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r10
  bool v55; // zf
  int v58; // [rsp+48h] [rbp-91h]
  __int64 v59; // [rsp+48h] [rbp-91h]
  BOOL IsPfnInline; // [rsp+50h] [rbp-89h]
  __int64 v61; // [rsp+50h] [rbp-89h]
  unsigned int v62; // [rsp+58h] [rbp-81h]
  unsigned __int64 v63; // [rsp+60h] [rbp-79h]
  int v64; // [rsp+68h] [rbp-71h]
  __int64 v65; // [rsp+70h] [rbp-69h] BYREF
  unsigned __int64 v66; // [rsp+78h] [rbp-61h]
  __int64 v67; // [rsp+80h] [rbp-59h]
  __int64 v68; // [rsp+88h] [rbp-51h]
  int v69; // [rsp+90h] [rbp-49h] BYREF
  _QWORD *v70; // [rsp+98h] [rbp-41h]
  unsigned __int64 v71; // [rsp+A0h] [rbp-39h]
  unsigned __int64 v72; // [rsp+A8h] [rbp-31h]
  __int64 v73; // [rsp+B0h] [rbp-29h]
  char v74[16]; // [rsp+B8h] [rbp-21h] BYREF
  __int64 v75; // [rsp+C8h] [rbp-11h]
  unsigned __int64 v76; // [rsp+D0h] [rbp-9h]
  unsigned __int64 v77; // [rsp+D8h] [rbp-1h]
  int v78; // [rsp+E4h] [rbp+Bh]
  unsigned __int64 v79; // [rsp+E8h] [rbp+Fh]

  v4 = a4;
  v73 = a2;
  v5 = a3;
  if ( a3 == -1 )
    return 0LL;
  if ( a3 == 24 )
    return 0LL;
  if ( (a3 & 5) == 5 )
    return 0LL;
  v7 = a3 >> 3;
  if ( a3 >> 3 == 2 )
    return 0LL;
  v8 = a2 + a1;
  v9 = 0;
  if ( v8 <= a1 )
  {
    if ( v8 )
      return 0LL;
  }
  v10 = 1;
  v58 = 3;
  if ( v7 == 1 )
  {
    v10 = 0;
  }
  else if ( v7 == 3 && (a3 & 7) != 0 )
  {
    v10 = 2;
  }
  v64 = MiPlatformCacheAttributes[v10 + 6];
  v62 = MiPlatformCacheAttributes[v10];
  v68 = a1 & 0xFFF;
  v71 = (unsigned __int64)(a2 + v68 + 4095) >> 12;
  v63 = v71;
  v72 = a1 >> 12;
  v11 = a1 >> 12;
  v66 = a1 >> 12;
  IsPfnInline = MiIsPfnInline(a1 >> 12);
  v15 = IsPfnInline;
  if ( (v5 & 2) != 0 && (MiFlags & 0x4000) != 0 )
    v5 &= ~2u;
  v67 = 0LL;
  v16 = 0LL;
  v65 = 0LL;
  if ( (a1 & 0x1FFFFF) != 0 || v14 < 0x200000 || v4 )
    goto LABEL_52;
  if ( IsPfnInline )
    v17 = 48 * v11 - 0x58000000000LL;
  else
    v17 = 0LL;
  v18 = 0LL;
  if ( !v13 )
    goto LABEL_38;
  v19 = (_BYTE *)(v17 + 34);
  while ( !MiIsPfnInline(v18 + v11) )
  {
    if ( v17 )
      goto LABEL_36;
    if ( !v18 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      IsConstant = MiIoSpaceIsConstant(a1 >> 12, v13, v16, CurrentIrql);
      v16 = IsConstant;
      v67 = IsConstant;
      __writecr8(v23);
      if ( IsConstant )
      {
        v12 = *(_DWORD *)(IsConstant + 40);
        v18 = v13;
        goto LABEL_37;
      }
    }
    v12 = v58;
LABEL_33:
    ++v18;
    v19 += 48;
    if ( v18 >= v13 )
      goto LABEL_37;
  }
  if ( v17 )
  {
    if ( (*v19 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(v19 - 34, v20);
      v13 = v71;
      v16 = v67;
      v20 = v62;
    }
    if ( (unsigned __int8)*v19 >> 6 == v20 )
    {
      v12 = v20;
      v58 = v20;
      goto LABEL_33;
    }
  }
LABEL_36:
  v12 = v58;
LABEL_37:
  v15 = IsPfnInline;
  v4 = a4;
LABEL_38:
  if ( v18 == v13 )
  {
    if ( v15 || v16 )
    {
      v27 = 0LL;
    }
    else
    {
      if ( (int)MiReferenceIoPages(1, a1 >> 12, v13, v64, (__int64)&v69, (__int64)&v65) < 0 )
      {
        v25 = v63;
        goto LABEL_54;
      }
      v26 = a1 >> 12;
      if ( ((v69 - 1) & v69) != 0 )
      {
        MiDereferenceIoPages(1LL, v26, v63, v24);
        v25 = (unsigned int)v63;
        goto LABEL_54;
      }
      LODWORD(v13) = v63;
      v27 = v65;
      v12 = *(unsigned __int16 *)(*(_QWORD *)(v65 + 48) + 2 * ((v26 & 0xFFFFFFFFFLL) - *(_QWORD *)(v65 + 40))) >> 14;
    }
    v29 = MiMapWithLargePages(a1 >> 12, v13, v5, v12, 9);
    if ( v29 )
      goto LABEL_98;
    if ( !IsPfnInline && !v67 )
      MiDereferenceIoPages(1LL, a1 >> 12, v63, v28);
    LODWORD(v13) = v63;
    v4 = a4;
  }
LABEL_52:
  v25 = (unsigned int)v13;
  if ( v4 == 1 )
  {
    v25 = (unsigned int)(v13 + 1);
    if ( (_DWORD)v13 == -1 )
      return 0LL;
  }
LABEL_54:
  v30 = MiReservePtes(&qword_1403278B0, v25);
  v31 = (_QWORD *)v30;
  if ( !v30 )
    return 0LL;
  v70 = (_QWORD *)v30;
  ProtectionPfnCompatible = v5 & 7;
  v29 = v68 + ((__int64)(v30 << 25) >> 16);
  if ( v62 )
  {
    if ( v62 == 2 )
      ProtectionPfnCompatible |= 0x18u;
  }
  else
  {
    ProtectionPfnCompatible |= 8u;
  }
  ValidKernelPte = MiMakeValidKernelPte(-1LL, ProtectionPfnCompatible, v30);
  v34 = ValidKernelPte;
  if ( (ValidKernelPte & 0x800) != 0 )
    v34 = ValidKernelPte | 0x42;
  v35 = v66;
  v36 = 0LL;
  v61 = 48 * v66 - 0x58000000000LL;
  v37 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v38 = 0LL;
  v59 = 0LL;
  v65 = 0LL;
  while ( 2 )
  {
    if ( v37 )
    {
LABEL_72:
      v38 ^= (v38 ^ (v35 << 12)) & 0xFFFFFFFFF000LL;
    }
    else
    {
      if ( MiIsPfnInline(v35) )
      {
        v38 = v34;
        if ( !*(_WORD *)(v39 + 32) )
        {
          MiShowBadMapper(v40);
          v39 = v61;
        }
        if ( (*(_BYTE *)(v39 + 34) & 0xC0) == 0xC0 )
        {
          MiAssignInitialPageAttribute(v39, v62);
          v39 = v61;
        }
        if ( *(unsigned __int8 *)(v39 + 34) >> 6 != v62 )
        {
          ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, v39);
          v42 = MiMakeValidKernelPte(v66, ProtectionPfnCompatible, (unsigned __int64)v31);
          v38 = v42;
          if ( (v42 & 0x800) != 0 )
            v38 = v42 | 0x42;
        }
        v35 = v66;
        goto LABEL_72;
      }
      if ( v31 == v70 )
      {
        v43 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v44 = MiIoSpaceIsConstant(v40, v41, v39, v43);
        v68 = v44;
        __writecr8(v45);
        if ( v44 )
        {
          v46 = *(_DWORD *)(v44 + 40);
          v64 = v46;
          goto LABEL_85;
        }
        v36 = v59;
      }
      v47 = v67;
      if ( !v67 )
      {
        v48 = v40;
        v47 = 0LL;
        do
        {
          if ( MiIsPfnInline(v48) )
            break;
          ++v47;
          if ( v51 == 1 )
            break;
          v48 = v49 + 1;
        }
        while ( (v48 & 0x1FF) != 0 );
        if ( (int)MiReferenceIoPages(1, v50, v47, v64, 0LL, (__int64)&v65) < 0 )
        {
          MiZeroAndFlushPtes(v29);
          MiReleasePtes((__int64)&qword_1403278B0, (__int64)v70, v71);
          return 0LL;
        }
        v36 = v65;
        v40 = v66;
      }
      v67 = v47 - 1;
      v59 = v65;
      v46 = *(unsigned __int16 *)(*(_QWORD *)(v36 + 48) + 2 * ((v40 & 0xFFFFFFFFFLL) - *(_QWORD *)(v36 + 40))) >> 14;
LABEL_85:
      ProtectionPfnCompatible &= 7u;
      if ( v46 )
      {
        if ( v46 == 2 )
          ProtectionPfnCompatible |= 0x38u;
      }
      else
      {
        ProtectionPfnCompatible |= 0x28u;
      }
      v52 = MiMakeValidKernelPte(v40, ProtectionPfnCompatible, (unsigned __int64)v31);
      v38 = v52;
      if ( (v52 & 0x800) != 0 )
        v38 = v52 | 0x42;
    }
    *v31 = v38;
    if ( (unsigned int)MiPteInShadowRange(v31, v36) )
      MiWritePteShadow(v53, v38);
    v35 = v54 + 1;
    ++v31;
    v61 += 48LL;
    v55 = v63 == 1;
    v66 = v35;
    --v63;
    if ( !v55 )
    {
      v36 = v59;
      v37 = v68;
      continue;
    }
    break;
  }
  v27 = v59;
LABEL_98:
  if ( v27 )
    MiMappingHasIoReferences(v29);
  if ( (dword_1403A913C & 1) != 0 )
  {
    v79 = v72;
    v76 = v29;
    v77 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v78 = a1 & 0xFFF;
    if ( v27 )
      v9 = 1;
    if ( a4 == 1 )
      v9 |= 2u;
    v75 = v73;
    MiInsertPteTracker(v74, 1LL, v9, v62);
  }
  return v29;
}
