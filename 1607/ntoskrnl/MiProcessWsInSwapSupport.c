/*
 * XREFs of MiProcessWsInSwapSupport @ 0x1400B4DB8
 * Callers:
 *     MmInSwapWorkingSet @ 0x1400B5144 (MmInSwapWorkingSet.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1406633D8 (MiInSwapSharedWorkingSetWorker.c)
 *     MmInSwapVirtualAddresses @ 0x140663634 (MmInSwapVirtualAddresses.c)
 * Callees:
 *     MiProcessWsInSwapRanges @ 0x1400B4E74 (MiProcessWsInSwapRanges.c)
 */

__int64 __fastcall MiProcessWsInSwapSupport(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r9
  __int64 v4; // rsi
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 v9; // rdi

  v2 = *(_QWORD **)a1;
  v3 = v2;
  v4 = 2LL * *(_QWORD *)(a1 + 16);
  v5 = 0LL;
  v6 = &v2[v4];
  if ( v2 < v6 )
  {
    do
    {
      v7 = v2[1] >> 12;
      result = v7 + v5;
      if ( (unsigned __int64)(v7 + v5) >= 0x1000 )
      {
        v9 = v7 - (4096 - v5);
        v2[1] = (4096 - v5) << 12;
        result = MiProcessWsInSwapRanges(v3, v2, a2);
        if ( v9 )
        {
          result = v2[1];
          v3 = v2;
          *v2 += result;
          v2[1] = v9 << 12;
          v2 -= 2;
        }
        else
        {
          v3 = v2 + 2;
        }
        v5 = 0LL;
      }
      else
      {
        v5 += v7;
      }
      v2 += 2;
    }
    while ( v2 < v6 );
    if ( v5 )
      return MiProcessWsInSwapRanges(v3, v2 - 2, a2);
  }
  return result;
}
