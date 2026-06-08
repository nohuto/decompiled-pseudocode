/*
 * XREFs of ValidateAcpiCStates @ 0x1C00135BC
 * Callers:
 *     InitAcpi2CStates @ 0x1C001354C (InitAcpi2CStates.c)
 * Callees:
 *     IsValidAcpiGenericAddress @ 0x1C0013424 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall ValidateAcpiCStates(_DWORD *a1)
{
  unsigned int v1; // r9d
  unsigned int v2; // r11d
  int v3; // r8d
  char *v4; // rdx
  int v5; // ebx
  _BYTE *i; // r10

  v1 = 0;
  if ( !a1 )
    return (unsigned int)-1073741823;
  v2 = *a1;
  if ( *a1 > 1u )
  {
    v3 = 0;
    v4 = (char *)a1 + 38;
    while ( (unsigned __int8)*(v4 - 2) >= LOBYTE(a1[5 * v3 + 4])
         && *(_WORD *)v4 >= HIWORD(a1[5 * v3 + 4])
         && *(_DWORD *)(v4 + 2) <= a1[5 * v3 + 5] )
    {
      ++v3;
      v4 += 20;
      if ( v3 + 1 >= v2 )
        goto LABEL_8;
    }
    return (unsigned int)-1073741823;
  }
LABEL_8:
  v5 = 0;
  if ( v2 )
  {
    for ( i = a1 + 4;
          *(i - 12) == 127
       || *i
       && *i != 1
       && (*i == 2
        || IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C000E414)
        && IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C000E3E4))
       && IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C000E3FC);
          i += 20 )
    {
      if ( ++v5 >= v2 )
        return v1;
    }
    return (unsigned int)-1073741823;
  }
  return v1;
}
