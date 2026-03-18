/*
 * XREFs of PopDispatchPowerSettingCallbacks @ 0x140456D10
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     PopIncrementPowerSettingPendingUpdates @ 0x140091F48 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x140091FA4 (PopDecrementPowerSettingPendingUpdates.c)
 *     PopUnregisterPowerSettingCallback @ 0x140107554 (PopUnregisterPowerSettingCallback.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PopCallPowerSettingCallback @ 0x140456E2C (PopCallPowerSettingCallback.c)
 */

void PopDispatchPowerSettingCallbacks()
{
  __int64 v0; // rbx
  PVOID *v1; // rdi
  __int64 v2; // r14
  PVOID *v3; // rsi
  PVOID *v4; // rbx
  PVOID *v5; // rbp
  char v6; // al
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v10; // rbx
  PVOID *v11; // rax

  PopIncrementPowerSettingPendingUpdates(0);
  PopDecrementPowerSettingPendingUpdates(1);
  v0 = dword_1402DE28C;
  ExAcquireFastMutex(&PopSettingLock);
  v1 = (PVOID *)PopPowerSettings;
  if ( PopPowerSettings != &PopPowerSettings )
  {
    v2 = v0;
    do
    {
      v3 = v1 + 2;
      v4 = (PVOID *)v1[2];
      while ( v4 != v3 )
      {
        if ( *((_BYTE *)v4 + 88) )
        {
          v4 = (PVOID *)*v4;
        }
        else
        {
          *((_BYTE *)v4 + 88) = 1;
          if ( v4[7] != v1[v2 + 8] )
            PopCallPowerSettingCallback(v4);
          v5 = (PVOID *)*v4;
          *((_BYTE *)v4 + 88) = 0;
          if ( *((_BYTE *)v4 + 33) || *((_BYTE *)v4 + 32) )
            PopUnregisterPowerSettingCallback(v4);
          v4 = v5;
        }
      }
      if ( *v3 != v3 || *((_DWORD *)v1 + 14) || *((_DWORD *)v1 + 15) )
        goto LABEL_12;
      v6 = 1;
      v7 = v1 + 8;
      v8 = 3LL;
      do
      {
        if ( *v7++ != 0LL )
          v6 = 0;
        --v8;
      }
      while ( v8 );
      if ( !v6 )
      {
LABEL_12:
        v1 = (PVOID *)*v1;
      }
      else
      {
        v10 = *v1;
        v11 = (PVOID *)v1[1];
        if ( *((PVOID **)*v1 + 1) != v1 || *v11 != v1 )
          __fastfail(3u);
        *v11 = v10;
        v10[1] = v11;
        ExFreePoolWithTag(v1, 0x74655350u);
        v1 = (PVOID *)v10;
      }
    }
    while ( v1 != &PopPowerSettings );
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  PopDecrementPowerSettingPendingUpdates(0);
}
