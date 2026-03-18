/*
 * XREFs of ApiSetSetUserPTPEnabledPreference @ 0x1C00DE8A0
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C000B524 (RIMAllocateHidDesc.c)
 *     RIMCreateDev @ 0x1C000E2BC (RIMCreateDev.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C0010ED8 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     IsSetUserPTPEnabledPreferenceSupported_0 @ 0x1C0002E00 (IsSetUserPTPEnabledPreferenceSupported_0.c)
 *     SetUserPTPEnabledPreference_0 @ 0x1C0002E08 (SetUserPTPEnabledPreference_0.c)
 */

__int64 ApiSetSetUserPTPEnabledPreference()
{
  __int64 result; // rax

  result = IsSetUserPTPEnabledPreferenceSupported_0();
  if ( (int)result >= 0 )
    return SetUserPTPEnabledPreference_0();
  return result;
}
