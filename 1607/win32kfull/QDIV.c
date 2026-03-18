/*
 * XREFs of QDIV @ 0x1C0005528
 * Callers:
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C0003FA0 (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall QDIV(unsigned __int64 *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  int v4; // r9d
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rtt

  v3 = *a2;
  if ( (*a2 & 0x8000000000000000uLL) != 0LL )
  {
    v4 = 1;
    v3 = -(__int64)v3;
  }
  else
  {
    v4 = 0;
  }
  v7 = v3;
  result = v3 / a3;
  v6 = v7 % a3;
  *a1 = result;
  if ( v4 )
  {
    result = -(__int64)result;
    *a1 = result;
    if ( v6 )
    {
      *a1 = --result;
      a1[1] = a3 - v6;
    }
    else
    {
      a1[1] = 0LL;
    }
  }
  else
  {
    a1[1] = v6;
  }
  return result;
}
