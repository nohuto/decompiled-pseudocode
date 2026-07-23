/*
 * XREFs of MiFreeVadRange @ 0x140026E34
 * Callers:
 *     NtFreeVirtualMemory @ 0x140432C90 (NtFreeVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x14053260C (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x140533000 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiLocateVadEvent @ 0x1400150E4 (MiLocateVadEvent.c)
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 *     MiPrepareVadDelete @ 0x14042D054 (MiPrepareVadDelete.c)
 *     PerfInfoLogVirtualFree @ 0x1406A31D0 (PerfInfoLogVirtualFree.c)
 */

__int64 __fastcall MiFreeVadRange(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 result; // rax
  void *v9; // rcx
  int v10; // [rsp+50h] [rbp+18h] BYREF

  v5 = (a4 << 12) | 0xFFF;
  v6 = a3 << 12;
  result = MiPrepareVadDelete(a1, a2, a3, a4, (__int64)&v10);
  if ( (int)result < 0 )
    return result;
  if ( !v10 )
  {
    MiDeleteVad(a1, 0LL);
LABEL_4:
    if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
      PerfInfoLogVirtualFree(v6, v5 - v6 + 1, a5);
    return 0LL;
  }
  if ( MiLocateVadEvent(a1, 2) )
    return 3221225541LL;
  result = MiDeletePartialVad(v9);
  if ( (int)result >= 0 )
    goto LABEL_4;
  return result;
}
