/*
 * XREFs of FreeHidDesc @ 0x1C01D501C
 * Callers:
 *     ?AllocateHidConfigDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFORMATION@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@@Z @ 0x1C01D3C48 (-AllocateHidConfigDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTIO.c)
 *     ?AllocateHidDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFORMATION@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@@Z @ 0x1C01D3DC4 (-AllocateHidDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFO.c)
 *     HidCreateDeviceInfo @ 0x1C01D5214 (HidCreateDeviceInfo.c)
 *     FreeDeviceInfo @ 0x1C01DA0F0 (FreeDeviceInfo.c)
 *     CreateDeviceInfo @ 0x1C01DEF4C (CreateDeviceInfo.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01DF17C (CreatePseudoDigitizerDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeHidDesc(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = a1[3];
  if ( v2 )
    Win32FreePool(v2);
  v3 = a1[2];
  if ( v3 )
    Win32FreePool(v3);
  v4 = a1[4];
  if ( v4 )
    Win32FreePool(v4);
  return Win32FreePool(a1);
}
