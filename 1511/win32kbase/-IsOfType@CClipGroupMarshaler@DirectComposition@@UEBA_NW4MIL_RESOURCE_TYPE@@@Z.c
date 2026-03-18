/*
 * XREFs of ?IsOfType@CClipGroupMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C00D70C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CClipGroupMarshaler::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( (unsigned int)(a2 - 65) > 1 )
    return (unsigned int)(a2 - 100) <= 1;
  return v2;
}
