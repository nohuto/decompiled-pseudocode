/*
 * XREFs of RaidAdapterQueryPnpDeviceStateIrp @ 0x1C00588D0
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C000F7B0 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x1C000F9EC (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     Template_pq @ 0x1C002A68C (Template_pq.c)
 */

NTSTATUS __fastcall RaidAdapterQueryPnpDeviceStateIrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
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
    if ( (Microsoft_Windows_StorPortEnableBits & 0x200000) != 0 )
    {
      v6 = *(_DWORD *)(a2 + 48);
      Template_pq(v4, &EventPnpRequestComplete, &v7, a2, v6);
    }
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
}
