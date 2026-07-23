/*
 * XREFs of PspValidateMitigationOptions @ 0x1404CE53C
 * Callers:
 *     PspBuildCreateProcessContext @ 0x1404588B8 (PspBuildCreateProcessContext.c)
 *     PspReadIFEOMitigationOptions @ 0x140471080 (PspReadIFEOMitigationOptions.c)
 *     PspInitPhase0 @ 0x14079E090 (PspInitPhase0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspValidateMitigationOptions(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (a1 & 0x8888888888888888uLL) != 0
    || (a1 & a2) != 0
    || (a1 & 0x3000) == 0x3000
    || (a1 & 0x30000) == 0x30000
    || (a1 & 0x300000) == 0x300000
    || (a1 & 0x3000000) == 0x3000000
    || (a1 & 0x30000000) == 0x30000000
    || (a1 & 0x300000000LL) == 0x300000000LL
    || (a1 & 0x30000000000LL) == 0x30000000000LL
    || (a1 & 0x300000000000LL) == 0x300000000000LL
    || (a1 & 0x30000000000000LL) == 0x30000000000000LL )
  {
    return 3221225485LL;
  }
  result = 3221225485LL;
  if ( (a1 & 0x300000000000000LL) != 0x300000000000000LL && (a1 & 0x3000000000000000LL) != 0x3000000000000000LL )
    return 0LL;
  return result;
}
