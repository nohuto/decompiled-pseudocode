/*
 * XREFs of sub_180012098 @ 0x180012098
 * Callers:
 *     sub_180026F6F @ 0x180026F6F (sub_180026F6F.c)
 *     unknown_libname_20 @ 0x180026F81 (unknown_libname_20.c)
 *     sub_180026F8D @ 0x180026F8D (sub_180026F8D.c)
 *     sub_180027556 @ 0x180027556 (sub_180027556.c)
 *     sub_180027562 @ 0x180027562 (sub_180027562.c)
 *     sub_18002756E @ 0x18002756E (sub_18002756E.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180012098(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 24) >= 8uLL )
    operator delete(*(void **)a1);
  result = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
