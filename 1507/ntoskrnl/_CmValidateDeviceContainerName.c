/*
 * XREFs of _CmValidateDeviceContainerName @ 0x140538284
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x1405379D4 (_PnpDispatchDeviceContainer.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140537BF4 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1405381D8 (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmContainerListGenericObjectCallback @ 0x1405A97B0 (_CmContainerListGenericObjectCallback.c)
 * Callees:
 *     wcscmp @ 0x140173BB8 (wcscmp.c)
 *     _PnpIsValidGuidString @ 0x14043FF5C (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateDeviceContainerName(__int64 a1, const WCHAR *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !PnpIsValidGuidString(a2) || !wcscmp(L"{00000000-0000-0000-0000-000000000000}", a2) )
    return (unsigned int)-1073741773;
  return v3;
}
