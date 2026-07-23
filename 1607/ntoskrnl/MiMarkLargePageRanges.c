/*
 * XREFs of MiMarkLargePageRanges @ 0x1407AF36C
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140022760 (MiUpdateLargePageBitMap.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMarkLargePageRanges(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // r10
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r10
  unsigned int v13; // ebp
  __int64 v14; // r14
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned int v25; // [rsp+70h] [rbp+8h] BYREF
  __int64 v26; // [rsp+78h] [rbp+10h] BYREF
  struct _KTHREAD *v27; // [rsp+80h] [rbp+18h]

  v4 = 0xFFFFF6C000000000uLL;
  CurrentThread = KeGetCurrentThread();
  v27 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  do
  {
    LOBYTE(a4) = 17;
    NextPageTable = MiGetNextPageTable(v4, 0xFFFFF6FFFFFFFFF8uLL, 0LL, a4, 3, &v25);
    if ( !NextPageTable )
      break;
    v7 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v25 )
    {
      v8 = 512LL;
      if ( v25 > 1 )
      {
        v9 = v25 - 1;
        do
        {
          v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v8 <<= 9;
          --v9;
        }
        while ( v9 );
      }
      v26 = MI_READ_PTE_LOCK_FREE(v7);
      v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26);
      if ( MiIsPfnInline((v10 >> 12) & 0xFFFFFFFFFLL) )
        MiUpdateLargePageBitMap((__int64)MiSystemPartition, v11, v12, 1, 0);
    }
    v4 = (__int64)((v7 << 25) + 0x10000000) >> 16;
  }
  while ( v4 <= 0xFFFFF6FFFFFFFFF8uLL );
  v13 = *(_DWORD *)MmPhysicalMemoryBlock;
  if ( *(_DWORD *)MmPhysicalMemoryBlock )
  {
    v14 = 16LL * v13;
    do
    {
      v14 -= 16LL;
      --v13;
      v15 = *(_QWORD *)((char *)MmPhysicalMemoryBlock + v14 + 16);
      v16 = (v15 + *(_QWORD *)((char *)MmPhysicalMemoryBlock + v14 + 24)) & 0xFFFFFFFFFFFFFE00uLL;
      v17 = (v15 + 511) & 0xFFFFFFFFFFFFFE00uLL;
      if ( v17 )
      {
        if ( v17 < v16 )
        {
          v18 = -1LL;
          v19 = 0LL;
          v20 = 48 * v17 - 0x58000000000LL;
          v21 = v20 + 48 * (v16 - v17);
          if ( v20 < v21 )
          {
            do
            {
              if ( (*(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
                && (*(_BYTE *)(v20 + 34) & 7) == 6
                && (*(_QWORD *)(v20 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
              {
                if ( !v19 )
                  v18 = (__int64)(v20 + 0x58000000000LL) / 48;
                ++v19;
              }
              else
              {
                if ( v19 >= 0x200 )
                {
                  v19 &= 0xFFFFFFFFFFFFFE00uLL;
                  MiUpdateLargePageBitMap((__int64)MiSystemPartition, v18, v19, 1, 1);
                }
                if ( !v19 )
                  v18 = (__int64)(v20 + 0x58000000000LL) / 48;
                v22 = v19 + 512;
                v19 = 0LL;
                v23 = (v18 + v22) & 0xFFFFFFFFFFFFFE00uLL;
                if ( !v23 )
                  goto LABEL_30;
                v20 = 48 * v23 - 0x58000000030LL;
              }
              v20 += 48LL;
            }
            while ( v20 < v21 );
            if ( v19 >= 0x200 )
              MiUpdateLargePageBitMap((__int64)MiSystemPartition, v18, v19 & 0xFFFFFFFFFFFFFE00uLL, 1, 1);
          }
        }
      }
LABEL_30:
      ;
    }
    while ( v13 );
    CurrentThread = v27;
  }
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
