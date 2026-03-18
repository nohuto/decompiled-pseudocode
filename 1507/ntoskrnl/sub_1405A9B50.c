/*
 * XREFs of sub_1405A9B50 @ 0x1405A9B50
 * Callers:
 *     sub_14051DAF8 @ 0x14051DAF8 (sub_14051DAF8.c)
 *     sub_1407DA410 @ 0x1407DA410 (sub_1407DA410.c)
 * Callees:
 *     <none>
 */

__int64 sub_1405A9B50()
{
  unsigned int v0; // ecx
  unsigned int v1; // edx
  unsigned int v2; // r10d
  unsigned int v3; // r9d

  v0 = 0;
  if ( off_14077E020 )
  {
    if ( dword_14080B18C != 3 )
      return (unsigned int)-1073741762;
    if ( (unsigned int)dword_14080B174 < 0x18 )
      return (unsigned int)-1073741762;
    v1 = *(_DWORD *)off_14077E020;
    if ( (unsigned int)dword_14080B174 < *(_DWORD *)off_14077E020 )
      return (unsigned int)-1073741762;
    if ( v1 < 0x18 )
      return (unsigned int)-1073741762;
    v2 = *((_DWORD *)off_14077E020 + 1);
    if ( dword_14080B174 < v2 )
      return (unsigned int)-1073741762;
    if ( v1 < v2 )
      return (unsigned int)-1073741762;
    v3 = *((_DWORD *)off_14077E020 + 2);
    if ( dword_14080B174 < v3 || v1 < v3 || v3 + v2 > v1 )
      return (unsigned int)-1073741762;
  }
  return v0;
}
