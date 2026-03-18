/*
 * XREFs of ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C000FD00
 * Callers:
 *     CitSetInfo @ 0x1C0004FF0 (CitSetInfo.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00112CC (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 * Callees:
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C000E77C (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C000EC34 (-CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C000F59C (-CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@.c)
 *     ?CitpProcessGetAppSessionId@@YA?AU_GUID@@PEAUtagPROCESSINFO@@@Z @ 0x1C000FDF0 (-CitpProcessGetAppSessionId@@YA-AU_GUID@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0011A24 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C00F62C0 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 */

struct _CIT_INTERACTION_SUMMARY *__fastcall CitpInteractionSummaryEnsure(
        struct _CIT_IMPACT_CONTEXT *a1,
        struct tagPROCESSINFO **a2)
{
  struct _CIT_INTERACTION_SUMMARY *v2; // rbx
  struct _CIT_PROG_DATA *v5; // rdi
  struct _CIT_INTERACTION_SUMMARY **v6; // rsi
  char v7; // al
  struct _CIT_PROG_DATA *v9; // rax
  struct _GUID v10; // [rsp+20h] [rbp-28h] BYREF
  struct _CIT_INTERACTION_SUMMARY *v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0LL;
  v11 = 0LL;
  if ( (dword_1C011E5B0 & 1) == 0 )
    return v2;
  v5 = 0LL;
  if ( (dword_1C011E5B0 & 2) == 0 )
  {
    v6 = a2 + 10;
    goto LABEL_4;
  }
  v9 = CitpProcessEnsureProgData(*a2);
  v5 = v9;
  if ( !v9 )
    return v2;
  v6 = (struct _CIT_INTERACTION_SUMMARY **)((char *)v9 + 80);
LABEL_4:
  v2 = *v6;
  if ( *v6 )
  {
    if ( ((*((unsigned __int16 *)v2 + 34) >> 2) & 0x1FFF) == dword_1C011E5C8 )
      goto LABEL_6;
    CitpInteractionSummaryDelete(v6);
  }
  CitpInteractionSummaryAllocate(&v11);
  v2 = v11;
  if ( v11 )
  {
    if ( v5 )
    {
      *((_WORD *)v11 + 34) |= 1u;
      *((_QWORD *)v2 + 2) = v5;
    }
    else
    {
      *((_QWORD *)v11 + 2) = a2;
    }
    *v6 = v2;
LABEL_6:
    if ( v2 )
    {
      if ( *(struct _CIT_INTERACTION_SUMMARY **)v2 == v2 )
        CitpInteractionSummaryStartTracking(a1, v2);
      *(struct _GUID *)((char *)v2 + 52) = *CitpProcessGetAppSessionId(&v10, *a2);
      v7 = *((_BYTE *)a2 + 75);
      if ( (v7 & 1) == 0 )
      {
        *((_BYTE *)a2 + 75) = v7 | 1;
        CitpStatIncrement((unsigned __int16 *)v2 + 35, 1u);
      }
    }
    return v2;
  }
  return 0LL;
}
