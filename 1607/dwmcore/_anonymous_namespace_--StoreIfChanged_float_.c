/*
 * XREFs of _anonymous_namespace_::StoreIfChanged_float_ @ 0x1801458EC
 * Callers:
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@@Z @ 0x1801461C0 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall anonymous_namespace_::StoreIfChanged_float_(float *a1, float *a2)
{
  char result; // al

  result = 0;
  if ( *a1 != *a2 )
  {
    *a2 = *a1;
    return 1;
  }
  return result;
}
