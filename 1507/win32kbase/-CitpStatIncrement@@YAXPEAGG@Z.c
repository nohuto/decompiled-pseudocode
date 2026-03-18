/*
 * XREFs of ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0052B50
 * Callers:
 *     CitDesktopSwitch @ 0x1C0014C70 (CitDesktopSwitch.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0017F7C (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpLastInputUpdate@@YAXEGI@Z @ 0x1C00525D8 (-CitpLastInputUpdate@@YAXEGI@Z.c)
 *     ?CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@@Z @ 0x1C0057180 (-CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@@Z.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0057258 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C0057D10 (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 *     CitSessionConnectChange @ 0x1C006F7A0 (CitSessionConnectChange.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0070DA4 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0079728 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0079924 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ??$CitpBaseUseDataMerge@U_CIT_SYSTEM_DATA@@@@YAXPEAU_CIT_SYSTEM_DATA@@PEBU0@@Z @ 0x1C00E2474 (--$CitpBaseUseDataMerge@U_CIT_SYSTEM_DATA@@@@YAXPEAU_CIT_SYSTEM_DATA@@PEBU0@@Z.c)
 *     ??$CitpBaseUseDataMerge@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEBU0@@Z @ 0x1C00E253C (--$CitpBaseUseDataMerge@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEBU0@@Z.c)
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00E2F1C (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00E37A8 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpStatIncrement(unsigned __int16 *a1, __int16 a2)
{
  unsigned __int16 v2; // ax

  if ( (unsigned __int16)(a2 + *a1) < *a1 )
    v2 = -1;
  else
    v2 = a2 + *a1;
  *a1 = v2;
}
