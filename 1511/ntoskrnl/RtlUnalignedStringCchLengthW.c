/*
 * XREFs of RtlUnalignedStringCchLengthW @ 0x14008FA28
 * Callers:
 *     _CmValidateDeviceName @ 0x14043BC80 (_CmValidateDeviceName.c)
 *     _PnpOpenPropertiesKey @ 0x14043F144 (_PnpOpenPropertiesKey.c)
 *     _PnpGetGenericStoreProperty @ 0x14043F704 (_PnpGetGenericStoreProperty.c)
 *     _RegRtlCreateTreeTransacted @ 0x140444D58 (_RegRtlCreateTreeTransacted.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14045AE44 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _PnpSetPropertyWorker @ 0x14045CE24 (_PnpSetPropertyWorker.c)
 *     _PnpParseIndirectResourceString @ 0x140492DD4 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1404A695C (_PnpParseIndirectInfString.c)
 *     _PnpDeletePropertyWorker @ 0x1404EBCF8 (_PnpDeletePropertyWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1405139AC (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14051496C (_PnpGetGenericStorePropertyKeys.c)
 *     _RegRtlDeletePathInternal @ 0x14069A424 (_RegRtlDeletePathInternal.c)
 *     DrvDbValidateDeviceIdName @ 0x14069C8C0 (DrvDbValidateDeviceIdName.c)
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
