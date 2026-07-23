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

BOOLEAN __cdecl RtlIsParentOfChildAppContainer(PSID ParentAppContainerSid, PSID ChildAppContainerSid)
{
  ULONG v4; // edi
  PULONG v5; // rbx
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+40h] [rbp+18h] BYREF

  if ( RtlGetAppContainerSidType(ParentAppContainerSid, &AppContainerSidType) >= 0
    && AppContainerSidType == ParentAppContainerSidType
    && RtlGetAppContainerSidType(ChildAppContainerSid, &AppContainerSidType) >= 0
    && AppContainerSidType == ChildAppContainerSidType )
  {
    v4 = 1;
    while ( 1 )
    {
      v5 = RtlSubAuthoritySid(ParentAppContainerSid, v4);
      if ( *v5 != *RtlSubAuthoritySid(ChildAppContainerSid, v4) )
        break;
      if ( ++v4 >= 8 )
        return 1;
    }
  }
  return 0;
}
