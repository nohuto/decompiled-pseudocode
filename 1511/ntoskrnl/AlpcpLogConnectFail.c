/*
 * XREFs of AlpcpLogConnectFail @ 0x140620AF4
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1404807A4 (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x140481DB0 (NtSecureConnectPort.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x1406209E0 (AlpcpInvokeLogCallbacks.c)
 */

void __fastcall AlpcpLogConnectFail(int a1, int a2)
{
  __int128 v2; // xmm0
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]

  v2 = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  v5 = a1;
  v6 = a2;
  v3 = v2;
  v4 = 8;
  AlpcpInvokeLogCallbacks((__int64)&v3, 0x20u);
}
