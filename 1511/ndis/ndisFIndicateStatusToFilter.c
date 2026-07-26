/*
 * XREFs of ndisFIndicateStatusToFilter @ 0x1C001C730
 * Callers:
 *     ndisIndicateInitialStateToFilter @ 0x1C001B438 (ndisIndicateInitialStateToFilter.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001B908 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisFIndicateStatusInternal @ 0x1C001C0D0 (ndisFIndicateStatusInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFIndicateStatusToFilter(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 288LL) )
    ndisFInvokeStatus(a1, a2);
  else
    ndisFIndicateStatusInternal(a1, a2);
}
