/*
 * XREFs of ?CitpContextNewPeriod@@YAJPEAU_CIT_IMPACT_CONTEXT@@_K@Z @ 0x1C00E2EB4
 * Callers:
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C0052980 (-CitpTimeUpdate@@YAXI@Z.c)
 * Callees:
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0070DA4 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00E2F1C (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 */

__int64 __fastcall CitpContextNewPeriod(struct _CIT_IMPACT_CONTEXT *a1, __int64 a2, __int64 a3, void *a4)
{
  unsigned __int64 v5; // rbx

  if ( a2 == qword_1C0101FA0 + qword_1C0101FF8 )
  {
    v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    CitpContextFlush(a1, v5, 0, a4);
    CitpContextReinitialize(a1, v5);
  }
  return 0LL;
}
