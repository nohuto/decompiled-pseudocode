/*
 * XREFs of LdrGetProcedureAddress @ 0x180075ED0
 * Callers:
 *     CsrClientConnectToServer @ 0x1800751B0 (CsrClientConnectToServer.c)
 *     LdrpLoadWow64 @ 0x180075DF0 (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D4370 (RtlWow64LogMessageInEventLogger.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x180031D60 (LdrGetProcedureAddressForCaller.c)
 */

__int64 __fastcall LdrGetProcedureAddress(unsigned __int64 a1, const void **a2, __int64 a3, __int64 a4)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  return LdrGetProcedureAddressForCaller(a1, a2, a3, a4, 0, retaddr);
}
