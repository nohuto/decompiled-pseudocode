/*
 * XREFs of RtlOwnerAcesPresent @ 0x1400D1D2C
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlOwnerAcesPresent(PACL pAcl)
{
  return RtlpOwnerAcesPresent(0LL, pAcl);
}
