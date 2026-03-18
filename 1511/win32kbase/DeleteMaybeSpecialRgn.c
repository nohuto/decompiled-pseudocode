/*
 * XREFs of DeleteMaybeSpecialRgn @ 0x1C0038FF0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteObject @ 0x1C00377D0 (GreDeleteObject.c)
 */

__int64 __fastcall DeleteMaybeSpecialRgn(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 > 2 )
    return GreDeleteObject(a1, a2);
  return result;
}
