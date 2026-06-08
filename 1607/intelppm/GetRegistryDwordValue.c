/*
 * XREFs of GetRegistryDwordValue @ 0x1C00131E8
 * Callers:
 *     GetRegistryQwordValue @ 0x1C0013130 (GetRegistryQwordValue.c)
 *     InitPerfStatesInternal @ 0x1C001347C (InitPerfStatesInternal.c)
 *     ProcLibTraceSummary2 @ 0x1C0015104 (ProcLibTraceSummary2.c)
 *     InitCpcStatesInternal @ 0x1C001F5A4 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0020474 (InitPerfFeedbackInternal.c)
 *     ProcLibGlobalInit @ 0x1C00241A4 (ProcLibGlobalInit.c)
 * Callees:
 *     GetRegistryDwordValueNoDefault @ 0x1C0013204 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall GetRegistryDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = GetRegistryDwordValueNoDefault(a1, a2, a3);
  if ( (int)result < 0 )
    *a3 = 0;
  return result;
}
