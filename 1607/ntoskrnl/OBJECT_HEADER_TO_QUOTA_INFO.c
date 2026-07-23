/*
 * XREFs of OBJECT_HEADER_TO_QUOTA_INFO @ 0x14010D3FC
 * Callers:
 *     NtQueryObject @ 0x14051CF90 (NtQueryObject.c)
 *     ObAdjustSecurityQuota @ 0x14051D7E0 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x14051D85C (ObpChargeQuotaForObject.c)
 *     ObGetObjectInformation @ 0x1406666B0 (ObGetObjectInformation.c)
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
