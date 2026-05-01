/*
 * XREFs of RmpActivatorUnregister @ 0x180040988
 * Callers:
 *     ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x18002506C (-Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z.c)
 *     ?Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z @ 0x1800398A0 (-Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z.c)
 *     RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x1800406F0 (RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown.c)
 *     RmCoreRpcSrvDisconnectFromRmServer @ 0x1800407C0 (RmCoreRpcSrvDisconnectFromRmServer.c)
 *     RmpActivatorUninitializeModule @ 0x180040948 (RmpActivatorUninitializeModule.c)
 *     RmpCoreApiConnectToRmServer @ 0x1800469A8 (RmpCoreApiConnectToRmServer.c)
 * Callees:
 *     RmpActivityHostDelete @ 0x180007508 (RmpActivityHostDelete.c)
 *     RmpWnfCleanupPendingCallbackList @ 0x180020AB0 (RmpWnfCleanupPendingCallbackList.c)
 */

LPVOID __fastcall RmpActivatorUnregister(char *P)
{
  char *v1; // rsi
  PVOID **v3; // rcx
  PVOID *v4; // rbx
  _QWORD *v5; // rcx
  PVOID *v6; // rax

  v1 = P + 16;
  v3 = (PVOID **)*((_QWORD *)P + 2);
  if ( v3 != (PVOID **)v1 )
  {
    do
    {
      v4 = *v3;
      RmpActivityHostDelete(v3 - 110);
      v3 = (PVOID **)v4;
    }
    while ( v4 != (PVOID *)v1 );
  }
  RmpWnfCleanupPendingCallbackList(*((_QWORD **)P + 6));
  NtDeleteWnfStateName(P + 36);
  v5 = *(_QWORD **)P;
  v6 = (PVOID *)*((_QWORD *)P + 1);
  if ( *(char **)(*(_QWORD *)P + 8LL) != P || *v6 != P )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  return RmpFreeHeap(P);
}
