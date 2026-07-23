/*
 * XREFs of MiInitializeReadInProgressPfn @ 0x1400E39D0
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400E2FA0 (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x140109170 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetContainingPageTable @ 0x1401F241C (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x1401F25C8 (MiMakeTransitionPte.c)
 */

unsigned __int64 __fastcall MiInitializeReadInProgressPfn(
        unsigned __int64 a1,
        _QWORD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v6; // rdi
  __int64 v7; // r15
  _QWORD *v9; // r13
  unsigned __int64 v10; // rsi
  unsigned __int64 result; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  char v14; // r10
  __int64 v15; // rbp
  unsigned __int64 DemandZeroPte; // r9
  bool v17; // r11
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // r9
  __int64 v21; // r9
  __int64 PrototypePteDirect; // rax
  __int64 v23; // rax
  unsigned int v24; // eax
  unsigned __int64 Address; // rax
  unsigned int v26; // esi
  __int64 v27; // r14
  unsigned __int8 CurrentIrql; // r15
  char v29; // al
  __int64 v30; // rcx
  __int64 TransitionPte; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // [rsp+20h] [rbp-68h] BYREF
  __int64 v35; // [rsp+28h] [rbp-60h] BYREF
  __int64 ContainingPageTable; // [rsp+30h] [rbp-58h]
  unsigned __int64 v37; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+40h] [rbp-48h]
  _QWORD *v40; // [rsp+98h] [rbp+10h]
  int v41; // [rsp+A0h] [rbp+18h] BYREF

  v40 = a2;
  v6 = 0LL;
  v7 = 0xFFFFFFFFFLL;
  ContainingPageTable = 0xFFFFFFFFFLL;
  v9 = a2;
  v10 = a1;
  result = (unsigned __int64)&a2[a3];
  v38 = result;
  if ( (unsigned __int64)a2 < result )
  {
    do
    {
      result = 0xFFFFFA8000000000uLL;
      v12 = 48LL * *v9 - 0x58000000000LL;
      if ( v12 != qword_1403276D0 )
      {
        v13 = MI_READ_PTE_LOCK_FREE(a4);
        v37 = v13;
        LODWORD(v15) = 0;
        v35 = v13;
        DemandZeroPte = v13;
        v17 = (v14 & 0x40) != 0;
        if ( (v14 & 0x40) != 0 )
        {
          if ( (unsigned int)MiIsPrototypePteVadLookup(v13) )
          {
            v21 = (v20 >> 5) & 0x1F;
          }
          else
          {
            PrototypePteDirect = MiGetPrototypePteDirect(v20);
            v35 = MI_READ_PTE_LOCK_FREE(PrototypePteDirect);
            v23 = MI_GET_PFN_FROM_PTE(&v35);
            v21 = (unsigned int)MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v23 + 16);
          }
          LODWORD(v15) = MmMakeProtectNotWriteCopy[(unsigned int)v21];
          DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v15, v18, v19, v21);
          v35 = DemandZeroPte;
        }
        else if ( (v13 & 0x400) == 0 && (v13 & 0x800) != 0 )
        {
          DemandZeroPte = *(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v37) - 0x57FFFFFFFF0LL);
          v35 = DemandZeroPte;
        }
        *(_QWORD *)v12 = a5;
        *(_QWORD *)(v12 + 16) = DemandZeroPte;
        if ( v17 )
        {
          v24 = v15;
        }
        else
        {
          if ( (v14 & 0x10) != 0 )
          {
            *(_QWORD *)(v12 + 40) |= 0x200000000000000uLL;
            LODWORD(v15) = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v35);
          }
          else
          {
            v15 = (DemandZeroPte >> 5) & 0x1F;
          }
          v24 = v15;
          if ( (_DWORD)v15 == 24 && v10 <= 0x7FFFFFFEFFFFLL )
          {
            Address = MiLocateAddress(v10);
            v14 = a6;
            v24 = (*(_DWORD *)(Address + 48) >> 3) & 0x1F;
          }
        }
        if ( v24 == 31 )
        {
          v26 = 1;
        }
        else if ( v24 >> 3 == 3 && (v24 & 7) != 0 )
        {
          v26 = dword_1403A92D0;
        }
        else
        {
          v26 = 1;
          if ( v24 >> 3 == 1 )
            v26 = MiPlatformCacheAttributes[0];
        }
        if ( v7 == 0xFFFFFFFFFLL || (a4 & 0xFFF) == 0 )
        {
          ContainingPageTable = MiGetContainingPageTable(a4);
          v6 = 48 * ContainingPageTable - 0x58000000000LL;
        }
        v27 = a4;
        if ( (v14 & 0x20) != 0 )
          v27 = a4 & 0x7FFFFFFFFFFFFFFFLL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v41 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v41);
            while ( (*(_QWORD *)(v12 + 24) & 0x8000000000000000uLL) != 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) );
          v9 = v40;
        }
        *(_BYTE *)(v12 + 34) |= 0x20u;
        if ( *(unsigned __int8 *)(v12 + 34) >> 6 != v26 )
          MiChangePageAttribute(v12, v26, 1);
        *(_QWORD *)(v12 + 24) &= 0xC000000000000000uLL;
        *(_WORD *)(v12 + 32) = 1;
        v29 = a6;
        if ( (a6 & 8) != 0 )
          *(_BYTE *)(v12 + 35) ^= (*(_BYTE *)(v12 + 35) ^ a6) & 7;
        v30 = (ContainingPageTable ^ *(_QWORD *)(v12 + 40)) & 0xFFFFFFFFFLL;
        *(_QWORD *)(v12 + 8) = v27;
        *(_QWORD *)(v12 + 40) ^= v30;
        *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 2;
        if ( v29 < 0 )
          *(_BYTE *)(v12 + 35) |= 0x20u;
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        result = v37;
        if ( (v37 & 0x400) != 0 || (v37 & 0x800) == 0 )
        {
          TransitionPte = MiMakeTransitionPte(*v9, (unsigned int)v15);
          v37 = TransitionPte;
          *(_QWORD *)a4 = TransitionPte;
          result = MiPteInShadowRange(a4, TransitionPte);
          if ( (_DWORD)result )
            result = MiWritePteShadow(v33, v32);
        }
        if ( (a6 & 0x40) == 0 )
        {
          v34 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v34);
              while ( (*(_QWORD *)(v6 + 24) & 0x8000000000000000uLL) != 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) );
            v9 = v40;
          }
          result = *(_QWORD *)(v6 + 24);
          *(_QWORD *)(v6 + 24) = result ^ (result ^ (result + 1)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        v10 = a1;
        v7 = ContainingPageTable;
      }
      ++v9;
      a4 += 8LL;
      v40 = v9;
    }
    while ( (unsigned __int64)v9 < v38 );
  }
  return result;
}
