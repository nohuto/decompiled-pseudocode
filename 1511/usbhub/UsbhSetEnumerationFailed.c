/*
 * XREFs of UsbhSetEnumerationFailed @ 0x1C0051920
 * Callers:
 *     UsbhReset2Complete @ 0x1C0010B30 (UsbhReset2Complete.c)
 *     UsbhReset1Complete @ 0x1C001EA00 (UsbhReset1Complete.c)
 *     UsbhReset1Timeout @ 0x1C0051140 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C0051680 (UsbhReset2Timeout.c)
 * Callees:
 *     UsbhSignalSyncDeviceReset @ 0x1C0004650 (UsbhSignalSyncDeviceReset.c)
 *     UsbhFreeID @ 0x1C00058A4 (UsbhFreeID.c)
 *     UsbhBusConnectPdo @ 0x1C0008C4C (UsbhBusConnectPdo.c)
 *     UsbhAcquirePdoStateLock @ 0x1C000947C (UsbhAcquirePdoStateLock.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A8B0 (UsbhReleaseEnumBusLockEx.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhBusUnlatchPdo @ 0x1C0010990 (UsbhBusUnlatchPdo.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhIncHubBusy @ 0x1C0014020 (UsbhIncHubBusy.c)
 *     UsbhDisablePort @ 0x1C004332C (UsbhDisablePort.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 *     UsbhBuildUnknownIds @ 0x1C0051BBC (UsbhBuildUnknownIds.c)
 */

__int64 __fastcall UsbhSetEnumerationFailed(
        __int64 a1,
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
  FdoExt(a1, a2, a3, a4);
  v16 = PdoExt(a3, v13, v14, v15);
  v17 = *(_QWORD *)(a2 + 376);
  v18 = *(_DWORD *)(a2 + 428);
  v19 = v16;
  UsbhDisablePort(a1, a2);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  UsbhAcquirePdoStateLock(v20, v17, 2);
  v24 = PdoExt(a3, v21, v22, v23);
  Log(a1, 1024, 1701737761, a3, (int)v24[281]);
  *(_DWORD *)(v17 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(v17 + 88) = 1734964085;
  v25 = *(_BYTE *)(v17 + 132);
  if ( v26 == 3 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v25);
    UsbhBusUnlatchPdo(a1, a3, a2, v27, 0LL);
    UsbhSignalSyncDeviceReset(a1, a3, a2, 0xC0000001);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v25);
    v19[353] |= 0x1000u;
    UsbhBuildUnknownIds(a1, a3);
    *((_QWORD *)v19 + 107) = UsbhIncHubBusy(a1, *(_QWORD *)(a2 + 376), a1, 1430414956LL, 1);
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), v9, a5, 0xCu, a6, -1, usbfile_busfunc_c, a9, 0);
    UsbhFreeID((__int64)(v19 + 530));
    v19[353] &= ~0x200u;
    UsbhBusUnlatchPdo(a1, a3, a2, v28, 0LL);
    v19[283] |= 4u;
    UsbhBusConnectPdo(a1, a2);
    v18 = 2;
  }
  _InterlockedExchange((volatile __int32 *)(a2 + 428), v18);
  return v18;
}
