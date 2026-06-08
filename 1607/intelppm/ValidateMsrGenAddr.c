/*
 * XREFs of ValidateMsrGenAddr @ 0x1C001CDF0
 * Callers:
 *     ValidateXPssPStates @ 0x1C001CFA0 (ValidateXPssPStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateMsrGenAddr(_BYTE *a1)
{
  if ( *a1 == 127 && a1[1] == 64 && !a1[2] )
    return a1[3] != 64 ? 0xC000000D : 0;
  else
    return 3221225485LL;
}
