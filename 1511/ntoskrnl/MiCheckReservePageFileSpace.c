/*
 * XREFs of MiCheckReservePageFileSpace @ 0x14006D470
 * Callers:
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 * Callees:
 *     MiReservePageFileSpace @ 0x1400367C0 (MiReservePageFileSpace.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiCheckReservePageFileSpace(__int64 a1, _BYTE *a2, __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned __int16 v7; // r9
  int *v8; // r9

  result = MI_READ_PTE_LOCK_FREE(a1 + 16);
  v7 = ((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF;
  if ( v7 == 1023 )
    v8 = &MiSystemPartition;
  else
    v8 = *(int **)(qword_1402FEC28 + 8LL * v7);
  if ( v8[239] )
  {
    if ( (result & 0x1000) == 0 && !*(_QWORD *)(a3 + 232) )
    {
      if ( (result & 1) != 0
        || (result & 0x3C00) != 0
        || (result >>= 32, result != 1)
        || (*(_BYTE *)(a1 + 34) & 0x10) != 0
        || (*a2 & 0x42) != 0 )
      {
        result = (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( (unsigned __int64)a2 <= result )
        {
          result = 0xFFFFF68000000000uLL;
          if ( (unsigned __int64)a2 >= 0xFFFFF68000000000uLL )
          {
            result = 0xFFFFF6FFFFFFFFFFuLL;
            if ( (unsigned __int64)a2 <= 0xFFFFF6FFFFFFFFFFuLL )
              return MiReservePageFileSpace((__int64)v8, (__int64)a2, a3);
          }
        }
      }
    }
  }
  return result;
}
