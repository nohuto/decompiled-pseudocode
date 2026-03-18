/*
 * XREFs of MiUpdatePfnProtection @ 0x1401DF97C
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x1400BB050 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     MiSanitizePfnProtection @ 0x14005F5D0 (MiSanitizePfnProtection.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 */

__int64 __fastcall MiUpdatePfnProtection(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  __int64 v7; // r9

  v4 = a3;
  MiLockPageAtDpcInline(a2, a2, a3);
  result = MiSanitizePfnProtection(a1, (*(_QWORD *)(a2 + 16) >> 5) & 0x1F, v4);
  *(_QWORD *)(a2 + 16) = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)(32 * result)) & 0x3E0;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
