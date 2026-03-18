/*
 * XREFs of RIMDeviceNotify @ 0x1C00DA6C0
 * Callers:
 *     <none>
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C00101D4 (RimDeviceTypeToRimInputType.c)
 *     DeviceTypeToRimInputType @ 0x1C0010A30 (DeviceTypeToRimInputType.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x1C00DA778 (RIMGetPnpActionBitsFromGuid.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C00DA8B8 (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C00DADB8 (WPP_RECORDER_SF_Sd.c)
 */

__int64 __fastcall RIMDeviceNotify(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  int v8; // eax

  v2 = *(_QWORD *)(a2 + 352);
  RIMLockExclusive(v2 + 96);
  RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
  WPP_RECORDER_SF_Sd(WPP_GLOBAL_Control->DeviceExtension, v5, v6, v7);
  if ( !*(_BYTE *)(v2 + 73)
    && ((unsigned int)DeviceTypeToRimInputType(*(unsigned __int8 *)(a2 + 48)) & *(_DWORD *)(v2 + 76)) != 0 )
  {
    RIMGetPnpActionBitsFromGuid(v2, a2, a1 + 4);
    v8 = *(_DWORD *)(a2 + 184);
    if ( (v8 & 2) != 0 || (v8 & 4) != 0 || (v8 & 8) != 0 )
      RIMSignalOnPnpNotificationAndWait(v2, a2);
  }
  RIMUnlockExclusive(v2 + 96);
  return 0LL;
}
