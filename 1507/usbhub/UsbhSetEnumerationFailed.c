/*
 * XREFs of UsbhSetEnumerationFailed @ 0x1C00519C0
 * Callers:
 *     UsbhReset1Complete @ 0x1C00090A0 (UsbhReset1Complete.c)
 *     UsbhReset2Complete @ 0x1C0016FE0 (UsbhReset2Complete.c)
 *     UsbhReset1Timeout @ 0x1C00511E0 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C0051720 (UsbhReset2Timeout.c)
 * Callees:
 *     UsbhSignalSyncDeviceReset @ 0x1C0004730 (UsbhSignalSyncDeviceReset.c)
 *     UsbhFreeID @ 0x1C000758C (UsbhFreeID.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000B82C (UsbhReleaseEnumBusLockEx.c)
 *     UsbhIncHubBusy @ 0x1C000CE90 (UsbhIncHubBusy.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhBusUnlatchPdo @ 0x1C0017830 (UsbhBusUnlatchPdo.c)
 *     UsbhAcquirePdoStateLock @ 0x1C001DFFC (UsbhAcquirePdoStateLock.c)
 *     UsbhBusConnectPdo @ 0x1C001E444 (UsbhBusConnectPdo.c)
 *     UsbhDisablePort @ 0x1C004310C (UsbhDisablePort.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 *     UsbhBuildUnknownIds @ 0x1C0051C5C (UsbhBuildUnknownIds.c)
 */

__int64 __fastcall UsbhSetEnumerationFailed(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const void *a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  unsigned int v9; // r12d
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rax
  __int64 v17; // rbp
  unsigned __int32 v18; // r15d
  _DWORD *v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _DWORD *v24; // rax
  KIRQL v25; // dl
  int v26; // r10d
  __int64 v27; // r9
  __int64 v28; // r9

  v9 = a4;
  FdoExt((__int64)a1, a2, a3, a4);
  v16 = PdoExt(a3, v13, v14, v15);
  v17 = *(_QWORD *)(a2 + 376);
  v18 = *(_DWORD *)(a2 + 428);
  v19 = v16;
  UsbhDisablePort((__int64)a1, a2);
  UsbhReleaseEnumBusLockEx((__int64)a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  UsbhAcquirePdoStateLock(v20, v17, 2);
  v24 = PdoExt(a3, v21, v22, v23);
  Log((__int64)a1, 1024, 1701737761, a3, (int)v24[281]);
  *(_DWORD *)(v17 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(v17 + 88) = 1734964085;
  v25 = *(_BYTE *)(v17 + 132);
  if ( v26 == 3 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v25);
    UsbhBusUnlatchPdo((__int64)a1, a3, a2, v27, 0LL);
    UsbhSignalSyncDeviceReset((__int64)a1, a3, a2, 0xC0000001);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v25);
    v19[353] |= 0x1000u;
    UsbhBuildUnknownIds(a1, a3);
    *((_QWORD *)v19 + 107) = UsbhIncHubBusy(a1, *(_QWORD *)(a2 + 376), (__int64)a1, 1430414956LL, 1);
    UsbhException((__int64)a1, *(unsigned __int16 *)(a2 + 4), v9, a5, 0xCu, a6, -1, usbfile_busfunc_c, a9, 0);
    UsbhFreeID((__int64)(v19 + 530));
    v19[353] &= ~0x200u;
    UsbhBusUnlatchPdo((__int64)a1, a3, a2, v28, 0LL);
    v19[283] |= 4u;
    UsbhBusConnectPdo((__int64)a1, a2);
    v18 = 2;
  }
  _InterlockedExchange((volatile __int32 *)(a2 + 428), v18);
  return v18;
}
