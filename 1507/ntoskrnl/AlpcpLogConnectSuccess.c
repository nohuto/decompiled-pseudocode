/*
 * XREFs of AlpcpLogConnectSuccess @ 0x1406A0228
 * Callers:
 *     NtSecureConnectPort @ 0x140529588 (NtSecureConnectPort.c)
 *     AlpcpProcessConnectionRequest @ 0x140529D38 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x1406A005C (AlpcpInvokeLogCallbacks.c)
 */

void __fastcall AlpcpLogConnectSuccess(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm0
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+38h] [rbp-20h]

  v4 = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  v7 = a1;
  v6 = 7;
  v5 = v4;
  AlpcpInvokeLogCallbacks((__int64)&v5, 0x1Cu, a3, a4);
}
