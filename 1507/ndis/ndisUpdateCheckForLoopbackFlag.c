/*
 * XREFs of ndisUpdateCheckForLoopbackFlag @ 0x1C0018E48
 * Callers:
 *     XRemoveBindingFromLists @ 0x1C00109F8 (XRemoveBindingFromLists.c)
 *     ndisPostSetOpenPacketFilter @ 0x1C0018870 (ndisPostSetOpenPacketFilter.c)
 *     ndisSetOpenPacketFilter @ 0x1C0018A64 (ndisSetOpenPacketFilter.c)
 *     ndisSetRestorePacketFilter @ 0x1C00439A0 (ndisSetRestorePacketFilter.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0056A24 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisMFinishClose @ 0x1C00E7034 (ndisMFinishClose.c)
 *     ndisDeQueueOpenOnMiniport @ 0x1C00E712C (ndisDeQueueOpenOnMiniport.c)
 *     ndisMOpenAdapter @ 0x1C00E8200 (ndisMOpenAdapter.c)
 *     NdisOpenAdapterEx @ 0x1C00E9A60 (NdisOpenAdapterEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisUpdateCheckForLoopbackFlag(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 400);
  if ( result && *(_QWORD *)(result + 328) || !*(_BYTE *)(a1 + 91) || *(_WORD *)(a1 + 1820) <= 1u )
    *(_DWORD *)(a1 + 120) &= ~0x4000u;
  else
    *(_DWORD *)(a1 + 120) |= 0x4000u;
  return result;
}
