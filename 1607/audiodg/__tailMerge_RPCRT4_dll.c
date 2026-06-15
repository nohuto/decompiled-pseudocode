/*
 * XREFs of __tailMerge_RPCRT4_dll @ 0x140019020
 * Callers:
 *     __imp_load_RpcServerUseProtseqEpW @ 0x140019000 (__imp_load_RpcServerUseProtseqEpW.c)
 *     __imp_load_RpcServerUnregisterIfEx @ 0x1400190C0 (__imp_load_RpcServerUnregisterIfEx.c)
 *     __imp_load_I_RpcBindingInqTransportType @ 0x1400190E0 (__imp_load_I_RpcBindingInqTransportType.c)
 *     __imp_load_RpcServerRegisterIf3 @ 0x140019120 (__imp_load_RpcServerRegisterIf3.c)
 *     __imp_load_I_RpcBindingInqLocalClientPID @ 0x140019320 (__imp_load_I_RpcBindingInqLocalClientPID.c)
 *     __imp_load_RpcImpersonateClient @ 0x140019340 (__imp_load_RpcImpersonateClient.c)
 *     __imp_load_RpcRevertToSelf @ 0x140019360 (__imp_load_RpcRevertToSelf.c)
 *     __imp_load_NdrServerCallAll @ 0x1400193C0 (__imp_load_NdrServerCallAll.c)
 *     __imp_load_NdrServerCall2 @ 0x1400193F0 (__imp_load_NdrServerCall2.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x140016D30 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_RPCRT4_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_RPCRT4_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
