/*
 * XREFs of HUBDSM_SettingDeviceInterfaceInSettingInterfaceOnFailureForCompat @ 0x1C001ACF0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_SetDeviceInterfaceUsingControlTransfer @ 0x1C00213AC (HUBDTX_SetDeviceInterfaceUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_SettingDeviceInterfaceInSettingInterfaceOnFailureForCompat(__int64 a1)
{
  HUBDTX_SetDeviceInterfaceUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
