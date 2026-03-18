/*
 * XREFs of RtlULongMult @ 0x1401B4D5C
 * Callers:
 *     CmpCheckKey @ 0x14043D610 (CmpCheckKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongMult(ULONG ulMultiplicand, ULONG ulMultiplier, ULONG *pulResult)
{
  unsigned __int64 v3; // r9

  v3 = ulMultiplier * (unsigned __int64)ulMultiplicand;
  if ( v3 > 0xFFFFFFFF )
  {
    *pulResult = -1;
    return -1073741675;
  }
  else
  {
    *pulResult = v3;
    return 0;
  }
}
