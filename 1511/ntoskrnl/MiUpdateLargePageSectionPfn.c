/*
 * XREFs of MiUpdateLargePageSectionPfn @ 0x1401D4F60
 * Callers:
 *     MiCreatePagingFileMap @ 0x1403C89F8 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 */

__int64 __fastcall MiUpdateLargePageSectionPfn(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(result) = MiLockPageInline(a1);
  *(_QWORD *)(a1 + 40) |= 0x200000FFFFFFFFFuLL;
  *(_QWORD *)(a1 + 24) &= ~0x4000000000000000uLL;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 8) = a2;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned __int8)result;
  __writecr8((unsigned __int8)result);
  return result;
}
