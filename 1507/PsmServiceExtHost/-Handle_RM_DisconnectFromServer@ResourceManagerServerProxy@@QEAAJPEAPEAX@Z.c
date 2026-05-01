/*
 * XREFs of ?Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z @ 0x180032680
 * Callers:
 *     RM_PROXY_CONTEXT_HANDLE_TYPE_rundown @ 0x18002F8E0 (RM_PROXY_CONTEXT_HANDLE_TYPE_rundown.c)
 *     RmtSrv_RM_DisconnectFromServer @ 0x1800312B0 (RmtSrv_RM_DisconnectFromServer.c)
 * Callees:
 *     RmpActivatorUnregister @ 0x18003B5B8 (RmpActivatorUnregister.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RM_DisconnectFromServer(
        ResourceManagerServerProxy *this,
        void **a2)
{
  void *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  _QWORD *v6; // rdi
  _QWORD *i; // rax
  __int64 v8; // rcx

  v2 = *a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  RtlEnterCriticalSection(&RmpGlobalLock);
  v6 = (_QWORD *)((char *)this + 72);
  for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
  {
    v8 = i[4];
    if ( *(void **)(v8 + 16) == v2 )
      *(_QWORD *)(v8 + 16) = 0LL;
  }
  RmpActivatorUnregister(v2);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  *a2 = 0LL;
  LeaveCriticalSection(v3);
  return 0LL;
}
