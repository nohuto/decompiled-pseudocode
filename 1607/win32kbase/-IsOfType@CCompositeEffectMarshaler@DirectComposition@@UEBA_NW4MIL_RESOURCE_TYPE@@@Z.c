/*
 * XREFs of ?IsOfType@CCompositeEffectMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0003920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CCompositeEffectMarshaler::IsOfType(__int64 a1, unsigned int a2)
{
  int v2; // eax
  _BOOL8 result; // rax

  result = 0;
  if ( a2 <= 0x15 )
  {
    v2 = 2097792;
    if ( _bittest(&v2, a2) )
      return 1;
  }
  return result;
}
