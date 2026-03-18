/*
 * XREFs of ?IsOfType@CBaseClipMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0015B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CBaseClipMarshaler::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( a2 != 65 )
    return (unsigned int)(a2 - 100) <= 1;
  return v2;
}
