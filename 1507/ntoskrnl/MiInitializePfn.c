/*
 * XREFs of MiInitializePfn @ 0x140069490
 * Callers:
 *     MiMapWsMetaPage @ 0x14003C190 (MiMapWsMetaPage.c)
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 *     MiMapNewWorkingSetPage @ 0x140068BC8 (MiMapNewWorkingSetPage.c)
 *     MiAllocateKernelStackPages @ 0x140069190 (MiAllocateKernelStackPages.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 *     MiFillPerSessionProtos @ 0x14021C1E0 (MiFillPerSessionProtos.c)
 *     MmAllocateSpecialPool @ 0x14021F6C4 (MmAllocateSpecialPool.c)
 *     MmAllocateIndependentPages @ 0x1405610B8 (MmAllocateIndependentPages.c)
 *     MiSessionInitializeWorkingSetList @ 0x140579F34 (MiSessionInitializeWorkingSetList.c)
 *     MiMapNewSession @ 0x14057A744 (MiMapNewSession.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407CAA28 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeSystemImagePage @ 0x1407CCC64 (MiInitializeSystemImagePage.c)
 * Callees:
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiGetContainingPageTable @ 0x140225A80 (MiGetContainingPageTable.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiTransferSoftwarePte @ 0x140226040 (MiTransferSoftwarePte.c)
 */

char __fastcall MiInitializePfn(__int64 a1, __int64 *a2, unsigned int a3, char a4)
{
  __int64 PteShadow; // rax
  unsigned int v5; // r11d
  __int64 *v7; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned int v11; // r11d
  unsigned int v12; // r12d
  __int64 ContainingPageTable; // rax
  __int64 v14; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue_high; // r14d
  unsigned int v17; // r14d
  char v18; // al
  unsigned int v19; // edi
  unsigned int v20; // ebx
  unsigned __int64 v21; // rax
  char v22; // cl
  char v23; // cl
  char result; // al
  unsigned __int8 CurrentIrql; // [rsp+60h] [rbp+8h]

  PteShadow = *a2;
  v5 = a3;
  v7 = a2;
  if ( (unsigned __int64)(a2 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(a2, *a2);
  if ( (a4 & 4) != 0 )
  {
    if ( PteShadow )
      PteShadow = ((unsigned __int16)PteShadow ^ (unsigned __int16)(32 * v5)) & 0x3E0 ^ (unsigned __int64)PteShadow;
    else
      PteShadow = MiMakeDemandZeroPte(v5);
  }
  v9 = MiTransferSoftwarePte(PteShadow, 0LL, 0LL);
  *(_QWORD *)(a1 + 16) = v9;
  if ( (a4 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 40) |= 0x200000000000000uLL;
  }
  else if ( (a4 & 8) == 0 )
  {
    *(_QWORD *)(a1 + 16) = v9 & 0xFFFFFFFFFC00FFFFuLL;
  }
  if ( v11 == 31 )
  {
    v12 = 1;
  }
  else if ( v11 >> 3 == 3 && (v11 & 7) != 0 )
  {
    v12 = dword_1403D0480;
  }
  else
  {
    v12 = 1;
    if ( v11 >> 3 == 1 )
      v12 = MiPlatformCacheAttributes;
  }
  *(_WORD *)(a1 + 32) = 1;
  if ( (a4 & 0x20) == 0 )
    *(_BYTE *)(a1 + 34) |= 0x10u;
  ContainingPageTable = MiGetContainingPageTable(v7, 1LL, v10);
  *(_QWORD *)(a1 + 40) ^= (ContainingPageTable ^ *(_QWORD *)(a1 + 40)) & 0xFFFFFFFFFLL;
  v14 = 48 * ContainingPageTable - 0x58000000000LL;
  CurrentThread = KeGetCurrentThread();
  Queue_high = HIDWORD(CurrentThread[1].Queue);
  if ( (Queue_high & 0x100) != 0 )
  {
    v17 = (Queue_high >> 9) & 7;
  }
  else
  {
    v17 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v18 = 2;
      if ( v17 < 2 )
        v18 = v17;
      LOBYTE(v17) = v18;
    }
  }
  CurrentIrql = 17;
  v19 = 0;
  if ( (a4 & 1) == 0 )
  {
    v20 = 0;
    if ( (a4 & 0x10) != 0 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v20);
        }
        while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
      }
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v20);
        }
        while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
      }
    }
    v7 = a2;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v19);
    }
    while ( (*(_QWORD *)(v14 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) );
  }
  *(_QWORD *)(v14 + 24) ^= (*(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != v12 )
    MiChangePageAttribute(a1, v12, 1LL);
  v21 = *(_QWORD *)(a1 + 24) & 0xC000000000000001uLL;
  *(_QWORD *)(a1 + 8) = v7;
  v22 = *(_BYTE *)(a1 + 35);
  *(_QWORD *)(a1 + 24) = v21 | 1;
  v23 = *(_BYTE *)(a1 + 35) ^ (v17 ^ v22) & 7;
  result = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  *(_BYTE *)(a1 + 35) = v23;
  *(_BYTE *)(a1 + 34) = result;
  if ( (a4 & 0x40) != 0 )
    *(_BYTE *)(a1 + 35) = v23 | 0x20;
  if ( (a4 & 1) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (a4 & 0x10) == 0 )
    {
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
