/*
 * XREFs of AlpcpLogConnectSuccess @ 0x140620BAC
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1404807A4 (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x140481DB0 (NtSecureConnectPort.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x1406209E0 (AlpcpInvokeLogCallbacks.c)
 */

void __fastcall AlpcpLogConnectSuccess(int a1)
{
  __int128 v1; // xmm0
  __int128 v2; // [rsp+20h] [rbp-38h] BYREF
  int v3; // [rsp+30h] [rbp-28h]
  int v4; // [rsp+38h] [rbp-20h]

  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  v4 = a1;
  v3 = 7;
  v2 = v1;
  AlpcpInvokeLogCallbacks((__int64)&v2, 0x1Cu);
}
