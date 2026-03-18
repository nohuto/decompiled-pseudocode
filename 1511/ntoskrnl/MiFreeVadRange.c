/*
 * XREFs of MiFreeVadRange @ 0x1400D5DC0
 * Callers:
 *     NtFreeVirtualMemory @ 0x140417AA0 (NtFreeVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1404F3C18 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x1404F3F5C (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiLocateVadEvent @ 0x1400B8A24 (MiLocateVadEvent.c)
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 *     MiPrepareVadDelete @ 0x14049CCA4 (MiPrepareVadDelete.c)
 *     PerfInfoLogVirtualFree @ 0x140662738 (PerfInfoLogVirtualFree.c)
 */

__int64 __fastcall MiFreeVadRange(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v9; // r8
  void *v10; // rcx
  int v11; // [rsp+50h] [rbp+18h] BYREF

  v5 = (a4 << 12) | 0xFFF;
  v6 = a3 << 12;
  result = MiPrepareVadDelete(a1, a2, a3, a4, (__int64)&v11);
  if ( (int)result < 0 )
    return result;
  if ( !v11 )
  {
    MiDeleteVad(a1, 0, v9);
LABEL_4:
    if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
      PerfInfoLogVirtualFree(v6, v5 - v6 + 1, a5);
    return 0LL;
  }
  if ( MiLocateVadEvent(a1, 2) )
    return 3221225541LL;
  result = MiDeletePartialVad(v10);
  if ( (int)result >= 0 )
    goto LABEL_4;
  return result;
}
