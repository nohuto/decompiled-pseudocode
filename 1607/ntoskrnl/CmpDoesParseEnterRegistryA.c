/*
 * XREFs of CmpDoesParseEnterRegistryA @ 0x14043A130
 * Callers:
 *     CmpParseKey @ 0x14043ADD0 (CmpParseKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpDoesParseEnterRegistryA(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(a1 + 8) == *((_QWORD *)CmpRegistryRootObject + 1)
      && *(_WORD *)a2
      && ((**(_WORD **)(a2 + 8) - 65) & 0xFFDF) == 0;
}
