/*
 * XREFs of ?Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z @ 0x18002A018
 * Callers:
 *     RM_PROXY_CONTEXT_HANDLE_TYPE_rundown @ 0x180029460 (RM_PROXY_CONTEXT_HANDLE_TYPE_rundown.c)
 *     RmtSrv_RM_DisconnectFromServer @ 0x180029AD0 (RmtSrv_RM_DisconnectFromServer.c)
 * Callees:
 *     ?RmpResourceSetTableEnumerationGetNext@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_RS_ENUMERATION_CONTEXT@@@Z @ 0x18002D8E0 (-RmpResourceSetTableEnumerationGetNext@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_RS_ENUMERATION_CONTEXT@@.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x18002DF30 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180033A1C (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RM_DisconnectFromServer(
        ResourceManagerServerProxy *this,
        struct _RM_ACTIVATOR **a2)
{
  struct _RM_ACTIVATOR *v2; // rdi
  struct _RM_RESOURCE_SET *Next; // rax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a2;
  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpObjectTableEnumerationBegin(
    (struct _RM_OBJECT_TABLE *)(*((_QWORD *)this + 2) + 536LL),
    (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v7);
  while ( 1 )
  {
    Next = RmpResourceSetTableEnumerationGetNext((struct _RM_RS_ENUMERATION_CONTEXT *)v7);
    if ( !Next )
      break;
    if ( *((struct _RM_ACTIVATOR **)Next + 6) == v2 )
      *((_QWORD *)Next + 6) = 0LL;
  }
  RtlReleaseSRWLockShared(v7[0] + 16LL);
  RmpActivatorCleanup(v2);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  *a2 = 0LL;
  return 0LL;
}
