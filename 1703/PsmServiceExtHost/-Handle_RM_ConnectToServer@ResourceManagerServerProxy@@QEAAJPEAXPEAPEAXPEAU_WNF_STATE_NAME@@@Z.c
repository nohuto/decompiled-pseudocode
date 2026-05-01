/*
 * XREFs of ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x18001FE60
 * Callers:
 *     RmtSrv_RM_ConnectToServer @ 0x18001FE50 (RmtSrv_RM_ConnectToServer.c)
 * Callees:
 *     ?RmpQueryRpcClientInformation@@YAJPEAXPEAT_RM_SID@@PEAK2PEA_K@Z @ 0x18000218C (-RmpQueryRpcClientInformation@@YAJPEAXPEAT_RM_SID@@PEAK2PEA_K@Z.c)
 *     ?RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z @ 0x18001FFB0 (-RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x18002DF30 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RM_ConnectToServer(
        ResourceManagerServerProxy *this,
        void *a2,
        void **a3,
        struct _WNF_STATE_NAME *a4)
{
  int v6; // ebx
  struct _RM_SERVICE_GLOBALS *v7; // rcx
  int v8; // eax
  PVOID v9; // rcx
  PVOID P; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v12; // [rsp+38h] [rbp-80h] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-78h] BYREF

  P = 0LL;
  v6 = RmpQueryRpcClientInformation(a2, DestinationSid, (unsigned int *)a3, &v12, 0LL);
  if ( v6 >= 0 )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    v8 = RmpActivatorRegister(v7, (union _RM_SID *)DestinationSid, v12, (struct _RM_ACTIVATOR **)&P);
    v9 = P;
    v6 = v8;
    if ( v8 >= 0 )
    {
      *a4 = *(struct _WNF_STATE_NAME *)((char *)P + 24);
      *a3 = v9;
      v9 = 0LL;
      P = 0LL;
      v6 = 0;
    }
    if ( v9 )
    {
      RmpActivatorCleanup((struct _RM_ACTIVATOR *)v9);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    }
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  return v6 | 0x10000000u;
}
