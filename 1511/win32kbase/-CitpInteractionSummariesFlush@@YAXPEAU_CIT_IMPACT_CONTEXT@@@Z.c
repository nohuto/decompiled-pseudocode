/*
 * XREFs of ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004FC0C
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0049518 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0064C88 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0064EB0 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0068118 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     CitDisplayPowerChange @ 0x1C0085528 (CitDisplayPowerChange.c)
 * Callees:
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C004D770 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 */

void __fastcall CitpInteractionSummariesFlush(struct _CIT_IMPACT_CONTEXT *a1, __int64 a2, unsigned int a3)
{
  struct _CIT_INTERACTION_SUMMARY **v4; // r14
  __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  int v7; // esi

  v4 = (struct _CIT_INTERACTION_SUMMARY **)((char *)a1 + 824);
  v5 = MEMORY[0xFFFFF78000000014];
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v7 = 0;
  while ( *v4 != (struct _CIT_INTERACTION_SUMMARY *)v4 )
  {
    CitpInteractionSummaryStopTracking(*v4, v6, a3);
    ++v7;
  }
  if ( v7 )
    ++*((_DWORD *)a1 + 213);
  *((_DWORD *)a1 + 212) = v6;
  *((_QWORD *)a1 + 105) = v5;
}
