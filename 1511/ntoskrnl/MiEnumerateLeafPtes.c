/*
 * XREFs of MiEnumerateLeafPtes @ 0x14005E200
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400F56B4 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14012D814 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x1401E1508 (MmOutSwapVirtualAddresses.c)
 *     MiEnumerateKernelLeafPtes @ 0x14039DF84 (MiEnumerateKernelLeafPtes.c)
 *     MmMarkHiberPhase @ 0x14039EE0C (MmMarkHiberPhase.c)
 *     MmMarkImageForHiberPhase @ 0x14039FC14 (MmMarkImageForHiberPhase.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 */

unsigned __int64 __fastcall MiEnumerateLeafPtes(
        unsigned __int64 a1,
        unsigned __int64 a2,
        void (__fastcall *a3)(__int64, unsigned __int64, unsigned __int64),
        __int64 a4)
{
  __int64 v7; // rbp
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  int v14; // [rsp+60h] [rbp+8h] BYREF

  v7 = a4;
  result = 0xFFFFF6FFFFFFFFFFuLL;
  do
  {
    v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( a2 <= 0xFFFFF6FFFFFFFFFFuLL || a1 >= 0xFFFFF68000000000uLL )
    {
      a1 = a2;
      v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    else
    {
      v10 = 0xFFFFF6FB3FFFFFF8uLL;
      a1 = 0xFFFFF70000000000uLL;
    }
    if ( v9 <= v10 )
    {
      do
      {
        LOBYTE(a4) = 17;
        NextPageTable = MiGetNextPageTable(v9, v10, 0, a4, 1, (__int64)&v14);
        v12 = NextPageTable;
        if ( !NextPageTable )
          break;
        if ( v14 )
        {
          a3(
            v7,
            ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v9 = v12 + 4096;
        }
        else
        {
          v13 = (NextPageTable & 0xFFFFFFFFFFFFF000uLL) + 4088;
          if ( v13 > v10 )
            v13 = v10;
          ((void (__fastcall *)(__int64, unsigned __int64, unsigned __int64, _QWORD))a3)(v7, NextPageTable, v13, 0LL);
          v9 = v13 + 8;
        }
      }
      while ( v9 <= v10 );
      result = 0xFFFFF6FFFFFFFFFFuLL;
    }
  }
  while ( a1 != a2 );
  return result;
}
