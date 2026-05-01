/*
 * XREFs of RmCoreRpcSrvConnectToRmServer @ 0x18002E530
 * Callers:
 *     <none>
 * Callees:
 *     RmpQueryRpcClientInformation @ 0x18001A044 (RmpQueryRpcClientInformation.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     RmpCoreApiConnectToRmServer @ 0x18002E170 (RmpCoreApiConnectToRmServer.c)
 */

__int64 __fastcall RmCoreRpcSrvConnectToRmServer(void *a1, _QWORD *a2, _QWORD *a3)
{
  int v5; // ecx
  int v7; // [rsp+30h] [rbp-78h] BYREF
  __int64 v8; // [rsp+38h] [rbp-70h] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-68h] BYREF

  v5 = RmpQueryRpcClientInformation(a1, DestinationSid, (__int64)a3, &v7, 0LL);
  if ( v5 >= 0 )
  {
    v5 = RmpCoreApiConnectToRmServer(DestinationSid, v7, &v8, a3);
    if ( v5 >= 0 )
      *a2 = v8;
  }
  return (unsigned int)v5;
}
