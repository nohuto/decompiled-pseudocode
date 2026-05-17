/*
 * XREFs of RtlpHpLargeReAlloc @ 0x180051838
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x18004377C (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpHpReallocMove @ 0x1800430B0 (RtlpHpReallocMove.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18004F95C (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockRelease @ 0x18004F994 (RtlpHpLargeLockRelease.c)
 *     RtlpHpLargeLockAcquire @ 0x18004F9B4 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpExtrasMove @ 0x180051B88 (RtlpHpExtrasMove.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     RtlpHeapLogRangeRelease @ 0x1800F7E90 (RtlpHeapLogRangeRelease.c)
 */

__int64 __fastcall RtlpHpLargeReAlloc(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  int v7; // r14d
  unsigned __int64 v8; // rbp
  unsigned __int64 v10; // rdi
  _QWORD *Metadata; // rax
  unsigned __int64 v14; // rdi
  _QWORD v15[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a4 + 32);
  v7 = (int)a2;
  v8 = (unsigned __int64)(*(_QWORD *)(a4 + 8) + 4095LL) >> 12;
  v10 = (v4 + 4095) >> 12;
  if ( v10 << 12 < v4 )
    return 0LL;
  if ( v10 > v8 )
  {
    if ( ((unsigned int)a2 & 0x2000000) == 0 )
      return (__int64)RtlpHpReallocMove(a1, a3, a4, (unsigned int)a2);
    return 0LL;
  }
  RtlpHpLargeLockAcquire(a1, a2, a3, a4);
  Metadata = RtlpHpLargeAllocGetMetadata(a1, a3);
  if ( Metadata )
  {
    Metadata[4] &= 0xFFFuLL;
    Metadata[4] |= v10 << 12;
    *((_WORD *)Metadata + 12) = ((_WORD)v10 << 12) - *(_WORD *)(a4 + 24);
    RtlpHpLargeLockRelease(a1, v7);
    if ( *(_DWORD *)(a4 + 16) )
      RtlpHpExtrasMove(a3, *(_QWORD *)a4, a3, *(_QWORD *)(a4 + 24), v7);
    if ( v10 < v8 )
    {
      v16 = (v8 - v10) << 12;
      v15[0] = a3 + (v10 << 12) + 4096;
      ZwFreeVirtualMemory(-1LL, v15, &v16, 0x8000LL);
      if ( MEMORY[0x7FFE0388] )
        RtlpHeapLogRangeRelease(a1, v15[0]);
      v16 = 4096LL;
      v15[0] = a3 + (v10 << 12);
      ZwFreeVirtualMemory(-1LL, v15, &v16, 0x4000LL);
      v14 = v10 - v8;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), v14);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), v14);
    }
    return a3;
  }
  else
  {
    RtlpHpLargeLockRelease(a1, v7);
    return -1LL;
  }
}
