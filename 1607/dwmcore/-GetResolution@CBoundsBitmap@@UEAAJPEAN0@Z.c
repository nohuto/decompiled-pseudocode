/*
 * XREFs of ?GetResolution@CBoundsBitmap@@UEAAJPEAN0@Z @ 0x1800C08C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBoundsBitmap::GetResolution(CBoundsBitmap *this, double *a2, double *a3)
{
  *a2 = *((double *)this + 2);
  *a3 = *((double *)this + 3);
  return 0LL;
}
