/*
 * XREFs of Feature_C2DCancelOnNonModifierUp__private_IsEnabledDeviceUsageNoInline @ 0x1402A7CD8
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401E3D68 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     Feature_C2DCancelOnNonModifierUp__private_IsEnabledFallback @ 0x1402A7D14 (Feature_C2DCancelOnNonModifierUp__private_IsEnabledFallback.c)
 */

__int64 Feature_C2DCancelOnNonModifierUp__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_C2DCancelOnNonModifierUp__private_featureState & 0x10) != 0 )
    return Feature_C2DCancelOnNonModifierUp__private_featureState & 1;
  else
    return Feature_C2DCancelOnNonModifierUp__private_IsEnabledFallback(
             (unsigned int)Feature_C2DCancelOnNonModifierUp__private_featureState,
             3LL);
}
