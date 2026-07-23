/*
 * XREFs of MiFreeUnmappedPageTables @ 0x1400E1870
 * Callers:
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     MiDeletePteRange @ 0x1400FE550 (MiDeletePteRange.c)
 *     MiDeleteSessionPdes @ 0x140126258 (MiDeleteSessionPdes.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 */

void __fastcall MiFreeUnmappedPageTables(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rbp
  unsigned __int8 CurrentIrql; // r15

  v2 = 0LL;
  v4 = a1;
  if ( a1 )
  {
    do
    {
      v5 = *(_QWORD *)v4;
      v6 = 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      MiLockPageAtDpcInline(v4);
      *(_BYTE *)(v4 + 34) = *(_BYTE *)(v4 + 34) & 0xF8 | 6;
      if ( (unsigned int)MiDecrementShareCount(v4) == 3 )
        ++a2[1];
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiLockPageAtDpcInline(v6);
      MiDecrementShareCount(v6);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      ++v2;
      v4 = v5;
    }
    while ( v5 );
  }
  a2[3] += v2;
  *a2 += v2;
}
