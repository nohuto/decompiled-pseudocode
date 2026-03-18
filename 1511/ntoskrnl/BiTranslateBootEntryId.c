/*
 * XREFs of BiTranslateBootEntryId @ 0x14069100C
 * Callers:
 *     BiBindEfiBootManager @ 0x14068EE8C (BiBindEfiBootManager.c)
 *     BiTranslateBootOrder @ 0x140691044 (BiTranslateBootOrder.c)
 * Callees:
 *     BiLookupObjectByBootEntry @ 0x140690D40 (BiLookupObjectByBootEntry.c)
 */

__int64 __fastcall BiTranslateBootEntryId(__int64 **a1, int a2)
{
  __int64 result; // rax
  _OWORD *v3; // r10
  __int64 v4; // [rsp+48h] [rbp+20h] BYREF

  result = BiLookupObjectByBootEntry(a1, a2, &v4);
  if ( (int)result >= 0 )
  {
    if ( (*(_DWORD *)(v4 + 48) & 4) != 0 )
      *v3 = *(_OWORD *)(v4 + 16);
    else
      return 3221226021LL;
  }
  return result;
}
