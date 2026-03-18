/*
 * XREFs of DeleteMaybeSpecialRgn @ 0x1C0077A20
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteObject @ 0x1C003A290 (GreDeleteObject.c)
 */

__int64 __fastcall DeleteMaybeSpecialRgn(struct HOBJ__ *a1)
{
  __int64 result; // rax

  if ( (unsigned __int64)a1 > 2 )
    return GreDeleteObject(a1);
  return result;
}
