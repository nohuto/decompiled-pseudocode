/*
 * XREFs of ApiSetSetUserPTPEnabledPreference @ 0x1C00CE8D0
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C000F32C (RIMAllocateHidDesc.c)
 *     RIMCreateDev @ 0x1C0011060 (RIMCreateDev.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00D1390 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     IsSetUserPTPEnabledPreferenceSupported_0 @ 0x1C0002E20 (IsSetUserPTPEnabledPreferenceSupported_0.c)
 *     SetUserPTPEnabledPreference_0 @ 0x1C0002E28 (SetUserPTPEnabledPreference_0.c)
 */

__int64 ApiSetSetUserPTPEnabledPreference()
{
  __int64 result; // rax

  result = IsSetUserPTPEnabledPreferenceSupported_0();
  if ( (int)result >= 0 )
    return SetUserPTPEnabledPreference_0();
  return result;
}
