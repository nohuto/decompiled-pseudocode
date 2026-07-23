/*
 * XREFs of wcscmp @ 0x14014F524
 * Callers:
 *     PiDqDispatch @ 0x14048B6C4 (PiDqDispatch.c)
 *     EtwStartAutoLogger @ 0x1404C3638 (EtwStartAutoLogger.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14050B84C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14050FABC (PiDcUpdateDeviceContainerMembership.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140513264 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmValidateDeviceContainerName @ 0x14051383C (_CmValidateDeviceContainerName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14054A1B4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PiDcContainerRequiresConfiguration @ 0x140630830 (PiDcContainerRequiresConfiguration.c)
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
