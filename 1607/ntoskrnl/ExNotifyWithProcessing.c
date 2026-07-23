/*
 * XREFs of ExNotifyWithProcessing @ 0x1400098E0
 * Callers:
 *     ExNotifyCallback @ 0x1400098D8 (ExNotifyCallback.c)
 *     IopSessionChangeWorker @ 0x140131A14 (IopSessionChangeWorker.c)
 *     PoNotifySystemTimeSet @ 0x140132370 (PoNotifySystemTimeSet.c)
 *     HvlPhase2Initialize @ 0x14014CA18 (HvlPhase2Initialize.c)
 *     KiDynamicProcessorAddNotification @ 0x1401D5780 (KiDynamicProcessorAddNotification.c)
 *     SepImageVerificationCallbackWorker @ 0x1404D10DC (SepImageVerificationCallbackWorker.c)
 *     Phase1InitializationIoReady @ 0x1407934EC (Phase1InitializationIoReady.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x14079AAB4 (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x14079BFE8 (PnpNotifyEarlyLaunchImageLoad.c)
 * Callees:
 *     ExpCallProcessing @ 0x1400099D4 (ExpCallProcessing.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall ExNotifyWithProcessing(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  KSPIN_LOCK *v8; // rsi
  KIRQL v9; // al
  _QWORD *v10; // rdi
  KIRQL v11; // bp
  KIRQL v12; // al

  if ( a1 )
  {
    v4 = (_QWORD *)(a1 + 16);
    if ( (_QWORD *)*v4 != v4 )
    {
      v8 = (KSPIN_LOCK *)(a1 + 8);
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 8));
      v10 = (_QWORD *)*v4;
      v11 = v9;
      if ( v9 == 2 )
      {
        while ( v10 != v4 )
        {
          ExpCallProcessing(1, v10[4], a2, a3, a4);
          ((void (__fastcall *)(_QWORD, __int64, __int64))v10[3])(v10[4], a2, a3);
          ExpCallProcessing(0, v10[4], a2, a3, a4);
          v10 = (_QWORD *)*v10;
        }
      }
      else
      {
        while ( v10 != v4 )
        {
          if ( !*((_BYTE *)v10 + 44) )
          {
            ++*((_DWORD *)v10 + 10);
            KeReleaseSpinLock(v8, v11);
            ExpCallProcessing(1, v10[4], a2, a3, a4);
            ((void (__fastcall *)(_QWORD, __int64, __int64))v10[3])(v10[4], a2, a3);
            ExpCallProcessing(0, v10[4], a2, a3, a4);
            v12 = KeAcquireSpinLockRaiseToDpc(v8);
            --*((_DWORD *)v10 + 10);
            v11 = v12;
            if ( *((_BYTE *)v10 + 44) )
            {
              if ( !*((_DWORD *)v10 + 10) )
                KeSetEvent(&ExpCallbackEvent, 0, 0);
            }
          }
          v10 = (_QWORD *)*v10;
        }
      }
      KeReleaseSpinLock(v8, v11);
    }
  }
}
