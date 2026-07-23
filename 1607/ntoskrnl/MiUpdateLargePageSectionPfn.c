/*
 * XREFs of MiUpdateLargePageSectionPfn @ 0x1401E59A4
 * Callers:
 *     MiCreatePagingFileMap @ 0x1404A2750 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiSetPfnPageState @ 0x1401F2E18 (MiSetPfnPageState.c)
 */

__int64 __fastcall MiUpdateLargePageSectionPfn(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rcx
  __int64 result; // rax

  MiLockPageInline(a1);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = a3;
  v5 = *(_QWORD *)(a1 + 24) & 0xC000000000000001uLL;
  *(_QWORD *)(a1 + 8) = a2;
  *(_WORD *)(a1 + 32) = 2;
  v6 = *(_QWORD *)(a1 + 40) & 0xFE7FFFFFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 24) = v5 | 1;
  *(_QWORD *)(a1 + 40) = v6 | 0x240000FFFFFFFFFLL;
  LOBYTE(result) = MiSetPfnPageState(a1, 6LL);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned __int8)result;
  __writecr8((unsigned __int8)result);
  return result;
}
