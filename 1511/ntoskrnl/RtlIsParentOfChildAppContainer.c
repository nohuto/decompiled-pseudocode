/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x1403B4660
 * Callers:
 *     SepIsParentOfChildAppContainer @ 0x1403B4520 (SepIsParentOfChildAppContainer.c)
 *     SepCheckCreateLowBox @ 0x1403BDBE4 (SepCheckCreateLowBox.c)
 *     SeTokenCanImpersonate @ 0x140426A30 (SeTokenCanImpersonate.c)
 *     SepSetTokenCapabilities @ 0x140478C80 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x1404792B0 (SepSetTokenPackage.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14003D36C (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x1403C09F4 (RtlGetAppContainerSidType.c)
 */

char __fastcall RtlIsParentOfChildAppContainer(PSID Sid, PSID a2)
{
  int v4; // [rsp+40h] [rbp+18h]

  if ( (int)RtlGetAppContainerSidType(Sid) >= 0 && v4 == 2 )
    RtlGetAppContainerSidType(a2);
  return 0;
}
