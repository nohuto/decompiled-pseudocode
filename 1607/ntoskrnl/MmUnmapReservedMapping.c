/*
 * XREFs of MmUnmapReservedMapping @ 0x1401E3FC4
 * Callers:
 *     SmFpFree @ 0x14011B318 (SmFpFree.c)
 *     sub_140158738 @ 0x140158738 (sub_140158738.c)
 *     PnprCopyReservedMapping @ 0x1401CFEC0 (PnprCopyReservedMapping.c)
 *     PnprSwap @ 0x1401D0740 (PnprSwap.c)
 *     PspIumFreePhysicalPages @ 0x140210044 (PspIumFreePhysicalPages.c)
 *     PnprMapPhysicalPages @ 0x1403DBDEC (PnprMapPhysicalPages.c)
 *     EtwpSavePersistedLogger @ 0x1406AA39C (EtwpSavePersistedLogger.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiRetardMdl @ 0x1401E2CDC (MiRetardMdl.c)
 *     MiUnmapMdlCommon @ 0x1401E3B1C (MiUnmapMdlCommon.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __stdcall MmUnmapReservedMapping(PVOID BaseAddress, ULONG PoolTag, PMDL MemoryDescriptorList)
{
  ULONG_PTR v3; // rdi
  ULONG_PTR v4; // rbp
  ULONG_PTR BugCheckParameter4; // r14
  KIRQL v7; // al
  ULONG_PTR v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  ULONG_PTR v11; // r9
  __int64 v12; // rcx
  unsigned __int64 v13; // r10
  ULONG_PTR i; // r9
  __int64 v15; // r9

  v3 = (ULONG_PTR)BaseAddress;
  v4 = PoolTag;
  if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    v3 = (ULONG_PTR)BaseAddress - (unsigned int)MiRetardMdl((__int64)MemoryDescriptorList);
  BugCheckParameter4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
                      + (unsigned __int64)MemoryDescriptorList->ByteCount
                      + 4095) >> 12;
  v7 = ExAcquireSpinLockShared(&dword_1403275A8);
  v8 = qword_1403275B0;
  v9 = v3 & 0xFFFFFFFFFFFFF000uLL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v8 )
        KeBugCheckEx(0xDAu, 0x106uLL, v3, v4, 2uLL);
      v10 = *(_QWORD *)(v8 + 24);
      if ( v9 <= v10 )
        break;
      v8 = *(_QWORD *)(v8 + 8);
    }
    if ( v9 >= v10 )
      break;
    v8 = *(_QWORD *)v8;
  }
  ExReleaseSpinLockShared(&dword_1403275A8, v7);
  if ( *(_DWORD *)(v8 + 40) != (_DWORD)v4 )
    KeBugCheckEx(0xDAu, 0x102uLL, v3, v4, BugCheckParameter4);
  v11 = *(_QWORD *)(v8 + 32);
  if ( !v11 )
    KeBugCheckEx(0xDAu, 0x10DuLL, v3, v8, v4);
  if ( BugCheckParameter4 > v11 )
    KeBugCheckEx(0xDAu, 0x10AuLL, v3, v11, BugCheckParameter4);
  MiUnmapMdlCommon(v3, v4, (__int64)MemoryDescriptorList, BugCheckParameter4);
  v12 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = v12 + 8LL * *(_QWORD *)(v8 + 32);
  for ( i = v12 + 8 * BugCheckParameter4; i < v13; i = v15 + 8 )
  {
    if ( MI_READ_PTE_LOCK_FREE(i) )
      KeBugCheckEx(0xDAu, 0x10CuLL, v3, v4, BugCheckParameter4);
  }
  MemoryDescriptorList->MdlFlags &= 0xFFDEu;
}
