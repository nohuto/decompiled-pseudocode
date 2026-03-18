/*
 * XREFs of MiResolveProtoPteFault @ 0x1400C5730
 * Callers:
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 * Callees:
 *     MiCanPageMove @ 0x14005ABF0 (MiCanPageMove.c)
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF @ 0x1400B6C70 (MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiPfnReferenceCountIsZero @ 0x1400E3118 (MiPfnReferenceCountIsZero.c)
 *     MiAllowGuardFault @ 0x1401114C4 (MiAllowGuardFault.c)
 *     KeInvalidAccessAllowed @ 0x140111530 (KeInvalidAccessAllowed.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiMakeImagePageOk @ 0x14021712C (MiMakeImagePageOk.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiResolveProtoPteFault(
        _KPROCESS *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        unsigned __int8 a5,
        ULONG_PTR a6,
        __int64 a7,
        __int64 *a8)
{
  ULONG_PTR v8; // r13
  __int64 v9; // r8
  _KPROCESS *Process; // rcx
  unsigned __int64 PteShadow; // rdx
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rbp
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  BOOL v25; // eax
  __int64 v26; // rsi
  unsigned int v27; // edi
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdi
  char v31; // dl
  unsigned int v32; // ecx
  unsigned int v33; // eax
  __int64 result; // rax
  unsigned __int64 v35; // rcx
  char v36; // r8
  unsigned __int64 v37; // r11
  _BYTE *PrototypePteDirect; // r14
  __int64 v39; // r10
  __int64 v40; // rbx
  _QWORD *Address; // rax
  int v42; // edx
  __int64 v43; // r14
  unsigned int ImagePageOk; // ebx
  __int64 v45; // r15
  unsigned int v46; // ebx
  __int16 v47; // ax
  char v48; // cl
  __int64 v49; // r9
  __int16 v50; // ax
  __int64 v51; // rdx
  int v52; // esi
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // r10
  __int64 v55; // rcx
  int v56; // edx
  unsigned __int16 v57; // cx
  __int16 *v58; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v60; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v62; // zf
  signed __int32 v63; // eax
  unsigned __int64 v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // r9
  _KPROCESS *v67; // r8
  __int64 v68; // r10
  int v69; // r11d
  char v70; // r9
  __int64 v71; // r10
  unsigned __int64 v72; // r9
  __int16 v73; // ax
  __int64 v74; // r8
  __int64 v75; // r9
  char v76; // r11
  volatile signed __int32 *v77; // r10
  unsigned __int64 v78; // rsi
  unsigned int v79; // edi
  __int64 v80; // rdi
  char v81; // bl
  char v82; // cl
  int v83; // ebx
  __int64 v84; // rcx
  __int64 DemandZeroPte; // rax
  __int64 v87; // r8
  unsigned __int64 v89; // [rsp+50h] [rbp-48h]
  _QWORD v90[8]; // [rsp+58h] [rbp-40h] BYREF

  v8 = a6;
  v9 = 0x12090482600LL;
  Process = (_KPROCESS *)(((a6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *(_QWORD *)&Process->Header.Lock;
  if ( (unsigned __int64)&Process[0x32BC88773LL].ReadyListHead <= 0x7F8 )
  {
    PteShadow = MiReadPteShadow(Process, PteShadow);
    v9 = 0x12090482600LL;
  }
  v12 = 0xFFFFFFFFFLL;
  v13 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
  v14 = 48 * v13 - 0x58000000000LL;
  v15 = a7 & 1;
  if ( (a7 & 1) == 0
    || (v16 = a7 & 0xFFFFFFFFFFFFFFFEuLL, v89 = a7 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
  {
    v16 = 0LL;
    v89 = 0LL;
  }
  v17 = v8 + 0x90482413000LL;
  v18 = 0x7FFFFFFFFFFFFFFFLL;
  while ( 1 )
  {
    v19 = *(_QWORD *)v8;
    if ( v17 <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, v13)
      && (v19 & 1) != 0
      && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v13 = *(_QWORD *)&Process[2].ProcessLock;
      if ( v13 )
      {
        v20 = *(_QWORD *)(v13 + 8 * ((v8 >> 3) & 0x1FF));
        if ( (v20 & 0x20) != 0 )
          v19 |= 0x20uLL;
        if ( (v20 & 0x42) != 0 )
          v19 |= 0x42uLL;
      }
    }
    v90[0] = v19;
    if ( (v19 & 1) != 0 )
    {
      v21 = v19;
      if ( (unsigned __int64)&v90[v9] <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v13)
        && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
      {
        v22 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 8 * (((unsigned __int64)v90 >> 3) & 0x1FF));
          if ( (v23 & 0x20) != 0 )
            v21 |= 0x20uLL;
          if ( (v23 & 0x42) != 0 )
            v21 |= 0x42uLL;
        }
      }
      goto LABEL_31;
    }
    if ( (v19 & 0x400) != 0 || (v19 & 0x800) == 0 )
      break;
    v24 = MiInvalidPteConforms(v19, v13);
    v9 = 0x12090482600LL;
    if ( v24 )
    {
      v21 = MiReverseSwizzleInvalidPte(Process, v13, 0x90482413000LL, a4);
LABEL_31:
      v25 = MI_IS_PFN(v12 & (v21 >> 12));
      v9 = 0x12090482600LL;
      if ( v25 )
      {
        v26 = 48 * a4 - 0x58000000000LL;
        v27 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
        {
          Process = (_KPROCESS *)0x8000000000000000LL;
          do
          {
            if ( (++v27 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            {
              _mm_pause();
            }
            else
            {
              HvlNotifyLongSpinWait(v27);
              Process = (_KPROCESS *)0x8000000000000000LL;
            }
          }
          while ( (*(_QWORD *)(v26 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) );
          v12 = 0xFFFFFFFFFLL;
          v18 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v13 = *(_QWORD *)v8;
        if ( v17 <= 0x7F8
          && (unsigned int)MiPteHasShadow(Process, v13)
          && (v13 & 1) != 0
          && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          v28 = *(_QWORD *)&Process[2].ProcessLock;
          if ( v28 )
          {
            v29 = *(_QWORD *)(v28 + 8 * ((v8 >> 3) & 0x1FF));
            if ( (v29 & 0x20) != 0 )
              v13 |= 0x20uLL;
            if ( (v29 & 0x42) != 0 )
              v13 |= 0x42uLL;
          }
        }
        if ( v13 == v19 )
          goto LABEL_54;
        _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), v18);
        v9 = 0x12090482600LL;
      }
    }
  }
  v26 = 0LL;
LABEL_54:
  v30 = *(_QWORD *)v8;
  if ( v17 <= 0x7F8 )
    v30 = MiReadPteShadow(v8, *(_QWORD *)v8);
  a6 = v30;
  if ( (v30 & 1) == 0 )
  {
    if ( !v30 )
    {
      MiUnlockProtoPoolPage(v14, 0x11u);
      return 3221225477LL;
    }
    v64 = *a3;
    if ( (unsigned __int64)(a3 + 0x12090482600LL) <= 0x7F8 )
      v64 = MiReadPteShadow(a3, *a3);
    if ( (unsigned int)MiIsPrototypePteVadLookup(v64) || (v64 & 8) != 0 )
    {
      v67 = a1;
    }
    else
    {
      v69 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&a6);
      if ( v17 <= 0x7F8 )
        LOWORD(v68) = MiReadPteShadow(v8, v68);
      v67 = a1;
      if ( (v68 & 1) != 0 )
      {
        if ( a1 && (v68 & 0xA00) == 0 )
        {
          ImagePageOk = -1073741819;
LABEL_171:
          if ( v26 )
            _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiUnlockProtoPoolPage(v14, 0x11u);
          return ImagePageOk;
        }
      }
      else
      {
        v65 = (__int64)a1;
        if ( a1 )
          v65 = 1LL;
        if ( MiReadWrite[v69 & 7] - (char)v65 < 10 )
        {
          ImagePageOk = -1073741819;
          goto LABEL_171;
        }
        if ( (v69 & 0xFFFFFFF8) == 0x10 && (!v15 || *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
        {
          if ( (unsigned int)MiAllowGuardFault(a7) )
          {
            v72 = v71 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v70 & 0xF));
            *(_QWORD *)v8 = v72;
            if ( v17 <= 0x7F8 )
              MiWritePteShadow(v8, v72);
            ImagePageOk = -2147483647;
          }
          else
          {
            ImagePageOk = -1073741819;
          }
          goto LABEL_171;
        }
        v66 = 0x90482413000LL;
      }
    }
    v73 = MiReverseSwizzleInvalidPte(v30, v65, v67, v66);
    if ( (v73 & 0x400) != 0
      || (v73 & 0x800) != 0
      || (v73 & 4) != 0
      || (v76 & 5) != 5
      || !v74 && (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&a6) & 5) == 4 )
    {
      v77 = (volatile signed __int32 *)a4;
    }
    else
    {
      v77 = (volatile signed __int32 *)a4;
      if ( *(_QWORD *)(a4 + 184) != 0xFFFFF58010804000uLL
        || !KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[12] )
      {
        v78 = a2;
        if ( (MiFlags & 0x30000) == 0 || a2 < 0xFFFF800000000000uLL || (v76 & 2) == 0 )
        {
          v79 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v79 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v79);
            }
            while ( (*(_QWORD *)(v14 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) );
          }
          *(_BYTE *)(v14 + 34) &= ~0x20u;
          if ( (unsigned int)MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(v14) )
            MiPfnReferenceCountIsZero(v14, (v14 + 0x58000000000LL) / 48);
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v89 )
          {
            if ( !v15 )
              return 0LL;
            v80 = a7;
            if ( *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) != 1
              || (*(_DWORD *)((a7 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0 )
            {
              return 0LL;
            }
          }
          else
          {
            v80 = a7;
          }
          if ( v15 )
          {
            if ( *(_BYTE *)(v80 & 0xFFFFFFFFFFFFFFFEuLL) != 1 && *(_BYTE *)(v80 & 0xFFFFFFFFFFFFFFFEuLL) != 3 )
              goto LABEL_207;
          }
          else if ( (unsigned __int8)KeInvalidAccessAllowed(v80) != 1 )
          {
            goto LABEL_207;
          }
          if ( a2 >= 0xFFFF800000000000uLL )
            return 3221225477LL;
LABEL_207:
          if ( (unsigned int)MiIsPrototypePteVadLookup(v64) )
            v81 = (v64 >> 5) & 0x1F;
          else
            v81 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&a6);
          v82 = v81;
          v83 = v81 & 0x18;
          v84 = v82 & 2 | 4u;
          if ( v83 == 8 )
          {
            v84 = (unsigned int)v84 | 8;
          }
          else if ( v83 == 24 )
          {
            v84 = (unsigned int)v84 | 0x18;
          }
          DemandZeroPte = MiMakeDemandZeroPte(v84);
          *a3 = DemandZeroPte;
          if ( (unsigned __int64)(a3 + 0x12090482600LL) <= 0x7F8 )
            MiWritePteShadow(a3, DemandZeroPte);
          return MiResolveDemandZeroFault((__int64)a1, a2, v80, a3, a4, a5, 0);
        }
LABEL_219:
        if ( (v30 & 0x400) != 0 )
        {
          if ( !a8 )
          {
LABEL_221:
            MiUnlockProtoPoolPage(v14, 0x11u);
            return 3221226548LL;
          }
          return (unsigned int)MiResolveMappedFileFault((__int64)a1, v78, (__int64 *)v8, (__int64)v77, a5, v14, a7, a8);
        }
        if ( (v30 & 0x800) != 0 )
          return (unsigned int)MiResolveTransitionFault(a1, v78, v8, v77, a5, 1, a7, a8);
        if ( (unsigned __int64)&a6 + v75 <= 0x7F8 )
          LOBYTE(v30) = MiReadPteShadow(&a6, v30);
        if ( (v30 & 4) != 0 )
        {
          if ( !a8 )
            goto LABEL_221;
          return (unsigned int)MiResolvePageFileFault(v78, v8, (_DWORD)v77, 1, v14, a7, (__int64)a8);
        }
        if ( v89 )
        {
          if ( !v15
            || (v87 = a7, *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) != 1)
            || (*(_DWORD *)((a7 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0 )
          {
            MiUnlockProtoPoolPage(v14, 0x11u);
            ImagePageOk = 0;
            goto LABEL_242;
          }
        }
        else
        {
          v87 = a7;
        }
        if ( v15 )
        {
          if ( *(_BYTE *)(v87 & 0xFFFFFFFFFFFFFFFEuLL) != 1 && *(_BYTE *)(v87 & 0xFFFFFFFFFFFFFFFEuLL) != 3 )
            goto LABEL_241;
        }
        else if ( (unsigned __int8)KeInvalidAccessAllowed(v87) != 1 )
        {
          goto LABEL_241;
        }
        if ( v78 >= 0xFFFF800000000000uLL )
        {
          MiUnlockProtoPoolPage(v14, 0x11u);
          ImagePageOk = -1073741819;
          goto LABEL_242;
        }
LABEL_241:
        ImagePageOk = MiResolveDemandZeroFault((__int64)a1, v78, v87, (unsigned __int64 *)v8, (__int64)v77, a5, 1);
LABEL_242:
        if ( a8 )
          *a8 = 0LL;
        return ImagePageOk;
      }
    }
    v78 = a2;
    goto LABEL_219;
  }
  if ( v16 )
  {
    v31 = *(_BYTE *)(v26 + 35);
    v32 = *(_DWORD *)(v16 + 80) & 7;
    if ( (v31 & 8) != 0 )
      v33 = 5;
    else
      v33 = v31 & 7;
    if ( v32 > v33 )
      *(_BYTE *)(v26 + 35) = v31 ^ (v32 ^ v31) & 7;
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), v18);
    MiUnlockProtoPoolPage(v14, 0x11u);
    return 0LL;
  }
  if ( a2 >= 0xFFFF800000000000uLL && (MiFlags & 0x30000) == 0 )
    goto LABEL_91;
  v35 = *(_QWORD *)(v26 + 40);
  if ( (v35 & 0x200000000000000LL) == 0 )
    goto LABEL_91;
  if ( (*(_DWORD *)(v26 + 16) & 0x400LL) == 0 )
    goto LABEL_91;
  if ( ((v35 >> 54) & 7) == 3 )
    goto LABEL_91;
  PrototypePteDirect = (_BYTE *)MiGetPrototypePteDirect(*(_QWORD *)(v26 + 16), v13, HIWORD(MiFlags), a4);
  v39 = *(_QWORD *)PrototypePteDirect;
  if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) == 0
    || (v36 & 3u) > 1 && (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v26 + 16) & 2) == 0 && MiCanPageMove(v26) )
  {
    goto LABEL_91;
  }
  v40 = *(_QWORD *)(*(_QWORD *)(v39 + 96) + 8LL);
  if ( !v40 || (v40 & 0xFFFFFFFFFFFFFFF8uLL) == 8 || (v40 & 3) == 2 )
    goto LABEL_91;
  if ( (MiFlags & 0x100000) != 0 && (*(_DWORD *)(v39 + 92) & 0xC000000) != 0 )
  {
LABEL_86:
    v43 = a7;
    if ( v15 && *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      ImagePageOk = -1073740748;
    }
    else
    {
      v45 = a4;
      ImagePageOk = MiMakeImagePageOk(v37, v8, v30, a4, v26, v14);
      if ( (ImagePageOk & 0x80000000) == 0 )
        goto LABEL_92;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockProtoPoolPage(v14, 0x11u);
    return ImagePageOk;
  }
  Address = MiLocateAddress(v37);
  if ( !Address
    || (v42 = *((_DWORD *)Address + 12), (v42 & 7) != 2)
    || (v42 & 0xF8) != 8
    && ((Address[8] & 0x10000000) == 0 || (v40 & 4) != 0)
    && ((MiFlags & 0x400) == 0 || (PrototypePteDirect[34] & 2) == 0) )
  {
    LODWORD(v37) = a2;
    goto LABEL_86;
  }
LABEL_91:
  v45 = a4;
  v43 = a7;
LABEL_92:
  *(_QWORD *)(v26 + 24) ^= (((*(_QWORD *)(v26 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(v26 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v46 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v46 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v46);
    }
    while ( (*(_QWORD *)(v14 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) );
  }
  v47 = *(_WORD *)(v14 + 32);
  v48 = *(_BYTE *)(v14 + 34) & 0xDF;
  *(_BYTE *)(v14 + 34) = v48;
  if ( !v47 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (v14 + 0x58000000000LL) / 48, v48 & 7, 0LL);
  v49 = *(_QWORD *)(v14 + 24);
  v50 = v47 - 1;
  v51 = v49 & 0x3FFFFFFFFFFFFFFFLL;
  *(_WORD *)(v14 + 32) = v50;
  if ( !v50 )
  {
    v52 = 1;
    goto LABEL_109;
  }
  if ( v50 != 1 )
  {
    if ( v50 == 2 && v51 )
    {
LABEL_106:
      if ( (v48 & 8) != 0 )
        goto LABEL_107;
    }
    goto LABEL_142;
  }
  if ( !v51 )
    goto LABEL_106;
LABEL_107:
  v52 = 0;
LABEL_109:
  v53 = *(_QWORD *)(v14 + 8) | 0x8000000000000000uLL;
  v54 = (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v53 <= v54 && v53 >= 0xFFFFF68000000000uLL || ((*(unsigned __int8 *)(v14 + 35) >> 5) & 1) == 0 )
  {
    v55 = *(_QWORD *)(v14 + 40);
    v56 = 0;
    if ( (v55 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v14 + 16) & 0x400LL) != 0 )
    {
      v56 = 1;
    }
    else if ( v53 <= v54 && v53 >= 0xFFFFF68000000000uLL && ((*(unsigned __int8 *)(v14 + 35) >> 5) & 1) != 0 )
    {
      v56 = 1;
    }
    else if ( v52 == 1 && (v49 & 0x4000000000000000LL) != 0 )
    {
      v56 = 1;
    }
    v57 = (HIDWORD(v55) >> 8) & 0x3FF;
    if ( v57 == 1023 )
      v58 = MiSystemPartition;
    else
      v58 = *(__int16 **)(qword_14034F0E8 + 8LL * v57);
    if ( v56 == 1 )
      MiReturnCommit((__int64)v58, 1LL);
    if ( v58 != MiSystemPartition )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 696, 1uLL);
      goto LABEL_140;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v60 = 1LL;
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v63 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v62 = (_DWORD)CachedResidentAvailable == v63;
          LODWORD(CachedResidentAvailable) = v63;
          if ( v62 )
            goto LABEL_138;
        }
        while ( v63 != -1 && (unsigned __int64)(v63 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v60 = (int)CachedResidentAvailable - 192 + 1LL;
      }
    }
    _InterlockedExchangeAdd64(&qword_1403552C0, v60);
LABEL_138:
    _InterlockedExchangeAdd64(&qword_14034FB00, 1uLL);
    goto LABEL_140;
  }
  *(_BYTE *)(v14 + 35) &= ~0x20u;
LABEL_140:
  if ( v52 )
    MiPfnReferenceCountIsZero(v14, (v14 + 0x58000000000LL) / 48);
LABEL_142:
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __incgsdword(0x2E18u);
  result = MiCompleteProtoPteFault(v45, a5, a2, v30, (__int64)a1, 0, v43);
  if ( (int)result >= 0 )
    return 272LL;
  return result;
}
