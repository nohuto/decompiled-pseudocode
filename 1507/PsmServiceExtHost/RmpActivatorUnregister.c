/*
 * XREFs of RmpActivatorUnregister @ 0x18003B5B8
 * Callers:
 *     ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x180020D08 (-Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z.c)
 *     ?Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z @ 0x180032680 (-Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z.c)
 *     RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x18003B320 (RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown.c)
 *     RmCoreRpcSrvDisconnectFromRmServer @ 0x18003B3F0 (RmCoreRpcSrvDisconnectFromRmServer.c)
 *     RmpActivatorUninitializeModule @ 0x18003B578 (RmpActivatorUninitializeModule.c)
 *     RmpCoreApiConnectToRmServer @ 0x180041D78 (RmpCoreApiConnectToRmServer.c)
 * Callees:
 *     RmpActivityHostDelete @ 0x1800083A8 (RmpActivityHostDelete.c)
 *     RmpWnfCleanupPendingCallbackList @ 0x1800195E0 (RmpWnfCleanupPendingCallbackList.c)
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
      RmpActivityHostDelete(v3 - 106);
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
