/*
 * XREFs of NdisMPauseComplete @ 0x1C001AFE0
 * Callers:
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00527D0 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C0066480 (ndisMIndicatePacketsToNetBufferLists.c)
 *     ndisReturnNetBufferListsToPackets @ 0x1C0067360 (ndisReturnNetBufferListsToPackets.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00EA1F0 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004F098 (ndisBugCheckEx.c)
 */

void __stdcall NdisMPauseComplete(NDIS_HANDLE MiniportAdapterHandle)
{
  KIRQL v2; // al
  struct _KEVENT *v3; // rsi
  unsigned __int8 v4; // al

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(144LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, MiniportAdapterHandle);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  v3 = (struct _KEVENT *)*((_QWORD *)MiniportAdapterHandle + 283);
  *((_QWORD *)MiniportAdapterHandle + 283) = 0LL;
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v2);
  if ( v3 )
  {
    KeSetEvent(v3, 0, 0);
  }
  else if ( (*((_DWORD *)MiniportAdapterHandle + 31) & 0x100000) != 0
         || (v4 = *((_BYTE *)MiniportAdapterHandle + 32), v4 > 6u)
         || v4 == 6 && *((_BYTE *)MiniportAdapterHandle + 33) >= 0x32u )
  {
    ndisBugCheckEx(0x1FuLL, (ULONG_PTR)MiniportAdapterHandle, 1uLL, 0LL);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(145LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, MiniportAdapterHandle);
}
