/*
 * XREFs of RtlpLoadPrimaryDbgRegWrap @ 0x1800A9890
 * Callers:
 *     RtlpUmsExecuteYieldThreadEnd @ 0x1800A980F (RtlpUmsExecuteYieldThreadEnd.c)
 * Callees:
 *     RtlpLoadUmsDebugRegisterState @ 0x1800F3480 (RtlpLoadUmsDebugRegisterState.c)
 */

__int64 __fastcall RtlpLoadPrimaryDbgRegWrap()
{
  __int64 v0; // r10

  return RtlpLoadUmsDebugRegisterState(v0);
}
