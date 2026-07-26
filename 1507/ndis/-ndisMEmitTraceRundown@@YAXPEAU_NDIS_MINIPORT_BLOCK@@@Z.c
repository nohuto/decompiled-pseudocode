/*
 * XREFs of ?ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0049214
 * Callers:
 *     ndisEnableWppTracingCallback @ 0x1C0049F78 (ndisEnableWppTracingCallback.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0049018 (-ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_SF_DDDDD @ 0x1C0049808 (WPP_SF_DDDDD.c)
 *     WPP_SF_qqZ @ 0x1C00499D4 (WPP_SF_qqZ.c)
 */

void __fastcall ndisMEmitTraceRundown(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // bp
  bool v3; // zf
  _NDIS_FILTER_BLOCK *i; // rdi
  _NDIS_OPEN_BLOCK *j; // rdi

  if ( byte_1C0085309 )
  {
    WPP_SF_qqZ(91LL, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, a1, a1->DriverHandle, a1->pAdapterInstanceName);
    if ( byte_1C0085309 )
    {
      WPP_SF_DDDDD(
        a1->DriverHandle,
        (a1->NetLuid.Value >> 24) & 0xFFFFFF,
        a1->DriverHandle->MajorNdisVersion,
        a1->DriverHandle->MinorNdisVersion,
        a1->IfIndex,
        *((unsigned __int16 *)&a1->NetLuid.Info + 3),
        (a1->NetLuid.Value >> 24) & 0xFFFFFF);
      if ( byte_1C0085309 )
        WPP_SF_dd(0x5Du, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, a1->State, a1->PnPDeviceState);
    }
  }
  if ( a1->AoAc )
    ndisAoAcTraceRundown(a1);
  v2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v3 = a1->LowestFilter == 0LL;
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 75087;
  if ( v3 )
  {
    if ( byte_1C0085309 )
      WPP_SF_(0x5Eu, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids);
  }
  else
  {
    if ( byte_1C0085309 )
      WPP_SF_(0x5Fu, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids);
    for ( i = a1->LowestFilter; i; i = i->HigherFilter )
    {
      if ( byte_1C0085309 )
        WPP_SF_qqZ(96LL, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, i, i->FilterDriver, i->FilterFriendlyName);
    }
  }
  if ( a1->OpenQueue )
  {
    if ( byte_1C0085309 )
      WPP_SF_(0x62u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids);
    for ( j = a1->OpenQueue; j; j = j->MiniportNextOpen )
    {
      if ( byte_1C0085309 )
        WPP_SF_qqZ(
          99LL,
          &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids,
          j,
          j->ProtocolHandle,
          &j->ProtocolHandle->Name);
    }
  }
  else if ( byte_1C0085309 )
  {
    WPP_SF_(0x61u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids);
  }
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v2);
}
