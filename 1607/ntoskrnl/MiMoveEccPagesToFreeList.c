/*
 * XREFs of MiMoveEccPagesToFreeList @ 0x1401E1E5C
 * Callers:
 *     MmMarkPhysicalMemoryAsGood @ 0x1401E2588 (MmMarkPhysicalMemoryAsGood.c)
 * Callees:
 *     MiDereferencePartition @ 0x140001E80 (MiDereferencePartition.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleaseNonPagedResources @ 0x14013F08C (MiReleaseNonPagedResources.c)
 *     MiReferencePagePartition @ 0x1401E822C (MiReferencePagePartition.c)
 *     MiUnlinkPageFromBadList @ 0x1401F2E80 (MiUnlinkPageFromBadList.c)
 */

unsigned __int64 __fastcall MiMoveEccPagesToFreeList(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v3; // rdi
  unsigned __int64 v4; // rbp
  __int64 v5; // rbx
  volatile signed __int64 *v6; // rsi
  _DWORD *v7; // r14
  unsigned __int8 v8; // r15
  __int64 v9; // rdx

  v3 = BugCheckParameter2;
  v4 = 0LL;
  v5 = 48 * BugCheckParameter2 - 0x58000000000LL;
  if ( BugCheckParameter2 < a2 )
  {
    v6 = (volatile signed __int64 *)(v5 + 24);
    do
    {
      if ( MiIsPfnInline(v3) )
      {
        v7 = 0LL;
        v8 = MiLockPageInline(v5);
        if ( (*(_BYTE *)(v5 + 35) & 0x40) == 0 )
          goto LABEL_11;
        v7 = (_DWORD *)MiReferencePagePartition(v5);
        if ( v7 )
        {
          *(_BYTE *)(v5 + 35) &= 0x3Fu;
          if ( (*(_QWORD *)(v5 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL && (*(_BYTE *)(v5 + 34) & 7) == 5 )
          {
            MiUnlinkPageFromBadList(v5, v9);
            *v6 |= 0x4000000000000000uLL;
            MiInsertPageInFreeOrZeroedList(v3, 2);
          }
          ++v4;
LABEL_11:
          _InterlockedAnd64(v6, 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v8);
          if ( v7 )
          {
            MiReleaseNonPagedResources((__int64)v7, v4);
            MiDereferencePartition(v7);
            v4 = 0LL;
          }
          goto LABEL_13;
        }
        _InterlockedAnd64(v6, 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v8);
        v5 -= 48LL;
        v6 -= 6;
        --v3;
      }
LABEL_13:
      ++v3;
      v5 += 48LL;
      v6 += 6;
    }
    while ( v3 < a2 );
  }
  return v4;
}
