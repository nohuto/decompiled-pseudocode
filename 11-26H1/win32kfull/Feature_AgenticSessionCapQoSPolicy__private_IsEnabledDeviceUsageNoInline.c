/*
 * XREFs of Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14029CFBC
 * Callers:
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x1402A83AC (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 * Callees:
 *     Feature_AgenticSessionCapQoSPolicy__private_IsEnabledFallback @ 0x14029CFF8 (Feature_AgenticSessionCapQoSPolicy__private_IsEnabledFallback.c)
 */

__int64 Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AgenticSessionCapQoSPolicy__private_featureState & 0x10) != 0 )
    return Feature_AgenticSessionCapQoSPolicy__private_featureState & 1;
  else
    return Feature_AgenticSessionCapQoSPolicy__private_IsEnabledFallback(
             (unsigned int)Feature_AgenticSessionCapQoSPolicy__private_featureState,
             3LL);
}
