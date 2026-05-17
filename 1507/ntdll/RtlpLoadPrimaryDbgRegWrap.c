/*
 * XREFs of RtlpLoadPrimaryDbgRegWrap @ 0x1800964B0
 * Callers:
 *     RtlpUmsExecuteYieldThreadEnd @ 0x180096426 (RtlpUmsExecuteYieldThreadEnd.c)
 * Callees:
 *     RtlpLoadUmsDebugRegisterState @ 0x1800F2F80 (RtlpLoadUmsDebugRegisterState.c)
 */

__int64 __fastcall RtlpLoadPrimaryDbgRegWrap()
{
  __int64 v0; // r10

  return RtlpLoadUmsDebugRegisterState(v0);
}
