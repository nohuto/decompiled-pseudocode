/*
 * XREFs of ValidatePssCore @ 0x1C0013274
 * Callers:
 *     ValidateAcpi2PStates @ 0x1C00131E0 (ValidateAcpi2PStates.c)
 *     ValidateXPssPStates @ 0x1C001BBDC (ValidateXPssPStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidatePssCore(_DWORD *a1)
{
  unsigned int v1; // edx
  int v2; // r8d
  _DWORD *i; // r9

  v1 = 0;
  if ( a1[2] )
  {
    if ( *a1 > 1u )
    {
      v2 = 0;
      for ( i = a1 + 14; *i < a1[12 * v2 + 2] && i[1] <= a1[12 * v2 + 3] && *i; i += 12 )
      {
        if ( (unsigned int)(++v2 + 1) >= *a1 )
          return v1;
      }
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
