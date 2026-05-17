/*
 * XREFs of LdrGetProcedureAddressEx @ 0x1800812F0
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x18007BC30 (LdrpCodeAuthzInitialize.c)
 *     LdrpGetShimEngineInterface @ 0x180080F60 (LdrpGetShimEngineInterface.c)
 *     AVrfInitializeVerifier @ 0x1800CDFDC (AVrfInitializeVerifier.c)
 *     AVrfpDetectVerifiedExports @ 0x1800CE794 (AVrfpDetectVerifiedExports.c)
 *     AVrfpVerifierStopInitialize @ 0x1800CF614 (AVrfpVerifierStopInitialize.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x180032870 (LdrGetProcedureAddressForCaller.c)
 */

__int64 __fastcall LdrGetProcedureAddressEx(unsigned __int64 a1, const void **a2, __int64 a3, __int64 a4, char a5)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  return LdrGetProcedureAddressForCaller(a1, a2, a3, a4, a5, retaddr);
}
