/*
 * XREFs of LdrGetProcedureAddressEx @ 0x18007E3F0
 * Callers:
 *     LdrpGetShimEngineInterface @ 0x18007E068 (LdrpGetShimEngineInterface.c)
 *     LdrpCodeAuthzInitialize @ 0x18008020C (LdrpCodeAuthzInitialize.c)
 *     AVrfInitializeVerifier @ 0x1800D5F68 (AVrfInitializeVerifier.c)
 *     AVrfpDetectVerifiedExports @ 0x1800D66E4 (AVrfpDetectVerifiedExports.c)
 *     AVrfpVerifierStopInitialize @ 0x1800D7560 (AVrfpVerifierStopInitialize.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x180031D60 (LdrGetProcedureAddressForCaller.c)
 */

__int64 __fastcall LdrGetProcedureAddressEx(unsigned __int64 a1, const void **a2, __int64 a3, __int64 a4, char a5)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  return LdrGetProcedureAddressForCaller(a1, a2, a3, a4, a5, retaddr);
}
