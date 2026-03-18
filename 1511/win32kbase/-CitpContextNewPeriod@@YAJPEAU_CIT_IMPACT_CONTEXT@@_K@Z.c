/*
 * XREFs of ?CitpContextNewPeriod@@YAJPEAU_CIT_IMPACT_CONTEXT@@_K@Z @ 0x1C00E401C
 * Callers:
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C0047AD0 (-CitpTimeUpdate@@YAXI@Z.c)
 * Callees:
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0064C88 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00E4080 (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 */

__int64 __fastcall CitpContextNewPeriod(struct _CIT_IMPACT_CONTEXT *a1, __int64 a2, __int64 a3, void *a4)
{
  unsigned __int64 v5; // rbx

  if ( a2 == qword_1C0107130 + qword_1C0107198 )
  {
    v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    CitpContextFlush(a1, (unsigned int)v5, qword_1C0107130 + qword_1C0107198, a4);
    CitpContextReinitialize(a1, v5);
  }
  return 0LL;
}
