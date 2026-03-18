/*
 * XREFs of MiMapContiguousMemory @ 0x1401159C0
 * Callers:
 *     MiAllocateContiguousMemory @ 0x140114E20 (MiAllocateContiguousMemory.c)
 *     MmMapIoSpaceEx @ 0x140115984 (MmMapIoSpaceEx.c)
 *     MiCopyLargeVad @ 0x1406A9BD0 (MiCopyLargeVad.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x1400797E8 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiZeroAndFlushPtes @ 0x140115540 (MiZeroAndFlushPtes.c)
 *     MiDereferenceIoPages @ 0x140116398 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140116704 (MiReferenceIoPages.c)
 *     MiMappingHasIoReferences @ 0x140116BDC (MiMappingHasIoReferences.c)
 *     MiIoSpaceIsConstant @ 0x140116C90 (MiIoSpaceIsConstant.c)
 *     MiAssignInitialPageAttribute @ 0x140139738 (MiAssignInitialPageAttribute.c)
 *     MiMapWithLargePages @ 0x140158140 (MiMapWithLargePages.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiShowBadMapper @ 0x14020DDF0 (MiShowBadMapper.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiInsertPteTracker @ 0x140226BDC (MiInsertPteTracker.c)
 */

__int64 __fastcall MiMapContiguousMemory(__int64 a1, unsigned __int64 a2, unsigned int a3, int a4)
{
  unsigned int v4; // r12d
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // r14d
  int v10; // edi
  int v11; // r11d
  ULONG_PTR v12; // r13
  unsigned __int64 v13; // r8
  int v14; // r9d
  unsigned __int64 v15; // r10
  BOOL v16; // ecx
  __int64 IsConstant; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // r15
  __int64 v20; // r9
  _BYTE *v21; // r13
  unsigned int v22; // r11d
  __int64 v23; // r9
  unsigned int v24; // edx
  __int64 v25; // r15
  unsigned __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  _QWORD *v30; // r15
  char ProtectionPfnCompatible; // r12
  __int64 v32; // rdx
  unsigned __int64 v33; // rdi
  __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r10
  __int64 v39; // r11
  __int64 v40; // rdx
  __int64 v41; // rax
  int v42; // ecx
  __int64 v43; // rbx
  unsigned __int64 v44; // r9
  __int64 v45; // r9
  __int64 v46; // r10
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned int v49; // edi
  BOOL v51; // [rsp+30h] [rbp-89h]
  __int64 v52; // [rsp+30h] [rbp-89h]
  unsigned int v53; // [rsp+3Ch] [rbp-7Dh]
  unsigned __int64 v54; // [rsp+40h] [rbp-79h]
  __int64 v55; // [rsp+48h] [rbp-71h]
  __int64 v56; // [rsp+48h] [rbp-71h]
  __int64 v57; // [rsp+50h] [rbp-69h] BYREF
  __int64 v58; // [rsp+58h] [rbp-61h] BYREF
  int v59; // [rsp+60h] [rbp-59h]
  int v60; // [rsp+64h] [rbp-55h]
  __int64 v61; // [rsp+68h] [rbp-51h]
  _QWORD *v62; // [rsp+70h] [rbp-49h]
  __int64 v63; // [rsp+78h] [rbp-41h]
  unsigned __int64 v64; // [rsp+80h] [rbp-39h]
  unsigned __int64 v65; // [rsp+88h] [rbp-31h]
  unsigned __int64 v66; // [rsp+90h] [rbp-29h]
  __int64 v67; // [rsp+98h] [rbp-21h]
  _BYTE v68[24]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-1h]
  unsigned __int64 v70; // [rsp+C0h] [rbp+7h]
  int v71; // [rsp+C8h] [rbp+Fh]
  int v72; // [rsp+CCh] [rbp+13h]
  __int64 v73; // [rsp+D0h] [rbp+17h]

  v60 = a4;
  v4 = a3;
  v66 = a2;
  if ( a3 == -1 )
    return 0LL;
  if ( a3 == 24 )
    return 0LL;
  if ( (a3 & 5) == 5 )
    return 0LL;
  v7 = a3 >> 3;
  if ( a3 >> 3 == 2 )
    return 0LL;
  v8 = 1;
  v9 = 0;
  v10 = 3;
  if ( v7 == 1 )
  {
    v8 = 0;
  }
  else if ( v7 == 3 && (a3 & 7) != 0 )
  {
    v8 = 2;
  }
  v11 = MiPlatformCacheAttributes[v8];
  v59 = MiPlatformCacheAttributes[v8 + 6];
  v53 = v11;
  v61 = a1 & 0xFFF;
  v65 = (a2 + v61 + 4095) >> 12;
  v54 = v65;
  v67 = a1 >> 12;
  v12 = a1 >> 12;
  v57 = a1 >> 12;
  v51 = MI_IS_PFN(a1 >> 12);
  v16 = v51;
  if ( (v4 & 2) != 0 && (MiFlags & 0x30000) != 0 )
    v4 &= ~2u;
  v58 = 0LL;
  IsConstant = 0LL;
  v55 = 0LL;
  if ( (a1 & 0x1FFFFF) != 0 || a2 < 0x200000 || v14 )
    goto LABEL_50;
  if ( v51 )
    v18 = 48 * v12 - 0x58000000000LL;
  else
    v18 = 0LL;
  v19 = 0LL;
  if ( !v15 )
    goto LABEL_36;
  v20 = v57;
  v21 = (_BYTE *)(v18 + 34);
  while ( MI_IS_PFN(v19 + v20) )
  {
    if ( !v18 )
      goto LABEL_34;
    if ( (*v21 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(v21 - 34, v22, v13);
      v20 = v57;
      v15 = v65;
      v22 = v53;
    }
    IsConstant = v55;
    if ( (unsigned __int8)*v21 >> 6 != v22 )
      goto LABEL_35;
    v10 = v22;
LABEL_32:
    ++v19;
    v21 += 48;
    if ( v19 >= v15 )
      goto LABEL_35;
  }
  if ( !v18 )
  {
    if ( v19 )
    {
      IsConstant = v55;
    }
    else
    {
      IsConstant = MiIoSpaceIsConstant(v20, v15, v13);
      v55 = IsConstant;
      if ( IsConstant )
      {
        v10 = *(_DWORD *)(IsConstant + 16);
        v19 = v15;
        goto LABEL_35;
      }
    }
    goto LABEL_32;
  }
LABEL_34:
  IsConstant = v55;
LABEL_35:
  v12 = v57;
  v16 = v51;
LABEL_36:
  if ( v19 == v15 )
  {
    if ( v16 || IsConstant )
    {
      v25 = 0LL;
    }
    else
    {
      if ( (int)MiReferenceIoPages(1, v12, v15, v59, (__int64)&v57, (__int64)&v58) < 0 )
      {
        v24 = v54;
        goto LABEL_52;
      }
      if ( (((_DWORD)v57 - 1) & (unsigned int)v57) != 0 )
      {
        MiDereferenceIoPages(1LL, v12, v54, v23);
        v24 = v54;
        goto LABEL_52;
      }
      LODWORD(v15) = v54;
      v25 = v58;
      v10 = *(unsigned __int16 *)(*(_QWORD *)(v58 + 48) + 2 * (v12 - *(_QWORD *)(v58 + 40))) >> 14;
    }
    v27 = MiMapWithLargePages(v12, v15, v4, v10, 9);
    if ( v27 )
      goto LABEL_103;
    if ( !v51 && !v55 )
      MiDereferenceIoPages(1LL, v12, v54, v28);
    LODWORD(v15) = v54;
  }
LABEL_50:
  v24 = v15;
  if ( v60 == 1 )
  {
    v24 = v15 + 1;
    if ( (_DWORD)v15 == -1 )
      return 0LL;
  }
LABEL_52:
  v29 = (unsigned __int64)MiReservePtes((__int64)&qword_14034FC70, v24, v13);
  v30 = (_QWORD *)v29;
  if ( !v29 )
    return 0LL;
  v62 = (_QWORD *)v29;
  ProtectionPfnCompatible = v4 & 7;
  v61 += (__int64)(v29 << 25) >> 16;
  if ( v53 )
  {
    if ( v53 == 2 )
      ProtectionPfnCompatible |= 0x18u;
  }
  else
  {
    ProtectionPfnCompatible |= 8u;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v29) )
    v32 |= 0x100uLL;
  v33 = v32 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
  if ( v32 & 0x800 | ((word_14034EC18 & 1) << 8) & 0x800 )
    v33 |= 0x42uLL;
  v63 = 0LL;
  v34 = 48 * v12 - 0x58000000000LL;
  v56 = 0LL;
  v52 = v34;
  v58 = 0LL;
  v13 = 0LL;
  v64 = 0LL;
  v35 = 0LL;
  while ( 2 )
  {
    v26 = 0xFFFFFFFFF000LL;
    if ( v13 )
    {
      v36 = (v35 ^ (v12 << 12)) & 0xFFFFFFFFF000LL;
      goto LABEL_76;
    }
    if ( MI_IS_PFN(v12) )
    {
      v34 = v52;
      v35 = v33;
      if ( !*(_WORD *)(v52 + 32) )
      {
        MiShowBadMapper(v12);
        v34 = v52;
      }
      if ( (*(_BYTE *)(v34 + 34) & 0xC0) == 0xC0 )
      {
        MiAssignInitialPageAttribute(v34, v53, v37);
        v34 = v52;
      }
      if ( *(unsigned __int8 *)(v34 + 34) >> 6 == v53 )
      {
        v13 = 0xFFFFFFFFF000LL;
      }
      else
      {
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, v34);
        if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)v30) )
          v40 |= 0x100uLL;
        v26 = v40 & 0xFFFFFFFFFFFFFE7FuLL;
        v34 = v52;
        v35 = v26 | ((unsigned __int64)(word_14034EC18 & 1) << 8);
        if ( (v35 & 0x800) != 0 )
          v35 |= 0x42uLL;
      }
      v36 = v13 & (v35 ^ (v12 << 12));
LABEL_76:
      v35 ^= v36;
    }
    else
    {
      if ( v30 == v62 && (v41 = MiIoSpaceIsConstant(v12, v38, v37), (v64 = v41) != 0) )
      {
        v42 = *(_DWORD *)(v41 + 16);
        v59 = v42;
      }
      else
      {
        v43 = v63;
        if ( !v63 )
        {
          v44 = v12;
          v43 = 0LL;
          do
          {
            if ( MI_IS_PFN(v44) )
              break;
            ++v43;
            if ( v46 == 1 )
              break;
            v44 = v45 + 1;
          }
          while ( (v44 & 0x1FF) != 0 );
          if ( (int)MiReferenceIoPages(1, v12, v43, v59, 0LL, (__int64)&v58) < 0 )
          {
            v49 = v65;
            MiZeroAndFlushPtes(v61, v65);
            MiReleasePtes((__int64)&qword_14034FC70, v62, v49);
            return 0LL;
          }
          v39 = v58;
        }
        v47 = *(_QWORD *)(v39 + 48);
        v63 = v43 - 1;
        v56 = v58;
        v42 = *(unsigned __int16 *)(v47 + 2 * (v12 - *(_QWORD *)(v39 + 40))) >> 14;
      }
      ProtectionPfnCompatible &= 7u;
      if ( v42 )
      {
        if ( v42 == 2 )
          ProtectionPfnCompatible |= 0x38u;
      }
      else
      {
        ProtectionPfnCompatible |= 0x28u;
      }
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)v30) )
        v48 |= 0x100uLL;
      v26 = v48 & 0xFFFFFFFFFFFFFE7FuLL;
      v34 = v52;
      v35 = v26 | ((unsigned __int64)(word_14034EC18 & 1) << 8);
      if ( (v35 & 0x800) != 0 )
        v35 |= 0x42uLL;
    }
    *v30 = v35;
    if ( (unsigned __int64)(v30 + 0x12090482600LL) <= 0x7F8 )
    {
      MiWritePteShadow(v30, v35);
      v34 = v52;
    }
    v34 += 48LL;
    ++v30;
    v52 = v34;
    ++v12;
    if ( --v54 )
    {
      v13 = v64;
      continue;
    }
    break;
  }
  v27 = v61;
  v25 = v56;
LABEL_103:
  if ( v25 )
    MiMappingHasIoReferences(v27, v26, v13);
  if ( (dword_1403D00E0 & 1) != 0 )
  {
    v73 = v67;
    v69 = v27;
    v70 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v72 = a1 & 0xFFF;
    if ( v25 )
      v9 = 1;
    if ( v60 == 1 )
      v9 |= 2u;
    v71 = v66;
    MiInsertPteTracker(v68, 1LL, v9, v53);
  }
  return v27;
}
