/*
 * XREFs of AlpcpLogConnectFail @ 0x1406A0170
 * Callers:
 *     NtSecureConnectPort @ 0x140529588 (NtSecureConnectPort.c)
 *     AlpcpProcessConnectionRequest @ 0x140529D38 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x1406A005C (AlpcpInvokeLogCallbacks.c)
 */

void __fastcall AlpcpLogConnectFail(int a1, int a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm0
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]

  v4 = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  v7 = a1;
  v8 = a2;
  v5 = v4;
  v6 = 8;
  AlpcpInvokeLogCallbacks((__int64)&v5, 0x20u, a3, a4);
}
