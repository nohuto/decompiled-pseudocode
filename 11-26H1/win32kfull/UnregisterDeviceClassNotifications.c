/*
 * XREFs of UnregisterDeviceClassNotifications @ 0x1401B448C
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140137F4C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRemoteDisconnect @ 0x1401B3938 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1402D3988 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnregisterDeviceClassNotifications(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  void *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  PVOID **v14; // rdi
  PVOID *v15; // rbx
  PVOID *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(UserSessionState + 69920));
  v5 = W32GetUserSessionState(v4, v3);
  v8 = v5;
  v9 = *(void **)(v5 + 69872);
  if ( v9 )
  {
    *(_QWORD *)(v5 + 69872) = 0LL;
    v10 = W32GetUserSessionState(v7, v6);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v10 + 69920));
    IoUnregisterPlugPlayNotification(v9);
    v13 = W32GetUserSessionState(v12, v11);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(v13 + 69920));
  }
  v14 = (PVOID **)(v8 + 69880);
  while ( 1 )
  {
    v15 = *v14;
    if ( (*v14)[1] != v14 || (v16 = (PVOID *)*v15, *((PVOID **)*v15 + 1) != v15) )
      __fastfail(3u);
    *v14 = v16;
    v16[1] = v14;
    if ( !v15 || v15 == (PVOID *)v14 )
      break;
    v17 = W32GetUserSessionState(v7, v6);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v17 + 69920));
    IoUnregisterPlugPlayNotification(v15[3]);
    Win32FreePool(v15);
    v20 = W32GetUserSessionState(v19, v18);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(v20 + 69920));
  }
  v21 = W32GetUserSessionState(v7, v6);
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v21 + 69920));
}
