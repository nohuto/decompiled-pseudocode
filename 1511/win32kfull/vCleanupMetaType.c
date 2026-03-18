/*
 * XREFs of vCleanupMetaType @ 0x1C0112DD0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteServerMetaFile @ 0x1C02B1E24 (GreDeleteServerMetaFile.c)
 */

__int64 __fastcall vCleanupMetaType(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 i; // rcx
  __int64 result; // rax
  __int64 v5; // rbx

  v2 = a1;
  for ( i = 0LL; ; i = v5 )
  {
    result = HmgNextOwned(i, v2);
    v5 = result;
    if ( !result )
      break;
    if ( (BYTE2(result) & 0x1F) == 0x15 )
      GreDeleteServerMetaFile(result);
    v2 = a1;
  }
  return result;
}
