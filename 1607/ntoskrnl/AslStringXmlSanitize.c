/*
 * XREFs of AslStringXmlSanitize @ 0x1406C5610
 * Callers:
 *     AslpFileGetClrVersionAttribute @ 0x1406C747C (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x1406C7980 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x1406C7F0C (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1406C8868 (AslpFileMakeStringVersionAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslStringXmlSanitize(_WORD *a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 i; // rax
  wchar_t v4; // r9
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
      while ( v4 < asc_1402871C8[v5] || v4 > asc_1402871C8[v5 + 1] )
      {
        v5 += 2LL;
        if ( v5 >= 10 )
        {
          a1[i] = 64;
          break;
        }
      }
    }
  }
  return 0LL;
}
