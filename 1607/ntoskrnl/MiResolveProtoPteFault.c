/*
 * XREFs of MiResolveProtoPteFault @ 0x140040EE0
 * Callers:
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 * Callees:
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     MiPfnReferenceCountIsZero @ 0x14002400C (MiPfnReferenceCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x14003A610 (MiResolveDemandZeroFault.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14004CD60 (MiRemoveLockedPageCharge.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiIsPfnFileOnly @ 0x14004E500 (MiIsPfnFileOnly.c)
 *     MiAllowGuardFault @ 0x1400A3950 (MiAllowGuardFault.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 *     MiResolveMappedFileFault @ 0x1400E4740 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x1401F24F0 (MiInvalidPteConforms.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x1401F2760 (MiReverseSwizzleInvalidPte.c)
 *     MiMakeImagePageOk @ 0x1401F6D64 (MiMakeImagePageOk.c)
 */

__int64 MiResolveProtoPteFault(__int64 a1, unsigned __int64 a2, __int64 *a3, __int64 a4, char a5, ...)
{
  unsigned __int64 *v5; // r15
  int v6; // esi
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // rdi
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // r11
  ULONG_PTR v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int PfnPriority; // eax
  __int64 v24; // rdx
  __int64 result; // rax
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  _BYTE *PrototypePteDirect; // rbx
  int v30; // r11d
  __int64 v31; // r10
  unsigned __int64 Address; // rax
  char v33; // r10
  int ImagePageOk; // ebx
  __int64 v35; // rdx
  bool v36; // zf
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rbx
  int v40; // esi
  unsigned __int64 v41; // r8
  int v42; // edx
  unsigned __int16 v43; // cx
  int *v44; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v47; // eax
  unsigned __int64 v48; // rsi
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r11
  __int16 v52; // ax
  __int64 v53; // rdx
  char v54; // r9
  __int64 v55; // r10
  __int16 v56; // r11
  __int64 v57; // rbp
  unsigned __int64 v58; // r10
  int v59; // eax
  void *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdi
  char v63; // bl
  unsigned __int64 v64; // rbx
  __int64 v65; // rcx
  unsigned __int64 v66; // r13
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  char v70; // si
  char v71; // cl
  int v72; // esi
  __int64 v73; // rcx
  __int64 DemandZeroPte; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  unsigned __int64 v77; // r10
  unsigned __int64 v79; // r10
  int v80; // eax
  void *v81; // rax
  __int64 v82; // [rsp+28h] [rbp-90h]
  int v83; // [rsp+50h] [rbp-68h] BYREF
  int v84; // [rsp+54h] [rbp-64h] BYREF
  __int64 v85; // [rsp+58h] [rbp-60h]
  __int64 v86; // [rsp+60h] [rbp-58h] BYREF
  __int64 v87; // [rsp+68h] [rbp-50h]
  __int64 v88; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int64 v89; // [rsp+78h] [rbp-40h]
  unsigned __int64 *v93; // [rsp+E8h] [rbp+30h] BYREF
  va_list va; // [rsp+E8h] [rbp+30h]
  __int64 v95; // [rsp+F0h] [rbp+38h]
  __int64 v96; // [rsp+F8h] [rbp+40h]
  _QWORD *v97; // [rsp+100h] [rbp+48h]
  va_list va1; // [rsp+108h] [rbp+50h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v93 = va_arg(va1, unsigned __int64 *);
  v95 = va_arg(va1, _QWORD);
  v96 = va_arg(va1, _QWORD);
  v97 = va_arg(va1, _QWORD *);
  v5 = v93;
  v85 = a1;
  v6 = a4;
  v8 = MI_GET_PAGE_FRAME_FROM_PTE((((unsigned __int64)v93 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = v95;
  v10 = 48 * v8 - 0x58000000000LL;
  v11 = v95 & 1;
  v87 = v11;
  if ( (v95 & 1) == 0 || (v12 = v95 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v95 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v12 = 0LL;
  while ( 1 )
  {
    v13 = MI_READ_PTE_LOCK_FREE(v5);
    v88 = v13;
    if ( (v13 & 1) != 0 )
    {
      v14 = MI_GET_PAGE_FRAME_FROM_PTE(&v88);
      goto LABEL_10;
    }
    if ( (v13 & 0x400) != 0 || (v13 & 0x800) == 0 )
      break;
    if ( (unsigned int)MiInvalidPteConforms(v13) )
    {
      v14 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v88);
LABEL_10:
      if ( v14 <= qword_140326AD0 && (!MmPhysicalMemoryBlock || (*(_QWORD *)(v15 + 48 * v14) & v16) != 0) )
      {
        v17 = 48 * v14 - 0x58000000000LL;
        LODWORD(v93) = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx((unsigned __int64 **)va);
            while ( (*(_QWORD *)(v17 + 24) & 0x8000000000000000uLL) != 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) );
          v6 = a4;
        }
        v18 = MI_READ_PTE_LOCK_FREE(v5);
        if ( v18 == v88 )
          goto LABEL_20;
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  v17 = 0LL;
LABEL_20:
  v19 = MI_READ_PTE_LOCK_FREE(v5);
  v86 = v19;
  if ( (v19 & 1) == 0 )
  {
    if ( !v19 )
    {
      LOBYTE(v20) = 17;
      MiUnlockProtoPoolPage(v10, v20);
      return 3221225477LL;
    }
    v48 = MI_READ_PTE_LOCK_FREE(a3);
    if ( (unsigned int)MiIsPrototypePteVadLookup(v48) )
    {
      v50 = (v48 >> 5) & 0x1F;
LABEL_104:
      v52 = MiReverseSwizzleInvalidPte(v51, v28, v49, v50);
      if ( (v52 & 0x400) != 0
        || (v52 & 0x800) != 0
        || (v52 & 4) != 0
        || (v54 & 5) != 5
        || !v55 && (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v86) & 5) == 4 )
      {
        v57 = a4;
      }
      else
      {
        v57 = a4;
        if ( (*(_BYTE *)(a4 + 184) & 7) != 0
          || (v56 = v86, !KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[12]) )
        {
          if ( (MiFlags & 0x4000) == 0 || (v58 = a2, a2 < 0xFFFF800000000000uLL) || (v54 & 2) == 0 )
          {
            v84 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v84);
                while ( (*(_QWORD *)(v10 + 24) & 0x8000000000000000uLL) != 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
              v9 = v95;
            }
            *(_BYTE *)(v10 + 34) &= ~0x20u;
            if ( (unsigned int)MiRemoveLockedPageCharge(v10) )
              MiPfnReferenceCountIsZero(v10, (v10 + 0x58000000000LL) / 48);
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v12
              && (!v11
               || *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) != 1
               || (*(_DWORD *)((v9 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0) )
            {
              return 0LL;
            }
            if ( v11 )
            {
              if ( *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) != 1 && *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) != 3 )
                goto LABEL_159;
LABEL_157:
              v66 = a2;
              if ( a2 >= 0xFFFF800000000000uLL )
                return 3221225477LL;
              goto LABEL_160;
            }
            if ( v9 )
            {
              v59 = *(unsigned __int16 *)(v9 + 368);
              if ( v59 == 16 )
              {
                v60 = &ExpInterlockedPopEntrySListFault;
              }
              else
              {
                if ( v59 != 51 )
                  goto LABEL_159;
                v60 = (void *)KeUserPopEntrySListFault;
              }
              if ( *(void **)(v9 + 360) == v60 )
                goto LABEL_157;
            }
LABEL_159:
            v66 = a2;
LABEL_160:
            if ( (unsigned int)MiIsPrototypePteVadLookup(v48) )
              v70 = (v48 >> 5) & 0x1F;
            else
              v70 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v86);
            v71 = v70;
            v72 = v70 & 0x18;
            v73 = v71 & 2 | 4u;
            if ( v72 == 8 )
            {
              v73 = (unsigned int)v73 | 8;
            }
            else if ( v72 == 24 )
            {
              v73 = (unsigned int)v73 | 0x18;
            }
            DemandZeroPte = MiMakeDemandZeroPte(v73, v67, v68, v69);
            *a3 = DemandZeroPte;
            if ( (unsigned int)MiPteInShadowRange(a3, DemandZeroPte) )
              MiWritePteShadow(v76, v75);
            return MiResolveDemandZeroFault(v66, v77, 0LL, a4, v9, v85, a5);
          }
LABEL_172:
          if ( (v56 & 0x400) != 0 )
          {
            if ( !v97 )
            {
LABEL_174:
              LOBYTE(v53) = 17;
              MiUnlockProtoPoolPage(v10, v53);
              return 3221226548LL;
            }
            return (unsigned int)MiResolveMappedFileFault(v58, (_DWORD)v5, v10, v57, v9, (__int64)v97);
          }
          if ( (v56 & 0x800) != 0 )
            return (unsigned int)MiResolveTransitionFault(v58, v5, v10, v57, v9, v85, a5, v96, v97);
          if ( (MI_READ_PTE_LOCK_FREE(&v86) & 4) != 0 )
          {
            if ( !v97 )
              goto LABEL_174;
            return (unsigned int)MiResolvePageFileFault(v79, (_DWORD)v5, v10, v57, v9, (__int64)v97);
          }
          if ( v12
            && (!v11
             || *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) != 1
             || (*(_DWORD *)((v9 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0) )
          {
            LOBYTE(v53) = 17;
            MiUnlockProtoPoolPage(v10, v53);
            ImagePageOk = 0;
            goto LABEL_197;
          }
          if ( v11 )
          {
            if ( *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) != 1 && *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) != 3 )
              goto LABEL_196;
          }
          else
          {
            if ( !v9 )
              goto LABEL_196;
            v80 = *(unsigned __int16 *)(v9 + 368);
            if ( v80 == 16 )
            {
              v81 = &ExpInterlockedPopEntrySListFault;
            }
            else
            {
              if ( v80 != 51 )
                goto LABEL_196;
              v81 = (void *)KeUserPopEntrySListFault;
            }
            if ( *(void **)(v9 + 360) != v81 )
              goto LABEL_196;
          }
          if ( v79 >= 0xFFFF800000000000uLL )
          {
            LOBYTE(v53) = 17;
            MiUnlockProtoPoolPage(v10, v53);
            ImagePageOk = -1073741819;
            goto LABEL_197;
          }
LABEL_196:
          ImagePageOk = MiResolveDemandZeroFault(v79, (unsigned __int64)v5, v10, v57, v9, v85, a5);
LABEL_197:
          if ( v97 )
            *v97 = 0LL;
          return (unsigned int)ImagePageOk;
        }
      }
      v58 = a2;
      goto LABEL_172;
    }
    if ( (v48 & 8) != 0 )
      goto LABEL_104;
    MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v86);
    v61 = MI_READ_PTE_LOCK_FREE(v5);
    v62 = v61;
    v89 = v61;
    if ( (v61 & 1) != 0 )
    {
      if ( v85 && (v61 & 0x800) == 0 && (v61 & 0x200) == 0 )
      {
        ImagePageOk = -1073741819;
        goto LABEL_151;
      }
LABEL_154:
      v11 = v87;
      goto LABEL_104;
    }
    v28 = v85;
    if ( v85 )
      v28 = 1LL;
    v63 = v50;
    if ( MiReadWrite[v50 & 7] - (char)v28 >= 10 )
    {
      if ( (v50 & 0xFFFFFFF8) != 0x10 || v87 && *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
        goto LABEL_154;
      if ( (unsigned int)MiAllowGuardFault(v9) )
      {
        v64 = v62 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v63 & 0xF));
        v89 = v64;
        *v5 = v64;
        if ( (unsigned int)MiPteInShadowRange(v5, v28) )
          MiWritePteShadow(v65, v64);
        ImagePageOk = -2147483647;
      }
      else
      {
        ImagePageOk = -1073741819;
      }
    }
    else
    {
      ImagePageOk = -1073741819;
    }
LABEL_151:
    if ( !v17 )
    {
LABEL_153:
      LOBYTE(v28) = 17;
      MiUnlockProtoPoolPage(v10, v28);
      return (unsigned int)ImagePageOk;
    }
LABEL_152:
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_153;
  }
  if ( v12 )
  {
    PfnPriority = MiGetPfnPriority(v17);
    if ( (unsigned int)v24 > PfnPriority )
      *(_BYTE *)(v17 + 35) ^= (v24 ^ *(_BYTE *)(v17 + 35)) & 7;
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v24) = 17;
    MiUnlockProtoPoolPage(v10, v24);
    return 0LL;
  }
  v26 = a2;
  if ( a2 < 0xFFFF800000000000uLL || (MiFlags & 0x4000) != 0 )
  {
    v27 = *(_QWORD *)(v17 + 40);
    if ( (v27 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v17 + 16) & 0x400LL) != 0 && ((v27 >> 54) & 7) != 3 )
    {
      PrototypePteDirect = (_BYTE *)MiGetPrototypePteDirect(*(_QWORD *)(v17 + 16));
      v21 = *(_QWORD *)PrototypePteDirect;
      if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) != 0 )
      {
        v31 = *(_QWORD *)(*(_QWORD *)(v21 + 96) + 8LL);
        if ( v31 )
        {
          if ( (v31 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v31 & 3) != 2 )
          {
            if ( (v28 & 0x80000) != 0 && (*(_DWORD *)(v21 + 92) & 0xC000000) != 0
              || (Address = MiLocateAddress(a2)) == 0
              || (v28 = *(unsigned int *)(Address + 48), (*(_DWORD *)(Address + 48) & 7) != 2)
              || (v28 & 0xF8) != 8
              && ((*(_DWORD *)(Address + 64) & 0x8000000) == 0 || (v33 & 4) != 0)
              && ((MiFlags & 0x400) == 0 || (PrototypePteDirect[34] & 2) == 0) )
            {
              if ( v11 && *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
              {
                ImagePageOk = -1073740748;
                goto LABEL_152;
              }
              ImagePageOk = MiMakeImagePageOk(a2, (int)v5, v30, v6, v17, v10);
              if ( ImagePageOk < 0 )
                goto LABEL_152;
            }
          }
        }
      }
    }
  }
  *(_QWORD *)(v17 + 24) ^= (((*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(v17 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v83 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v83);
      while ( (*(_QWORD *)(v10 + 24) & 0x8000000000000000uLL) != 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
    v26 = a2;
  }
  *(_BYTE *)(v10 + 34) &= ~0x20u;
  v35 = *(unsigned __int16 *)(v10 + 32);
  if ( !(_WORD)v35 )
    KeBugCheckEx(
      0x4Eu,
      0x9AuLL,
      (v10 + 0x58000000000LL) / 48,
      *(_BYTE *)(v10 + 34) & 7,
      *(unsigned __int16 *)(v10 + 32));
  v36 = (_WORD)v35 == 1;
  LOWORD(v35) = v35 - 1;
  *(_WORD *)(v10 + 32) = v35;
  if ( v36 && (unsigned int)MiIsPfnFileOnly(v10, v35, v21, v22) )
    goto LABEL_96;
  v37 = *(_QWORD *)(v10 + 40);
  if ( (v37 & 0x10000000000000LL) == 0 )
  {
    v38 = *(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v39 = 1LL;
    if ( !(_WORD)v35 )
    {
      v40 = 1;
      goto LABEL_65;
    }
    if ( (_WORD)v35 != 1 )
    {
      if ( (_WORD)v35 == 2 && v38 )
      {
LABEL_62:
        if ( (*(_BYTE *)(v10 + 34) & 8) != 0 )
          goto LABEL_63;
      }
      goto LABEL_97;
    }
    if ( !v38 )
      goto LABEL_62;
LABEL_63:
    v40 = 0;
LABEL_65:
    v41 = *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL;
    if ( (v41 > 0xFFFFF6BFFFFFFF78uLL || v41 < 0xFFFFF68000000000uLL)
      && ((*(unsigned __int8 *)(v10 + 35) >> 5) & 1) != 0 )
    {
      *(_BYTE *)(v10 + 35) &= ~0x20u;
      goto LABEL_95;
    }
    v42 = 0;
    if ( (v37 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v10 + 16) & 0x400LL) != 0 )
    {
      v42 = 1;
    }
    else if ( v41 <= 0xFFFFF6BFFFFFFF78uLL
           && v41 >= 0xFFFFF68000000000uLL
           && ((*(unsigned __int8 *)(v10 + 35) >> 5) & 1) != 0 )
    {
      v42 = 1;
    }
    else if ( v40 == 1 && (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) != 0 )
    {
      v42 = 1;
    }
    v43 = (HIDWORD(v37) >> 8) & 0x3FF;
    if ( v43 == 1023 )
      v44 = MiSystemPartition;
    else
      v44 = *(int **)(qword_140327038 + 8LL * v43);
    if ( v42 == 1 )
      MiReturnCommit(v44, 1LL);
    if ( v44 != MiSystemPartition )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 816, 1uLL);
      goto LABEL_95;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        while ( 1 )
        {
          v47 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v36 = (_DWORD)CachedResidentAvailable == v47;
          LODWORD(CachedResidentAvailable) = v47;
          if ( v36 )
            break;
          if ( v47 == -1 || (unsigned __int64)(v47 + 1LL) > 0x100 )
            goto LABEL_90;
        }
LABEL_95:
        if ( v40 )
LABEL_96:
          MiPfnReferenceCountIsZero(v10, (v10 + 0x58000000000LL) / 48);
        goto LABEL_97;
      }
LABEL_90:
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v39 = (int)CachedResidentAvailable - 192 + 1LL;
      }
    }
    _InterlockedExchangeAdd64(&qword_140324F00, v39);
    goto LABEL_95;
  }
LABEL_97:
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __incgsdword(0x2E18u);
  LODWORD(v82) = 0;
  result = MiCompleteProtoPteFault(a4, a5, v26, v86, v85, v82, v9);
  if ( (int)result >= 0 )
    return 272LL;
  return result;
}
