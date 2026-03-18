/*
 * XREFs of ApiSetSetUserPTPEnabledPreference @ 0x1C00CD594
 * Callers:
 *     RIMCreateDev @ 0x1C0076274 (RIMCreateDev.c)
 *     RIMAllocateHidDesc @ 0x1C0077398 (RIMAllocateHidDesc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00CFFB4 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     IsSetUserPTPEnabledPreferenceSupported_0 @ 0x1C0002DF0 (IsSetUserPTPEnabledPreferenceSupported_0.c)
 *     SetUserPTPEnabledPreference_0 @ 0x1C0002DF8 (SetUserPTPEnabledPreference_0.c)
 */

__int64 ApiSetSetUserPTPEnabledPreference()
{
  __int64 result; // rax

  result = IsSetUserPTPEnabledPreferenceSupported_0();
  if ( (int)result >= 0 )
    return SetUserPTPEnabledPreference_0();
  return result;
}
