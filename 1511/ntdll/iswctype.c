/*
 * XREFs of iswctype @ 0x180098E80
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x180069550 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x1800696C0 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x180069F50 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x18006A090 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x180098DB0 (iswalnum.c)
 *     iswalpha @ 0x180098DC0 (iswalpha.c)
 *     iswdigit @ 0x180098DF0 (iswdigit.c)
 *     iswgraph @ 0x180098E00 (iswgraph.c)
 *     iswlower @ 0x180098E10 (iswlower.c)
 *     iswprint @ 0x180098E20 (iswprint.c)
 *     iswspace @ 0x180098E30 (iswspace.c)
 *     iswxdigit @ 0x180098E40 (iswxdigit.c)
 *     towlower @ 0x18009B0A0 (towlower.c)
 *     _whiteout @ 0x1800A3C78 (_whiteout.c)
 *     _winput_s @ 0x1800A3CD0 (_winput_s.c)
 *     RtlUnicodeStringToLcid @ 0x1800DCE2C (RtlUnicodeStringToLcid.c)
 *     RtlEthernetStringToAddressW @ 0x1800E5180 (RtlEthernetStringToAddressW.c)
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
