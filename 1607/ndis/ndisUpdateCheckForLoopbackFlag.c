/*
 * XREFs of ndisUpdateCheckForLoopbackFlag @ 0x1C0018BCC
 * Callers:
 *     ndisPostSetOpenPacketFilter @ 0x1C001989C (ndisPostSetOpenPacketFilter.c)
 *     ndisSetOpenPacketFilter @ 0x1C0019A90 (ndisSetOpenPacketFilter.c)
 *     XRemoveBindingFromLists @ 0x1C001F4BC (XRemoveBindingFromLists.c)
 *     ndisSetRestorePacketFilter @ 0x1C0048478 (ndisSetRestorePacketFilter.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005B088 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C00E75A0 (NdisOpenAdapterEx.c)
 *     ndisMOpenAdapter @ 0x1C00E7CD0 (ndisMOpenAdapter.c)
 *     ndisMFinishClose @ 0x1C00EB318 (ndisMFinishClose.c)
 *     ndisDeQueueOpenOnMiniport @ 0x1C00EB410 (ndisDeQueueOpenOnMiniport.c)
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
