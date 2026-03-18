/*
 * XREFs of InvokeGlobalGSScale @ 0x1C00C57D8
 * Callers:
 *     scl_CalcComponentOffset @ 0x1C00C56D4 (scl_CalcComponentOffset.c)
 *     fs__Contour @ 0x1C00C7348 (fs__Contour.c)
 *     itrp_Execute @ 0x1C00CAFA0 (itrp_Execute.c)
 *     itrp_MDRP @ 0x1C00CE020 (itrp_MDRP.c)
 *     itrp_MD @ 0x1C00D0B60 (itrp_MD.c)
 *     itrp_WCVTFOD @ 0x1C010E310 (itrp_WCVTFOD.c)
 *     itrp_LSW @ 0x1C02E0E20 (itrp_LSW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InvokeGlobalGSScale(int a1, int *a2, __int64 a3)
{
  int v3; // ecx
  int v5; // ecx
  int v6; // r9d

  v3 = a1 - 1;
  if ( !v3 )
    return (unsigned int)(((a2[1] >> 1) + (int)a3 * a2[2]) >> a2[3]);
  v5 = v3 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      return FixMul((unsigned int)a3, (unsigned int)*a2, a3);
    }
    else
    {
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
      return 0LL;
    }
  }
  else
  {
    v6 = a2[1];
    if ( (int)a3 < 0 )
      return (unsigned int)-(((v6 >> 1) - (int)a3 * a2[2]) / v6);
    else
      return (unsigned int)(((v6 >> 1) + (int)a3 * a2[2]) / v6);
  }
}
