/*
 * XREFs of ?IsOfType@CTransform3DGroupMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0074F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CTransform3DGroupMarshaler::IsOfType(__int64 a1, unsigned int a2)
{
  char v2; // cl
  int v3; // eax

  v2 = 1;
  if ( a2 > 0x1E || (v3 = 1090519168, !_bittest(&v3, a2)) )
  {
    if ( a2 - 100 > 1 )
      return 0;
  }
  return v2;
}
