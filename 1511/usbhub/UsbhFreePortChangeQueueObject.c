/*
 * XREFs of UsbhFreePortChangeQueueObject @ 0x1C001D1CC
 * Callers:
 *     UsbhFlushPortChangeQueue @ 0x1C001D114 (UsbhFlushPortChangeQueue.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C0020810 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhCancelQueuedTimeout @ 0x1C0026F6C (UsbhCancelQueuedTimeout.c)
 *     UsbhFlushQueuedDriverReset @ 0x1C0043444 (UsbhFlushQueuedDriverReset.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSignalPauseEvent @ 0x1C001D304 (UsbhSignalPauseEvent.c)
 *     UsbhiSignalResumeEvent @ 0x1C001FC60 (UsbhiSignalResumeEvent.c)
 *     UsbhUnlatchPdo @ 0x1C0022600 (UsbhUnlatchPdo.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C00407FC (UsbhFreePortChangeQueueTimeoutObject.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0042A38 (UsbhiSignalSuspendEvent.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x1C0045668 (Usbh_iSignalSyncDeviceReset.c)
 */

void __fastcall UsbhFreePortChangeQueueObject(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r9
  int v12; // ecx
  __int16 v13; // r8
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8

  Log(a1, 512, 1969836099, 0LL, *(unsigned __int16 *)(a2 + 4));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      54,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(_WORD *)(a2 + 4));
  FdoExt(a1, v8, v9, v10);
  v12 = *(_DWORD *)(a3 + 8);
  v13 = *(_WORD *)(a2 + 420);
  v14 = ((unsigned __int8)*(_DWORD *)(a2 + 856) + 1) & 0xF;
  v15 = *(_DWORD *)(a2 + 400);
  *(_DWORD *)(a2 + 856) = v14;
  v16 = a2 + 32 * (v14 + 27);
  *(_DWORD *)v16 = v15;
  *(_DWORD *)(v16 + 4) = v12;
  *(_WORD *)(v16 + 18) = 256;
  *(_WORD *)(v16 + 16) = v13;
  *(_QWORD *)(v16 + 8) = 0LL;
  *(_DWORD *)(v16 + 20) = 0;
  *(_DWORD *)(v16 + 28) = 1;
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
    v17 = *(_QWORD *)(a3 + 40);
    LOBYTE(v11) = a4;
    *(_QWORD *)(a3 + 40) = 0LL;
    UsbhFreePortChangeQueueTimeoutObject(a1, a2, v17, v11);
  }
  if ( *(_DWORD *)(a3 + 48) == 1 )
    UsbhUnlatchPdo(a1, *(_QWORD *)(a3 + 40), a3, 1230065731LL);
  Log(a1, 512, 1718767684, a2, a3);
  ExFreePoolWithTag((PVOID)a3, 0);
}
