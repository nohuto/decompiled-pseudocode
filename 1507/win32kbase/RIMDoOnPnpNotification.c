/*
 * XREFs of RIMDoOnPnpNotification @ 0x1C0076038
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C0075BD0 (RIMDeviceClassNotify.c)
 *     RIMOnPnpNotification @ 0x1C00C22E0 (RIMOnPnpNotification.c)
 *     RIMDiscoverSpecificDevice @ 0x1C00C937C (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RIMFreeDev @ 0x1C00759DC (RIMFreeDev.c)
 *     rimDoRimDevChangeCallback @ 0x1C0076588 (rimDoRimDevChangeCallback.c)
 *     rimOnPnpRemoveComplete @ 0x1C0076908 (rimOnPnpRemoveComplete.c)
 *     rimOnPnpArrived @ 0x1C00769E4 (rimOnPnpArrived.c)
 *     WPP_RECORDER_SF_q @ 0x1C0077B00 (WPP_RECORDER_SF_q.c)
 *     rimOnPnpQueryRemove @ 0x1C00C9C18 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1C00C9CB0 (rimOnPnpRemoveCancelled.c)
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
      rimDoRimDevChangeCallback(a1, a2, 2LL);
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
      RIMLockExclusive(a1 + 712);
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
          27,
          (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids,
          a2);
        v5 = 0;
      }
      RIMUnlockExclusive(a1 + 712);
      if ( v5 )
      {
        rimDoRimDevChangeCallback(a1, a2, 3LL);
        RIMFreeDev(a1, a2);
      }
    }
  }
  return (unsigned int)v2;
}
