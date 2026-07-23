/*
 * XREFs of RtlOwnerAcesPresent @ 0x14010D754
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlOwnerAcesPresent(PACL pAcl)
{
  return RtlpOwnerAcesPresent(0, (__int64)pAcl);
}
