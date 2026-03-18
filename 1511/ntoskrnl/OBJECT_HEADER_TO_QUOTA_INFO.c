/*
 * XREFs of OBJECT_HEADER_TO_QUOTA_INFO @ 0x14009BAAC
 * Callers:
 *     NtQueryObject @ 0x14041F7E0 (NtQueryObject.c)
 *     ObAdjustSecurityQuota @ 0x14046B604 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x14046B680 (ObpChargeQuotaForObject.c)
 *     ObGetObjectInformation @ 0x14062E584 (ObGetObjectInformation.c)
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
