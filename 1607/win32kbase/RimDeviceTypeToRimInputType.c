/*
 * XREFs of RimDeviceTypeToRimInputType @ 0x1C00101D4
 * Callers:
 *     RIMRemoveDevOfInputType @ 0x1C000A524 (RIMRemoveDevOfInputType.c)
 *     RIMAllocateHidDesc @ 0x1C000B524 (RIMAllocateHidDesc.c)
 *     RIMDeviceClassNotify @ 0x1C000BFC0 (RIMDeviceClassNotify.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C000C5D0 (RIMRegisterForDeviceChangeNotifications.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C000C65C (RIMHandleTTMDeviceArrival.c)
 *     rimOnPnpArrived @ 0x1C000C7E8 (rimOnPnpArrived.c)
 *     RIMOpenDev @ 0x1C000CD84 (RIMOpenDev.c)
 *     rimDoRimDevChange @ 0x1C000FAC0 (rimDoRimDevChange.c)
 *     rimProcessInput @ 0x1C000FF78 (rimProcessInput.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0010070 (RIMDirectStartStopDeviceRead.c)
 *     rimCompleteReads @ 0x1C00108C8 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0010984 (rimIssueReads.c)
 *     RIMOnPnpNotification @ 0x1C00CFB10 (RIMOnPnpNotification.c)
 *     RIMDeviceNotify @ 0x1C00DA6C0 (RIMDeviceNotify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimDeviceTypeToRimInputType(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  __int64 v4; // rdx

  if ( !a2 )
    return 1LL;
  v2 = a2 - 1;
  if ( !v2 )
    return 2LL;
  v3 = v2 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
      return (*(_DWORD *)(a1 + 184) & 0x400) != 0 ? 8 : 16;
    return 0LL;
  }
  if ( !*(_DWORD *)(a1 + 316) )
  {
    if ( *(_BYTE *)(a1 + 48) != 3 )
      return 32LL;
    return 0LL;
  }
  v4 = *(_QWORD *)(a1 + 480);
  if ( *(_DWORD *)(v4 + 24) != 7 )
  {
    if ( (unsigned int)(*(_DWORD *)(v4 + 24) - 5) <= 1 )
      return 4LL;
    if ( (unsigned int)(*(_DWORD *)(v4 + 24) - 1) <= 3 )
      return 16LL;
    return 0LL;
  }
  return 8LL;
}
