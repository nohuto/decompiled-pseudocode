/*
 * XREFs of ExBlockOnAddressPushLock @ 0x1400872BC
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x140087264 (CmpWaitForLateUnloadWorker.c)
 *     CmLoadAppKey @ 0x1403FC110 (CmLoadAppKey.c)
 *     CmpTransSearchAddTrans @ 0x1403FF144 (CmpTransSearchAddTrans.c)
 *     MiLockImageSection @ 0x140499ABC (MiLockImageSection.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14049B4BC (ExpBlockOnLockedHandleEntry.c)
 *     CmpRollbackLightWeightTransaction @ 0x1404E979C (CmpRollbackLightWeightTransaction.c)
 *     PopBatteryUpdateCurrentState @ 0x140547C48 (PopBatteryUpdateCurrentState.c)
 *     CmUnRegisterCallback @ 0x1405FB13C (CmUnRegisterCallback.c)
 *     CmShutdownSystem @ 0x1405FC64C (CmShutdownSystem.c)
 *     ObDrainDeferredObjectDeletion @ 0x140665CD0 (ObDrainDeferredObjectDeletion.c)
 *     EtwpKsrCallback @ 0x1406A9D84 (EtwpKsrCallback.c)
 * Callees:
 *     ExBlockPushLock @ 0x14008735C (ExBlockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140087378 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x140087548 (ExpUnblockPushLock.c)
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
    goto LABEL_10;
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
          goto LABEL_10;
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
LABEL_10:
  ExpUnblockPushLock(a1, v14, 0LL);
  return 0LL;
}
