/*
 * XREFs of MiInitializeCacheFlushing @ 0x1407A64D8
 * Callers:
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     MiFlushCacheForAttributeChange @ 0x14001D474 (MiFlushCacheForAttributeChange.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14001D918 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiFinalizePageAttribute @ 0x1400232DC (MiFinalizePageAttribute.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 *     KeInvalidateAllCaches @ 0x1400B3758 (KeInvalidateAllCaches.c)
 *     MiZeroPhysicalPage @ 0x140108208 (MiZeroPhysicalPage.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 MiInitializeCacheFlushing()
{
  __int64 result; // rax
  ULONG_PTR v1; // r15
  unsigned __int64 v2; // r14
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r13
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rsi
  unsigned int v14; // eax
  SIZE_T v15; // r15
  PVOID PoolWithTag; // rdi
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  signed __int32 v19[18]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 CurrentIrql; // [rsp+50h] [rbp+8h]

  result = MiGetPage((__int64)MiSystemPartition, 0, 0);
  v1 = result;
  if ( result != -1 )
  {
    v2 = 0LL;
    v3 = 48 * result - 0x58000000000LL;
    MiFinalizePageAttribute(v3, 1u, 0);
    CurrentIrql = KeGetCurrentIrql();
    v4 = 2LL;
    __writecr8(2uLL);
    v5 = 4LL;
    do
    {
      MiZeroPhysicalPage(v1, 1, 0LL);
      MiLockPageAtDpcInline(v3);
      *(_BYTE *)(v3 + 34) &= 0x3Fu;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v6 = __rdtsc();
      _InterlockedOr(v19, 0);
      MiFlushCacheForAttributeChange(v1, 1LL, 0);
      _InterlockedOr(v19, 0);
      v7 = __rdtsc();
      MiLockPageAtDpcInline(v3);
      LOBYTE(v8) = *(_BYTE *)(v3 + 34) & 0x3F | 0x40;
      *(_BYTE *)(v3 + 34) = v8;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiFlushEntireTbDueToAttributeChange(v8, v9, v10, v11);
      v2 += v7 - v6;
      --v5;
    }
    while ( v5 );
    v12 = v2 >> 2;
    v13 = 0LL;
    if ( v12 )
    {
      v14 = dword_140326A1C;
      if ( !dword_140326A1C )
        v14 = 256;
      v15 = 3 * (v14 >> 2);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x20206D4Du);
      if ( PoolWithTag )
      {
        do
        {
          memset(PoolWithTag, 0, v15);
          v17 = __rdtsc();
          _InterlockedOr(v19, 0);
          ++dword_140326A4C;
          KeInvalidateAllCaches();
          _InterlockedOr(v19, 0);
          v18 = __rdtsc();
          _InterlockedOr(v19, 0);
          v13 += (((unsigned __int64)HIDWORD(v18) << 32) | (unsigned int)v18) - v17;
          --v4;
        }
        while ( v4 );
        ExFreePoolWithTag(PoolWithTag, 0);
        dword_140326A54 = 2 * (v13 >> 1) / v12;
      }
    }
    __writecr8(CurrentIrql);
    return MiReleaseFreshPage(v3);
  }
  return result;
}
