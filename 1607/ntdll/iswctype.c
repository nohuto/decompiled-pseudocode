/*
 * XREFs of iswctype @ 0x18009A240
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x180055800 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x180055A10 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x180056290 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x1800563E0 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x18009A170 (iswalnum.c)
 *     iswalpha @ 0x18009A180 (iswalpha.c)
 *     iswdigit @ 0x18009A1B0 (iswdigit.c)
 *     iswgraph @ 0x18009A1C0 (iswgraph.c)
 *     iswlower @ 0x18009A1D0 (iswlower.c)
 *     iswprint @ 0x18009A1E0 (iswprint.c)
 *     iswspace @ 0x18009A1F0 (iswspace.c)
 *     iswxdigit @ 0x18009A200 (iswxdigit.c)
 *     towlower @ 0x18009C430 (towlower.c)
 *     _whiteout @ 0x1800A503C (_whiteout.c)
 *     _winput_s @ 0x1800A5094 (_winput_s.c)
 *     RtlUnicodeStringToLcid @ 0x1800E6118 (RtlUnicodeStringToLcid.c)
 *     RtlEthernetStringToAddressW @ 0x1800EE3A0 (RtlEthernetStringToAddressW.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype(wint_t C, wctype_t Type)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & pwctype[C];
}
