/*
 * XREFs of RtlGetAppContainerSidType @ 0x18004AA20
 * Callers:
 *     RtlGetAppContainerParent @ 0x1800030B0 (RtlGetAppContainerParent.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18003EE10 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlIsParentOfChildAppContainer @ 0x180047DC0 (RtlIsParentOfChildAppContainer.c)
 *     RtlDefaultNpAcl @ 0x180050BE0 (RtlDefaultNpAcl.c)
 * Callees:
 *     RtlCompareMemory @ 0x180095EE0 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlGetAppContainerSidType(__int64 a1, _DWORD *a2)
{
  char v4; // al

  if ( *(_BYTE *)(a1 + 1) >= 2u
    && *(_BYTE *)a1 == 1
    && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
    && *(_DWORD *)(a1 + 8) == 2 )
  {
    v4 = *(_BYTE *)(a1 + 1);
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
