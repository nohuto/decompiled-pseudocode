/*
 * XREFs of RIMDeviceNotify @ 0x1C00C96D0
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     DeviceTypeToRimInputType @ 0x1C0077280 (DeviceTypeToRimInputType.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x1C00C975C (RIMGetPnpActionBitsFromGuid.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C00C989C (RIMSignalOnPnpNotificationAndWait.c)
 */

__int64 __fastcall RIMDeviceNotify(char *NotificationStructure, _QWORD *Context)
{
  __int64 v2; // rbx
  int v5; // eax

  v2 = Context[43];
  RIMLockExclusive(v2 + 96);
  if ( !*(_BYTE *)(v2 + 73)
    && ((unsigned int)DeviceTypeToRimInputType(*((unsigned __int8 *)Context + 48)) & *(_DWORD *)(v2 + 76)) != 0 )
  {
    RIMGetPnpActionBitsFromGuid(v2, Context, NotificationStructure + 4);
    v5 = *((_DWORD *)Context + 46);
    if ( (v5 & 2) != 0 || (v5 & 4) != 0 || (v5 & 8) != 0 )
      RIMSignalOnPnpNotificationAndWait(v2, Context);
  }
  RIMUnlockExclusive(v2 + 96);
  return 0LL;
}
