/*
 * XREFs of UsbhReferenceListRemove @ 0x1C00257E0
 * Callers:
 *     UsbhSetTimer @ 0x1C00093E0 (UsbhSetTimer.c)
 *     UsbhCancelResetTimeout @ 0x1C00185C8 (UsbhCancelResetTimeout.c)
 *     UsbhEnableTimerObject @ 0x1C001A8E0 (UsbhEnableTimerObject.c)
 *     UsbhOutOfBandwidthTimerDpc @ 0x1C003C4D0 (UsbhOutOfBandwidthTimerDpc.c)
 *     UsbhSyncSendDeviceIoctl @ 0x1C003C92C (UsbhSyncSendDeviceIoctl.c)
 *     UsbhUninitialize @ 0x1C003CBB0 (UsbhUninitialize.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C003DC00 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C003DD60 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhResetPortTimerDpc @ 0x1C0044230 (UsbhResetPortTimerDpc.c)
 *     UsbhDmDisableTimer @ 0x1C004576C (UsbhDmDisableTimer.c)
 *     UsbhTimerPnpStop @ 0x1C00459A0 (UsbhTimerPnpStop.c)
 *     UsbhReferenceListClose @ 0x1C004A764 (UsbhReferenceListClose.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 *     UsbhExceptionWorker @ 0x1C004F2B0 (UsbhExceptionWorker.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhReferenceListRemove(__int64 a1, __int64 a2)
{
  KIRQL v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rax
  __int64 v9; // r9
  _DWORD *v10; // rsi
  _QWORD *v11; // rdi
  _QWORD *v12; // rcx
  _QWORD *v13; // r8
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  int v16; // eax

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  v8 = FdoExt(a1, v5, v6, v7);
  v10 = v8;
  v11 = v8 + 628;
  if ( (_QWORD *)*v11 == v11 )
    goto LABEL_19;
  v12 = (_QWORD *)*v11;
  v13 = 0LL;
  if ( !*v11 )
    goto LABEL_19;
  while ( v12 != v11 )
  {
    v13 = v12 - 3;
    if ( v12 == (_QWORD *)24 )
      UsbhTrapFatal_Dbg(a1, a1, v13, v9);
    if ( *(_DWORD *)v13 != 1397515890 )
      UsbhTrapFatal_Dbg(a1, a1, v13, v9);
    if ( v13[2] == a2 )
      break;
    v12 = (_QWORD *)*v12;
    if ( !v12 )
      UsbhTrapFatal_Dbg(a1, a1, v13, v9);
  }
  if ( !v13 || v12 == v11 )
  {
LABEL_19:
    v16 = v8[632];
    if ( v16 )
      v10[632] = v16 - 1;
  }
  else
  {
    v14 = (_QWORD *)*v12;
    v15 = (_QWORD *)v12[1];
    if ( *(_QWORD **)(*v12 + 8LL) != v12 || (_QWORD *)*v15 != v12 )
      __fastfail(3u);
    *v15 = v14;
    v14[1] = v15;
    ExFreePoolWithTag(v13, 0);
  }
  if ( (_QWORD *)*v11 == v11 && !v10[632] )
    KeSetEvent((PRKEVENT)(v10 + 622), 0, 0);
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v4);
}
