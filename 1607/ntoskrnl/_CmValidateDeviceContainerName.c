/*
 * XREFs of _CmValidateDeviceContainerName @ 0x14051383C
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x140513084 (_PnpDispatchDeviceContainer.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140513264 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x140513790 (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmContainerListGenericObjectCallback @ 0x140563644 (_CmContainerListGenericObjectCallback.c)
 * Callees:
 *     wcscmp @ 0x14014F524 (wcscmp.c)
 *     _PnpIsValidGuidString @ 0x1404DAE44 (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateDeviceContainerName(__int64 a1, const WCHAR *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !PnpIsValidGuidString(a2) || !wcscmp(L"{00000000-0000-0000-0000-000000000000}", a2) )
    return (unsigned int)-1073741773;
  return v3;
}
