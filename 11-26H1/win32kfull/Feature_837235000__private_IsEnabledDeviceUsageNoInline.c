/*
 * XREFs of Feature_837235000__private_IsEnabledDeviceUsageNoInline @ 0x14032C688
 * Callers:
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1400D7ECC (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 *     ?bInEngCall@UMPDOBJ@@QEAA_NXZ @ 0x14034CFA4 (-bInEngCall@UMPDOBJ@@QEAA_NXZ.c)
 * Callees:
 *     Feature_837235000__private_IsEnabledFallback @ 0x14032C6C4 (Feature_837235000__private_IsEnabledFallback.c)
 */

__int64 Feature_837235000__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_837235000__private_featureState & 0x10) != 0 )
    return Feature_837235000__private_featureState & 1;
  else
    return Feature_837235000__private_IsEnabledFallback((unsigned int)Feature_837235000__private_featureState, 3LL);
}
