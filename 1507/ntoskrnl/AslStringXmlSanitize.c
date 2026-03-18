/*
 * XREFs of AslStringXmlSanitize @ 0x140705378
 * Callers:
 *     AslpFileGetClrVersionAttribute @ 0x140706564 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x140706A4C (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x140706BE4 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1407079C0 (AslpFileMakeStringVersionAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslStringXmlSanitize(_WORD *a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 i; // rax
  unsigned __int16 v4; // r9
  unsigned __int64 v5; // r8

  if ( !a1 )
    return 3221225485LL;
  if ( *a1 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a1[v2] );
    for ( i = 0LL; i < v2; ++i )
    {
      v4 = a1[i];
      v5 = 0LL;
      while ( v4 < *(_WORD *)((char *)&unk_1402AD7C8 + v5) || v4 > *(_WORD *)((char *)&unk_1402AD7C8 + v5 + 2) )
      {
        v5 += 4LL;
        if ( v5 >= 0x14 )
        {
          a1[i] = 64;
          break;
        }
      }
    }
  }
  return 0LL;
}
