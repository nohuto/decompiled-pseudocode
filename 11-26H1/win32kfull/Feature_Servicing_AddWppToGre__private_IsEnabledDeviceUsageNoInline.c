/*
 * XREFs of Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline @ 0x1400FAB60
 * Callers:
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVDCOBJ@@KPEAGK1@Z @ 0x1400FA384 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVDCOBJ@@KPEAGK1@Z.c)
 * Callees:
 *     Feature_Servicing_AddWppToGre__private_IsEnabledFallback @ 0x1403282C8 (Feature_Servicing_AddWppToGre__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_AddWppToGre__private_featureState & 0x10) != 0 )
    return Feature_Servicing_AddWppToGre__private_featureState & 1;
  else
    return Feature_Servicing_AddWppToGre__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_AddWppToGre__private_featureState,
             3LL);
}
