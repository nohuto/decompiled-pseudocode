/*
 * XREFs of RmpDestroyResourceManagerServer @ 0x18002A6E4
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18001CB20 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 *     ?RmpLockSleepConditionVariableExclusive@@YAXPEAU_RM_LOCK@@PEAU_RTL_CONDITION_VARIABLE@@@Z @ 0x18002AC94 (-RmpLockSleepConditionVariableExclusive@@YAXPEAU_RM_LOCK@@PEAU_RTL_CONDITION_VARIABLE@@@Z.c)
 *     ?Rundown@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18002BA9C (-Rundown@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x18002DF30 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 *     ?RmpActivityHostCleanupModule@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18002E094 (-RmpActivityHostCleanupModule@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerCleanup@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18002F278 (-RmpCpuSetManagerCleanup@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x1800310AC (-RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180032E34 (-RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 */

void RmpDestroyResourceManagerServer()
{
  struct _RM_SERVICE_GLOBALS *v0; // rsi
  __int64 v1; // r14
  struct _RM_SERVICE_GLOBALS **v2; // rbx
  struct _RM_SERVICE_GLOBALS *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct _RM_LOCK *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // r8

  v0 = RmSvcGlobals;
  RtlEnterCriticalSection(&RmpGlobalLock);
  *((_DWORD *)v0 + 381) |= 2u;
  RtlLeaveCriticalSection(&RmpGlobalLock);
  v1 = *((_QWORD *)v0 + 191);
  if ( v1 )
    ExecutionModel::ResourceManager::Rundown(*((ExecutionModel::ResourceManager **)v0 + 191));
  RtlEnterCriticalSection(&RmpGlobalLock);
  v2 = *(struct _RM_SERVICE_GLOBALS ***)v0;
  if ( *(struct _RM_SERVICE_GLOBALS **)v0 != v0 )
  {
    do
    {
      v3 = *v2;
      RmpActivatorCleanup((struct _RM_ACTIVATOR *)(v2 - 1));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2 - 1);
      v2 = (struct _RM_SERVICE_GLOBALS **)v3;
    }
    while ( v3 != v0 );
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  v4 = *((_QWORD *)v0 + 152);
  if ( v4 )
    TpReleaseCleanupGroupMembers(v4, 0LL, 0LL);
  v5 = *((_QWORD *)v0 + 163);
  if ( v5 )
    TpReleaseCleanupGroupMembers(v5, 0LL, 0LL);
  if ( *((_QWORD *)v0 + 134) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)v0 + 134) = 0LL;
  }
  RmpEnforcerContextRundown(v0);
  RmpGameModeRundown((struct _RM_SERVICE_GLOBALS *)((char *)v0 + 1104));
  RtlAcquireSRWLockExclusive((char *)v0 + 312);
  *((_DWORD *)v0 + 80) = GetCurrentThreadId();
  *((_DWORD *)v0 + 88) |= 1u;
  while ( 1 )
  {
    v6 = (struct _RM_SERVICE_GLOBALS *)((char *)v0 + 312);
    if ( !*((_DWORD *)v0 + 97) )
      break;
    RmpLockSleepConditionVariableExclusive(v6, (struct _RTL_CONDITION_VARIABLE *)v0 + 43);
  }
  *((_DWORD *)v0 + 80) = 0;
  RtlReleaseSRWLockExclusive(v6);
  v7 = (void *)*((_QWORD *)v0 + 72);
  if ( v7 )
    PowerSettingUnregisterNotification(v7);
  v8 = (void *)*((_QWORD *)v0 + 73);
  if ( v8 )
    PowerSettingUnregisterNotification(v8);
  if ( *((_QWORD *)v0 + 75) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  v9 = (void *)*((_QWORD *)v0 + 76);
  if ( v9 )
    NtClose(v9);
  if ( *((_QWORD *)v0 + 70) )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    TpSetTimer(*((_QWORD *)v0 + 70), 0LL, 0LL, 0LL);
    RtlLeaveCriticalSection(&RmpGlobalLock);
    TpWaitForTimer(*((_QWORD *)v0 + 70), 1LL);
  }
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)v0 + 191) = 0LL;
  }
  RmpActivityHostCleanupModule(v0);
  RmpCpuSetManagerCleanup(v0);
  if ( *((_QWORD *)v0 + 11) )
    TpReleaseTimer();
  if ( *((_QWORD *)v0 + 20) )
    TpReleaseTimer();
  if ( *((_QWORD *)v0 + 24) )
    TpReleaseTimer();
  if ( *((_QWORD *)v0 + 144) )
    TpReleaseWork();
  v10 = (void *)*((_QWORD *)v0 + 45);
  if ( v10 )
    NtClose(v10);
  v11 = (void *)*((_QWORD *)v0 + 47);
  if ( v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  if ( *((_QWORD *)v0 + 70) )
    TpReleaseTimer();
  *((_DWORD *)v0 + 160) &= ~1u;
}
