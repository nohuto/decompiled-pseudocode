/*
 * XREFs of MiFreeVadRange @ 0x1400F1340
 * Callers:
 *     NtFreeVirtualMemory @ 0x1404B9FC0 (NtFreeVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x140567F04 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x1405686EC (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 *     MiPrepareVadDelete @ 0x14051135C (MiPrepareVadDelete.c)
 *     PerfInfoLogVirtualFree @ 0x1406E5850 (PerfInfoLogVirtualFree.c)
 */

__int64 __fastcall MiFreeVadRange(PVOID P, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 result; // rax
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v5 = (a4 << 12) | 0xFFF;
  v6 = a3 << 12;
  result = MiPrepareVadDelete((_DWORD)P, a2, a3, a4, (__int64)&v9);
  if ( (int)result >= 0 )
  {
    if ( v9 )
    {
      result = MiDeletePartialVad(P);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      MiDeleteVad((__int64)P, 0);
    }
    if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
      PerfInfoLogVirtualFree(v6, v5 - v6 + 1, a5);
    return 0LL;
  }
  return result;
}
