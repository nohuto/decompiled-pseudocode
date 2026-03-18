/*
 * XREFs of MmFreeContiguousMemory @ 0x1400C1D4C
 * Callers:
 *     HvlpFreeOverlayPages @ 0x14010760C (HvlpFreeOverlayPages.c)
 *     IopInitializeInMemoryDumpData @ 0x1401B9788 (IopInitializeInMemoryDumpData.c)
 *     ViReleaseDmaAdapter @ 0x1406BE1F4 (ViReleaseDmaAdapter.c)
 *     VerifierMmFreeContiguousMemory @ 0x1406CFCC0 (VerifierMmFreeContiguousMemory.c)
 * Callees:
 *     ExFreeLargePool @ 0x1400892D0 (ExFreeLargePool.c)
 *     MmUnmapIoSpace @ 0x1400C07D0 (MmUnmapIoSpace.c)
 *     MiFreeContiguousPages @ 0x1400C1F6C (MiFreeContiguousPages.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1401D3510 (MiLogPerfMemoryRangeEvent.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     VfFreeMemoryNotification @ 0x1406B709C (VfFreeMemoryNotification.c)
 */

void __stdcall MmFreeContiguousMemory(PVOID BaseAddress)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rbp
  SIZE_T v4; // rsi
  SIZE_T v5; // rbx
  ULONG_PTR v6; // [rsp+50h] [rbp+8h] BYREF
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp+10h] BYREF

  if ( (unsigned __int64)BaseAddress + 0x200000000000LL <= 0xFFFFFFFFFFFLL
    || qword_1402FE8F0
    && (unsigned __int64)BaseAddress >= qword_1402FE8F0
    && (unsigned __int64)BaseAddress < qword_1402FE8F0 + (qword_1402FE8D0 << 21)
    && (*(_BYTE *)(48
                 * ((*(_QWORD *)((((unsigned __int64)BaseAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                 - 0x57FFFFFFFDALL) & 0xF0) == 0xD0 )
  {
    ExFreePoolWithTag(BaseAddress, 0);
  }
  else
  {
    v6 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)BaseAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v2 = v6;
    if ( (v6 & 0x80u) == 0LL )
    {
      v2 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v6 = v2;
    }
    v3 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v6) >> 12) & 0xFFFFFFFFFLL;
    if ( ((unsigned __int16)BaseAddress & 0xFFF) != 0 )
      KeBugCheckEx(0xC2u, 0x61uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
    ExFreeLargePool((ULONG_PTR)BaseAddress, (int *)&v6, &NumberOfBytes, v2 < 0 ? 0x200 : 0);
    if ( NumberOfBytes < 0x1000 || (NumberOfBytes & 0xFFF) != 0 || (_DWORD)v6 != 1416523587 )
      KeBugCheckEx(0xC2u, 0x60uLL, (ULONG_PTR)BaseAddress, NumberOfBytes, (unsigned int)v6);
    v4 = NumberOfBytes;
    if ( MmProtectFreedNonPagedPool == 1 )
      v4 = NumberOfBytes + 4096;
    v5 = NumberOfBytes >> 12;
    if ( ViVerifierEnabled )
      VfFreeMemoryNotification(BaseAddress, NumberOfBytes);
    MmUnmapIoSpace(BaseAddress, v4);
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(BaseAddress, 0LL, 12LL, v5);
    MiFreeContiguousPages(MiSystemPartition, v3, v5);
  }
}
