/*
 * XREFs of RIMDoOnPnpNotification @ 0x1C000C538
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C000BFC0 (RIMDeviceClassNotify.c)
 *     RIMOnPnpNotification @ 0x1C00CFB10 (RIMOnPnpNotification.c)
 *     RIMDiscoverSpecificDevice @ 0x1C00DA62C (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     RIMFreeDev @ 0x1C000B268 (RIMFreeDev.c)
 *     rimOnPnpArrived @ 0x1C000C7E8 (rimOnPnpArrived.c)
 *     RIMEndAllActiveContacts @ 0x1C000D10C (RIMEndAllActiveContacts.c)
 *     rimOnPnpRemoveComplete @ 0x1C000EA9C (rimOnPnpRemoveComplete.c)
 *     rimDoRimDevChange @ 0x1C000FAC0 (rimDoRimDevChange.c)
 *     WPP_RECORDER_SF_q @ 0x1C0010310 (WPP_RECORDER_SF_q.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     rimOnPnpQueryRemove @ 0x1C00DB234 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1C00DB2CC (rimOnPnpRemoveCancelled.c)
 */

__int64 __fastcall RIMDoOnPnpNotification(__int64 a1, __int64 a2)
{
  int v2; // esi
  int v5; // ebp
  int v7; // edx
  int v8; // eax

  v2 = 0;
  v5 = 1;
  if ( (*(_DWORD *)(a2 + 184) & 1) != 0 )
  {
    v2 = rimOnPnpArrived(a1, a2, -1LL);
    if ( v2 >= 0 )
      rimDoRimDevChange(a1, a2, 2LL);
  }
  if ( (*(_DWORD *)(a2 + 184) & 2) != 0 )
    rimOnPnpQueryRemove(a1, a2);
  if ( (*(_DWORD *)(a2 + 184) & 4) != 0 )
  {
    rimOnPnpRemoveCancelled(a1, a2);
    *(_DWORD *)(a2 + 184) |= 1u;
    rimOnPnpArrived(a1, a2, -1LL);
  }
  if ( (*(_DWORD *)(a2 + 184) & 8) != 0 )
  {
    v2 = rimOnPnpRemoveComplete(a1, a2);
    if ( v2 >= 0 )
    {
      RIMLockExclusive(a1 + 696);
      if ( *(_DWORD *)(a2 + 316) )
        RIMEndAllActiveContacts(a1, *(_QWORD *)(a2 + 480), 0LL);
      v8 = *(_DWORD *)(a2 + 184);
      if ( (v8 & 0x800) == 0
        && (v8 & 0x20) == 0
        && *(_BYTE *)(a2 + 48) != 3
        && ((v8 & 0x1000000) != 0 || *(_QWORD *)(a2 + 192) || (v8 & 0x2000000) != 0 || (v8 & 0x4000000) != 0) )
      {
        *(_DWORD *)(a2 + 200) |= 1u;
        LOBYTE(v7) = 3;
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v7,
          5,
          33,
          (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
          a2);
        v5 = 0;
      }
      RIMUnlockExclusive(a1 + 696);
      if ( v5 )
      {
        rimDoRimDevChange(a1, a2, 3LL);
        RIMFreeDev(a1, a2);
      }
    }
  }
  return (unsigned int)v2;
}
