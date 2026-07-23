/*
 * XREFs of RtlpHpLargeReAlloc @ 0x180058360
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x180037B9C (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpHpReallocMove @ 0x180037FD0 (RtlpHpReallocMove.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x1800588CC (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockRelease @ 0x180058904 (RtlpHpLargeLockRelease.c)
 *     RtlpHpLargeLockAcquire @ 0x180058924 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpExtrasMove @ 0x180058A90 (RtlpHpExtrasMove.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     RtlpHeapLogRangeRelease @ 0x1800EEF6C (RtlpHeapLogRangeRelease.c)
 */

__int64 __fastcall RtlpHpLargeReAlloc(_RTL_SRWLOCK *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v10; // rdi
  __int64 Metadata; // rax
  unsigned __int64 v12; // rdi
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a4 + 32);
  v8 = (unsigned __int64)(*(_QWORD *)(a4 + 8) + 4095LL) >> 12;
  v10 = (v4 + 4095) >> 12;
  if ( v10 << 12 < v4 )
    return 0LL;
  if ( v10 > v8 )
  {
    if ( (a2 & 0x2000000) == 0 )
      return (__int64)RtlpHpReallocMove(a1, a3, a4, a2);
    return 0LL;
  }
  RtlpHpLargeLockAcquire();
  Metadata = RtlpHpLargeAllocGetMetadata(a1, a3);
  if ( Metadata )
  {
    *(_QWORD *)(Metadata + 32) &= 0xFFFuLL;
    *(_QWORD *)(Metadata + 32) |= v10 << 12;
    *(_WORD *)(Metadata + 24) = ((_WORD)v10 << 12) - *(_WORD *)(a4 + 24);
    RtlpHpLargeLockRelease(a1, a2);
    if ( *(_DWORD *)(a4 + 16) )
      RtlpHpExtrasMove(a3, *(_QWORD *)a4, a3, *(_QWORD *)(a4 + 24), a2);
    if ( v10 < v8 )
    {
      RegionSize = (v8 - v10) << 12;
      BaseAddress[0] = (PVOID)(a3 + (v10 << 12) + 4096);
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, &RegionSize, 0x8000u);
      if ( MEMORY[0x7FFE0388] )
        RtlpHeapLogRangeRelease(a1, BaseAddress[0], RegionSize);
      RegionSize = 4096LL;
      BaseAddress[0] = (PVOID)(a3 + (v10 << 12));
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, &RegionSize, 0x4000u);
      v12 = v10 - v8;
      _InterlockedExchangeAdd64((volatile signed __int64 *)&a1[10], v12);
      _InterlockedExchangeAdd64((volatile signed __int64 *)&a1[9], v12);
    }
    return a3;
  }
  else
  {
    RtlpHpLargeLockRelease(a1, a2);
    return -1LL;
  }
}
