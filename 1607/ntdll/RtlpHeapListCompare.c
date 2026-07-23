/*
 * XREFs of RtlpHeapListCompare @ 0x18004C404
 * Callers:
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180027780 (RtlpExtendHeap.c)
 *     RtlpHeapAddListEntry @ 0x18004C2E4 (RtlpHeapAddListEntry.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHeapListCompare(__int64 a1, __int64 a2, int a3, char a4)
{
  int v5; // r8d
  int v6; // edx
  int v9; // [rsp+38h] [rbp-10h]

  if ( a4 )
  {
    v5 = a2 - 16;
    v6 = *(_DWORD *)(a2 - 16 + 8);
    LOWORD(v9) = v6;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v9 = *(_DWORD *)(a1 + 136) ^ v6;
      if ( HIBYTE(v9) != (BYTE2(v9) ^ (unsigned __int8)(BYTE1(v9) ^ v9)) )
        RtlpLogHeapFailure(3, a1, v5, 0, 0LL, 0LL);
    }
    return (unsigned int)(a3 - (unsigned __int16)v9);
  }
  else
  {
    return (unsigned int)(a3 - *(_DWORD *)(a2 + 40));
  }
}
