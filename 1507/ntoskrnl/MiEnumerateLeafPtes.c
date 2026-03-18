/*
 * XREFs of MiEnumerateLeafPtes @ 0x1400DCA4C
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400DC414 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140213640 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x14022CC40 (MmOutSwapVirtualAddresses.c)
 *     MiEnumerateKernelLeafPtes @ 0x1403F0340 (MiEnumerateKernelLeafPtes.c)
 *     MmMarkHiberPhase @ 0x1403F16C0 (MmMarkHiberPhase.c)
 *     MmMarkImageForHiberPhase @ 0x1403F2770 (MmMarkImageForHiberPhase.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14003BAA0 (MiGetNextPageTable.c)
 */

unsigned __int64 __fastcall MiEnumerateLeafPtes(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 (__fastcall *a3)(__int64, unsigned __int64, unsigned __int64),
        __int64 a4)
{
  __int64 v4; // r15
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = a4;
  do
  {
    result = 0xFFFFF68000000000uLL;
    v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( a1 < 0xFFFFF68000000000uLL && (result = 0xFFFFF6FFFFFFFFFFuLL, a2 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      v10 = 0xFFFFF6FB3FFFFFF8uLL;
      a1 = 0xFFFFF70000000000uLL;
    }
    else
    {
      a1 = a2;
      v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    while ( v9 <= v10 )
    {
      LOBYTE(a4) = 17;
      result = MiGetNextPageTable(v9, v10, 1uLL, a4, 1, &v13);
      v11 = result;
      if ( !result )
        break;
      if ( v13 )
      {
        result = a3(
                   v4,
                   ((result >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                   ((result >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v9 = v11 + 4096;
      }
      else
      {
        v12 = (result & 0xFFFFFFFFFFFFF000uLL) + 4088;
        if ( v12 > v10 )
          v12 = v10;
        result = a3(v4, result, v12);
        v9 = v12 + 8;
      }
    }
  }
  while ( a1 != a2 );
  return result;
}
