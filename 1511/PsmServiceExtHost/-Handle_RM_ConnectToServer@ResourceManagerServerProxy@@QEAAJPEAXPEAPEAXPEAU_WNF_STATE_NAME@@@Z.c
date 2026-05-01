/*
 * XREFs of ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x18002506C
 * Callers:
 *     RmtSrv_RM_ConnectToServer @ 0x180022E80 (RmtSrv_RM_ConnectToServer.c)
 * Callees:
 *     RmpQueryRpcClientInformation @ 0x18001EC88 (RmpQueryRpcClientInformation.c)
 *     RmpActivatorRegister @ 0x180024CB0 (RmpActivatorRegister.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     RmpActivatorUnregister @ 0x180040988 (RmpActivatorUnregister.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RM_ConnectToServer(
        ResourceManagerServerProxy *this,
        void *a2,
        void **a3,
        struct _WNF_STATE_NAME *a4)
{
  int v6; // ebx
  int v7; // eax
  void *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-88h] BYREF
  int v11; // [rsp+28h] [rbp-80h] BYREF
  _BYTE DestinationSid[80]; // [rsp+30h] [rbp-78h] BYREF

  v10 = 0LL;
  v6 = RmpQueryRpcClientInformation(a2, DestinationSid, &v11);
  if ( v6 >= 0 )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    v7 = RmpActivatorRegister(DestinationSid, v11, &v10);
    v8 = (void *)v10;
    v6 = v7;
    if ( v7 >= 0 )
    {
      *a4 = *(struct _WNF_STATE_NAME *)(v10 + 36);
      *a3 = v8;
      v8 = 0LL;
      v6 = 0;
    }
    if ( v8 )
      RmpActivatorUnregister(v8);
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  return v6 | 0x10000000u;
}
