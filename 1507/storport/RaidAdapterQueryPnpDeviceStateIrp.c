/*
 * XREFs of RaidAdapterQueryPnpDeviceStateIrp @ 0x1C004D2CC
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C00092D4 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x1C00094B4 (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     Template_pq @ 0x1C0024F2C (Template_pq.c)
 */

NTSTATUS __fastcall RaidAdapterQueryPnpDeviceStateIrp(__int64 a1, __int64 a2)
{
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 92) || *(_DWORD *)(a1 + 100) || *(_DWORD *)(a1 + 96) )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  if ( StorEtwLoggingEnabled )
  {
    v7.Data1 = 0;
    *(_QWORD *)&v7.Data2 = 0LL;
    *(_DWORD *)&v7.Data4[4] = 0;
    IoGetActivityIdIrp(a2, &v7);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
    {
      v6 = *(_DWORD *)(a2 + 48);
      Template_pq(v5, &EventPnpRequestComplete, &v7, a2, v6);
    }
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
}
