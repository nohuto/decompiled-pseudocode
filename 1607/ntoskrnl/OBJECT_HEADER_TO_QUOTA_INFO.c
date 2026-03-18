/*
 * XREFs of OBJECT_HEADER_TO_QUOTA_INFO @ 0x14008920C
 * Callers:
 *     NtQueryObject @ 0x1404A4B90 (NtQueryObject.c)
 *     ObAdjustSecurityQuota @ 0x1404A53E0 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1404A545C (ObpChargeQuotaForObject.c)
 *     ObGetObjectInformation @ 0x1406665CC (ObGetObjectInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_QUOTA_INFO(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 8) != 0 )
    return a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0xF];
  else
    return 0LL;
}
