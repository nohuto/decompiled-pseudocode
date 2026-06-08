/*
 * XREFs of GetRegistryDwordValue @ 0x1C00162F0
 * Callers:
 *     ProcLibTraceSummary2 @ 0x1C00129BC (ProcLibTraceSummary2.c)
 *     InitPerfStatesInternal @ 0x1C00152DC (InitPerfStatesInternal.c)
 *     GetRegistryQwordValue @ 0x1C0016238 (GetRegistryQwordValue.c)
 *     InitCpcStatesInternal @ 0x1C001E6AC (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C001F1D4 (InitPerfFeedbackInternal.c)
 *     ProcLibGlobalInit @ 0x1C00230C0 (ProcLibGlobalInit.c)
 * Callees:
 *     GetRegistryDwordValueNoDefault @ 0x1C001630C (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall GetRegistryDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = GetRegistryDwordValueNoDefault();
  if ( (int)result < 0 )
    *a3 = 0;
  return result;
}
