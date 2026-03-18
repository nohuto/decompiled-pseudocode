/*
 * XREFs of MiInitializeReadInProgressPfn @ 0x1400363F0
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 * Callees:
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetContainingPageTable @ 0x140225A80 (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiInitializeReadInProgressPfn(
        unsigned __int64 a1,
        unsigned __int64 *a2,
        int a3,
        unsigned __int64 *a4,
        __int64 a5,
        char a6)
{
  __int64 v6; // r13
  unsigned __int64 v7; // rdi
  unsigned __int64 *v8; // rsi
  unsigned __int64 v9; // r10
  __int64 v10; // r9
  unsigned __int64 result; // rax
  __int64 v12; // rdx
  unsigned int v13; // ebp
  __int64 v14; // r8
  __int64 v15; // rsi
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r14
  unsigned __int64 DemandZeroPte; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int64 *PrototypePteDirect; // r8
  __int64 v26; // r11
  unsigned __int64 PteShadow; // rax
  unsigned __int64 v28; // rax
  char v29; // r11
  unsigned int v30; // eax
  int v31; // eax
  __int64 Address; // rax
  __int64 v33; // r15
  unsigned __int8 CurrentIrql; // r12
  unsigned int v35; // edi
  __int64 v36; // rax
  unsigned int v37; // ebx
  unsigned __int64 v38; // [rsp+20h] [rbp-58h] BYREF
  __int64 ContainingPageTable; // [rsp+28h] [rbp-50h]
  unsigned __int64 v40; // [rsp+30h] [rbp-48h]
  unsigned __int64 *v42; // [rsp+88h] [rbp+10h]
  unsigned __int64 *v43; // [rsp+98h] [rbp+20h]

  v43 = a4;
  v42 = a2;
  v6 = 0LL;
  ContainingPageTable = 0xFFFFFFFFFLL;
  v7 = (unsigned __int64)a4;
  v8 = a2;
  v9 = a1;
  v10 = 0xFFFFFFFFFLL;
  result = (unsigned __int64)&a2[a3];
  v40 = result;
  if ( (unsigned __int64)a2 < result )
  {
    v12 = 0x1D55555555LL;
    v13 = 1;
    v14 = 0x200000000000000LL;
    while ( 1 )
    {
      result = *v8;
      v15 = 48 * *v8 - 0x58000000000LL;
      if ( v15 != qword_14034F700 )
        break;
LABEL_75:
      v7 += 8LL;
      v8 = v42 + 1;
      v43 = (unsigned __int64 *)v7;
      v42 = v8;
      if ( (unsigned __int64)v8 >= v40 )
        return result;
    }
    v16 = *(_QWORD *)v7;
    if ( v7 + 0x90482413000LL <= 0x7F8 )
    {
      if ( (unsigned int)MiPteHasShadow(0x58000000000LL, 0x1D55555555LL)
        && (v16 & 1) != 0
        && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
      {
        v17 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 8 * ((v7 >> 3) & 0x1FF));
          if ( (v18 & 0x20) != 0 )
            v16 |= 0x20uLL;
          if ( (v18 & 0x42) != 0 )
            v16 |= 0x42uLL;
        }
      }
      v12 = 0x1D55555555LL;
    }
    LODWORD(v19) = 0;
    v38 = v16;
    DemandZeroPte = v16;
    if ( (a6 & 0x40) != 0 )
    {
      if ( (unsigned int)MiIsPrototypePteVadLookup(v16) )
      {
        v24 = (v16 >> 5) & 0x1F;
      }
      else
      {
        PrototypePteDirect = (unsigned __int64 *)MiGetPrototypePteDirect(v16, v21, v22, v23);
        PteShadow = *PrototypePteDirect;
        if ( (unsigned __int64)PrototypePteDirect + v26 <= 0x7F8 )
          PteShadow = MiReadPteShadow(PrototypePteDirect, PteShadow);
        v38 = PteShadow;
        if ( (unsigned __int64)&v38 + v26 <= 0x7F8 )
          PteShadow = MiReadPteShadow(&v38, PteShadow);
        LODWORD(v24) = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(48 * (((PteShadow >> 12) & 0xFFFFFFFFFLL)
                                                                     - 0x1D55555555LL));
      }
      LODWORD(v19) = MmMakeProtectNotWriteCopy[(unsigned int)v24];
      DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v19);
    }
    else
    {
      if ( (v16 & 0x400) != 0 || (v16 & 0x800) == 0 )
        goto LABEL_28;
      v28 = MiReverseSwizzleInvalidPte(v16, 0x1D55555555LL, v14, v10);
      DemandZeroPte = *(_QWORD *)(48 * (((v28 >> 12) & 0xFFFFFFFFFLL) - v12));
    }
    v38 = DemandZeroPte;
LABEL_28:
    *(_QWORD *)v15 = a5;
    *(_QWORD *)(v15 + 16) = DemandZeroPte;
    v29 = a6;
    if ( (a6 & 0x40) != 0 )
    {
      v30 = v19;
    }
    else
    {
      if ( (a6 & 0x10) != 0 )
      {
        *(_QWORD *)(v15 + 40) |= v14;
        v31 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v38);
        v29 = a6;
        LODWORD(v19) = v31;
      }
      else
      {
        v19 = (DemandZeroPte >> 5) & 0x1F;
      }
      v30 = v19;
      if ( (_DWORD)v19 == 24 && v9 <= (unsigned __int64)MmHighestUserAddress )
      {
        Address = MiLocateAddress(v9);
        v29 = a6;
        v10 = ContainingPageTable;
        v30 = (*(_DWORD *)(Address + 48) >> 3) & 0x1F;
      }
    }
    if ( v30 != 31 )
    {
      if ( v30 >> 3 == 3 && (v30 & 7) != 0 )
      {
        v13 = dword_1403D0480;
      }
      else if ( v30 >> 3 == 1 )
      {
        v13 = MiPlatformCacheAttributes;
      }
    }
    if ( v10 == 0xFFFFFFFFFLL || (v7 & 0xFFF) == 0 )
    {
      ContainingPageTable = MiGetContainingPageTable(v7, v12, v14);
      v6 = 48 * ContainingPageTable - 0x58000000000LL;
    }
    v33 = v7;
    if ( (v29 & 0x20) != 0 )
      v33 = v7 & 0x7FFFFFFFFFFFFFFFLL;
    *(_BYTE *)(v15 + 34) |= 0x20u;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v35 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v35 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v35);
      }
      while ( (*(_QWORD *)(v15 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) );
    }
    if ( *(unsigned __int8 *)(v15 + 34) >> 6 != v13 )
      MiChangePageAttribute(v15, v13, 1LL);
    *(_WORD *)(v15 + 32) = 1;
    *(_QWORD *)(v15 + 24) &= 0xC000000000000000uLL;
    if ( (a6 & 8) != 0 )
      *(_BYTE *)(v15 + 35) ^= (a6 ^ *(_BYTE *)(v15 + 35)) & 7;
    v10 = ContainingPageTable;
    v36 = ContainingPageTable ^ *(_QWORD *)(v15 + 40);
    *(_QWORD *)(v15 + 8) = v33;
    *(_QWORD *)(v15 + 40) ^= v36 & 0xFFFFFFFFFLL;
    *(_BYTE *)(v15 + 34) = *(_BYTE *)(v15 + 34) & 0xF8 | 2;
    if ( a6 < 0 )
      *(_BYTE *)(v15 + 35) |= 0x20u;
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( (v16 & 0x400) == 0 && (v16 & 0x800) != 0 )
    {
      v7 = (unsigned __int64)v43;
    }
    else
    {
      result = MiMakeTransitionPte(*v42, (unsigned int)v19);
      v7 = (unsigned __int64)v43;
      *v43 = result;
      if ( (unsigned __int64)(v43 + 0x12090482600LL) <= 0x7F8 )
      {
        result = MiWritePteShadow(v43, result);
        v10 = ContainingPageTable;
      }
    }
    if ( (a6 & 0x40) == 0 )
    {
      v37 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v37 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v37);
        }
        while ( (*(_QWORD *)(v6 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) );
      }
      result = *(_QWORD *)(v6 + 24);
      *(_QWORD *)(v6 + 24) = result ^ (result ^ (result + 1)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v10 = ContainingPageTable;
    }
    v9 = a1;
    v14 = 0x200000000000000LL;
    v12 = 0x1D55555555LL;
    v13 = 1;
    goto LABEL_75;
  }
  return result;
}
