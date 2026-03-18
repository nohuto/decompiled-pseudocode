/*
 * XREFs of MiResolveFileOnlyFault @ 0x140230D4C
 * Callers:
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiReferenceControlAreaPfn @ 0x140035604 (MiReferenceControlAreaPfn.c)
 *     MiGetEffectivePagePriorityThread @ 0x14003C720 (MiGetEffectivePagePriorityThread.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 */

__int64 __fastcall MiResolveFileOnlyFault(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 PteShadow; // rbx
  unsigned __int64 v6; // r13
  __int64 *PrototypePteDirect; // rax
  __int64 v8; // r11
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r10
  __int64 v13; // r12
  __int64 *v14; // rcx
  unsigned __int64 v15; // r14
  __int64 v16; // r14
  __int64 v17; // rsi
  unsigned int v18; // ebp
  unsigned int EffectivePagePriorityThread; // ebp
  unsigned int v20; // r15d
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r8
  char v24; // r9
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // [rsp+50h] [rbp+8h] BYREF

  PteShadow = *(_QWORD *)a1;
  v6 = a1 + 0x90482413000LL;
  if ( a1 + 0x90482413000LL <= 0x7F8 )
    PteShadow = MiReadPteShadow(a1, *(_QWORD *)a1);
  v27 = PteShadow;
  PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(PteShadow, a2, a3, a4);
  v9 = (__int64)PrototypePteDirect;
  v10 = PrototypePteDirect[3];
  v11 = *PrototypePteDirect;
  if ( !v10 )
    return 3221435187LL;
  v13 = *(_QWORD *)(v10 + 8 * ((__int64)(a1 - PrototypePteDirect[1]) >> 3) + 8);
  if ( v13 < 0 )
    return 3221435187LL;
  v14 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v15 = *v14;
  if ( (unsigned __int64)v14 + v8 <= 0x7F8 )
    v15 = MiReadPteShadow((__int64)v14, *v14);
  v16 = (v15 >> 12) & 0xFFFFFFFFFLL;
  MiReferenceControlAreaPfn(v11, v9, 1LL);
  v17 = 48 * v16 - 0x58000000000LL;
  v18 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v18);
    }
    while ( (*(_QWORD *)(v17 + 24) & 0x8000000000000000uLL) != 0 );
  }
  *(_QWORD *)(v17 + 24) ^= (*(_QWORD *)(v17 + 24) ^ (*(_QWORD *)(v17 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
  if ( EffectivePagePriorityThread > 5 )
    LOBYTE(EffectivePagePriorityThread) = 5;
  v20 = 0;
  v21 = 48 * v13 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v20);
    }
    while ( (*(_QWORD *)(v21 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) );
  }
  v22 = *(_QWORD *)(v21 + 24);
  *(_QWORD *)v21 = 0LL;
  *(_QWORD *)(v21 + 16) = PteShadow;
  *(_WORD *)(v21 + 32) = 1;
  *(_QWORD *)(v21 + 24) = v22 & 0xC000000000000000uLL | 1;
  *(_QWORD *)(v21 + 40) = v16 & 0xFFFFFFFFFLL | *(_QWORD *)(v21 + 40) & 0xFFFFFFF000000000uLL | 0x200000000000000LL;
  MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE((__int64 *)&v27);
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(a1) )
    v23 |= 0x100uLL;
  v25 = (unsigned __int64)(unsigned __int8)(v24 & word_14034EC18) << 8;
  *(_BYTE *)(v21 + 35) ^= (*(_BYTE *)(v21 + 35) ^ EffectivePagePriorityThread) & 7;
  v26 = v23 & 0xFFFFFFFFFFFFFE7FuLL | v25;
  v27 = v26;
  *(_QWORD *)(v21 + 8) = a1;
  *(_QWORD *)a1 = v26;
  if ( v6 <= 0x7F8 )
    MiWritePteShadow(a1, v26);
  *(_BYTE *)(v21 + 34) = *(_BYTE *)(v21 + 34) & 0xF8 | 6;
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
