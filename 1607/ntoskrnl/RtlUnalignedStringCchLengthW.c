/*
 * XREFs of RtlUnalignedStringCchLengthW @ 0x1400C38D0
 * Callers:
 *     _PnpSetPropertyWorker @ 0x140486DF8 (_PnpSetPropertyWorker.c)
 *     _PnpParseIndirectResourceString @ 0x1404B8CA8 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1404C0640 (_PnpParseIndirectInfString.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404CE780 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _PnpDeletePropertyWorker @ 0x1404F0C10 (_PnpDeletePropertyWorker.c)
 *     _RegRtlCreateTreeTransacted @ 0x1404FA878 (_RegRtlCreateTreeTransacted.c)
 *     _PnpGetGenericStoreProperty @ 0x1404FAA14 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenPropertiesKey @ 0x1404FAC30 (_PnpOpenPropertiesKey.c)
 *     _CmValidateDeviceName @ 0x1404FD9C0 (_CmValidateDeviceName.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406DC208 (_PnpGetGenericStorePropertyKeys.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1406DE9C4 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _RegRtlDeletePathInternal @ 0x1406E06D0 (_RegRtlDeletePathInternal.c)
 *     DrvDbValidateDeviceIdName @ 0x1406E34A8 (DrvDbValidateDeviceIdName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnalignedStringCchLengthW(STRSAFE_PCUNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t v3; // r9
  NTSTATUS result; // eax

  if ( psz )
  {
    v3 = cchMax;
    do
    {
      if ( !*psz )
        break;
      ++psz;
      --v3;
    }
    while ( v3 );
    result = 0;
    if ( !v3 )
      result = -1073741811;
    if ( pcchLength )
    {
      if ( result < 0 )
        *pcchLength = 0LL;
      else
        *pcchLength = cchMax - v3;
    }
  }
  else
  {
    result = -1073741811;
  }
  if ( result < 0 )
  {
    if ( pcchLength )
      *pcchLength = 0LL;
  }
  return result;
}
