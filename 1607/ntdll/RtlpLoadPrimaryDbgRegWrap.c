/*
 * XREFs of RtlpLoadPrimaryDbgRegWrap @ 0x1800AAC50
 * Callers:
 *     RtlpUmsExecuteYieldThreadEnd @ 0x1800AABC6 (RtlpUmsExecuteYieldThreadEnd.c)
 * Callees:
 *     RtlpLoadUmsDebugRegisterState @ 0x1800FCB40 (RtlpLoadUmsDebugRegisterState.c)
 */

__int64 __fastcall RtlpLoadPrimaryDbgRegWrap()
{
  __int64 v0; // r10

  return RtlpLoadUmsDebugRegisterState(v0);
}
