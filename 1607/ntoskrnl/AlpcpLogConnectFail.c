/*
 * XREFs of AlpcpLogConnectFail @ 0x140656880
 * Callers:
 *     NtSecureConnectPort @ 0x14049C42C (NtSecureConnectPort.c)
 *     AlpcpProcessConnectionRequest @ 0x14049CAB4 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x14065676C (AlpcpInvokeLogCallbacks.c)
 */

unsigned __int64 __fastcall AlpcpLogConnectFail(int a1, int a2)
{
  __int128 v2; // xmm0
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]

  v2 = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  v6 = a1;
  v7 = a2;
  v4 = v2;
  v5 = 8;
  return AlpcpInvokeLogCallbacks((__int64)&v4, 0x20u);
}
