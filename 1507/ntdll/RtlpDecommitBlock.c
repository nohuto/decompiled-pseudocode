/*
 * XREFs of RtlpDecommitBlock @ 0x180037624
 * Callers:
 *     RtlpCollectFreeBlocks @ 0x180037564 (RtlpCollectFreeBlocks.c)
 * Callees:
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x180037718 (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18003776C (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpLogHeapContractEvent @ 0x1800EF6F8 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapDecommit @ 0x1800EF828 (RtlpLogHeapDecommit.c)
 */

char __fastcall RtlpDecommitBlock(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // edi
  _DWORD *v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF
  const void *v12; // [rsp+68h] [rbp+28h] BYREF

  v3 = a1;
  v4 = *(unsigned __int16 *)(a2 + 8);
  v11 = v4;
  *(_BYTE *)(a2 + 10) &= 0xF8u;
  *(_BYTE *)(a2 + 15) = 0;
  if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
  {
    v8 = (_DWORD *)(a2 + 32);
    v9 = (unsigned __int64)(16 * v4 - 32) >> 2;
    if ( v9 )
    {
      if ( ((unsigned __int8)v8 & 4) == 0 )
        goto LABEL_17;
      *v8 = -17891602;
      if ( --v9 )
      {
        v8 = (_DWORD *)(a2 + 36);
LABEL_17:
        memset64(v8, 0xFEEEFEEEFEEEFEEEuLL, v9 >> 1);
        a1 = 0LL;
        if ( (v9 & 1) != 0 )
          v8[v9 - 1] = -17891602;
      }
    }
    *(_BYTE *)(a2 + 10) |= 4u;
  }
  v5 = RtlpHeapKey ^ *(_QWORD *)(v3 + 360);
  if ( !v5 )
  {
    LOBYTE(v5) = RtlpGetFreeBlockInsidePageBoundaries(a1, a2, &v12, &v11);
    if ( (_BYTE)v5 )
    {
      v7 = RtlpSecMemFreeVirtualMemory(v6, &v12, &v11, 0x4000LL);
      if ( v7 < 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        LOBYTE(v5) = DbgPrint(
                       "RtlpHeapFreeVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
                       v7,
                       (const void *)v3,
                       v12,
                       v11);
      }
      else
      {
        if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapDecommit(v3, v12, v11, 7LL);
        ++*(_DWORD *)(v3 + 588);
        ++*(_DWORD *)(v3 + 620);
        ++*(_DWORD *)(v3 + 604);
        *(_QWORD *)(v3 + 624) += v11;
        if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapContractEvent(v3, (int)v12, v11, 16 * *(_QWORD *)(v3 + 192), 0, 0LL, (HANDLE)MEMORY[0x7FFE0380]);
        LOBYTE(v5) = MEMORY[0x7FFE038A];
        if ( MEMORY[0x7FFE038A] )
          LOBYTE(v5) = RtlpLogHeapContractEvent(
                         v3,
                         (int)v12,
                         v11,
                         16 * (unsigned int)*(_QWORD *)(v3 + 192),
                         0,
                         0LL,
                         (HANDLE)MEMORY[0x7FFE038A]);
        *(_BYTE *)(a2 + 10) &= 0x13u;
        *(_BYTE *)(a2 + 10) |= 8u;
      }
    }
  }
  if ( *(_DWORD *)(v3 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    LODWORD(v5) = *(_DWORD *)(v3 + 136);
    *(_DWORD *)(a2 + 8) ^= v5;
  }
  return v5;
}
