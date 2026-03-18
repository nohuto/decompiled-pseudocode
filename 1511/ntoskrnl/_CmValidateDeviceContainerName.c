/*
 * XREFs of _CmValidateDeviceContainerName @ 0x1404DD5D4
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x1404972A8 (_PnpDispatchDeviceContainer.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1404DD4B4 (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1404EEB20 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmContainerListGenericObjectCallback @ 0x1405325D0 (_CmContainerListGenericObjectCallback.c)
 * Callees:
 *     wcscmp @ 0x140145B88 (wcscmp.c)
 *     _PnpIsValidGuidString @ 0x1404DE530 (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateDeviceContainerName(__int64 a1, const WCHAR *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !(unsigned __int8)PnpIsValidGuidString(a2) || !wcscmp(L"{00000000-0000-0000-0000-000000000000}", a2) )
    return (unsigned int)-1073741773;
  return v3;
}
