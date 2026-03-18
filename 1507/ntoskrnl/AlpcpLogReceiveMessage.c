/*
 * XREFs of AlpcpLogReceiveMessage @ 0x1406A0280
 * Callers:
 *     AlpcpReceiveSynchronousReply @ 0x14047A190 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReceiveMessage @ 0x14047B8A0 (AlpcpReceiveMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14047F3A0 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x1406A005C (AlpcpInvokeLogCallbacks.c)
 */

void __fastcall AlpcpLogReceiveMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm0
  int v5; // eax
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+30h] [rbp-28h]
  int v8; // [rsp+38h] [rbp-20h]

  v4 = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  v5 = *(_DWORD *)(a1 + 248);
  v7 = 2;
  v6 = v4;
  v8 = v5;
  AlpcpInvokeLogCallbacks((__int64)&v6, 0x20u, a3, a4);
}
