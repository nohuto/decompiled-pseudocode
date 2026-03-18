/*
 * XREFs of MiEnableNewPfns @ 0x1401D197C
 * Callers:
 *     MiAddPhysicalMemory @ 0x140622114 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiInsertLargePageInNodeList @ 0x1400C02B4 (MiInsertLargePageInNodeList.c)
 *     MiLockAndInsertPageInFreeList @ 0x140131B78 (MiLockAndInsertPageInFreeList.c)
 */

void __fastcall MiEnableNewPfns(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbp
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int8 v7; // r15

  v2 = 48 * a1 - 0x58000000000LL;
  v3 = a2 - a1;
  v5 = a1;
  while ( v5 < a2 )
  {
    if ( (v5 & 0x1FF) != 0 || a2 - v5 < 0x200 )
    {
      MiLockAndInsertPageInFreeList(v2);
      ++v5;
      v2 += 48LL;
    }
    else
    {
      v6 = v2 + 24528;
      do
      {
        v7 = MiLockPageInline(v6);
        *(_QWORD *)(v6 + 40) = *(_QWORD *)(v6 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFELL;
        *(_BYTE *)(v6 + 34) = *(_BYTE *)(v6 + 34) & 0xF8 | 1;
        if ( v6 == v2 )
          MiInsertLargePageInNodeList(v5, 0x200uLL, 1);
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v7);
        v6 -= 48LL;
      }
      while ( v6 >= v2 );
      v5 += 512LL;
      v2 += 24576LL;
    }
  }
  MiReturnResidentAvailable(v3);
  _InterlockedExchangeAdd64(&qword_1402FF560, v3);
}
