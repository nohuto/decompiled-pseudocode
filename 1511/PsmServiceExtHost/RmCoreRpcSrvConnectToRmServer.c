/*
 * XREFs of RmCoreRpcSrvConnectToRmServer @ 0x180040730
 * Callers:
 *     <none>
 * Callees:
 *     RmpQueryRpcClientInformation @ 0x18001EC88 (RmpQueryRpcClientInformation.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     RmpCoreApiConnectToRmServer @ 0x1800469A8 (RmpCoreApiConnectToRmServer.c)
 */

__int64 __fastcall RmCoreRpcSrvConnectToRmServer(void *a1, _QWORD *a2)
{
  int v3; // ecx
  int v5; // [rsp+20h] [rbp-78h] BYREF
  __int64 v6; // [rsp+28h] [rbp-70h]
  _BYTE DestinationSid[80]; // [rsp+30h] [rbp-68h] BYREF

  v3 = RmpQueryRpcClientInformation(a1, DestinationSid, &v5);
  if ( v3 >= 0 )
  {
    v3 = RmpCoreApiConnectToRmServer(DestinationSid);
    if ( v3 >= 0 )
      *a2 = v6;
  }
  return (unsigned int)v3;
}
