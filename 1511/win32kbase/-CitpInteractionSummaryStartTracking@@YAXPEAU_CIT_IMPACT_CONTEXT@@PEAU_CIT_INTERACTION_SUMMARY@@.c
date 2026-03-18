/*
 * XREFs of ?CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C0078968
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0049518 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 * Callees:
 *     memset @ 0x1C00890C0 (memset.c)
 */

void __fastcall CitpInteractionSummaryStartTracking(
        struct _CIT_IMPACT_CONTEXT *a1,
        struct _CIT_INTERACTION_SUMMARY *a2)
{
  __int16 v2; // ax
  struct _CIT_IMPACT_CONTEXT **v5; // rcx

  v2 = *((_WORD *)a2 + 32);
  if ( (v2 & 2) != 0 )
  {
    *((_QWORD *)a2 + 3) = 0LL;
    *((_DWORD *)a2 + 8) = 0;
    *(_QWORD *)((char *)a2 + 36) = 0LL;
    *((_WORD *)a2 + 22) = 0;
    *((_QWORD *)a2 + 6) = 0LL;
    *((_QWORD *)a2 + 7) = 0LL;
    *((_WORD *)a2 + 33) = 0;
    *(_QWORD *)((char *)a2 + 68) = 0LL;
    *(_QWORD *)((char *)a2 + 76) = 0LL;
    *(_QWORD *)((char *)a2 + 84) = 0LL;
    memset(*((void **)a2 + 13), 0, *((_QWORD *)a2 + 14));
  }
  else
  {
    *((_WORD *)a2 + 32) = v2 | 2;
  }
  v5 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)a1 + 104);
  *(_QWORD *)a2 = (char *)a1 + 824;
  *((_QWORD *)a2 + 1) = v5;
  if ( *v5 != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 824) )
    __fastfail(3u);
  *v5 = a2;
  *((_QWORD *)a1 + 104) = a2;
}
