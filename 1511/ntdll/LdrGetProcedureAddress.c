/*
 * XREFs of LdrGetProcedureAddress @ 0x18004EE30
 * Callers:
 *     LdrpCorInitialize @ 0x18004EBB0 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x18004ED50 (LdrpLoadWow64.c)
 *     CsrClientConnectToServer @ 0x180051EF0 (CsrClientConnectToServer.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800CC3C0 (RtlWow64LogMessageInEventLogger.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x180032870 (LdrGetProcedureAddressForCaller.c)
 */

__int64 __fastcall LdrGetProcedureAddress(unsigned __int64 a1, const void **a2, __int64 a3, __int64 a4)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  return LdrGetProcedureAddressForCaller(a1, a2, a3, a4, 0, retaddr);
}
