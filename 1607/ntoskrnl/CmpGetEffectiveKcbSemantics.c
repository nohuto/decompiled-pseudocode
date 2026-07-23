/*
 * XREFs of CmpGetEffectiveKcbSemantics @ 0x14043F0C0
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A1E0 (CmpSetKeySecurity.c)
 *     CmpGetSymbolicLinkTarget @ 0x14000B030 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401B4118 (CmQueryMultipleValueForLayeredKey.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14043F010 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14060C0B4 (CmpStartKeyNodeStackFromKcbStack.c)
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
