/*
 * XREFs of MmFreeContiguousMemory @ 0x14009A3B8
 * Callers:
 *     HvlpFreeOverlayPages @ 0x1401126F8 (HvlpFreeOverlayPages.c)
 *     IopInitializeInMemoryDumpData @ 0x1401C7484 (IopInitializeInMemoryDumpData.c)
 *     ViReleaseDmaAdapter @ 0x14070A27C (ViReleaseDmaAdapter.c)
 * Callees:
 *     ExFreeLargePool @ 0x140010760 (ExFreeLargePool.c)
 *     MmUnmapIoSpace @ 0x14009ACB0 (MmUnmapIoSpace.c)
 *     MiFreeContiguousPages @ 0x140111E80 (MiFreeContiguousPages.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1401E340C (MiLogPerfMemoryRangeEvent.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     VfFreeMemoryNotification @ 0x1407028B4 (VfFreeMemoryNotification.c)
 */

void __stdcall MmFreeContiguousMemory(PVOID BaseAddress)
{
  ULONG_PTR *v1; // rbp
  __int64 v3; // r8
  unsigned __int64 *v4; // rdx
  int v5; // r9d
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  ULONG_PTR v8; // r9
  SIZE_T v9; // rsi
  ULONG_PTR v10; // rdi
  unsigned __int64 v11; // rax
  ULONG_PTR v12; // [rsp+50h] [rbp+0h] BYREF

  v1 = (ULONG_PTR *)((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL);
  if ( (unsigned __int64)BaseAddress >= qword_140327F60
    && (unsigned __int64)BaseAddress < qword_140327F60 + 0x100000000000LL
    || qword_140326C70
    && (unsigned __int64)BaseAddress >= qword_140326C70
    && (unsigned __int64)BaseAddress < qword_140326C70 + (qword_140326C50 << 21)
    && (*(_BYTE *)(48
                 * ((*(_QWORD *)((((unsigned __int64)BaseAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                 - 0x57FFFFFFFDALL) & 0xF0) == 0xD0 )
  {
    ExFreePoolWithTag(BaseAddress, 0);
  }
  else
  {
    v3 = 4LL;
    v4 = v1 + 3;
    v5 = 4;
    v6 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      *v4 = v6;
      v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v4;
      --v3;
    }
    while ( v3 );
    do
    {
      v7 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL)
                                           + 0x18
                                           + 8LL * (unsigned int)(v5 - 1)));
      *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v7;
    }
    while ( (v7 & 0x80u) == 0LL && v5 );
    if ( ((unsigned __int16)BaseAddress & 0xFFF) != 0 )
      KeBugCheckEx(0xC2u, 0x61uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
    ExFreeLargePool(
      (ULONG_PTR)BaseAddress,
      (_DWORD *)((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL),
      v1 + 1,
      v7 < 0 ? 0x200 : 0);
    v8 = *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    if ( v8 < 0x1000 || (v8 & 0xFFF) != 0 || *(_DWORD *)v1 != 1416523587 )
      KeBugCheckEx(0xC2u, 0x60uLL, (ULONG_PTR)BaseAddress, v8, *(unsigned int *)v1);
    v9 = *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    if ( MmProtectFreedNonPagedPool == 1 )
      v9 = v8 + 4096;
    v10 = v8 >> 12;
    if ( ViVerifierEnabled )
      VfFreeMemoryNotification(BaseAddress, *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 8));
    MmUnmapIoSpace(BaseAddress, v9);
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(BaseAddress, 0LL, 12LL, v10);
    v11 = MI_READ_PTE_LOCK_FREE(v1 + 2);
    MiFreeContiguousPages(MiSystemPartition, (v11 >> 12) & 0xFFFFFFFFFLL, v10);
  }
}
