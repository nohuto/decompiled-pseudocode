/*
 * XREFs of RtlGetAppContainerSidType @ 0x1403C09F4
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1401F66E8 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlIsParentOfChildAppContainer @ 0x1403B4660 (RtlIsParentOfChildAppContainer.c)
 *     SepValidateReferencedLowBoxHandles @ 0x1403BF0B8 (SepValidateReferencedLowBoxHandles.c)
 *     NtCreateLowBoxToken @ 0x1403C0A6C (NtCreateLowBoxToken.c)
 *     RtlGetAppContainerParent @ 0x140646A50 (RtlGetAppContainerParent.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14003D378 (RtlSubAuthorityCountSid.c)
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
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
