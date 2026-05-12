/*
 * XREFs of RaidAdapterStopDeviceIrp @ 0x1C0053274
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C00092D4 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidAdapterStop @ 0x1C0006B5C (RaidAdapterStop.c)
 *     RaForwardIrp @ 0x1C00094B4 (RaForwardIrp.c)
 *     RaidPnPPassToMiniPort @ 0x1C000E6FC (RaidPnPPassToMiniPort.c)
 *     RaidPauseAdapterQueue @ 0x1C0011978 (RaidPauseAdapterQueue.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     RaidAdapterDeleteAsyncCallbacks @ 0x1C002114C (RaidAdapterDeleteAsyncCallbacks.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0021C84 (RaidAdapterPoFxActivateComponent.c)
 *     Template_pq @ 0x1C0024F2C (Template_pq.c)
 *     StorSetIoGatewayEmptyEvent @ 0x1C0034C28 (StorSetIoGatewayEmptyEvent.c)
 *     RaidDeleteResourceList @ 0x1C0053D4C (RaidDeleteResourceList.c)
 */

__int64 __fastcall RaidAdapterStopDeviceIrp(__int64 a1, IRP *a2)
{
  __int64 v3; // rcx
  int v5; // esi
  char v6; // r8
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-60h]
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-60h]
  union _LARGE_INTEGER v13; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-48h] BYREF
  GUID v15; // [rsp+50h] [rbp-30h] BYREF
  GUID v16; // [rsp+60h] [rbp-20h] BYREF

  _InterlockedExchange((volatile __int32 *)(a1 + 88), 8);
  v3 = *(_QWORD *)(a1 + 5088);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 20) |= 4u;
    RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
  }
  RaidPauseAdapterQueue(a1);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  StorSetIoGatewayEmptyEvent(a1 + 768, &Event);
  v13.QuadPart = -1200000000LL;
  v5 = KeWaitForSingleObject(&Event, Executive, 0, 0, &v13);
  if ( v5 )
  {
    v7 = StorEtwLoggingEnabled == 0;
    a2->IoStatus.Status = -1073741823;
    if ( !v7 )
    {
      v15.Data1 = 0;
      *(_QWORD *)&v15.Data2 = 0LL;
      *(_DWORD *)&v15.Data4[4] = 0;
      IoGetActivityIdIrp(a2, &v15);
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
      {
        LODWORD(Timeout) = a2->IoStatus.Status;
        Template_pq(v8, &EventPnpRequestComplete, &v15, a2, Timeout);
      }
    }
  }
  else
  {
    v5 = RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), 4LL, v6, 0LL, 0);
    if ( v5 >= 0 )
    {
      RaidAdapterDeleteAsyncCallbacks(a1);
      RaidAdapterStop(a1);
      RaidDeleteResourceList(a1 + 280);
      if ( StorEtwLoggingEnabled )
      {
        v16.Data1 = 0;
        *(_QWORD *)&v16.Data2 = 0LL;
        *(_DWORD *)&v16.Data4[4] = 0;
        IoGetActivityIdIrp(a2, &v16);
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
        {
          LODWORD(Timeouta) = a2->IoStatus.Status;
          Template_pq(v9, &EventPnpRequestComplete, &v16, a2, Timeouta);
        }
      }
      a2->IoStatus.Status = 0;
      return (unsigned int)RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
    }
  }
  return (unsigned int)v5;
}
