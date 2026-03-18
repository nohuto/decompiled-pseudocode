/*
 * XREFs of RIMDeviceNotify @ 0x1C00CA5D0
 * Callers:
 *     <none>
 * Callees:
 *     DeviceTypeToRimInputType @ 0x1C000FDE0 (DeviceTypeToRimInputType.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x1C00CA65C (RIMGetPnpActionBitsFromGuid.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C00CA79C (RIMSignalOnPnpNotificationAndWait.c)
 */

__int64 __fastcall RIMDeviceNotify(char *NotificationStructure, _QWORD *Context)
{
  __int64 v2; // rbx
  int v5; // eax

  v2 = Context[42];
  RIMLockExclusive(v2 + 96);
  if ( !*(_BYTE *)(v2 + 73)
    && ((unsigned int)DeviceTypeToRimInputType(*((unsigned __int8 *)Context + 48)) & *(_DWORD *)(v2 + 76)) != 0 )
  {
    RIMGetPnpActionBitsFromGuid(v2, Context, NotificationStructure + 4);
    v5 = *((_DWORD *)Context + 44);
    if ( (v5 & 2) != 0 || (v5 & 4) != 0 || (v5 & 8) != 0 )
      RIMSignalOnPnpNotificationAndWait(v2, Context);
  }
  RIMUnlockExclusive(v2 + 96);
  return 0LL;
}
