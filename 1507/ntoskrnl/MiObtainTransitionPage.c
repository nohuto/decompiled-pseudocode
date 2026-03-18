/*
 * XREFs of MiObtainTransitionPage @ 0x14005A730
 * Callers:
 *     MiClaimPhysicalRun @ 0x14005ACA0 (MiClaimPhysicalRun.c)
 *     MiAllocateMostlyContiguous @ 0x14005BFB0 (MiAllocateMostlyContiguous.c)
 * Callees:
 *     MiReplaceTransitionPage @ 0x140059C70 (MiReplaceTransitionPage.c)
 *     MiPageToNode @ 0x14005AA30 (MiPageToNode.c)
 *     MiCanPageMove @ 0x14005ABF0 (MiCanPageMove.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiObtainTransitionPage(__int64 a1, unsigned __int8 a2, int *a3, __int64 a4, __int64 *a5)
{
  __int64 v7; // r8
  int v8; // r9d
  unsigned __int8 v9; // r10
  unsigned __int16 v10; // ax
  __int16 *v11; // r13
  __int16 *v12; // r14
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // edx
  __int64 v16; // rbx
  int v17; // eax
  __int64 Page; // rax
  __int64 v19; // r15
  __int64 v20; // r12
  unsigned __int8 CurrentIrql; // dl
  unsigned int v22; // esi
  unsigned int v23; // ebx
  unsigned __int16 v24; // ax
  unsigned __int8 v25; // [rsp+60h] [rbp+8h]

  if ( *(_WORD *)(a1 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(a2);
    return 0LL;
  }
  if ( !(unsigned int)MiCanPageMove(a1) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v9);
    return 0LL;
  }
  v10 = ((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF;
  v11 = MiSystemPartition;
  if ( v10 == 1023 )
    v12 = MiSystemPartition;
  else
    v12 = *(__int16 **)(qword_14034F0E8 + 8LL * v10);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v9);
  v13 = *((_QWORD *)v12 + 688);
  if ( v13 < 0x80
    && (((__int64)KeGetCurrentThread()[1].Queue & 2) == 0 || v13 < 2)
    && (v12 == MiSystemPartition || v13 < 2) )
  {
    return 1LL;
  }
  if ( v8 == -1 )
  {
    v16 = (*(_QWORD *)(a1 + 40) >> 36) & 3LL;
    v17 = MiPageToNode((a1 + 0x58000000000LL) / 48, 0LL, v7);
    v14 = 32LL;
    v15 = ((_DWORD)v16 << byte_14034EB98) | (v17 << byte_14034EB89);
  }
  else
  {
    v14 = 16LL;
    v15 = v8 & ~dword_14034EBB8;
  }
  Page = MiGetPage(v12, dword_14034EBB8 & (unsigned int)((a1 + 0x58000000000LL) / 48) | v15, v14);
  v19 = Page;
  if ( Page == -1 )
    return 1LL;
  v20 = 48 * Page - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v25 = CurrentIrql;
  __writecr8(2uLL);
  v22 = 0;
  v23 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v23);
    }
    while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
    CurrentIrql = v25;
  }
  if ( v20 == a1 )
  {
    v19 = -1LL;
    goto LABEL_37;
  }
  v24 = ((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF;
  if ( v24 != 1023 )
    v11 = *(__int16 **)(qword_14034F0E8 + 8LL * v24);
  if ( v12 != v11 )
    goto LABEL_35;
  if ( (unsigned __int8)((*(_BYTE *)(a1 + 34) & 7) - 2) > 2u )
  {
    v22 = 2;
    goto LABEL_35;
  }
  if ( *(_WORD *)(a1 + 32) )
  {
LABEL_35:
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    MiReleaseFreshPage(v20);
    return v22;
  }
  MiReplaceTransitionPage(a1, v20, a3);
LABEL_37:
  *(_QWORD *)(a1 + 16) = MiMakeDemandZeroPte(4LL);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v25);
  if ( a5 )
    *a5 = v19;
  return 3LL;
}
