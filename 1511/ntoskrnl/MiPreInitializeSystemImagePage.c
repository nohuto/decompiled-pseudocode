/*
 * XREFs of MiPreInitializeSystemImagePage @ 0x1400BE47C
 * Callers:
 *     MiAllocateDriverPage @ 0x140484298 (MiAllocateDriverPage.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 */

__int64 __fastcall MiPreInitializeSystemImagePage(__int64 a1)
{
  char v2; // dl
  __int64 result; // rax

  LOBYTE(result) = MiLockPageInline(a1);
  v2 = *(_BYTE *)(a1 + 34);
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_BYTE *)(a1 + 34) = v2 & 0xC0 | 5;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned __int8)result;
  __writecr8((unsigned __int8)result);
  return result;
}
