/*
 * XREFs of sub_14052ECEC @ 0x14052ECEC
 * Callers:
 *     sub_14048A234 @ 0x14048A234 (sub_14048A234.c)
 *     sub_1407621B8 @ 0x1407621B8 (sub_1407621B8.c)
 * Callees:
 *     <none>
 */

__int64 sub_14052ECEC()
{
  unsigned int v0; // ecx
  unsigned int v1; // edx
  unsigned int v2; // r10d
  unsigned int v3; // r9d

  v0 = 0;
  if ( off_1406FB020 )
  {
    if ( dword_140717140 != 3 )
      return (unsigned int)-1073741762;
    if ( (unsigned int)dword_140717124 < 0x18 )
      return (unsigned int)-1073741762;
    v1 = *(_DWORD *)off_1406FB020;
    if ( (unsigned int)dword_140717124 < *(_DWORD *)off_1406FB020 )
      return (unsigned int)-1073741762;
    if ( v1 < 0x18 )
      return (unsigned int)-1073741762;
    v2 = *((_DWORD *)off_1406FB020 + 1);
    if ( dword_140717124 < v2 )
      return (unsigned int)-1073741762;
    if ( v1 < v2 )
      return (unsigned int)-1073741762;
    v3 = *((_DWORD *)off_1406FB020 + 2);
    if ( dword_140717124 < v3 || v1 < v3 || v3 + v2 > v1 )
      return (unsigned int)-1073741762;
  }
  return v0;
}
