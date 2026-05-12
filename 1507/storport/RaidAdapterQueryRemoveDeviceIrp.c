/*
 * XREFs of RaidAdapterQueryRemoveDeviceIrp @ 0x1C0052ED0
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C00092D4 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x1C00094B4 (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     Template_pq @ 0x1C0024F2C (Template_pq.c)
 */

NTSTATUS __fastcall RaidAdapterQueryRemoveDeviceIrp(__int64 a1, IRP *a2)
{
  bool v4; // zf
  __int64 v5; // rcx
  int Status; // [rsp+20h] [rbp-38h]
  GUID v8; // [rsp+30h] [rbp-28h] BYREF

  _InterlockedExchange((volatile __int32 *)(a1 + 88), 4);
  v4 = StorEtwLoggingEnabled == 0;
  a2->IoStatus.Status = 0;
  if ( !v4 )
  {
    v8.Data1 = 0;
    *(_QWORD *)&v8.Data2 = 0LL;
    *(_DWORD *)&v8.Data4[4] = 0;
    IoGetActivityIdIrp(a2, &v8);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
    {
      Status = a2->IoStatus.Status;
      Template_pq(v5, &EventPnpRequestComplete, &v8, a2, Status);
    }
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
