/*
 * XREFs of ?IsOfType@CTurbulenceEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801563A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CTurbulenceEffect::IsOfType(__int64 a1, unsigned int a2)
{
  char v2; // cl
  int v3; // eax

  v2 = 1;
  if ( a2 > 0x10 || (v3 = 66176, !_bittest(&v3, a2)) )
  {
    if ( a2 - 109 > 1 )
      return 0;
  }
  return v2;
}
