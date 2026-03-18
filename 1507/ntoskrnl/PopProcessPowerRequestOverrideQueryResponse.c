/*
 * XREFs of PopProcessPowerRequestOverrideQueryResponse @ 0x1400D0F1C
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1404FFB68 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     PopQueuePowerRequestCallbacks @ 0x1400D129C (PopQueuePowerRequestCallbacks.c)
 *     PopReleasePowerRequestPushLock @ 0x1404E6108 (PopReleasePowerRequestPushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E6210 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestFindEntryById @ 0x1404E63F0 (PopPowerRequestFindEntryById.c)
 */

__int64 __fastcall PopProcessPowerRequestOverrideQueryResponse(unsigned int *a1)
{
  unsigned int v1; // edi
  __int64 *EntryById; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  bool v6; // zf
  unsigned int v7; // r9d
  int v9; // r8d
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
    v6 = *(_DWORD *)(v4 + 24) == v1;
    v7 = *(_DWORD *)(v4 + 24) ^ v1;
    *(_DWORD *)(v4 + 24) = v1;
    if ( !v6 )
    {
      do
      {
        _BitScanForward((unsigned int *)&v9, v7);
        v10 = 1 << v9;
        if ( *(_DWORD *)(v4 + 4LL * v9 + 32) )
        {
          v11 = PopPowerRequestAttributes[4 * v9];
          if ( (v10 & v1) != 0 )
          {
            v12 = v11 - 1;
            PopPowerRequestAttributes[4 * v9] = v12;
            if ( !v9 || v9 == 3 || !v12 )
              --*(_BYTE *)(v9 + v4 + 72);
          }
          else if ( v11 != -1 )
          {
            v13 = v11 + 1;
            PopPowerRequestAttributes[4 * v9] = v13;
            if ( !v9 || v9 == 3 || v13 == 1 )
              ++*(_BYTE *)(v9 + v4 + 72);
          }
        }
        v5 = (unsigned int)~v10;
        v7 &= v5;
      }
      while ( v7 );
    }
    LOBYTE(v5) = 1;
    PopQueuePowerRequestCallbacks(v4, v5);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return PopReleasePowerRequestPushLock();
}
