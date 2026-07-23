/*
 * XREFs of PfTTraceListFree @ 0x1403E84C4
 * Callers:
 *     PfTTraceListAdd @ 0x1403E8368 (PfTTraceListAdd.c)
 *     PfTCleanup @ 0x140669854 (PfTCleanup.c)
 * Callees:
 *     PfTFreeTraceDump @ 0x140006860 (PfTFreeTraceDump.c)
 */

void __fastcall PfTTraceListFree(__int64 **a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == (__int64 *)a1 )
      break;
    v3 = *v2;
    if ( (__int64 **)v2[1] != a1 || *(__int64 **)(v3 + 8) != v2 )
      __fastfail(3u);
    *a1 = (__int64 *)v3;
    *(_QWORD *)(v3 + 8) = a1;
    PfTFreeTraceDump(v2);
  }
}
