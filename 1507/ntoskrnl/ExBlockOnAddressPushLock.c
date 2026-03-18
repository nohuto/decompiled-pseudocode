/*
 * XREFs of ExBlockOnAddressPushLock @ 0x1400D2B14
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x1400D2A20 (CmpWaitForLateUnloadWorker.c)
 *     MiLockImageSection @ 0x1404251F4 (MiLockImageSection.c)
 *     CmLoadAppKey @ 0x1404471C4 (CmLoadAppKey.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404EEB50 (ExpBlockOnLockedHandleEntry.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 *     PopBatteryUpdateCurrentState @ 0x14056C220 (PopBatteryUpdateCurrentState.c)
 *     CmUnRegisterCallback @ 0x1406527EC (CmUnRegisterCallback.c)
 *     CmShutdownSystem @ 0x140653CD0 (CmShutdownSystem.c)
 *     ObDrainDeferredObjectDeletion @ 0x1406AB79C (ObDrainDeferredObjectDeletion.c)
 * Callees:
 *     ExBlockPushLock @ 0x1400D2BB4 (ExBlockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1400D2BD0 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x1400D2C68 (ExpUnblockPushLock.c)
 */

__int64 __fastcall ExBlockOnAddressPushLock(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned __int64 a4, __int64 a5)
{
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  bool v12; // zf
  _BYTE v14[64]; // [rsp+20h] [rbp-48h] BYREF

  ExBlockPushLock(a1, v14);
  if ( a4 > 8 )
    goto LABEL_8;
  v9 = a4 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( v11 )
      {
        if ( v11 != 4 )
          goto LABEL_8;
        v12 = *a2 == *a3;
      }
      else
      {
        v12 = *(_DWORD *)a2 == *(_DWORD *)a3;
      }
    }
    else
    {
      v12 = *(_WORD *)a2 == *(_WORD *)a3;
    }
    if ( v12 )
      return ExTimedWaitForUnblockPushLock(a1, v14, a5);
  }
  else if ( *(_BYTE *)a2 == *(_BYTE *)a3 )
  {
    return ExTimedWaitForUnblockPushLock(a1, v14, a5);
  }
LABEL_8:
  ExpUnblockPushLock(a1, v14, 0LL);
  return 0LL;
}
