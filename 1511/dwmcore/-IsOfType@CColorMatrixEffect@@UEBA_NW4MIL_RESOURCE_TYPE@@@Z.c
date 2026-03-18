/*
 * XREFs of ?IsOfType@CColorMatrixEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180113810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CColorMatrixEffect::IsOfType(__int64 a1, unsigned int a2)
{
  char v2; // cl
  int v3; // eax

  v2 = 1;
  if ( a2 > 0xC || (v3 = 4736, !_bittest(&v3, a2)) )
  {
    if ( a2 - 100 > 1 )
      return 0;
  }
  return v2;
}
