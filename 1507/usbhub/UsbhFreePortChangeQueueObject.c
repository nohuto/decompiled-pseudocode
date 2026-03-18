/*
 * XREFs of UsbhFreePortChangeQueueObject @ 0x1C000B48C
 * Callers:
 *     UsbhFlushPortChangeQueue @ 0x1C000B3D4 (UsbhFlushPortChangeQueue.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C0022500 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhCancelQueuedTimeout @ 0x1C0027F38 (UsbhCancelQueuedTimeout.c)
 *     UsbhFlushQueuedDriverReset @ 0x1C0043224 (UsbhFlushQueuedDriverReset.c)
 * Callees:
 *     UsbhSignalPauseEvent @ 0x1C000B5C4 (UsbhSignalPauseEvent.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C0019160 (UsbhUnlatchPdo.c)
 *     UsbhiSignalResumeEvent @ 0x1C0024F50 (UsbhiSignalResumeEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C00405E0 (UsbhFreePortChangeQueueTimeoutObject.c)
 *     UsbhiSignalSuspendEvent @ 0x1C004281C (UsbhiSignalSuspendEvent.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x1C0045538 (Usbh_iSignalSyncDeviceReset.c)
 */

void __fastcall UsbhFreePortChangeQueueObject(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // r9
  int v9; // ecx
  __int16 v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8

  Log(a1, 512, 1969836099, 0, *(unsigned __int16 *)(a2 + 4));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      54,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(_WORD *)(a2 + 4));
  FdoExt(a1);
  v9 = *(_DWORD *)(a3 + 8);
  v10 = *(_WORD *)(a2 + 420);
  v11 = ((unsigned __int8)*(_DWORD *)(a2 + 856) + 1) & 0xF;
  v12 = *(_DWORD *)(a2 + 400);
  *(_DWORD *)(a2 + 856) = v11;
  v13 = a2 + 32 * (v11 + 27);
  *(_DWORD *)v13 = v12;
  *(_DWORD *)(v13 + 4) = v9;
  *(_WORD *)(v13 + 18) = 256;
  *(_WORD *)(v13 + 16) = v10;
  *(_QWORD *)(v13 + 8) = 0LL;
  *(_DWORD *)(v13 + 20) = 0;
  *(_DWORD *)(v13 + 28) = 1;
  if ( a4 )
  {
    if ( *(_DWORD *)(a3 + 8) == 4 )
      UsbhiSignalResumeEvent(a1, a2);
    if ( *(_DWORD *)(a3 + 8) == 0x80000 )
      UsbhSignalPauseEvent(a1, a2);
    if ( *(_DWORD *)(a3 + 8) == 4 )
      UsbhiSignalSuspendEvent(a1, a2);
  }
  if ( *(_DWORD *)(a3 + 48) == 1 )
  {
    if ( a4 )
      Usbh_iSignalSyncDeviceReset(a1, *(_QWORD *)(a3 + 40), a2);
  }
  else if ( *(_DWORD *)(a3 + 48) == 2 )
  {
    v14 = *(_QWORD *)(a3 + 40);
    LOBYTE(v8) = a4;
    *(_QWORD *)(a3 + 40) = 0LL;
    UsbhFreePortChangeQueueTimeoutObject(a1, a2, v14, v8);
  }
  if ( *(_DWORD *)(a3 + 48) == 1 )
    UsbhUnlatchPdo(a1, *(_QWORD *)(a3 + 40), a3, 1230065731LL);
  Log(a1, 512, 1718767684, a2, a3);
  ExFreePoolWithTag((PVOID)a3, 0);
}
