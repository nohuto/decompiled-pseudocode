/*
 * XREFs of LdrGetProcedureAddress @ 0x180003560
 * Callers:
 *     LdrpCorInitialize @ 0x1800032D8 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x180003478 (LdrpLoadWow64.c)
 *     CsrClientConnectToServer @ 0x180004320 (CsrClientConnectToServer.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800C29C0 (RtlWow64LogMessageInEventLogger.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x180016020 (LdrGetProcedureAddressForCaller.c)
 */

__int64 __fastcall LdrGetProcedureAddress(int a1, int a2, int a3, int a4)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  return LdrGetProcedureAddressForCaller(a1, a2, a3, a4, 0, retaddr);
}
