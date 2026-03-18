/*
 * XREFs of MmFreeContiguousMemory @ 0x140114978
 * Callers:
 *     HvlpFreeOverlayPages @ 0x14013A308 (HvlpFreeOverlayPages.c)
 *     IopInitializeInMemoryDumpData @ 0x1401F4A70 (IopInitializeInMemoryDumpData.c)
 *     ViReleaseDmaAdapter @ 0x14073F00C (ViReleaseDmaAdapter.c)
 *     VerifierMmFreeContiguousMemory @ 0x14075378C (VerifierMmFreeContiguousMemory.c)
 * Callees:
 *     ExFreeLargePool @ 0x140046E10 (ExFreeLargePool.c)
 *     MiFreeContiguousPages @ 0x140114BDC (MiFreeContiguousPages.c)
 *     MmUnmapIoSpace @ 0x1401153C0 (MmUnmapIoSpace.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140214958 (MiLogPerfMemoryRangeEvent.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     VfFreeMemoryNotification @ 0x140737404 (VfFreeMemoryNotification.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall MmFreeContiguousMemory(PVOID BaseAddress)
{
  signed __int64 *v2; // r10
  unsigned __int64 v3; // r11
  signed __int64 *v4; // rcx
  signed __int64 PteShadow; // r9
  unsigned __int64 v6; // rdi
  __int64 v7; // rdi
  int v8; // r9d
  SIZE_T v9; // rbp
  SIZE_T v10; // rsi
  ULONG_PTR v11; // [rsp+50h] [rbp+8h] BYREF
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp+10h] BYREF

  if ( (unsigned __int64)BaseAddress + 0x200000000000LL <= 0xFFFFFFFFFFFLL
    || qword_14034EDB0
    && (unsigned __int64)BaseAddress >= qword_14034EDB0
    && (unsigned __int64)BaseAddress < qword_14034EDB0 + (qword_14034ED90 << 21)
    && (*(_BYTE *)(48
                 * ((*(_QWORD *)((((unsigned __int64)BaseAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                 - 0x57FFFFFFFDALL) & 0xF0) == 0xD0 )
  {
    ExFreePoolWithTag(BaseAddress, 0);
  }
  else
  {
    v2 = (signed __int64 *)((((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v3 = 2040LL;
    v4 = (signed __int64 *)((((unsigned __int64)BaseAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    PteShadow = *v4;
    if ( (unsigned __int64)(v4 + 0x12090482600LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow(v4, *v4);
    v11 = PteShadow;
    if ( (PteShadow & 0x80u) == 0LL )
    {
      PteShadow = *v2;
      if ( (unsigned __int64)(v2 + 0x12090482600LL) <= v3 )
        PteShadow = MiReadPteShadow(v2, *v2);
      v11 = PteShadow;
    }
    v6 = PteShadow;
    if ( (unsigned __int64)&STACK[0x90482413050] <= v3 )
      v6 = MiReadPteShadow(&v11, PteShadow);
    v7 = (v6 >> 12) & 0xFFFFFFFFFLL;
    v8 = PteShadow < 0 ? 0x200 : 0;
    if ( ((unsigned __int16)BaseAddress & 0xFFF) != 0 )
      KeBugCheckEx(0xC2u, 0x61uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
    ExFreeLargePool((ULONG_PTR)BaseAddress, &v11, &NumberOfBytes, v8);
    if ( NumberOfBytes < 0x1000 || (NumberOfBytes & 0xFFF) != 0 || (_DWORD)v11 != 1416523587 )
      KeBugCheckEx(0xC2u, 0x60uLL, (ULONG_PTR)BaseAddress, NumberOfBytes, (unsigned int)v11);
    v9 = NumberOfBytes;
    if ( MmProtectFreedNonPagedPool == 1 )
      v9 = NumberOfBytes + 4096;
    v10 = NumberOfBytes >> 12;
    if ( ViVerifierEnabled )
      VfFreeMemoryNotification(BaseAddress, NumberOfBytes);
    MmUnmapIoSpace(BaseAddress, v9);
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(BaseAddress, 0LL, 12LL, v10);
    MiFreeContiguousPages(MiSystemPartition, v7, v10);
  }
}
