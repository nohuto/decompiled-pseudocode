/*
 * XREFs of Feature_Servicing_MSRC101271__private_IsEnabledDeviceUsageNoInline @ 0x140349FF0
 * Callers:
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1400CFC88 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 * Callees:
 *     Feature_Servicing_MSRC101271__private_IsEnabledFallback @ 0x14034A02C (Feature_Servicing_MSRC101271__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_MSRC101271__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_MSRC101271__private_featureState & 0x10) != 0 )
    return Feature_Servicing_MSRC101271__private_featureState & 1;
  else
    return Feature_Servicing_MSRC101271__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_MSRC101271__private_featureState,
             3LL);
}
