/*
 * XREFs of iswctype @ 0x1401747B4
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x140123900 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x14012398C (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x1401247A8 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x1401248CC (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x1401729CC (iswalnum.c)
 *     iswdigit @ 0x1401729D8 (iswdigit.c)
 *     iswspace @ 0x1401729E4 (iswspace.c)
 *     towlower @ 0x140173AA0 (towlower.c)
 *     _whiteout @ 0x14017A720 (_whiteout.c)
 *     _winput_s @ 0x14017A770 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x14024981C (RtlEthernetStringToAddressW.c)
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
