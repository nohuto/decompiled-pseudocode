/*
 * XREFs of iswctype @ 0x14014FB60
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x1400A831C (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x1400A83A8 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x1400A9388 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x1400A93F0 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x14014DD74 (iswalnum.c)
 *     iswdigit @ 0x14014DD80 (iswdigit.c)
 *     iswspace @ 0x14014DD8C (iswspace.c)
 *     towlower @ 0x14014EE4C (towlower.c)
 *     _whiteout @ 0x140155A2C (_whiteout.c)
 *     _winput_s @ 0x140155A7C (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x140214DB4 (RtlEthernetStringToAddressW.c)
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
