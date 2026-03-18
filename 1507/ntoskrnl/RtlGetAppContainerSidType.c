/*
 * XREFs of RtlGetAppContainerSidType @ 0x1404129AC
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1402453EC (RtlGetAppContainerNamedObjectPath.c)
 *     RtlIsParentOfChildAppContainer @ 0x140408410 (RtlIsParentOfChildAppContainer.c)
 *     NtCreateLowBoxToken @ 0x140412A24 (NtCreateLowBoxToken.c)
 *     RtlGetAppContainerParent @ 0x1406C9AC4 (RtlGetAppContainerParent.c)
 *     SepValidateReferencedLowBoxHandles @ 0x1406D8790 (SepValidateReferencedLowBoxHandles.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x140044DF4 (RtlSubAuthorityCountSid.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlGetAppContainerSidType(char *Sid, _DWORD *a2)
{
  UCHAR v4; // cl

  if ( (unsigned __int8)Sid[1] >= 2u
    && *Sid == 1
    && RtlCompareMemory(Sid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
    && *((_DWORD *)Sid + 2) == 2 )
  {
    v4 = *RtlSubAuthorityCountSid(Sid);
    if ( v4 == 8 )
    {
      *a2 = 2;
      return 0LL;
    }
    if ( v4 == 12 )
    {
      *a2 = 1;
      return 0LL;
    }
    *a2 = 3;
  }
  else
  {
    *a2 = 0;
  }
  return 3221266944LL;
}
