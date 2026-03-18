/*
 * XREFs of CmpGetEffectiveKcbSemantics @ 0x1404401F0
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A660 (CmpSetKeySecurity.c)
 *     CmpGetSymbolicLinkTarget @ 0x14000B4B0 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401B4234 (CmQueryMultipleValueForLayeredKey.c)
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140440140 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14060C000 (CmpStartKeyNodeStackFromKcbStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetEffectiveKcbSemantics(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 && *(__int16 *)(a1 + 58) == *(unsigned __int16 *)(a2 + 4) )
  {
    LOBYTE(result) = *(_BYTE *)(a1 + 57);
    if ( (_BYTE)result )
      return (unsigned __int8)result;
    else
      return 2LL;
  }
  else if ( *(_WORD *)(a1 + 58) )
  {
    return *(unsigned __int8 *)(a1 + 57);
  }
  else
  {
    return 0LL;
  }
}
