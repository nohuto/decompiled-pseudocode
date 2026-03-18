/*
 * XREFs of itrp_SetSameTransformFlag @ 0x1C00BA5B8
 * Callers:
 *     fsg_MergeGlyphData @ 0x1C00B991C (fsg_MergeGlyphData.c)
 *     fsg_CompositeInnerGridFit @ 0x1C00BA194 (fsg_CompositeInnerGridFit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_SetSameTransformFlag(_BYTE *a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  a1[396] = a2;
  if ( a1[341] || !a2 )
    result = 1LL;
  a1[397] = result;
  return result;
}
