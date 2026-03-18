/*
 * XREFs of UsbhReferenceListRemove @ 0x1C0009434
 * Callers:
 *     UsbhCancelResetTimeout @ 0x1C0009144 (UsbhCancelResetTimeout.c)
 *     UsbhSetTimer @ 0x1C0009CFC (UsbhSetTimer.c)
 *     UsbhEnableTimerObject @ 0x1C001C9F0 (UsbhEnableTimerObject.c)
 *     UsbhOutOfBandwidthTimerDpc @ 0x1C003CB20 (UsbhOutOfBandwidthTimerDpc.c)
 *     UsbhSyncSendDeviceIoctl @ 0x1C003CF7C (UsbhSyncSendDeviceIoctl.c)
 *     UsbhUninitialize @ 0x1C003D1C0 (UsbhUninitialize.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C003E150 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C003E2B0 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhResetPortTimerDpc @ 0x1C00446A0 (UsbhResetPortTimerDpc.c)
 *     UsbhDmDisableTimer @ 0x1C0045B14 (UsbhDmDisableTimer.c)
 *     UsbhTimerPnpStop @ 0x1C0045D50 (UsbhTimerPnpStop.c)
 *     UsbhReferenceListClose @ 0x1C004ACB4 (UsbhReferenceListClose.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 *     UsbhExceptionWorker @ 0x1C004F980 (UsbhExceptionWorker.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhReferenceListRemove(__int64 a1, __int64 a2)
{
  KIRQL v4; // r14
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rsi
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  int v13; // eax

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  v5 = FdoExt(a1);
  v7 = v5;
  v8 = (_QWORD *)(v5 + 2512);
  if ( (_QWORD *)*v8 == v8 )
    goto LABEL_19;
  v9 = (_QWORD *)*v8;
  v10 = 0LL;
  if ( !*v8 )
    goto LABEL_19;
  while ( v9 != v8 )
  {
    v10 = v9 - 3;
    if ( v9 == (_QWORD *)24 )
      UsbhTrapFatal_Dbg(a1, a1, v10, v6);
    if ( *(_DWORD *)v10 != 1397515890 )
      UsbhTrapFatal_Dbg(a1, a1, v10, v6);
    if ( v10[2] == a2 )
      break;
    v9 = (_QWORD *)*v9;
    if ( !v9 )
      UsbhTrapFatal_Dbg(a1, a1, v10, v6);
  }
  if ( !v10 || v9 == v8 )
  {
LABEL_19:
    v13 = *(_DWORD *)(v5 + 2528);
    if ( v13 )
      *(_DWORD *)(v7 + 2528) = v13 - 1;
  }
  else
  {
    v11 = (_QWORD *)*v9;
    v12 = (_QWORD *)v9[1];
    if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v12 != v9 )
      __fastfail(3u);
    *v12 = v11;
    v11[1] = v12;
    ExFreePoolWithTag(v10, 0);
  }
  if ( (_QWORD *)*v8 == v8 && !*(_DWORD *)(v7 + 2528) )
    KeSetEvent((PRKEVENT)(v7 + 2488), 0, 0);
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v4);
}
