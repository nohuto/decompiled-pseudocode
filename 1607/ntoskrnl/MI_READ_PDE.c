/*
 * XREFs of MI_READ_PDE @ 0x1400E3E10
 * Callers:
 *     MiSwapWslEntries @ 0x1400499F0 (MiSwapWslEntries.c)
 *     MiExchangeWsle @ 0x1400AFDA8 (MiExchangeWsle.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MI_READ_PDE(_BYTE *a1)
{
  ULONG_PTR v2; // rax
  __int64 v3; // r10

  if ( (*a1 & 1) == 0 )
  {
    v2 = MI_READ_PTE_LOCK_FREE(a1);
    KeBugCheckEx(0x1Au, 0x61940uLL, v3 << 25 >> 16, v2, 0LL);
  }
  return MI_READ_PTE_LOCK_FREE(a1);
}
