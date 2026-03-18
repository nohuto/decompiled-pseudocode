/*
 * XREFs of ?IsOfType@CAffineTransform2DEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012BBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CAffineTransform2DEffect::IsOfType(__int64 a1, unsigned int a2)
{
  char v2; // cl
  int v3; // eax

  v2 = 1;
  if ( a2 > 0x17 || (v3 = 8389248, !_bittest(&v3, a2)) )
  {
    if ( a2 - 109 > 1 )
      return 0;
  }
  return v2;
}
