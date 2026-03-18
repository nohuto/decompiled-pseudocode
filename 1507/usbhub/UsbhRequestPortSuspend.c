/*
 * XREFs of UsbhRequestPortSuspend @ 0x1C00258F4
 * Callers:
 *     UsbhWaitConnect @ 0x1C00150A0 (UsbhWaitConnect.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhBusUnlatchPdo @ 0x1C0017830 (UsbhBusUnlatchPdo.c)
 *     UsbhSuspendPort @ 0x1C0025A38 (UsbhSuspendPort.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhSignalSuspendEvent @ 0x1C00417A4 (UsbhSignalSuspendEvent.c)
 *     UsbhDeletePdo @ 0x1C0053984 (UsbhDeletePdo.c)
 */

__int64 __fastcall UsbhRequestPortSuspend(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // rax

  v8 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      47,
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      *(_WORD *)(a4 + 4));
  Log(a1, 1024, 1936937808, a4, 0LL);
  FdoExt(a1, v9, v10, v11);
  if ( !a5 )
  {
    UsbhSignalSuspendEvent(a1, a4);
    return v8;
  }
  v12 = *(_QWORD *)(a4 + 376);
  *(_BYTE *)(v12 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v12 + 136) = 1;
  *(_DWORD *)(v12 + 88) = 2018460752;
  *(_DWORD *)(v12 + 92) = 19;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v12;
  *(_QWORD *)(v12 + 24) = KeGetCurrentThread();
  if ( PdoExt(a5, v13, v14, v15)[281] == 2 )
  {
    UsbhBusUnlatchPdo(a1, a5, a4, v16, v12 + 132);
    UsbhDeletePdo(a1, a5, 2LL);
  }
  else
  {
    v17 = *(_QWORD *)(a4 + 376);
    *(_DWORD *)(v17 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v17 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v17 + 132));
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      48,
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      *(_WORD *)(a4 + 4));
  if ( a3 == 25 )
  {
    UsbhSuspendPort(a1);
  }
  else if ( a3 != 27 )
  {
    return v8;
  }
  return 5;
}
