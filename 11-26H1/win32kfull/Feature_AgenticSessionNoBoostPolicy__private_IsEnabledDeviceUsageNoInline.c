/*
 * XREFs of Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14029D014
 * Callers:
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x1402A83AC (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 * Callees:
 *     Feature_AgenticSessionNoBoostPolicy__private_IsEnabledFallback @ 0x14029D050 (Feature_AgenticSessionNoBoostPolicy__private_IsEnabledFallback.c)
 */

__int64 Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AgenticSessionNoBoostPolicy__private_featureState & 0x10) != 0 )
    return Feature_AgenticSessionNoBoostPolicy__private_featureState & 1;
  else
    return Feature_AgenticSessionNoBoostPolicy__private_IsEnabledFallback(
             (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_featureState,
             3LL);
}
