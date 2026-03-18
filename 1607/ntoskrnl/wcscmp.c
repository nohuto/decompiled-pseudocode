/*
 * XREFs of wcscmp @ 0x14014EF64
 * Callers:
 *     PiDcUpdateDeviceContainerMembership @ 0x140485DB8 (PiDcUpdateDeviceContainerMembership.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140486454 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmValidateDeviceContainerName @ 0x140486A2C (_CmValidateDeviceContainerName.c)
 *     PiDqDispatch @ 0x14048B160 (PiDqDispatch.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404CE780 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     EtwStartAutoLogger @ 0x1404E0034 (EtwStartAutoLogger.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140549C74 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PiDcContainerRequiresConfiguration @ 0x14063077C (PiDcContainerRequiresConfiguration.c)
 *     HdlspAddLogEntry @ 0x140722ADC (HdlspAddLogEntry.c)
 * Callees:
 *     <none>
 */

int __cdecl wcscmp(const wchar_t *Str1, const wchar_t *Str2)
{
  int v2; // r8d
  int result; // eax
  signed __int64 v4; // rcx

  v2 = *Str2;
  result = *Str1 - v2;
  if ( !result )
  {
    v4 = (char *)Str1 - (char *)Str2;
    do
    {
      if ( !(_WORD)v2 )
        break;
      v2 = *++Str2;
      result = *(const wchar_t *)((char *)Str2 + v4) - v2;
    }
    while ( !result );
  }
  if ( result < 0 )
    return -1;
  if ( result > 0 )
    return 1;
  return result;
}
