/*
 * XREFs of PopProcessPowerRequestOverrideQueryResponse @ 0x1400FB954
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1403F7C58 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     PopQueuePowerRequestCallbacks @ 0x1400FBD98 (PopQueuePowerRequestCallbacks.c)
 *     PopReleasePowerRequestPushLock @ 0x140520694 (PopReleasePowerRequestPushLock.c)
 *     PopPowerRequestFindEntryById @ 0x1405206A0 (PopPowerRequestFindEntryById.c)
 *     PopAcquirePowerRequestPushLock @ 0x140520750 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopProcessPowerRequestOverrideQueryResponse(unsigned int *a1)
{
  unsigned int v1; // edi
  __int64 *EntryById; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  bool v7; // zf
  __int64 v8; // r9
  int v10; // edx
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1[2];
  PopAcquirePowerRequestPushLock(0LL);
  EntryById = (__int64 *)PopPowerRequestFindEntryById(*a1);
  if ( EntryById )
  {
    v4 = *EntryById;
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    v7 = *(_DWORD *)(v4 + 24) == v1;
    v8 = *(_DWORD *)(v4 + 24) ^ v1;
    *(_DWORD *)(v4 + 24) = v1;
    if ( !v7 )
    {
      do
      {
        _BitScanForward((unsigned int *)&v6, v8);
        v10 = 1 << v6;
        if ( *(_DWORD *)(v4 + 4LL * (int)v6 + 32) )
        {
          v11 = PopPowerRequestAttributes[4 * (int)v6];
          if ( (v10 & v1) != 0 )
          {
            v12 = v11 - 1;
            PopPowerRequestAttributes[4 * (int)v6] = v12;
            if ( !(_DWORD)v6 || (_DWORD)v6 == 3 || !v12 )
              --*(_BYTE *)((int)v6 + v4 + 72);
          }
          else if ( v11 != -1 )
          {
            v13 = v11 + 1;
            PopPowerRequestAttributes[4 * (int)v6] = v13;
            if ( !(_DWORD)v6 || (_DWORD)v6 == 3 || v13 == 1 )
              ++*(_BYTE *)((int)v6 + v4 + 72);
          }
        }
        v5 = (unsigned int)~v10;
        v8 = (unsigned int)v5 & (unsigned int)v8;
      }
      while ( (_DWORD)v8 );
    }
    LOBYTE(v5) = 1;
    PopQueuePowerRequestCallbacks(v4, v5, v6, v8);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return PopReleasePowerRequestPushLock();
}
