/*
 * XREFs of ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x18001F274
 * Callers:
 *     RmtSrv_RM_ConnectToServer @ 0x18001F260 (RmtSrv_RM_ConnectToServer.c)
 * Callees:
 *     RmpQueryRpcClientInformation @ 0x18001A044 (RmpQueryRpcClientInformation.c)
 *     RmpActivatorRegister @ 0x18001F338 (RmpActivatorRegister.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     RmpActivatorUnregister @ 0x18002E718 (RmpActivatorUnregister.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RM_ConnectToServer(
        ResourceManagerServerProxy *this,
        void *a2,
        void **a3,
        struct _WNF_STATE_NAME *a4)
{
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  void *v9; // rcx
  unsigned int v11; // [rsp+30h] [rbp-88h] BYREF
  __int64 v12; // [rsp+38h] [rbp-80h] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-78h] BYREF

  v12 = 0LL;
  v6 = RmpQueryRpcClientInformation(a2, DestinationSid, (__int64)a3, &v11, 0LL);
  if ( v6 >= 0 )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    v8 = RmpActivatorRegister(v7, DestinationSid, v11, &v12);
    v9 = (void *)v12;
    v6 = v8;
    if ( v8 >= 0 )
    {
      *a4 = *(struct _WNF_STATE_NAME *)(v12 + 36);
      *a3 = v9;
      v9 = 0LL;
      v6 = 0;
    }
    if ( v9 )
      RmpActivatorUnregister();
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  return v6 | 0x10000000u;
}
