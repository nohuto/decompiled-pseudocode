/*
 * XREFs of ?IsOfType@CMatrixTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0015CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CBaseTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0017D90 (-IsOfType@CBaseTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall DirectComposition::CMatrixTransformMarshaler::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 63 )
    return 1;
  v2 = DirectComposition::CBaseTransformMarshaler::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
