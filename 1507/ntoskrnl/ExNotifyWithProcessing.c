/*
 * XREFs of ExNotifyWithProcessing @ 0x1400EDED8
 * Callers:
 *     ExNotifyCallback @ 0x1400EDED0 (ExNotifyCallback.c)
 *     IopSessionChangeWorker @ 0x14015A178 (IopSessionChangeWorker.c)
 *     PoNotifySystemTimeSet @ 0x14015A6C4 (PoNotifySystemTimeSet.c)
 *     HvlPhase2Initialize @ 0x140170560 (HvlPhase2Initialize.c)
 *     KiDynamicProcessorAddNotification @ 0x14020332C (KiDynamicProcessorAddNotification.c)
 *     SepImageVerificationCallbackWorker @ 0x1405811C0 (SepImageVerificationCallbackWorker.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x1407B7E7C (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x1407B963C (PnpNotifyEarlyLaunchImageLoad.c)
 *     Phase1InitializationIoReady @ 0x1407D05E0 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExpCallProcessing @ 0x1400EE02C (ExpCallProcessing.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall ExNotifyWithProcessing(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rsi
  volatile signed __int32 *v8; // rbx
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v10; // rdi
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( a1 )
  {
    v4 = (_QWORD *)(a1 + 16);
    if ( (_QWORD *)*v4 != v4 )
    {
      v8 = (volatile signed __int32 *)(a1 + 8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(a1 + 8);
      }
      else if ( _interlockedbittestandset64(v8, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 8));
      }
      v10 = (_QWORD *)*v4;
      if ( CurrentIrql == 2 )
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
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              KiReleaseSpinLockInstrumented(v8, retaddr);
            else
              _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
            __writecr8(CurrentIrql);
            ExpCallProcessing(1, v10[4], a2, a3, a4);
            ((void (__fastcall *)(_QWORD, __int64, __int64))v10[3])(v10[4], a2, a3);
            ExpCallProcessing(0, v10[4], a2, a3, a4);
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireSpinLockInstrumented(v8);
            }
            else if ( _interlockedbittestandset64(v8, 0LL) )
            {
              KxWaitForSpinLockAndAcquire(v8);
            }
            --*((_DWORD *)v10 + 10);
            if ( *((_BYTE *)v10 + 44) && !*((_DWORD *)v10 + 10) )
              KeSetEvent(&ExpCallbackEvent, 0, 0);
          }
          v10 = (_QWORD *)*v10;
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v8, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
      __writecr8(CurrentIrql);
    }
  }
}
