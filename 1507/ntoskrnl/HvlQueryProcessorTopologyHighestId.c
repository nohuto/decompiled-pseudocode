/*
 * XREFs of HvlQueryProcessorTopologyHighestId @ 0x1401E5D24
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryProcessorTopologyHighestId(_DWORD *a1, _DWORD *a2)
{
  if ( (HvlpFlags & 4) == 0 )
    return 3221225506LL;
  if ( a1 )
    *a1 = dword_140383000;
  if ( a2 )
    *a2 = dword_140383004;
  return 0LL;
}
