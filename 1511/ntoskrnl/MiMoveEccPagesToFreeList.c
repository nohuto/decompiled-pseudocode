/*
 * XREFs of MiMoveEccPagesToFreeList @ 0x1401D1CFC
 * Callers:
 *     MmMarkPhysicalMemoryAsGood @ 0x1401D24B0 (MmMarkPhysicalMemoryAsGood.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiDereferencePartition @ 0x1400BC1D4 (MiDereferencePartition.c)
 *     MiReleaseNonPagedResources @ 0x1400E9D1C (MiReleaseNonPagedResources.c)
 *     MiReferencePagePartition @ 0x1401D984C (MiReferencePagePartition.c)
 *     MiUnlinkPageFromBadList @ 0x1401E0238 (MiUnlinkPageFromBadList.c)
 */

unsigned __int64 __fastcall MiMoveEccPagesToFreeList(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rbx
  ULONG_PTR v5; // rdi
  volatile signed __int64 *v6; // rsi
  _DWORD *v7; // r14
  unsigned __int8 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rax

  v2 = 0LL;
  v3 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v5 = BugCheckParameter2;
  if ( BugCheckParameter2 < a2 )
  {
    v6 = (volatile signed __int64 *)(v3 + 24);
    do
    {
      if ( MI_IS_PFN(v5) )
      {
        v7 = 0LL;
        v8 = MiLockPageInline(v3);
        if ( (*(_BYTE *)(v3 + 35) & 0x40) == 0 )
          goto LABEL_11;
        v7 = (_DWORD *)MiReferencePagePartition(v3);
        if ( v7 )
        {
          v10 = *(_QWORD *)(v3 + 8);
          *(_BYTE *)(v3 + 35) &= 0x3Fu;
          if ( (v10 | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL && (*(_BYTE *)(v3 + 34) & 7) == 5 )
          {
            MiUnlinkPageFromBadList(v3, v9);
            *v6 |= 0x4000000000000000uLL;
            MiInsertPageInFreeOrZeroedList(v5, 2uLL);
          }
          ++v2;
LABEL_11:
          _InterlockedAnd64(v6, 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v8);
          if ( v7 )
          {
            MiReleaseNonPagedResources((__int64)v7, v2);
            MiDereferencePartition(v7);
            v2 = 0LL;
          }
          goto LABEL_13;
        }
        _InterlockedAnd64(v6, 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v8);
        v3 -= 48LL;
        v6 -= 6;
        --v5;
      }
LABEL_13:
      ++v5;
      v3 += 48LL;
      v6 += 6;
    }
    while ( v5 < a2 );
  }
  return v2;
}
