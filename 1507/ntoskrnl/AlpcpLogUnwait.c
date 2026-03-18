/*
 * XREFs of AlpcpLogUnwait @ 0x1406A0338
 * Callers:
 *     AlpcpSignalAndWait @ 0x140044130 (AlpcpSignalAndWait.c)
 *     AlpcpReceiveSynchronousReply @ 0x14047A190 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReceiveMessagePort @ 0x14047F3A0 (AlpcpReceiveMessagePort.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x14053250C (AlpcpCompleteDeferSignalRequestAndWait.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x1406A005C (AlpcpInvokeLogCallbacks.c)
 */

void __fastcall AlpcpLogUnwait(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm0
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+38h] [rbp-20h]

  v4 = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  v7 = a1;
  v6 = 5;
  v5 = v4;
  AlpcpInvokeLogCallbacks((__int64)&v5, 0x20u, a3, a4);
}
