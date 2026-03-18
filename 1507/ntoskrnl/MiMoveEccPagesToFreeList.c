/*
 * XREFs of MiMoveEccPagesToFreeList @ 0x140212D88
 * Callers:
 *     MmMarkPhysicalMemoryAsGood @ 0x1402134E0 (MmMarkPhysicalMemoryAsGood.c)
 * Callees:
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiUnlinkPageFromBadList @ 0x14022649C (MiUnlinkPageFromBadList.c)
 */

__int64 __fastcall MiMoveEccPagesToFreeList(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  __int64 v2; // r14
  ULONG_PTR v3; // rdi
  ULONG_PTR v5; // rsi
  ULONG_PTR v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int8 CurrentIrql; // r12
  unsigned int v11; // ebp
  char v12; // al

  v2 = 0LL;
  v3 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v5 = BugCheckParameter2;
  if ( BugCheckParameter2 < a2 )
  {
    v6 = v3 + 24;
    do
    {
      if ( MI_IS_PFN(v5) )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v11 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0x3FuLL) )
        {
          do
          {
            if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            {
              _mm_pause();
            }
            else
            {
              HvlNotifyLongSpinWait(v11);
              v9 = 0x8000000000000000uLL;
            }
          }
          while ( (*(_QWORD *)v6 & v9) != 0 );
        }
        v12 = *(_BYTE *)(v6 + 11);
        if ( (v12 & 0x40) != 0 )
        {
          *(_BYTE *)(v6 + 11) = v12 & 0x3F;
          if ( (v9 | *(_QWORD *)(v6 - 16)) == 0xFFFFFFFFFFFFFFFCuLL && (*(_BYTE *)(v6 + 10) & 7) == 5 )
          {
            MiUnlinkPageFromBadList(v3, v7, v8);
            *(_QWORD *)v6 |= 0x4000000000000000uLL;
            MiInsertPageInFreeOrZeroedList(v5, 2);
          }
          ++v2;
        }
        _InterlockedAnd64((volatile signed __int64 *)v6, 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
      }
      ++v5;
      v3 += 48LL;
      v6 += 48LL;
    }
    while ( v5 < a2 );
  }
  return v2;
}
