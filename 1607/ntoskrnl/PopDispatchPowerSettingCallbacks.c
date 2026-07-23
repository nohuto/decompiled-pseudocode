/*
 * XREFs of PopDispatchPowerSettingCallbacks @ 0x1403F4EB0
 * Callers:
 *     <none>
 * Callees:
 *     PopIncrementPowerSettingPendingUpdates @ 0x140009C40 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x140009CB0 (PopDecrementPowerSettingPendingUpdates.c)
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     PopUnregisterPowerSettingCallback @ 0x1401123E4 (PopUnregisterPowerSettingCallback.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PopCallPowerSettingCallback @ 0x1403F25C0 (PopCallPowerSettingCallback.c)
 */

void PopDispatchPowerSettingCallbacks()
{
  __int64 v0; // rbx
  PVOID *v1; // rdi
  __int64 v2; // r14
  void **v3; // rsi
  void **v4; // rbx
  __int64 v5; // rdx
  void **v6; // rbp
  char v7; // al
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v11; // rbx
  PVOID *v12; // rax

  PopIncrementPowerSettingPendingUpdates(0);
  PopDecrementPowerSettingPendingUpdates(1);
  v0 = dword_140303D4C;
  ExAcquireFastMutex(&PopSettingLock);
  v1 = (PVOID *)PopPowerSettings;
  if ( PopPowerSettings != &PopPowerSettings )
  {
    v2 = v0;
    do
    {
      v3 = v1 + 2;
      v4 = (void **)v1[2];
      while ( v4 != v3 )
      {
        if ( *((_BYTE *)v4 + 104) )
        {
          v4 = (void **)*v4;
        }
        else
        {
          *((_BYTE *)v4 + 104) = 1;
          v5 = (__int64)v1[v2 + 8];
          if ( v4[9] != (void *)v5 )
            PopCallPowerSettingCallback(v4, v5);
          v6 = (void **)*v4;
          *((_BYTE *)v4 + 104) = 0;
          if ( *((_BYTE *)v4 + 33) || *((_BYTE *)v4 + 32) )
            PopUnregisterPowerSettingCallback(v4);
          v4 = v6;
        }
      }
      if ( *v3 != v3 || *((_DWORD *)v1 + 14) || *((_DWORD *)v1 + 15) )
        goto LABEL_12;
      v7 = 1;
      v8 = v1 + 8;
      v9 = 3LL;
      do
      {
        if ( *v8++ != 0LL )
          v7 = 0;
        --v9;
      }
      while ( v9 );
      if ( !v7 )
      {
LABEL_12:
        v1 = (PVOID *)*v1;
      }
      else
      {
        v11 = *v1;
        v12 = (PVOID *)v1[1];
        if ( *((PVOID **)*v1 + 1) != v1 || *v12 != v1 )
          __fastfail(3u);
        *v12 = v11;
        v11[1] = v12;
        ExFreePoolWithTag(v1, 0x74655350u);
        v1 = (PVOID *)v11;
      }
    }
    while ( v1 != &PopPowerSettings );
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  PopDecrementPowerSettingPendingUpdates(0);
}
