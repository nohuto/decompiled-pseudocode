/*
 * XREFs of ?CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C000F59C
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C000FD00 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 * Callees:
 *     memset @ 0x1C008A080 (memset.c)
 */

void __fastcall CitpInteractionSummaryStartTracking(
        struct _CIT_IMPACT_CONTEXT *a1,
        struct _CIT_INTERACTION_SUMMARY *a2)
{
  __int16 v2; // ax
  struct _CIT_IMPACT_CONTEXT **v5; // rcx

  v2 = *((_WORD *)a2 + 34);
  if ( (v2 & 2) != 0 )
  {
    *((_QWORD *)a2 + 3) = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    *((_QWORD *)a2 + 5) = 0LL;
    *((_WORD *)a2 + 24) = 0;
    *(_QWORD *)((char *)a2 + 52) = 0LL;
    *(_QWORD *)((char *)a2 + 60) = 0LL;
    *((_WORD *)a2 + 35) = 0;
    *((_QWORD *)a2 + 9) = 0LL;
    *((_QWORD *)a2 + 10) = 0LL;
    *((_QWORD *)a2 + 11) = 0LL;
    memset(*((void **)a2 + 13), 0, *((_QWORD *)a2 + 14));
  }
  else
  {
    *((_WORD *)a2 + 34) = v2 | 2;
  }
  v5 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)a1 + 109);
  if ( *v5 != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 864) )
    __fastfail(3u);
  *(_QWORD *)a2 = (char *)a1 + 864;
  *((_QWORD *)a2 + 1) = v5;
  *v5 = a2;
  *((_QWORD *)a1 + 109) = a2;
}
