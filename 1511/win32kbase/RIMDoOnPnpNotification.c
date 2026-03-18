/*
 * XREFs of RIMDoOnPnpNotification @ 0x1C00108E0
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C000FE30 (RIMDeviceClassNotify.c)
 *     RIMOnPnpNotification @ 0x1C00C2F90 (RIMOnPnpNotification.c)
 *     RIMDiscoverSpecificDevice @ 0x1C00CA27C (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     RIMFreeDev @ 0x1C000F020 (RIMFreeDev.c)
 *     WPP_RECORDER_SF_q @ 0x1C000FA94 (WPP_RECORDER_SF_q.c)
 *     rimOnPnpRemoveComplete @ 0x1C0010044 (rimOnPnpRemoveComplete.c)
 *     rimOnPnpArrived @ 0x1C0010120 (rimOnPnpArrived.c)
 *     rimDoRimDevChangeCallback @ 0x1C0011374 (rimDoRimDevChangeCallback.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     RIMDeliverEndStatesForAllActiveContacts @ 0x1C00C4BC8 (RIMDeliverEndStatesForAllActiveContacts.c)
 *     rimOnPnpQueryRemove @ 0x1C00CACD8 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1C00CAD70 (rimOnPnpRemoveCancelled.c)
 */

__int64 __fastcall RIMDoOnPnpNotification(__int64 a1, __int64 a2)
{
  int v2; // esi
  int v5; // ebp
  int v7; // eax

  v2 = 0;
  v5 = 1;
  if ( (*(_DWORD *)(a2 + 176) & 1) != 0 )
  {
    v2 = rimOnPnpArrived(a1, a2, (void *)0xFFFFFFFFFFFFFFFFLL);
    if ( v2 >= 0 )
      rimDoRimDevChangeCallback(a1, a2, 2LL);
  }
  if ( (*(_DWORD *)(a2 + 176) & 2) != 0 )
    rimOnPnpQueryRemove(a1, a2);
  if ( (*(_DWORD *)(a2 + 176) & 4) != 0 )
  {
    rimOnPnpRemoveCancelled(a1, a2);
    *(_DWORD *)(a2 + 176) |= 1u;
    rimOnPnpArrived(a1, a2, (void *)0xFFFFFFFFFFFFFFFFLL);
  }
  if ( (*(_DWORD *)(a2 + 176) & 8) != 0 )
  {
    v2 = rimOnPnpRemoveComplete(a1, a2);
    if ( v2 >= 0 )
    {
      RIMLockExclusive(a1 + 744);
      if ( *(_DWORD *)(a2 + 308) )
        RIMDeliverEndStatesForAllActiveContacts(a1, a2);
      v7 = *(_DWORD *)(a2 + 176);
      if ( (v7 & 0x800) == 0
        && (v7 & 0x20) == 0
        && *(_BYTE *)(a2 + 48) != 3
        && ((v7 & 0x1000000) != 0 || *(_QWORD *)(a2 + 184) || (v7 & 0x2000000) != 0 || (v7 & 0x4000000) != 0) )
      {
        *(_DWORD *)(a2 + 192) |= 1u;
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          5u,
          0x1Du,
          (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids,
          a2);
        v5 = 0;
      }
      RIMUnlockExclusive(a1 + 744);
      if ( v5 )
      {
        rimDoRimDevChangeCallback(a1, a2, 3LL);
        RIMFreeDev(a1, a2);
      }
    }
  }
  return (unsigned int)v2;
}
