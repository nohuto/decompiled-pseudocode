/*
 * XREFs of RtlpHpExtrasAppend @ 0x18006A3C8
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18002ED90 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeap @ 0x1800589AC (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpHpExtrasSetPresent @ 0x18006A44C (RtlpHpExtrasSetPresent.c)
 */

unsigned __int64 __fastcall RtlpHpExtrasAppend(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rbx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (a6 & 0x10000000) != 0 )
  {
    *(_QWORD *)(a2 + a3) = 0xABABABABABABABABuLL;
    *(_QWORD *)(a2 + a3 + 8) = 0xABABABABABABABABuLL;
  }
  v6 = 0LL;
  if ( (a6 & 0x20000F08) != 0 )
  {
    v7 = a2 + a3;
    if ( (a6 & 0x10000000) != 0 )
      v7 += 16LL;
    v6 = (v7 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_BYTE *)(v6 + 2) &= 0xFu;
    *(_BYTE *)(v6 + 2) |= 16 * (BYTE1(a6) & 0xFE);
    *(_BYTE *)(v6 + 3) = a5 >> 4;
    _InterlockedOr(v9, 0);
    RtlpHpExtrasSetPresent(a1, a2, a6);
  }
  return v6;
}
