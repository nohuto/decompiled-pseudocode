/*
 * XREFs of AlpcpLogConnectRequest @ 0x140620B50
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1404807A4 (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x140481DB0 (NtSecureConnectPort.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x1406209E0 (AlpcpInvokeLogCallbacks.c)
 */

void __fastcall AlpcpLogConnectRequest(__int64 a1)
{
  __int128 v1; // xmm0
  int v2; // eax
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+38h] [rbp-20h]

  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  v2 = *(_DWORD *)(a1 + 248);
  v4 = 6;
  v3 = v1;
  v5 = v2;
  AlpcpInvokeLogCallbacks((__int64)&v3, 0x1Cu);
}
