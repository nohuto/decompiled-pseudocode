/*
 * XREFs of AslStringXmlSanitize @ 0x1406C5748
 * Callers:
 *     AslpFileGetClrVersionAttribute @ 0x1406C75B4 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x1406C7AB8 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x1406C8044 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1406C89A0 (AslpFileMakeStringVersionAttributes.c)
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
      while ( v4 < asc_1402872B8[v5] || v4 > asc_1402872B8[v5 + 1] )
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
