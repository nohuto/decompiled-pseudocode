/*
 * XREFs of MiUpdatePfnProtection @ 0x1401F026C
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14000CE40 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002EB30 (MiLockPageAtDpcInline.c)
 *     MiSanitizePfnProtection @ 0x1400E1790 (MiSanitizePfnProtection.c)
 */

__int64 __fastcall MiUpdatePfnProtection(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v7; // r9

  MiLockPageAtDpcInline(a2);
  result = MiSanitizePfnProtection(a1, (*(_QWORD *)(a2 + 16) >> 5) & 0x1F, a3);
  *(_QWORD *)(a2 + 16) = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)(32 * result)) & 0x3E0;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
