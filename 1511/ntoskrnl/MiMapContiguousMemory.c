/*
 * XREFs of MiMapContiguousMemory @ 0x1400C0CB8
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1400BD4F4 (MiAllocateContiguousMemory.c)
 *     MmMapIoSpaceEx @ 0x1400C0C7C (MmMapIoSpaceEx.c)
 *     MiCopyLargeVad @ 0x14062B30C (MiCopyLargeVad.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiZeroAndFlushPtes @ 0x1400C097C (MiZeroAndFlushPtes.c)
 *     MiDereferenceIoPages @ 0x1400C1300 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x1400C16A0 (MiReferenceIoPages.c)
 *     MiMappingHasIoReferences @ 0x1400C1BA8 (MiMappingHasIoReferences.c)
 *     MiIoSpaceIsConstant @ 0x1400C1C20 (MiIoSpaceIsConstant.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400FE304 (MiMakeProtectionPfnCompatible.c)
 *     MiMapWithLargePages @ 0x140124B88 (MiMapWithLargePages.c)
 *     MiAssignInitialPageAttribute @ 0x14013F0EC (MiAssignInitialPageAttribute.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiShowBadMapper @ 0x1401CEA7C (MiShowBadMapper.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiInsertPteTracker @ 0x1401E09F8 (MiInsertPteTracker.c)
 */

unsigned __int64 __fastcall MiMapContiguousMemory(__int64 a1, unsigned __int64 a2, unsigned int a3, int a4)
{
  unsigned int v4; // r15d
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // r14d
  unsigned int v10; // r13d
  __int64 v11; // r12
  unsigned __int64 v12; // r8
  int v13; // r9d
  int v14; // r10d
  BOOL v15; // ecx
  __int64 IsConstant; // rax
  __int64 v17; // rbx
  unsigned __int64 v18; // rdi
  _BYTE *v19; // r10
  unsigned int v20; // r11d
  unsigned int v21; // edx
  __int64 v22; // rbx
  __int64 v23; // rdx
  unsigned __int64 v24; // r13
  ULONG_PTR v25; // rax
  __int64 v26; // r9
  _QWORD *v27; // r12
  unsigned int ProtectionPfnCompatible; // r15d
  unsigned __int64 ValidKernelPte; // rax
  __int64 v30; // rdi
  unsigned __int64 v31; // r10
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r10
  __int64 v38; // r11
  __int64 v39; // r9
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  int v42; // ecx
  __int64 v43; // rbx
  unsigned __int64 v44; // r9
  __int64 v45; // r9
  int v46; // r10d
  __int64 v47; // r11
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  bool v52; // zf
  int v54; // [rsp+30h] [rbp-99h]
  BOOL v55; // [rsp+38h] [rbp-91h]
  __int64 v56; // [rsp+38h] [rbp-91h]
  __int64 v57; // [rsp+40h] [rbp-89h]
  __int64 v58; // [rsp+40h] [rbp-89h]
  unsigned int v59; // [rsp+48h] [rbp-81h]
  int v60; // [rsp+4Ch] [rbp-7Dh]
  __int64 v61; // [rsp+50h] [rbp-79h] BYREF
  __int64 v62; // [rsp+58h] [rbp-71h]
  unsigned __int64 v63; // [rsp+60h] [rbp-69h]
  int v64; // [rsp+68h] [rbp-61h]
  __int64 v65; // [rsp+70h] [rbp-59h]
  _BYTE *v66; // [rsp+78h] [rbp-51h] BYREF
  __int64 v67; // [rsp+80h] [rbp-49h]
  _QWORD *v68; // [rsp+88h] [rbp-41h]
  unsigned __int64 v69; // [rsp+90h] [rbp-39h]
  unsigned __int64 v70; // [rsp+98h] [rbp-31h]
  __int64 v71; // [rsp+A0h] [rbp-29h]
  char v72[24]; // [rsp+A8h] [rbp-21h] BYREF
  unsigned __int64 v73; // [rsp+C0h] [rbp-9h]
  unsigned __int64 v74; // [rsp+C8h] [rbp-1h]
  int v75; // [rsp+D0h] [rbp+7h]
  int v76; // [rsp+D4h] [rbp+Bh]
  __int64 v77; // [rsp+D8h] [rbp+Fh]

  v64 = a4;
  v70 = a2;
  v4 = a3;
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
  v54 = 3;
  if ( v7 == 1 )
  {
    v8 = 0;
  }
  else if ( v7 == 3 && (a3 & 7) != 0 )
  {
    v8 = 2;
  }
  v60 = MiPlatformCacheAttributes[v8 + 6];
  v59 = MiPlatformCacheAttributes[v8];
  v65 = a1 & 0xFFF;
  v69 = (a2 + v65 + 4095) >> 12;
  v10 = v69;
  v63 = v69;
  v71 = a1 >> 12;
  v11 = a1 >> 12;
  v62 = a1 >> 12;
  v55 = MI_IS_PFN(a1 >> 12);
  v15 = v55;
  if ( (v4 & 2) != 0 && (MiFlags & 0x10000) != 0 )
    v4 &= ~2u;
  v61 = 0LL;
  IsConstant = 0LL;
  v57 = 0LL;
  if ( (a1 & 0x1FFFFF) != 0 || a2 < 0x200000 || v14 )
    goto LABEL_49;
  if ( v55 )
    v17 = 48 * v11 - 0x58000000000LL;
  else
    v17 = 0LL;
  v18 = 0LL;
  if ( !v69 )
    goto LABEL_36;
  v66 = (_BYTE *)(v17 + 34);
  while ( MI_IS_PFN(v18 + v11) )
  {
    if ( !v17 )
      goto LABEL_34;
    if ( (*v19 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(v19 - 34, v20, v12);
      v13 = v54;
      v19 = v66;
      v20 = v59;
    }
    IsConstant = v57;
    if ( (unsigned __int8)*v19 >> 6 != v20 )
      goto LABEL_35;
    v13 = v20;
    v54 = v20;
LABEL_32:
    ++v18;
    v66 = v19 + 48;
    if ( v18 >= v69 )
      goto LABEL_35;
  }
  if ( !v17 )
  {
    if ( v18 )
    {
      IsConstant = v57;
    }
    else
    {
      IsConstant = MiIoSpaceIsConstant(a1 >> 12, v69, v12);
      v57 = IsConstant;
      if ( IsConstant )
      {
        v13 = *(_DWORD *)(IsConstant + 16);
        v18 = v69;
        goto LABEL_35;
      }
    }
    goto LABEL_32;
  }
LABEL_34:
  IsConstant = v57;
LABEL_35:
  v15 = v55;
LABEL_36:
  if ( v18 != v69 )
    goto LABEL_49;
  if ( v15 || IsConstant )
  {
    v22 = 0LL;
    goto LABEL_45;
  }
  if ( (int)MiReferenceIoPages(1, a1 >> 12, v69, v60, (__int64)&v66, (__int64)&v61) < 0 )
    goto LABEL_40;
  if ( (((_DWORD)v66 - 1) & (unsigned int)v66) == 0 )
  {
    v22 = v61;
    v13 = *(unsigned __int16 *)(*(_QWORD *)(v61 + 48) + 2 * (v11 - *(_QWORD *)(v61 + 40))) >> 14;
LABEL_45:
    v24 = MiMapWithLargePages(a1 >> 12, v10, v4, v13, 9);
    if ( v24 )
      goto LABEL_96;
    v10 = v63;
    if ( !v55 && !v57 )
      MiDereferenceIoPages(1LL, a1 >> 12);
LABEL_49:
    v21 = v10;
    if ( v64 != 1 )
      goto LABEL_51;
    v21 = v10 + 1;
    if ( v10 != -1 )
      goto LABEL_51;
    return 0LL;
  }
  MiDereferenceIoPages(1LL, a1 >> 12);
LABEL_40:
  v21 = v10;
LABEL_51:
  v25 = MiReservePtes((__int64)&qword_1402FF7B0, v21, v12);
  v27 = (_QWORD *)v25;
  if ( !v25 )
    return 0LL;
  v68 = (_QWORD *)v25;
  ProtectionPfnCompatible = v4 & 7;
  v24 = v65 + ((__int64)(v25 << 25) >> 16);
  if ( v59 )
  {
    if ( v59 == 2 )
      ProtectionPfnCompatible |= 0x18u;
  }
  else
  {
    ProtectionPfnCompatible |= 8u;
  }
  ValidKernelPte = MiMakeValidKernelPte(-1LL, ProtectionPfnCompatible, v25, v26);
  v30 = ValidKernelPte;
  if ( (ValidKernelPte & 0x800) != 0 )
    v30 = ValidKernelPte | 0x42;
  v31 = v62;
  v32 = 0LL;
  v67 = 0LL;
  v33 = 0LL;
  v56 = 0LL;
  v61 = 0LL;
  v65 = 0LL;
  v58 = 48 * v62 - 0x58000000000LL;
  while ( 2 )
  {
    if ( v33 )
    {
      v34 = v31;
      goto LABEL_70;
    }
    if ( MI_IS_PFN(v31) )
    {
      v32 = v30;
      if ( !*(_WORD *)(v38 + 32) )
      {
        MiShowBadMapper(v37);
        v38 = v58;
      }
      if ( (*(_BYTE *)(v38 + 34) & 0xC0) == 0xC0 )
      {
        MiAssignInitialPageAttribute(v38, v59, v35);
        v38 = v58;
      }
      if ( *(unsigned __int8 *)(v38 + 34) >> 6 != v59 )
      {
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, v38, v35);
        v40 = MiMakeValidKernelPte(v62, ProtectionPfnCompatible, (unsigned __int64)v27, v39);
        v32 = v40;
        if ( (v40 & 0x800) != 0 )
          v32 = v40 | 0x42;
      }
      v34 = v62;
LABEL_70:
      v32 ^= (v32 ^ (v34 << 12)) & 0xFFFFFFFFF000LL;
    }
    else
    {
      if ( v27 == v68 && (v41 = MiIoSpaceIsConstant(v37, v36, v35), (v65 = v41) != 0) )
      {
        v42 = *(_DWORD *)(v41 + 16);
        v60 = v42;
      }
      else
      {
        v43 = v67;
        if ( v67 )
        {
          v48 = v56;
        }
        else
        {
          v43 = 0LL;
          v44 = v37;
          do
          {
            if ( MI_IS_PFN(v44) )
              break;
            ++v43;
            if ( v47 == 1 )
              break;
            v44 = v45 + 1;
          }
          while ( (v44 & 0x1FF) != 0 );
          if ( (int)MiReferenceIoPages(1, v46, v43, v60, 0LL, (__int64)&v61) < 0 )
          {
            MiZeroAndFlushPtes(v24, (unsigned int)(v27 - v68));
            MiReleasePtes((__int64)&qword_1402FF7B0, v68, v69);
            return 0LL;
          }
          v48 = v61;
          v37 = v62;
        }
        v49 = v37 - *(_QWORD *)(v48 + 40);
        v50 = *(_QWORD *)(v48 + 48);
        v67 = v43 - 1;
        v56 = v61;
        v42 = *(unsigned __int16 *)(v50 + 2 * v49) >> 14;
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
      v51 = MiMakeValidKernelPte(v37, ProtectionPfnCompatible, (unsigned __int64)v27, v36);
      v32 = v51;
      if ( (v51 & 0x800) != 0 )
        v32 = v51 | 0x42;
    }
    *v27 = v32;
    if ( (unsigned int)MiPteInShadowRange(v27) )
      MiWritePteShadow(v27, v32);
    ++v27;
    v31 = v62 + 1;
    v52 = v63 == 1;
    v58 += 48LL;
    --v63;
    ++v62;
    if ( !v52 )
    {
      v33 = v65;
      continue;
    }
    break;
  }
  v22 = v56;
LABEL_96:
  if ( v22 )
    MiMappingHasIoReferences(v24, v23, v12);
  if ( (dword_1403810F0 & 1) != 0 )
  {
    v77 = v71;
    v73 = v24;
    v74 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v76 = a1 & 0xFFF;
    if ( v22 )
      v9 = 1;
    if ( v64 == 1 )
      v9 |= 2u;
    v75 = v70;
    MiInsertPteTracker(v72, 1LL, v9, v59);
  }
  return v24;
}
