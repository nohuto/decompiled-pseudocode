/*
 * XREFs of RaidAdapterQueryStopDeviceIrp @ 0x1C0052F6C
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C00092D4 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x1C00094B4 (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     Template_pq @ 0x1C0024F2C (Template_pq.c)
 */

NTSTATUS __fastcall RaidAdapterQueryStopDeviceIrp(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  int Status; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  a2->IoStatus.Status = 0;
  _InterlockedExchange((volatile __int32 *)(a1 + 88), 3);
  if ( StorEtwLoggingEnabled )
  {
    v7.Data1 = 0;
    *(_QWORD *)&v7.Data2 = 0LL;
    *(_DWORD *)&v7.Data4[4] = 0;
    IoGetActivityIdIrp(a2, &v7);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
    {
      Status = a2->IoStatus.Status;
      Template_pq(v4, &EventPnpRequestComplete, &v7, a2, Status);
    }
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
