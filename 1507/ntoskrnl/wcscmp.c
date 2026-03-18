/*
 * XREFs of wcscmp @ 0x140173BB8
 * Callers:
 *     PiDqDispatch @ 0x140441804 (PiDqDispatch.c)
 *     EtwpStartAutoLogger @ 0x1404A887C (EtwpStartAutoLogger.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404DC05C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14052E744 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140537510 (PiDcUpdateDeviceContainerMembership.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140537BF4 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmValidateDeviceContainerName @ 0x140538284 (_CmValidateDeviceContainerName.c)
 *     PiDcContainerRequiresConfiguration @ 0x140584570 (PiDcContainerRequiresConfiguration.c)
 *     HdlspAddLogEntry @ 0x140759ADC (HdlspAddLogEntry.c)
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
