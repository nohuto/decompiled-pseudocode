/*
 * XREFs of UsbhDriverResetPort @ 0x1C0004900
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSignalSyncDeviceReset @ 0x1C0004650 (UsbhSignalSyncDeviceReset.c)
 *     UsbhDecHubBusy @ 0x1C000C010 (UsbhDecHubBusy.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhResetPort @ 0x1C001E7B8 (UsbhResetPort.c)
 *     UsbhAllocateTimeoutObject @ 0x1C001F21C (UsbhAllocateTimeoutObject.c)
 *     UsbhAcquireEnumBusLock @ 0x1C001F288 (UsbhAcquireEnumBusLock.c)
 *     UsbhSignalResumeEvent @ 0x1C001F7BC (UsbhSignalResumeEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhDriverResetPort(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  signed int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  Log(a1, 1024, 1884443460, a2, 0LL);
  v6 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      40,
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      *(_WORD *)(a2 + 4));
  UsbhSignalResumeEvent(a1, a2);
  v7 = UsbhAllocateTimeoutObject(a1, a2, &v12);
  if ( v7 < 0 )
  {
    v6 = 0;
    UsbhSignalSyncDeviceReset(a1, a3, a2, v7);
  }
  else
  {
    *(_DWORD *)(a2 + 2408) |= 1u;
    *(_DWORD *)(a2 + 544) = 0;
    if ( a3 )
    {
      v8 = PdoExt(a3);
      *(_DWORD *)(v8 + 1412) &= ~0x1000u;
      v9 = PdoExt(a3);
      UsbhDecHubBusy(a1, v10, *(_QWORD *)(v9 + 856));
      *(_QWORD *)(PdoExt(a3) + 856) = 0LL;
    }
    UsbhAcquireEnumBusLock(a1, *(_QWORD *)(a2 + 376), *(unsigned __int16 *)(a2 + 4));
    UsbhResetPort(a1);
    _InterlockedExchange((volatile __int32 *)(a2 + 428), 10);
  }
  return v6;
}
