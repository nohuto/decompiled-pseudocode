/*
 * XREFs of ?Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z @ 0x1800293D0
 * Callers:
 *     RM_PROXY_CONTEXT_HANDLE_TYPE_rundown @ 0x180028660 (RM_PROXY_CONTEXT_HANDLE_TYPE_rundown.c)
 *     RmtSrv_RM_DisconnectFromServer @ 0x180028EC0 (RmtSrv_RM_DisconnectFromServer.c)
 * Callees:
 *     RmpResourceSetTableEnumerationGetNext @ 0x18002E6CC (RmpResourceSetTableEnumerationGetNext.c)
 *     RmpActivatorUnregister @ 0x18002E718 (RmpActivatorUnregister.c)
 *     RmpObjectTableEnumerationBegin @ 0x180035278 (RmpObjectTableEnumerationBegin.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RM_DisconnectFromServer(
        ResourceManagerServerProxy *this,
        void **a2)
{
  __int64 v2; // rdi
  __int64 Next; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (__int64)*a2;
  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpObjectTableEnumerationBegin(*((_QWORD *)this + 2) + 1864LL, v10);
  while ( 1 )
  {
    Next = RmpResourceSetTableEnumerationGetNext(v10);
    if ( !Next )
      break;
    if ( *(_QWORD *)(Next + 48) == v2 )
      *(_QWORD *)(Next + 48) = 0LL;
  }
  RtlReleaseSRWLockShared(v10[0] + 16LL, v6, v7, v8);
  RmpActivatorUnregister(v2);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  *a2 = 0LL;
  return 0LL;
}
