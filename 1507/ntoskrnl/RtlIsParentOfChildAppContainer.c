/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x140408410
 * Callers:
 *     SepIsParentOfChildAppContainer @ 0x1404082B8 (SepIsParentOfChildAppContainer.c)
 *     SepCheckCreateLowBox @ 0x14041063C (SepCheckCreateLowBox.c)
 *     SepSetTokenCapabilities @ 0x140436FA8 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x1404370F0 (SepSetTokenPackage.c)
 *     SeTokenCanImpersonate @ 0x1404798B0 (SeTokenCanImpersonate.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140044DFC (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x1404129AC (RtlGetAppContainerSidType.c)
 */

char __fastcall RtlIsParentOfChildAppContainer(PSID Sid, PSID a2)
{
  int v4; // [rsp+40h] [rbp+18h]

  if ( (int)RtlGetAppContainerSidType(Sid) >= 0 && v4 == 2 )
    RtlGetAppContainerSidType(a2);
  return 0;
}
