/*
 * XREFs of wcscmp @ 0x140145B88
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14045AE44 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDqDispatch @ 0x14045DCD4 (PiDqDispatch.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14049B9C8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     _CmValidateDeviceContainerName @ 0x1404DD5D4 (_CmValidateDeviceContainerName.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1404ECDAC (PiDcUpdateDeviceContainerMembership.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1404EEB20 (_CmGetDeviceContainerIdFromBase.c)
 *     EtwpStartAutoLogger @ 0x14050889C (EtwpStartAutoLogger.c)
 *     PiDcContainerRequiresConfiguration @ 0x14050E088 (PiDcContainerRequiresConfiguration.c)
 *     HdlspAddLogEntry @ 0x1406D6ADC (HdlspAddLogEntry.c)
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
