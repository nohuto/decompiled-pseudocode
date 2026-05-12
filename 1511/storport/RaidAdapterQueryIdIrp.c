/*
 * XREFs of RaidAdapterQueryIdIrp @ 0x1C00243BC
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C000B48C (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x1C000B6C8 (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     Template_pq @ 0x1C002700C (Template_pq.c)
 */

NTSTATUS __fastcall RaidAdapterQueryIdIrp(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  int v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+34h] [rbp-24h]
  int v8; // [rsp+3Ch] [rbp-1Ch]

  if ( StorEtwLoggingEnabled )
  {
    v6 = 0;
    v7 = 0LL;
    v8 = 0;
    IoGetActivityIdIrp(a2, &v6);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
      Template_pq(v4, &EventPnpRequestComplete, &v6, a2, a2->IoStatus.Status);
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
