/*
 * XREFs of ?IsHRInList@@YA_NJQEBJI@Z @ 0x1400019E0
 * Callers:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001960 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsHRInList(int a1, const int *const a2, unsigned int a3)
{
  unsigned int v3; // eax

  v3 = 0;
  if ( !a3 )
    return 0;
  while ( a1 != *a2 )
  {
    ++v3;
    ++a2;
    if ( v3 >= a3 )
      return 0;
  }
  return 1;
}
