/*
 * XREFs of ?CitpProcessGetAppSessionId@@YA?AU_GUID@@PEAUtagPROCESSINFO@@@Z @ 0x1C0057C18
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0057258 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CitpProcessGetAppSessionId(struct _GUID *__return_ptr retstr, struct tagPROCESSINFO *a2)
{
  retstr->Data1 = *((_DWORD *)a2 + 14);
  retstr->Data2 = gSessionId;
  retstr->Data3 = *((_WORD *)qword_1C0101FE0 + 218);
  *(_QWORD *)retstr->Data4 = PsGetProcessCreateTimeQuadPart(*(PEPROCESS *)a2);
  return retstr;
}
