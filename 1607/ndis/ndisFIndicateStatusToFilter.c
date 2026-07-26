/*
 * XREFs of ndisFIndicateStatusToFilter @ 0x1C00162B8
 * Callers:
 *     ndisFIndicateStatusInternal @ 0x1C00156C0 (ndisFIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0018568 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C001A534 (ndisIndicateInitialStateToFilter.c)
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
