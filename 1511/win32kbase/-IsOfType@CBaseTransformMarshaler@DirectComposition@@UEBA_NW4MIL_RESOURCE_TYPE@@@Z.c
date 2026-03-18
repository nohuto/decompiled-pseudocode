/*
 * XREFs of ?IsOfType@CBaseTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0017D90
 * Callers:
 *     ?IsOfType@CManipulationTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C00144C0 (-IsOfType@CManipulationTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CMatrixTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0015CA0 (-IsOfType@CMatrixTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTransformGroupMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0016290 (-IsOfType@CTransformGroupMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTranslateTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0016510 (-IsOfType@CTranslateTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CScaleTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0073640 (-IsOfType@CScaleTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRotateTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0077350 (-IsOfType@CRotateTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSkewTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C00D7280 (-IsOfType@CSkewTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CBaseTransformMarshaler::IsOfType(__int64 a1, unsigned __int64 a2)
{
  char v2; // cl
  __int64 v3; // r8

  v2 = 1;
  if ( (unsigned int)a2 > 0x39 || (v3 = 0x200000001000080LL, !_bittest64(&v3, a2)) )
  {
    if ( (unsigned int)(a2 - 100) > 1 )
      return 0;
  }
  return v2;
}
