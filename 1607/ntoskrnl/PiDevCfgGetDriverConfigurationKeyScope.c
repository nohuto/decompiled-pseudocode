/*
 * XREFs of PiDevCfgGetDriverConfigurationKeyScope @ 0x1401CEBA8
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14063C998 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14063CCDC (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     _wcsicmp @ 0x14014D79C (_wcsicmp.c)
 */

__int64 __fastcall PiDevCfgGetDriverConfigurationKeyScope(wchar_t *Str2)
{
  unsigned int v1; // ebx
  unsigned int v2; // edi
  const wchar_t **i; // rsi

  v1 = 0;
  v2 = 0;
  for ( i = (const wchar_t **)&off_1406EA8F0; wcsicmp(*i, Str2); i += 2 )
  {
    if ( ++v2 >= 6 )
      return v1;
  }
  return *((unsigned int *)&off_1406EA8F0 + 4 * v2 + 2);
}
