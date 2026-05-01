/*
 * XREFs of RmpDestroyResourceManagerServer @ 0x180029DB0
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18001E760 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     RmpEnforcerContextRundown @ 0x18002B560 (RmpEnforcerContextRundown.c)
 *     ?Rundown@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18002D344 (-Rundown@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     RmpActivatorUnregister @ 0x18002E718 (RmpActivatorUnregister.c)
 *     RmpActivityHostCleanupModule @ 0x18002EC5C (RmpActivityHostCleanupModule.c)
 *     RmpCpuSetManagerCleanup @ 0x180031370 (RmpCpuSetManagerCleanup.c)
 *     RmpGameModeUnregisterActivityHost @ 0x180032224 (RmpGameModeUnregisterActivityHost.c)
 *     RmpPolicyCleanup @ 0x180033FD8 (RmpPolicyCleanup.c)
 */

__int64 RmpDestroyResourceManagerServer()
{
  struct _RM_SERVICE_GLOBALS *v0; // rdi
  __int64 v1; // r15
  struct _RM_SERVICE_GLOBALS **v2; // rcx
  struct _RM_SERVICE_GLOBALS *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  _QWORD *v7; // rdx
  void **v8; // rbx
  __int64 v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  unsigned int i; // esi
  void *v14; // rcx
  __int64 result; // rax

  v0 = RmSvcGlobals;
  RtlEnterCriticalSection(&RmpGlobalLock);
  *((_DWORD *)v0 + 835) |= 2u;
  RtlLeaveCriticalSection(&RmpGlobalLock);
  v1 = *((_QWORD *)v0 + 418);
  if ( v1 )
    ExecutionModel::ResourceManager::Rundown(*((ExecutionModel::ResourceManager **)v0 + 418));
  RtlEnterCriticalSection(&RmpGlobalLock);
  v2 = *(struct _RM_SERVICE_GLOBALS ***)v0;
  if ( *(struct _RM_SERVICE_GLOBALS **)v0 != v0 )
  {
    do
    {
      v3 = *v2;
      RmpActivatorUnregister(v2);
      v2 = (struct _RM_SERVICE_GLOBALS **)v3;
    }
    while ( v3 != v0 );
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  v4 = *((_QWORD *)v0 + 379);
  if ( v4 )
    TpReleaseCleanupGroupMembers(v4, 0LL, 0LL);
  v5 = *((_QWORD *)v0 + 390);
  if ( v5 )
    TpReleaseCleanupGroupMembers(v5, 0LL, 0LL);
  if ( *((_QWORD *)v0 + 360) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)v0 + 360) = 0LL;
  }
  RmpEnforcerContextRundown(v0);
  RtlEnterCriticalSection(&RmpGlobalLock);
  v6 = (_QWORD *)*((_QWORD *)v0 + 366);
  while ( v6 != (_QWORD *)((char *)v0 + 2928) )
  {
    v7 = v6 - 134;
    v6 = (_QWORD *)*v6;
    if ( v7 != *((_QWORD **)v0 + 368) )
      RmpGameModeUnregisterActivityHost((struct _RM_SERVICE_GLOBALS *)((char *)v0 + 2920));
  }
  if ( *((_QWORD *)v0 + 368) )
    RmpGameModeUnregisterActivityHost((struct _RM_SERVICE_GLOBALS *)((char *)v0 + 2920));
  RtlLeaveCriticalSection(&RmpGlobalLock);
  v8 = (void **)((char *)v0 + 328);
  if ( *((_QWORD *)v0 + 47) )
  {
    SetEvent(*((HANDLE *)v0 + 43));
    WaitForSingleObjectEx(*((HANDLE *)v0 + 47), 0xFFFFFFFF, 0);
  }
  v9 = *((_QWORD *)v0 + 48);
  if ( v9 )
  {
    TpSetTimer(v9, 0LL, 0LL, 0LL);
    TpWaitForTimer(*((_QWORD *)v0 + 48), 1LL);
  }
  v10 = (void *)*((_QWORD *)v0 + 238);
  if ( v10 )
    PowerSettingUnregisterNotification(v10);
  v11 = (void *)*((_QWORD *)v0 + 239);
  if ( v11 )
    PowerSettingUnregisterNotification(v11);
  if ( *((_QWORD *)v0 + 236) )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    TpSetTimer(*((_QWORD *)v0 + 236), 0LL, 0LL, 0LL);
    RtlLeaveCriticalSection(&RmpGlobalLock);
    TpWaitForTimer(*((_QWORD *)v0 + 236), 1LL);
  }
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)v0 + 418) = 0LL;
  }
  RmpActivityHostCleanupModule(v0);
  RmpCpuSetManagerCleanup(v0);
  if ( *((_QWORD *)v0 + 13) )
    TpReleaseTimer();
  if ( *((_QWORD *)v0 + 22) )
    TpReleaseTimer();
  if ( *((_QWORD *)v0 + 26) )
    TpReleaseTimer();
  v12 = (void *)*((_QWORD *)v0 + 47);
  if ( v12 )
    CloseHandle(v12);
  if ( *((_QWORD *)v0 + 48) )
    TpReleaseTimer();
  for ( i = 0; i < 6; ++i )
  {
    v14 = *v8;
    if ( *v8 )
    {
      if ( i )
        CloseHandle(v14);
      else
        NtClose(v14);
    }
    ++v8;
  }
  result = RmpPolicyCleanup(v0);
  if ( *((_QWORD *)v0 + 236) )
    result = TpReleaseTimer();
  *((_DWORD *)v0 + 484) &= ~1u;
  return result;
}
