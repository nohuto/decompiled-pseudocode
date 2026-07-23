/*
 * XREFs of PopPepGetReadyActivityType @ 0x1400C09A4
 * Callers:
 *     PopPepWork @ 0x1400BFC34 (PopPepWork.c)
 *     PopPepComponentGetWork @ 0x1400C02EC (PopPepComponentGetWork.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPepGetReadyActivityType(__int64 a1, unsigned int a2, int a3)
{
  int **i; // rcx
  int v5; // r8d

  if ( (int)a2 > a3 )
  {
    return 6;
  }
  else
  {
    for ( i = (int **)(a1 + 8LL * (int)a2); ; ++i )
    {
      v5 = **i;
      if ( (v5 & 2) != 0 || (v5 & 8) != 0 )
        break;
      if ( (int)++a2 > a3 )
        return 6;
    }
  }
  return a2;
}
