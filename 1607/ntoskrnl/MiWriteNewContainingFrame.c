/*
 * XREFs of MiWriteNewContainingFrame @ 0x1401F5EE0
 * Callers:
 *     MiDemotePfnListChain @ 0x1406626E0 (MiDemotePfnListChain.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 */

__int64 __fastcall MiWriteNewContainingFrame(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  MiLockPageAtDpcInline(a1);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a1 + 40) ^= (*(_QWORD *)(a1 + 40) ^ a2) & 0xFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
