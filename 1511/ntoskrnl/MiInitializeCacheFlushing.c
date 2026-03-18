/*
 * XREFs of MiInitializeCacheFlushing @ 0x14074DBEC
 * Callers:
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE @ 0x1400A9904 (MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE.c)
 *     HvlFlushTbAllPartitions @ 0x1400E8120 (HvlFlushTbAllPartitions.c)
 *     KeInvalidateAllCaches @ 0x1400F3D78 (KeInvalidateAllCaches.c)
 *     MiZeroPhysicalPage @ 0x1400FE170 (MiZeroPhysicalPage.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeCacheFlushing()
{
  __int64 result; // rax
  __int64 v1; // r15
  unsigned __int64 v2; // rbp
  __int64 v3; // r14
  unsigned __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  unsigned int v11; // eax
  SIZE_T v12; // r15
  PVOID PoolWithTag; // rdi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  signed __int32 v16[18]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 CurrentIrql; // [rsp+50h] [rbp+8h]

  result = MiGetPage((__int64)MiSystemPartition, 0, 0);
  v1 = result;
  if ( result != -1 )
  {
    v2 = 0LL;
    v3 = 48 * result - 0x58000000000LL;
    v4 = 0LL;
    MiFinalizePageAttribute(v3, 1LL, 0);
    CurrentIrql = KeGetCurrentIrql();
    v5 = 2LL;
    __writecr8(2uLL);
    v6 = 4LL;
    do
    {
      MiZeroPhysicalPage(v1, 1, 0LL);
      *(_BYTE *)(v3 + 34) &= 0x3Fu;
      v7 = __rdtsc();
      _InterlockedOr(v16, 0);
      MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE(v1, 1LL, 0);
      _InterlockedOr(v16, 0);
      LOBYTE(v8) = *(_BYTE *)(v3 + 34) & 0x3F | 0x40;
      *(_BYTE *)(v3 + 34) = v8;
      v9 = __rdtsc();
      ++dword_1402FE710;
      HvlFlushTbAllPartitions(v8);
      KeFlushTb(3u, 2u);
      v2 += v9 - v7;
      --v6;
    }
    while ( v6 );
    v10 = v2 >> 2;
    if ( v10 )
    {
      v11 = dword_1402FE6EC;
      if ( !dword_1402FE6EC )
        v11 = 256;
      v12 = 3 * (v11 >> 2);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x20206D4Du);
      if ( PoolWithTag )
      {
        do
        {
          memset(PoolWithTag, 0, v12);
          v14 = __rdtsc();
          _InterlockedOr(v16, 0);
          ++dword_1402FE714;
          KeInvalidateAllCaches();
          _InterlockedOr(v16, 0);
          v15 = __rdtsc();
          _InterlockedOr(v16, 0);
          v4 += (((unsigned __int64)HIDWORD(v15) << 32) | (unsigned int)v15) - v14;
          --v5;
        }
        while ( v5 );
        ExFreePoolWithTag(PoolWithTag, 0);
        dword_1402FE71C = 2 * (v4 >> 1) / v10;
      }
    }
    __writecr8(CurrentIrql);
    return MiReleaseFreshPage(v3);
  }
  return result;
}
