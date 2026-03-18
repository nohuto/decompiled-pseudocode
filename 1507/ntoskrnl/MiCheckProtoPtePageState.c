/*
 * XREFs of MiCheckProtoPtePageState @ 0x140081F50
 * Callers:
 *     MmPurgeSection @ 0x1400843A0 (MmPurgeSection.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiIsSubsectionClean @ 0x140211890 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x140211C88 (MiPurgeSubsection.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiWriteValidPteVolatile @ 0x140226110 (MiWriteValidPteVolatile.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiCheckProtoPtePageState(ULONG_PTR a1, unsigned __int64 a2)
{
  unsigned __int8 *v3; // r15
  __int64 v4; // r10
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // r11
  __int64 v15; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v17; // esi
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int8 v20; // si
  _QWORD *v21; // r14
  bool v22; // zf
  unsigned int v23; // ebx
  unsigned int v24; // ebx
  __int64 v25; // rax
  unsigned __int64 v27; // [rsp+70h] [rbp+18h] BYREF
  _QWORD *v28; // [rsp+78h] [rbp+20h]

  v3 = (unsigned __int8 *)a2;
  v4 = 0xFFFFFFFFFLL;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)v5;
          if ( v5 + 0x90482413000LL <= 0x7F8
            && (unsigned int)MiPteHasShadow(0x90482413000LL, a2)
            && (v6 & 1) != 0
            && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
          {
            a2 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( a2 )
            {
              v7 = *(_QWORD *)(a2 + 8 * ((v5 >> 3) & 0x1FF));
              if ( (v7 & 0x20) != 0 )
                v6 |= 0x20uLL;
              if ( (v7 & 0x42) != 0 )
                v6 |= 0x42uLL;
            }
          }
          v27 = v6;
          if ( (v6 & 1) != 0 )
            break;
          if ( (v6 & 0x400) != 0 || (v6 & 0x800) == 0 )
            goto LABEL_77;
          if ( (unsigned int)MiInvalidPteConforms(v6, a2) )
          {
            v8 = MiReverseSwizzleInvalidPte(v6, a2, v11, v12);
            goto LABEL_27;
          }
        }
        if ( (v6 & 0x200) != 0 )
          goto LABEL_77;
        v8 = v6;
        if ( (unsigned __int64)&STACK[0x90482413070] <= 0x7F8
          && (unsigned int)MiPteHasShadow(0x90482413000LL, a2)
          && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
        {
          v9 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v9 )
          {
            v10 = *(_QWORD *)(v9 + 8 * (((unsigned __int64)&v27 >> 3) & 0x1FF));
            if ( (v10 & 0x20) != 0 )
              v8 |= 0x20uLL;
            if ( (v10 & 0x42) != 0 )
              v8 |= 0x42uLL;
          }
        }
LABEL_27:
        ;
      }
      while ( !(unsigned int)MI_IS_PFN(v4 & (v8 >> 12)) );
      v15 = 48 * v13 - v14;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v17 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v17);
        }
        while ( (*(_QWORD *)(v15 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) );
        v4 = 0xFFFFFFFFFLL;
      }
      *v3 = CurrentIrql;
      a2 = *(_QWORD *)v5;
      if ( v5 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(0x90482413000LL, a2)
        && (a2 & 1) != 0
        && ((a2 & 0x20) == 0 || (a2 & 0x42) == 0) )
      {
        v18 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 8 * ((v5 >> 3) & 0x1FF));
          if ( (v19 & 0x20) != 0 )
            a2 |= 0x20uLL;
          if ( (v19 & 0x42) != 0 )
            a2 |= 0x42uLL;
        }
      }
      if ( a2 == v6 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
    }
    if ( (a2 & 1) != 0 )
      break;
    if ( (*(_BYTE *)(v15 + 34) & 7u) < 6 )
      goto LABEL_76;
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    MmAccessFault(2uLL, a1);
    v4 = 0xFFFFFFFFFLL;
  }
  if ( (*(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
  {
LABEL_76:
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
LABEL_77:
    *v3 = 17;
    return 0LL;
  }
  MiAddLockedPageCharge(v15, 1LL);
  v20 = *v3;
  v21 = (_QWORD *)(*(_QWORD *)(v15 + 8) | 0x8000000000000000uLL);
  v22 = (*(_BYTE *)(v15 + 34) & 0x20) == 0;
  v28 = v21;
  if ( !v22 )
  {
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v20 != 17 )
        __writecr8(v20);
      v23 = 0;
      while ( (*(_WORD *)(v15 + 34) & 0x20) != 0 )
      {
        if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v23);
      }
      __writecr8(2uLL);
      v24 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v24 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v24);
        }
        while ( (*(_QWORD *)(v15 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) );
      }
    }
    while ( (*(_BYTE *)(v15 + 34) & 0x20) != 0 );
    v21 = v28;
  }
  *(_BYTE *)(v15 + 34) |= 0x20u;
  if ( (*(_QWORD *)(v15 + 24) & 0x4000000000000000LL) == 0 )
  {
    v25 = *v21;
    if ( (unsigned __int64)(v21 + 0x12090482600LL) <= 0x7F8 )
      LOBYTE(v25) = MiReadPteShadow(v21, *v21);
    if ( (v25 & 0x20) == 0 )
      MiWriteValidPteVolatile(v21, 1LL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v15;
}
