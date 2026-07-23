/*
 * XREFs of sub_140575DE4 @ 0x140575DE4
 * Callers:
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x14051CB5C (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExInitLicenseData @ 0x1407B505C (ExInitLicenseData.c)
 * Callees:
 *     <none>
 */

__int64 sub_140575DE4()
{
  unsigned int v0; // ecx
  unsigned int v1; // edx
  unsigned int v2; // r10d
  unsigned int v3; // r9d

  v0 = 0;
  if ( off_140747028 )
  {
    if ( dword_14076013C != 3 )
      return (unsigned int)-1073741762;
    if ( (unsigned int)dword_140760124 < 0x18 )
      return (unsigned int)-1073741762;
    v1 = *(_DWORD *)off_140747028;
    if ( (unsigned int)dword_140760124 < *(_DWORD *)off_140747028 )
      return (unsigned int)-1073741762;
    if ( v1 < 0x18 )
      return (unsigned int)-1073741762;
    v2 = *((_DWORD *)off_140747028 + 1);
    if ( dword_140760124 < v2 )
      return (unsigned int)-1073741762;
    if ( v1 < v2 )
      return (unsigned int)-1073741762;
    v3 = *((_DWORD *)off_140747028 + 2);
    if ( dword_140760124 < v3 || v1 < v3 || v3 + v2 > v1 )
      return (unsigned int)-1073741762;
  }
  return v0;
}
