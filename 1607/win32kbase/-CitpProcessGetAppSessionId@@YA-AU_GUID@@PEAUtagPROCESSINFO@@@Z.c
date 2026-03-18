/*
 * XREFs of ?CitpProcessGetAppSessionId@@YA?AU_GUID@@PEAUtagPROCESSINFO@@@Z @ 0x1C000FDF0
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C000FD00 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00112CC (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CitpProcessGetAppSessionId(struct _GUID *__return_ptr retstr, struct tagPROCESSINFO *a2)
{
  retstr->Data1 = *((_DWORD *)a2 + 14);
  retstr->Data2 = gSessionId;
  retstr->Data3 = *((_WORD *)qword_1C011E5D0 + 218);
  *(_QWORD *)retstr->Data4 = PsGetProcessCreateTimeQuadPart(*(PEPROCESS *)a2);
  return retstr;
}
