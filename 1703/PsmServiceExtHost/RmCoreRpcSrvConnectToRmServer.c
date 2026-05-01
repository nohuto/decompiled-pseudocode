/*
 * XREFs of RmCoreRpcSrvConnectToRmServer @ 0x18001FDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpQueryRpcClientInformation@@YAJPEAXPEAT_RM_SID@@PEAK2PEA_K@Z @ 0x18000218C (-RmpQueryRpcClientInformation@@YAJPEAXPEAT_RM_SID@@PEAK2PEA_K@Z.c)
 *     ?RmpCoreApiConnectToRmServer@@YAJPEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@PEAU_WNF_STATE_NAME@@@Z @ 0x18001FF20 (-RmpCoreApiConnectToRmServer@@YAJPEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@PEAU_WNF_STATE_NAME@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmCoreRpcSrvConnectToRmServer(void *a1, struct _RM_ACTIVATOR **a2, struct _WNF_STATE_NAME *a3)
{
  int v5; // ecx
  unsigned int v7; // [rsp+30h] [rbp-78h] BYREF
  struct _RM_ACTIVATOR *v8; // [rsp+38h] [rbp-70h] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-68h] BYREF

  v5 = RmpQueryRpcClientInformation(a1, DestinationSid, (unsigned int *)a3, &v7, 0LL);
  if ( v5 >= 0 )
  {
    v5 = RmpCoreApiConnectToRmServer((union _RM_SID *)DestinationSid, v7, &v8, a3);
    if ( v5 >= 0 )
      *a2 = v8;
  }
  return (unsigned int)v5;
}
