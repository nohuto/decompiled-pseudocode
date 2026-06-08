/*
 * XREFs of ValidateAcpiIdleDomain @ 0x1C001B204
 * Callers:
 *     InitAcpiIdleDomain @ 0x1C0012FD0 (InitAcpiIdleDomain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateAcpiIdleDomain(unsigned int *a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // r8d
  int v5; // r10d
  unsigned int v6; // eax
  int v7; // edx

  v2 = *a1;
  v3 = 0;
  v5 = 0;
  if ( *a1 )
  {
    while ( a1[6 * v5 + 1] == 6 )
    {
      if ( a1[6 * v5 + 4] != 254 )
        return (unsigned int)-1073741637;
      v6 = a1[6 * v5 + 5];
      if ( v6 > 0x280 || !v6 || a1[6 * v5 + 6] >= *a2 )
        break;
      v7 = 0;
      if ( v2 )
      {
        while ( v5 == v7 || a1[6 * v5 + 6] != a1[6 * v7 + 6] )
        {
          if ( ++v7 >= v2 )
            goto LABEL_11;
        }
        return (unsigned int)-1073741637;
      }
LABEL_11:
      if ( ++v5 >= v2 )
        return v3;
    }
    return (unsigned int)-1073741823;
  }
  return v3;
}
