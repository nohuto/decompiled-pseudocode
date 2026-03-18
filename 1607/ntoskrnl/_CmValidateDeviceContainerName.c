/*
 * XREFs of _CmValidateDeviceContainerName @ 0x140486A2C
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x140486274 (_PnpDispatchDeviceContainer.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140486454 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x140486980 (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmContainerListGenericObjectCallback @ 0x140563104 (_CmContainerListGenericObjectCallback.c)
 * Callees:
 *     wcscmp @ 0x14014EF64 (wcscmp.c)
 *     _PnpIsValidGuidString @ 0x1404F7EB8 (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateDeviceContainerName(__int64 a1, const WCHAR *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !(unsigned __int8)PnpIsValidGuidString(a2) || !wcscmp(L"{00000000-0000-0000-0000-000000000000}", a2) )
    return (unsigned int)-1073741773;
  return v3;
}
