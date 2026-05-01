/*
 * XREFs of RmpActivatorUnregister @ 0x18002E718
 * Callers:
 *     ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x18001F274 (-Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z.c)
 *     ?Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z @ 0x1800293D0 (-Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z.c)
 *     RmpDestroyResourceManagerServer @ 0x180029DB0 (RmpDestroyResourceManagerServer.c)
 *     RmpCoreApiConnectToRmServer @ 0x18002E170 (RmpCoreApiConnectToRmServer.c)
 *     RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x18002E4F0 (RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown.c)
 *     RmCoreRpcSrvDisconnectFromRmServer @ 0x18002E5C0 (RmCoreRpcSrvDisconnectFromRmServer.c)
 * Callees:
 *     RmpActivityHostDelete @ 0x180004E58 (RmpActivityHostDelete.c)
 *     RmpWnfCleanupPendingCallbackList @ 0x1800384D8 (RmpWnfCleanupPendingCallbackList.c)
 */

BOOLEAN __fastcall RmpActivatorUnregister(char *a1)
{
  _QWORD *v1; // rsi
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  _QWORD *v5; // rcx
  void **v6; // rax

  v1 = a1 + 16;
  v3 = (_QWORD *)*((_QWORD *)a1 + 2);
  if ( v3 != v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      RmpActivityHostDelete((struct _RM_ACTIVITY_HOST *)(v3 - 129));
      v3 = v4;
    }
    while ( v4 != v1 );
  }
  RmpWnfCleanupPendingCallbackList(*((PVOID *)a1 + 6));
  NtDeleteWnfStateName(a1 + 36);
  v5 = *(_QWORD **)a1;
  v6 = (void **)*((_QWORD *)a1 + 1);
  if ( *(char **)(*(_QWORD *)a1 + 8LL) != a1 || *v6 != a1 )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
