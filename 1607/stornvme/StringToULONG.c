/*
 * XREFs of StringToULONG @ 0x1C000FBAC
 * Callers:
 *     CompareId @ 0x1C000EE0C (CompareId.c)
 * Callees:
 *     <none>
 */

char __fastcall StringToULONG(char *a1, unsigned int *a2)
{
  unsigned int v2; // r9d
  char *v3; // r11
  char v4; // r8
  char v5; // r10
  int v6; // eax

  v2 = 0;
  v3 = a1;
  v4 = 1;
  if ( !a1 || !a2 )
    return 0;
  v5 = *a1;
  if ( *a1 )
  {
    do
    {
      if ( (unsigned __int8)(v5 - 48) > 9u )
        break;
      ++v3;
      v6 = v5;
      v5 = *v3;
      v2 = v6 + 2 * (5 * v2 - 24);
      if ( !*v3 )
        goto LABEL_8;
    }
    while ( v2 <= 0x19999999 );
    return 0;
  }
  else
  {
LABEL_8:
    *a2 = v2;
  }
  return v4;
}
