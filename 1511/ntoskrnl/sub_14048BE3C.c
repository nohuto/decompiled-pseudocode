/*
 * XREFs of sub_14048BE3C @ 0x14048BE3C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14048BE3C(_DWORD *a1, _OWORD *a2, unsigned int a3, _DWORD *a4, _BYTE *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  *a5 = 1;
  *a4 = 16;
  if ( a3 < 0x10 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    if ( a1 )
      *a1 = 3;
    if ( a2 )
      *a2 = xmmword_1406FC308;
  }
  return v5;
}
