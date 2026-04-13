/*
 * XREFs of sub_1800277D9 @ 0x1800277D9
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180026510 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1800277D9(__int64 a1, __int64 a2)
{
  __int64 i; // rbx

  for ( i = *(_QWORD *)(a2 + 104); i != *(_QWORD *)(a2 + 96); i += 32LL )
  {
    if ( *(_QWORD *)(i + 24) >= 8uLL )
      operator delete(*(void **)i);
    *(_QWORD *)(i + 24) = 7LL;
    *(_QWORD *)(i + 16) = 0LL;
    *(_WORD *)i = 0;
  }
  throw;
}
