/*
 * XREFs of RtlGetAppContainerSidType @ 0x1800622C0
 * Callers:
 *     RtlGetAppContainerParent @ 0x180003C10 (RtlGetAppContainerParent.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18000C5D0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlIsParentOfChildAppContainer @ 0x1800652C0 (RtlIsParentOfChildAppContainer.c)
 *     RtlDefaultNpAcl @ 0x1800CC680 (RtlDefaultNpAcl.c)
 * Callees:
 *     RtlCompareMemory @ 0x1800A9270 (RtlCompareMemory.c)
 */

NTSTATUS __cdecl RtlGetAppContainerSidType(PSID AppContainerSid, PAPPCONTAINER_SID_TYPE AppContainerSidType)
{
  char v4; // al

  if ( *((_BYTE *)AppContainerSid + 1) >= 2u
    && *(_BYTE *)AppContainerSid == 1
    && RtlCompareMemory((char *)AppContainerSid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
    && *((_DWORD *)AppContainerSid + 2) == 2 )
  {
    v4 = *((_BYTE *)AppContainerSid + 1);
    if ( v4 == 8 )
    {
      *AppContainerSidType = ParentAppContainerSidType;
      return 0;
    }
    if ( v4 == 12 )
    {
      *AppContainerSidType = ChildAppContainerSidType;
      return 0;
    }
    *AppContainerSidType = InvalidAppContainerSidType;
  }
  else
  {
    *AppContainerSidType = NotAppContainerSidType;
  }
  return -1073700352;
}
