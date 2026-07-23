/*
 * XREFs of HvlpCompareActiveLpcbs @ 0x1401BB350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall HvlpCompareActiveLpcbs(_BYTE *a1, _BYTE *a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // r8d

  if ( a1[104] )
  {
    if ( !a2[104] )
      return -1;
  }
  else if ( a2[104] )
  {
    return 1;
  }
  v3 = *((_DWORD *)a1 + 1);
  v4 = *((_DWORD *)a2 + 1);
  if ( v3 < v4 )
    return -1;
  return v3 > v4;
}
