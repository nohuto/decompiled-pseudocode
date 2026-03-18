/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x1403E1C94
 * Callers:
 *     SepSetTokenPackage @ 0x1404769B4 (SepSetTokenPackage.c)
 *     SepSetTokenCapabilities @ 0x140478A4C (SepSetTokenCapabilities.c)
 *     SepCheckCreateLowBox @ 0x14047C9E0 (SepCheckCreateLowBox.c)
 *     SepIsParentOfChildAppContainer @ 0x1404E71CC (SepIsParentOfChildAppContainer.c)
 *     SeTokenCanImpersonate @ 0x14050F920 (SeTokenCanImpersonate.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000D6F8 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x14047BB60 (RtlGetAppContainerSidType.c)
 */

char __fastcall RtlIsParentOfChildAppContainer(PSID Sid, PSID a2)
{
  int v4; // [rsp+40h] [rbp+18h]

  if ( (int)RtlGetAppContainerSidType(Sid) >= 0 && v4 == 2 )
    RtlGetAppContainerSidType(a2);
  return 0;
}
