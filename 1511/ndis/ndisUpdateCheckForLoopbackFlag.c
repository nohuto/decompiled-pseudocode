/*
 * XREFs of ndisUpdateCheckForLoopbackFlag @ 0x1C001AAF0
 * Callers:
 *     XRemoveBindingFromLists @ 0x1C0014548 (XRemoveBindingFromLists.c)
 *     ndisPostSetOpenPacketFilter @ 0x1C0019C20 (ndisPostSetOpenPacketFilter.c)
 *     ndisSetOpenPacketFilter @ 0x1C0019E14 (ndisSetOpenPacketFilter.c)
 *     ndisSetRestorePacketFilter @ 0x1C0044F38 (ndisSetRestorePacketFilter.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C00568B4 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisMFinishClose @ 0x1C00E1498 (ndisMFinishClose.c)
 *     ndisDeQueueOpenOnMiniport @ 0x1C00E1590 (ndisDeQueueOpenOnMiniport.c)
 *     ndisMOpenAdapter @ 0x1C00E340C (ndisMOpenAdapter.c)
 *     NdisOpenAdapterEx @ 0x1C00E3930 (NdisOpenAdapterEx.c)
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
