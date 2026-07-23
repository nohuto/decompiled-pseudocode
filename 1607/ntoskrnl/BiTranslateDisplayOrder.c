/*
 * XREFs of BiTranslateDisplayOrder @ 0x1406D59C4
 * Callers:
 *     BiExportEfiBootManager @ 0x1406D4BB8 (BiExportEfiBootManager.c)
 * Callees:
 *     BiTranslateObjectIdentifier @ 0x1406D5B04 (BiTranslateObjectIdentifier.c)
 */

__int64 __fastcall BiTranslateDisplayOrder(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 result; // rax

  v4 = 0LL;
  v5 = 0;
  if ( *a4 )
  {
    v9 = (unsigned int)*a4;
    do
    {
      if ( (int)BiTranslateObjectIdentifier(a1, a2, a3 + 4 * v4) >= 0 )
        v4 = (unsigned int)(v4 + 1);
      else
        v5 = -2147483635;
      a2 = v10 + 16;
      --v9;
    }
    while ( v9 );
  }
  result = v5;
  *a4 = v4;
  return result;
}
