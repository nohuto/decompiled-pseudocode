/*
 * XREFs of RtlUnalignedStringCchLengthW @ 0x14001988C
 * Callers:
 *     _CmValidateDeviceName @ 0x14043D110 (_CmValidateDeviceName.c)
 *     _PnpOpenPropertiesKey @ 0x14043E2E0 (_PnpOpenPropertiesKey.c)
 *     _PnpGetGenericStoreProperty @ 0x14043E4F4 (_PnpGetGenericStoreProperty.c)
 *     _PnpSetPropertyWorker @ 0x1404DAFEC (_PnpSetPropertyWorker.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404DC05C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _RegRtlCreateTreeTransacted @ 0x1404DE5F8 (_RegRtlCreateTreeTransacted.c)
 *     _PnpParseIndirectResourceString @ 0x140522934 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x14053B874 (_PnpParseIndirectInfString.c)
 *     _PnpDeletePropertyWorker @ 0x140563ED4 (_PnpDeletePropertyWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14058B1A0 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140716CBC (_PnpGetGenericStorePropertyKeys.c)
 *     _RegRtlDeletePathInternal @ 0x14071A3E4 (_RegRtlDeletePathInternal.c)
 *     DrvDbValidateDeviceIdName @ 0x14071CF1C (DrvDbValidateDeviceIdName.c)
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
