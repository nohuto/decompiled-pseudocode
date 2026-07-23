/*
 * XREFs of ExBlockOnAddressPushLock @ 0x14009DC4C
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x14009DBF4 (CmpWaitForLateUnloadWorker.c)
 *     CmLoadAppKey @ 0x1403FAFD0 (CmLoadAppKey.c)
 *     CmpTransSearchAddTrans @ 0x1403FE004 (CmpTransSearchAddTrans.c)
 *     MiLockImageSection @ 0x1404AEF68 (MiLockImageSection.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404AF024 (ExpBlockOnLockedHandleEntry.c)
 *     CmpRollbackLightWeightTransaction @ 0x1404CB88C (CmpRollbackLightWeightTransaction.c)
 *     PopBatteryUpdateCurrentState @ 0x140548188 (PopBatteryUpdateCurrentState.c)
 *     CmUnRegisterCallback @ 0x1405FB1F0 (CmUnRegisterCallback.c)
 *     CmShutdownSystem @ 0x1405FC700 (CmShutdownSystem.c)
 *     ObDrainDeferredObjectDeletion @ 0x140665DB4 (ObDrainDeferredObjectDeletion.c)
 *     EtwpKsrCallback @ 0x1406A9EBC (EtwpKsrCallback.c)
 * Callees:
 *     ExBlockPushLock @ 0x14009DCEC (ExBlockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x14009DD08 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x14010B740 (ExpUnblockPushLock.c)
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
