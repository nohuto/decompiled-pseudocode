/*
 * XREFs of InvokeGlobalGSScale @ 0x1C00ADCB0
 * Callers:
 *     scl_CalcComponentOffset @ 0x1C00ADBAC (scl_CalcComponentOffset.c)
 *     fs__Contour @ 0x1C00AE090 (fs__Contour.c)
 *     itrp_Execute @ 0x1C00B0DE0 (itrp_Execute.c)
 *     itrp_MD @ 0x1C00B32E0 (itrp_MD.c)
 *     itrp_MDRP @ 0x1C00B5EF0 (itrp_MDRP.c)
 *     itrp_WCVTFOD @ 0x1C00EE530 (itrp_WCVTFOD.c)
 *     itrp_LSW @ 0x1C0143810 (itrp_LSW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InvokeGlobalGSScale(int a1, int *a2, int a3)
{
  int v3; // ecx
  int v5; // ecx
  int v6; // r9d

  v3 = a1 - 1;
  if ( !v3 )
    return (unsigned int)(((a2[1] >> 1) + a3 * a2[2]) >> a2[3]);
  v5 = v3 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      return FixMul((unsigned int)a3, (unsigned int)*a2);
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
    if ( a3 < 0 )
      return (unsigned int)-(((v6 >> 1) - a3 * a2[2]) / v6);
    else
      return (unsigned int)(((v6 >> 1) + a3 * a2[2]) / v6);
  }
}
