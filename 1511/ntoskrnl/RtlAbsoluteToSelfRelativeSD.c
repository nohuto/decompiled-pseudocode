/*
 * XREFs of RtlAbsoluteToSelfRelativeSD @ 0x1404B9670
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140001854 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x14020083C (SepCheckAndCopySelfRelativeSD.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405184F8 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x14053F248 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405471F8 (_PnpGetEnumSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x140675F40 (CMFCreateSecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14068530C (LocalConvertStringSDToSD_Rev1.c)
 *     DrvDbGetSecurityDescriptor @ 0x14069CA70 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140769C5C (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140769FCC (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlAbsoluteToSelfRelativeSD(
        PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
        PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
        PULONG BufferLength)
{
  if ( *((__int16 *)AbsoluteSecurityDescriptor + 1) >= 0 )
    return RtlMakeSelfRelativeSD(AbsoluteSecurityDescriptor, SelfRelativeSecurityDescriptor, BufferLength);
  else
    return -1073741593;
}
