/*
 * XREFs of MiEnumerateLeafPtes @ 0x1400B7AA0
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400B7638 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1401343CC (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiReleaseCommitForResetPages @ 0x1401E0760 (MiReleaseCommitForResetPages.c)
 *     MmOutSwapVirtualAddresses @ 0x1401F76C4 (MmOutSwapVirtualAddresses.c)
 *     MiEnumerateKernelLeafPtes @ 0x1403C9674 (MiEnumerateKernelLeafPtes.c)
 *     MmMarkHiberPhase @ 0x1403CAD7C (MmMarkHiberPhase.c)
 *     MmMarkImageForHiberPhase @ 0x1403CB7C4 (MmMarkImageForHiberPhase.c)
 * Callees:
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 */

unsigned __int64 __fastcall MiEnumerateLeafPtes(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 (__fastcall *a3)(__int64, unsigned __int64, unsigned __int64),
        __int64 a4,
        char a5)
{
  __int64 v9; // r9
  unsigned __int64 v10; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v12; // rsi
  char v13; // r15
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // [rsp+60h] [rbp+8h] BYREF

  v9 = 0xFFFFF70000000000uLL;
  do
  {
    v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( a1 < 0xFFFFF68000000000uLL && a2 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      result = 0xFFFFF68000000000uLL;
      v12 = 0xFFFFF6FB3FFFFFF8uLL;
      a1 = 0xFFFFF70000000000uLL;
    }
    else
    {
      a1 = a2;
      result = 0xFFFFF68000000000uLL;
      v12 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    if ( v10 <= v12 )
    {
      v13 = a5 | 1;
      do
      {
        LOBYTE(v9) = 17;
        result = MiGetNextPageTable(v10, v12, 0LL, v9, v13, &v19);
        v14 = result;
        if ( !result )
          break;
        if ( v19 )
        {
          v16 = 512LL;
          v17 = ((result >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v19 > 1 )
          {
            v18 = v19 - 1;
            do
            {
              v16 <<= 9;
              v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              --v18;
            }
            while ( v18 );
          }
          result = a3(a4, v17, v17);
          v10 = v14 + 8 * v16;
        }
        else
        {
          v15 = (result & 0xFFFFFFFFFFFFF000uLL) + 4088;
          if ( v15 > v12 )
            v15 = v12;
          result = ((__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64, _QWORD))a3)(
                     a4,
                     result,
                     v15,
                     0LL);
          v10 = v15 + 8;
        }
      }
      while ( v10 <= v12 );
      v9 = 0xFFFFF70000000000uLL;
    }
  }
  while ( a1 != a2 );
  return result;
}
