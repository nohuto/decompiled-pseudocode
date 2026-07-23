/*
 * XREFs of BiTranslateBootEntryId @ 0x1406D5910
 * Callers:
 *     BiBindEfiBootManager @ 0x1406D373C (BiBindEfiBootManager.c)
 *     BiTranslateBootOrder @ 0x1406D5948 (BiTranslateBootOrder.c)
 * Callees:
 *     BiLookupObjectByBootEntry @ 0x1406D5640 (BiLookupObjectByBootEntry.c)
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
