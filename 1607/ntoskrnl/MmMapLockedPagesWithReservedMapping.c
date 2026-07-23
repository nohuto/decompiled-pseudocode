/*
 * XREFs of MmMapLockedPagesWithReservedMapping @ 0x1401E3E60
 * Callers:
 *     SmFpAllocate @ 0x14011BD8C (SmFpAllocate.c)
 *     sub_1401587A0 @ 0x1401587A0 (sub_1401587A0.c)
 *     PnprCopyReservedMapping @ 0x1401CFEC0 (PnprCopyReservedMapping.c)
 *     PspIumFreePhysicalPages @ 0x140210044 (PspIumFreePhysicalPages.c)
 *     PnprMapPhysicalPages @ 0x1403DBDEC (PnprMapPhysicalPages.c)
 *     EtwpSavePersistedLogger @ 0x1406AA39C (EtwpSavePersistedLogger.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiMapMdlCommon @ 0x1401E3694 (MiMapMdlCommon.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

PVOID __stdcall MmMapLockedPagesWithReservedMapping(
        PVOID MappingAddress,
        ULONG PoolTag,
        PMDL MemoryDescriptorList,
        MEMORY_CACHING_TYPE CacheType)
{
  ULONG_PTR v5; // rdi
  unsigned __int64 v7; // rbp
  KIRQL v9; // al
  ULONG_PTR v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v15; // rbx
  ULONG_PTR v16; // r9
  ULONG_PTR v17; // r9
  ULONG_PTR BugCheckParameter4; // r10
  ULONG_PTR v19; // r11

  v5 = PoolTag;
  v7 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v9 = ExAcquireSpinLockShared(&dword_1403275A8);
  v10 = qword_1403275B0;
  v11 = (unsigned __int64)MappingAddress & 0xFFFFFFFFFFFFF000uLL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v10 )
        KeBugCheckEx(0xDAu, 0x106uLL, (ULONG_PTR)MappingAddress, v5, 1uLL);
      v12 = *(_QWORD *)(v10 + 24);
      if ( v11 <= v12 )
        break;
      v10 = *(_QWORD *)(v10 + 8);
    }
    if ( v11 >= v12 )
      break;
    v10 = *(_QWORD *)v10;
  }
  ExReleaseSpinLockShared(&dword_1403275A8, v9);
  if ( *(_DWORD *)(v10 + 40) != (_DWORD)v5 )
    KeBugCheckEx(0xDAu, 0x104uLL, (ULONG_PTR)MappingAddress, v5, *(unsigned int *)(v10 + 40));
  v13 = *(_QWORD *)(v10 + 32);
  if ( v7 > v13 )
    return 0LL;
  v15 = ((*(_QWORD *)(v10 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = v15;
  if ( v15 < v15 + 8 * v13 )
  {
    do
    {
      if ( MI_READ_PTE_LOCK_FREE(v16) )
        KeBugCheckEx(0xDAu, 0x107uLL, v19, v17, BugCheckParameter4);
      v16 = v17 + 8;
    }
    while ( v16 < BugCheckParameter4 );
  }
  return (PVOID)MiMapMdlCommon((__int64)MemoryDescriptorList, v15, 4, CacheType);
}
