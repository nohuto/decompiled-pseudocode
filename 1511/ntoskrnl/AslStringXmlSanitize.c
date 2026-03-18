/*
 * XREFs of AslStringXmlSanitize @ 0x140680544
 * Callers:
 *     AslpFileGetClrVersionAttribute @ 0x14068181C (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x140681D04 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x140682284 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileMakeStringVersionAttributes @ 0x140682D1C (AslpFileMakeStringVersionAttributes.c)
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
      while ( v4 < asc_14025D8B8[v5] || v4 > asc_14025D8B8[v5 + 1] )
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
