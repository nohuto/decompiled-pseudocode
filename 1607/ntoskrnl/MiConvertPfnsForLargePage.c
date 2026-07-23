/*
 * XREFs of MiConvertPfnsForLargePage @ 0x1401F5268
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x1406621D4 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 */

__int64 __fastcall MiConvertPfnsForLargePage(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rbp
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 result; // rax

  v2 = a2;
  v3 = MiLargePageSizes[a2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = 0LL;
  if ( v3 )
  {
    v6 = a1 + 35;
    do
    {
      MiLockPageAtDpcInline(v6 - 35);
      v7 = *(_QWORD *)(v6 + 5);
      *(_QWORD *)(v6 - 11) &= 0xC000000000000000uLL;
      v8 = MiLargePageContainingFrames[v2] ^ v7;
      *(_BYTE *)v6 &= 0xF8u;
      *(_QWORD *)(v6 + 5) ^= v8 & 0xFFFFFFFFFLL;
      *(_QWORD *)(v6 - 19) = 0LL;
      *(_QWORD *)(v6 - 27) = 0LL;
      *(_BYTE *)(v6 - 1) &= 0xF8u;
      _InterlockedAnd64((volatile signed __int64 *)(v6 - 11), 0x7FFFFFFFFFFFFFFFuLL);
      v6 += 48LL;
      if ( (v5 & 0xF) == 0 && KeShouldYieldProcessor() )
      {
        __writecr8(CurrentIrql);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      ++v5;
    }
    while ( v5 < v3 );
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
