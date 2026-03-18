/*
 * XREFs of ?IsOfType@CSkewTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C00D5370
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CBaseTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C002B004 (-IsOfType@CBaseTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall DirectComposition::CSkewTransformMarshaler::IsOfType(__int64 a1, unsigned __int64 a2)
{
  bool v2; // al
  char v3; // cl

  if ( (_DWORD)a2 == 58 )
    return 1;
  v2 = DirectComposition::CBaseTransformMarshaler::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
