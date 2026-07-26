/*
 * XREFs of ndisGetWoLPatternSize @ 0x1C00974EC
 * Callers:
 *     ndisPMAddWOLPattern @ 0x1C00048A8 (ndisPMAddWOLPattern.c)
 *     ndisCreateWoLPatternEntry @ 0x1C0097204 (ndisCreateWoLPatternEntry.c)
 *     ndisOidPrePMAddWOLPattern @ 0x1C00972A0 (ndisOidPrePMAddWOLPattern.c)
 *     ndisQueryWolPatternList @ 0x1C00C4428 (ndisQueryWolPatternList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetWoLPatternSize(_DWORD *a1)
{
  __int64 result; // rax
  unsigned int v2; // r8d

  result = 196LL;
  if ( a1[3] == 1 )
  {
    v2 = a1[42] + a1[43];
    if ( a1[40] + a1[41] > v2 )
      v2 = a1[40] + a1[41];
    if ( v2 <= 0xC4 )
      return 196;
    return v2;
  }
  return result;
}
