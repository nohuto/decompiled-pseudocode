/*
 * XREFs of RtlOwnerAcesPresent @ 0x14010D754
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlOwnerAcesPresent(__int64 a1)
{
  return RtlpOwnerAcesPresent(0, a1);
}
