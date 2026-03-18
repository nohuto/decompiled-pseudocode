/*
 * XREFs of MiFreeVadRange @ 0x1400272B4
 * Callers:
 *     NtFreeVirtualMemory @ 0x140433DC0 (NtFreeVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1405320CC (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x140532AC0 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiLocateVadEvent @ 0x140015564 (MiLocateVadEvent.c)
 *     MiDeleteVad @ 0x1400288D0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x140095DC0 (MiDeletePartialVad.c)
 *     MiPrepareVadDelete @ 0x14042E184 (MiPrepareVadDelete.c)
 *     PerfInfoLogVirtualFree @ 0x1406A3098 (PerfInfoLogVirtualFree.c)
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
