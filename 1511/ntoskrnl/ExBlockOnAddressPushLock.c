/*
 * XREFs of ExBlockOnAddressPushLock @ 0x1400D26F0
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x1400D2698 (CmpWaitForLateUnloadWorker.c)
 *     CmpSearchAddTrans @ 0x1403D6DD0 (CmpSearchAddTrans.c)
 *     CmLoadAppKey @ 0x1403DC3A0 (CmLoadAppKey.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140498ABC (ExpBlockOnLockedHandleEntry.c)
 *     MiLockImageSection @ 0x140498AE4 (MiLockImageSection.c)
 *     PopBatteryUpdateCurrentState @ 0x1404FA018 (PopBatteryUpdateCurrentState.c)
 *     CmUnRegisterCallback @ 0x1405DD2C0 (CmUnRegisterCallback.c)
 *     CmShutdownSystem @ 0x1405DE7A4 (CmShutdownSystem.c)
 *     ObDrainDeferredObjectDeletion @ 0x14062DBC4 (ObDrainDeferredObjectDeletion.c)
 * Callees:
 *     ExBlockPushLock @ 0x1400D2790 (ExBlockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1400D27AC (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x1400D2A8C (ExpUnblockPushLock.c)
 */

__int64 __fastcall ExBlockOnAddressPushLock(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned __int64 a4, __int64 a5)
{
  int v9; // ebx
  int v11; // ebx
  int v12; // ebx
  bool v13; // zf
  _BYTE v14[64]; // [rsp+20h] [rbp-48h] BYREF

  ExBlockPushLock(a1, v14);
  if ( a4 > 8 )
    goto LABEL_9;
  v9 = a4 - 1;
  if ( v9 )
  {
    v11 = v9 - 1;
    if ( v11 )
    {
      v12 = v11 - 2;
      if ( v12 )
      {
        if ( v12 != 4 )
          goto LABEL_9;
        v13 = *a2 == *a3;
      }
      else
      {
        v13 = *(_DWORD *)a2 == *(_DWORD *)a3;
      }
    }
    else
    {
      v13 = *(_WORD *)a2 == *(_WORD *)a3;
    }
    if ( v13 )
      return ExTimedWaitForUnblockPushLock(a1, v14, a5);
  }
  else if ( *(_BYTE *)a2 == *(_BYTE *)a3 )
  {
    return ExTimedWaitForUnblockPushLock(a1, v14, a5);
  }
LABEL_9:
  ExpUnblockPushLock(a1, v14, 0LL);
  return 0LL;
}
